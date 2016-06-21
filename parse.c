#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>
#include "parse.h"
#include <sys/stat.h>
#include "queue.h"
#include <pthread.h>
#include "common.h"

#define INFD 0
#define OUTFD 1

/* 標準入力から最大size-1個の文字を改行またはEOFまで読み込み、sに設定する */
char* get_line(char *s, int size) {

	printf(PROMPT);

	while(fgets(s, size, stdin) == NULL) {
		if(errno == EINTR)
			continue;
		return NULL;
	}

	return s;
}

static char* initialize_program_name(process *p) {

	if(!(p->program_name = (char*)malloc(sizeof(char)*NAMELEN)))
		return NULL;

	memset(p->program_name, 0, NAMELEN);

	return p->program_name;
}

static char** initialize_argument_list(process *p) {

	if(!(p->argument_list = (char**)malloc(sizeof(char*)*ARGLSTLEN)))
		return NULL;

	int i;
	for(i=0; i<ARGLSTLEN; i++)
		p->argument_list[i] = NULL;

	return p->argument_list;
}

static char* initialize_argument_list_element(process *p, int n) {

	if(!(p->argument_list[n] = (char*)malloc(sizeof(char)*NAMELEN)))
		return NULL;

	memset(p->argument_list[n], 0, NAMELEN);

	return p->argument_list[n];
}

static char* initialize_input_redirection(process *p) {

	if(!(p->input_redirection = (char*)malloc(sizeof(char)*NAMELEN)))
		return NULL;

	memset(p->input_redirection, 0, NAMELEN);

	return p->input_redirection;
}

static char* initialize_output_redirection(process *p) {

	if(!(p->output_redirection = (char*)malloc(sizeof(char)*NAMELEN)))
		return NULL;

	memset(p->output_redirection, 0, NAMELEN);

	return p->output_redirection;
}

static process* initialize_process() {

	process *p;

	if((p = (process*)malloc(sizeof(process))) == NULL)
		return NULL;

	initialize_program_name(p);
	initialize_argument_list(p);
	initialize_argument_list_element(p, 0);
	p->input_redirection = NULL;
	p->output_option = TRUNC;
	p->output_redirection = NULL;
	p->next = NULL;

	return p;
}

static job* initialize_job() {

	job *j;

	if((j = (job*)malloc(sizeof(job))) == NULL)
		return NULL;

	j->mode = FOREGROUND;
	j->process_list = initialize_process();
	j->next = NULL;
	j->status = JOB_NOTRUN;

	return j;
}

static void free_process(process *p) {

	if(!p) return;

	free_process(p->next);

	if(p->program_name) free(p->program_name);
	if(p->input_redirection) free(p->input_redirection);
	if(p->output_redirection) free(p->output_redirection);

	if(p->argument_list) {
		int i;
		for(i=0; p->argument_list[i] != NULL; i++)
			free(p->argument_list[i]);
		free(p->argument_list);
	}

	free(p);
}

void free_job(job *j) {

	if(!j) return;

	free_job(j->next);

	free_process(j->process_list);

	free(j);
}

/* parser */
/* 受け付けた文字列を解析して結果をjob構造体に入れる関数 */
job* parse_line(char *buf) {

	job *curr_job = NULL;
	process *curr_prc = NULL;
	parse_state state = ARGUMENT;
	int index=0, arg_index=0;

	/* 改行文字まで解析する */
	while(*buf != '\n') {
		/* 空白およびタブを読んだときの処理 */
		if(*buf == ' ' || *buf == '\t') {
			buf++;
			if(index) {
				index = 0;
				state = ARGUMENT;
				++arg_index;
			}
		}
		/* 以下の3条件は、状態を遷移させる項目である */
		else if(*buf == '<') {
			state = IN_REDIRCT;
			buf++;
			index = 0;
		} else if(*buf == '>') {
			buf++;
			index = 0;
			if(state == OUT_REDIRCT_TRUNC) {
				state = OUT_REDIRCT_APPEND;
				if(curr_prc)
					curr_prc->output_option = APPEND;
			}
			else {
				state = OUT_REDIRCT_TRUNC;
			}
		} else if(*buf == '|') {
			state = ARGUMENT;
			buf++;
			index = 0;
			arg_index = 0;
			if(curr_job) {
				strcpy(curr_prc->program_name,
						curr_prc->argument_list[0]);
				curr_prc->next = initialize_process();
				curr_prc = curr_prc->next;
			}
		}
		/* &を読めば、modeをBACKGROUNDに設定し、解析を終了する */
		else if(*buf == '&') {
			buf++;
			if(curr_job) {
				curr_job->mode = BACKGROUND;
				break;
			}
		}
		/* 以下の3条件は、各状態でprocess構造体の各メンバに文字を格納する */
		/* 状態ARGUMENTは、リダイレクション対象ファイル名以外の文字(プログラム名、オプション)を
		 * 読む状態 */
		/* 状態IN_REDIRCTは入力リダイレクション対象ファイル名を読む状態 */
		/* 状態OUT_REDIRCT_*は出力リダイレクション対象ファイル名を読む状態 */
		else if(state == ARGUMENT) {
			if(!curr_job) {
				curr_job = initialize_job();
				curr_prc = curr_job->process_list;
			}

			if(!curr_prc->argument_list[arg_index])
				initialize_argument_list_element(curr_prc, arg_index);

			curr_prc->argument_list[arg_index][index++] = *buf++;
		} else if(state == IN_REDIRCT) {
			if(!curr_prc->input_redirection)
				initialize_input_redirection(curr_prc);

			curr_prc->input_redirection[index++] = *buf++;
		} else if(state == OUT_REDIRCT_TRUNC || state == OUT_REDIRCT_APPEND) {
			if(!curr_prc->output_redirection)
				initialize_output_redirection(curr_prc);

			curr_prc->output_redirection[index++] = *buf++;
		}
	}

	/* 最後に、引数の0番要素をprogram_nameにコピーする */
	if(curr_prc)
		strcpy(curr_prc->program_name, curr_prc->argument_list[0]);

	return curr_job;
}

char *get_full_path(char *full_path, char *program_name){
	if (program_name[0] == '/')
		return strcpy(full_path, program_name);
	int start = 0;
	char *path = getenv("PATH");
	int i;
	for(i = 0; path[i] != '\0'; i++)
		if (path[i] == ':'){
			strncpy(full_path, path + start, i - start);
			int len = i - start;
			if (full_path[len - 1] != '/'){
				full_path[len] = '/';
				len++;
			}
			strcpy(full_path + len, program_name);
			struct stat sb;
			if (stat(full_path, &sb) == 0 && (sb.st_mode & S_IXUSR || sb.st_mode & S_IXGRP || sb.st_mode & S_IXOTH))
				return full_path;
			start = i + 1;
		}
	return NULL;
}


void sigchld_handler(int sig){
	int status;
	waitpid(WAIT_ANY, &status, WNOHANG | WUNTRACED);
}
void setup_zombier_cleaner(){
	struct sigaction handler;
	handler.sa_handler = sigchld_handler;
	handler.sa_flags = 0;
	sigset_t empty;
	sigemptyset(&empty);
	handler.sa_mask = empty;
	sigaction(SIGCHLD, &handler, NULL);
}

void execute_process(process *curr_process, int *pipefd, int *current, int *last, char *envp[]){
	//unblock signals
	sigset_t mask;
	sigemptyset(&mask);
	sigaddset(&mask, SIGINT);
	sigaddset(&mask, SIGTSTP);
	CHECK(sigprocmask(SIG_UNBLOCK, &mask, NULL));

	int fd;
	//setup output
	if (curr_process->output_redirection != NULL){
		mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH;
		if (curr_process->output_option == APPEND){
			fd = open(curr_process->output_redirection, O_WRONLY | O_APPEND | O_CREAT, mode);
		}else{
			fd = open(curr_process->output_redirection, O_WRONLY | O_CREAT | O_TRUNC, mode);
		}
		if (fd == -1){
			perror("open");
			exit(EXIT_FAILURE);
		}
		CHECK(dup2(fd, STDOUT_FILENO));
		CHECK(close(fd));
	}else
		if (curr_process->next != NULL)
			CHECK(dup2(pipefd[*current + OUTFD], STDOUT_FILENO));
	//setup input
	if (curr_process->input_redirection != NULL){
		int fd = open(curr_process->input_redirection, O_RDONLY);
		if (fd == -1){
			perror("open");
			exit(EXIT_FAILURE);
		}else{
			CHECK(dup2(fd, STDIN_FILENO));
			CHECK(close(fd));
		}
	}
	else if (*last != -1)
		CHECK(dup2(pipefd[*last + INFD], STDIN_FILENO));

	//close last pipes only if this is not first process
	if (*last != -1){
		CHECK(close(pipefd[*last + INFD]));
		CHECK(close(pipefd[*last + OUTFD]));
	}
	//always close current pipes
	CHECK(close(pipefd[*current + INFD]));
	CHECK(close(pipefd[*current + OUTFD]));
	char full_path[LINELEN];
	if (!get_full_path(full_path, curr_process->program_name))
		fprintf(stderr, "%s\n", FILE_NOT_FOUND_MSG);
	else
		CHECK(execve(full_path, curr_process->argument_list, envp));
	exit(EXIT_FAILURE);
}

int prepare_job(job *curr_job){
	if (curr_job->pgrp == -1){
		//first job after stopped or when start from begin
		curr_job->pgrp = curr_job->pid;
		CHECK(setpgid(curr_job->pid, curr_job->pgrp));
		if (curr_job->mode == FOREGROUND){
			//bring to front
			CHECK(tcsetpgrp(STDIN_FILENO, curr_job->pgrp));
			//change shell's pgrp to current foreground so that it can rescue its self later
			setpgid(0, curr_job->pgrp);
		}
	}else
		CHECK(setpgid(curr_job->pid, curr_job->pgrp));
	//wait
	if (curr_job->last_fd != -1){
		//not first process
		CHECK(close(curr_job->pipefd[curr_job->last_fd + INFD]));
		CHECK(close(curr_job->pipefd[curr_job->last_fd + OUTFD]));
	}
	if (curr_job->curr_process->next == NULL){
		//last process
		CHECK(close(curr_job->pipefd[curr_job->current_fd+OUTFD]));
		CHECK(close(curr_job->pipefd[curr_job->current_fd+INFD]));
	}
	if (curr_job->last_fd == -1)
		curr_job->last_fd = 2;
	int status;
	CHECK(waitpid(curr_job->pid, &status, WUNTRACED));
	if (WIFEXITED(status)){
		//printf("exited: %d\n", WEXITSTATUS(status));
		//normal exit
		if (WEXITSTATUS(status)){
			//notify if not the last
			if (curr_job->curr_process->next != NULL){
				fprintf(stderr, "Interrupted due to error\n");
				return 1;
			}
		}
	}else if (WIFSIGNALED(status)){
		//printf("signaled: %d\n", WTERMSIG(status));
		//exit by signal
		return 1;
	}else{
		//printf("stopped: %d\n", WSTOPSIG(status));
		//WIFSTOPPED
		//by ctrl-z
		//restore foreground
		curr_job->status = JOB_STOPPED;
		//dont close pipe
		return 1;
	}
	int tmp = curr_job->current_fd;
	curr_job->current_fd = curr_job->last_fd;
	curr_job->last_fd = tmp;
	return 0;
}

//in a shell's thread
void execute_job_(job *curr_job, char *envp[]){
	int shell_pgrp = getpgrp();
	if (curr_job->status == JOB_NOTRUN){
		//first run setup
		curr_job->status = JOB_RUNNING;
		curr_job->current_fd = 0;
		curr_job->last_fd = -1;
		curr_job->pgrp = -1;
	}
	//loop
	for(curr_job->curr_process = curr_job->status == JOB_STOPPED ? curr_job->curr_process : curr_job->process_list; curr_job->curr_process != NULL; curr_job->curr_process = curr_job->curr_process->next){
		if (pipe(curr_job->pipefd + curr_job->current_fd) == -1){
			perror("pipe");
			break;
		}
		//connect input of pipefd[0] <-> output of pipefd[1]
		if (curr_job->status == JOB_STOPPED){
			//continue last stopped process
			kill(curr_job->pid, SIGCONT);
			//this pid'parent child currently not grpid
			//change its parent to grpid -> IMPOSSIBLE
		}else{
			curr_job->pid = fork();
		}
		curr_job->status = JOB_RUNNING;
		if (curr_job->pid == 0){
			//child
			execute_process(curr_job->curr_process, curr_job->pipefd, &curr_job->current_fd, &curr_job->last_fd, envp);
		}else{
			if (curr_job->pid == -1){
				perror("fork");
				//close pipes
				CHECK(close(curr_job->pipefd[curr_job->current_fd + INFD]));
				CHECK(close(curr_job->pipefd[curr_job->current_fd + OUTFD]));
				break;
			}
			else{
				//parent
				if (prepare_job(curr_job))
						break;
			}
		}
	}

	//NOTE NOTE NOTE: cannot restore shell to foreground without wrapping process by another fork
	//restore shell to foreground
	if (curr_job->mode == FOREGROUND){
		pid_t shell_pid = getpid();
		pid_t pid = fork();
		if (pid == 0){
			//child
			setpgid(shell_pid, shell_pgrp);
			CHECK(tcsetpgrp(STDIN_FILENO, shell_pgrp));
			exit(EXIT_SUCCESS);
		}else if (pid == -1) perror("fork");
		else{
			//restore old pgrp
			int status;
			waitpid(pid, &status, 0);
		}
	}
	if (curr_job->status != JOB_STOPPED){
		curr_job->status = JOB_FINISHED;
	}
}

void setup_job_handler(){
	//setup signal
	sigset_t mask;
	sigemptyset(&mask);
	sigaddset(&mask, SIGINT);
	sigaddset(&mask, SIGTSTP);
	CHECK(sigprocmask(SIG_BLOCK, &mask, NULL));

	//zombier cleaner
	setup_zombier_cleaner();
}

typedef struct {
	job *curr_job;
	char **envp;
	queue_t *background_jobs;
} execute_job_arg;

void *execute_job_cb(void *arg){
	execute_job_arg *job_arg = arg;
	execute_job_(job_arg->curr_job, job_arg->envp);
	return NULL;
}

//do not forget to call free_job
//unless job is added to queue
void execute_job_list(job* curr_job, char *envp[], queue_t *background_jobs){

	int is_first_run = curr_job->status == JOB_NOTRUN;
	execute_job_arg *arg = malloc(sizeof(execute_job_arg));
	arg->curr_job = curr_job;
	arg->envp = envp;
	arg->background_jobs = background_jobs;
	pthread_t thread;
	if (pthread_create(&thread, NULL, execute_job_cb, arg) == -1){
		perror("pthread_create");
		free_job(curr_job);
		free(arg);
	}else{

	//there currently is no protocol to notify parent process which is current process
	if (curr_job->mode == FOREGROUND){
		//foreground
		void *result;
		pthread_join(thread, &result);
		if (curr_job->status == JOB_STOPPED){
			//only push to queue if this is first time job launched
			if (!is_first_run)
				queue_push_back(background_jobs, curr_job);
		}else{
			//remove from background jobs queue if this is not first run
			if (!is_first_run){
				//free_job will be called from the next method
				queue_remove_by_data(background_jobs, curr_job);
			}
			else
				free_job(curr_job);
		}
	}else{
		//run background
		//do not free_job
		if (is_first_run)
			//only push to queue in first run
			//from second run (continued by fg or bg), job has already been added to queue
			queue_push_back(background_jobs, curr_job);
		else{
			//NOT sure yet
			//brought to foreground by fg
			//change mode to foreground
		}
	}
}


}
int stopped_job_filter(void *vjob){
	job *jjob = vjob;
	return jjob->status == JOB_STOPPED;
}

//continue one stopped job
//iterate background_jobs, find first stopped job and continue execution
//if not found, print "there is no stopped job"
int job_bg(char *envp[], queue_t *background_jobs){
	job *curr_job = queue_filter(background_jobs, stopped_job_filter);
	if (curr_job == NULL)
		return 0;
	execute_job_list(curr_job, envp, background_jobs);
	return 1;
}

//find first first UNFINISHED job (stopped or running), bring to foreground (tcsetpgrp and waitpid)
//it not found, print "there is no background job"
int job_fg(char *envp[], queue_t *background_jobs){
	return 0;
}
