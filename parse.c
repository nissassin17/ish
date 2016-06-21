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
	if (sigprocmask(SIG_UNBLOCK, &mask, NULL) == -1)
		perror("sigprocmask");

	int fd;
	const int infd = 0, outfd = 1;
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
		if (dup2(fd, STDOUT_FILENO) == -1) perror("dup2");
		if (close(fd) == -1) perror("close");
	}else
		if (curr_process->next != NULL)
			if (dup2(pipefd[*current + outfd], STDOUT_FILENO) == -1) perror("dup2");
	//setup input
	if (curr_process->input_redirection != NULL){
		int fd = open(curr_process->input_redirection, O_RDONLY);
		if (fd == -1){
			perror("open");
			exit(EXIT_FAILURE);
		}else{
			if (dup2(fd, STDIN_FILENO) == -1) perror("dup2");
			if (close(fd) == -1) perror("close");
		}
	}
	else if (*last != -1)
		if (dup2(pipefd[*last + infd], STDIN_FILENO) == -1) perror("dup2");

	//close last pipes only if this is not first process
	if (*last != -1){
		if (close(pipefd[*last + infd]) == -1) perror("close");
		if (close(pipefd[*last + outfd]) == -1) perror("close");
	}
	//always close current pipes
	if (close(pipefd[*current + infd]) == -1) perror("close");
	if (close(pipefd[*current + outfd]) == -1) perror("close");
	char full_path[LINELEN];
	if (!get_full_path(full_path, curr_process->program_name))
		fprintf(stderr, "%s\n", FILE_NOT_FOUND_MSG);
	else
		if (execve(full_path, curr_process->argument_list, envp) == -1) perror("execve");
	exit(EXIT_FAILURE);
}

//in a shell's thread
int execute_job_(job *curr_job, char *envp[], pid_t ppid){
	process *curr_process;
	int shell_ppid = getppid();
	int job_ppid = -1;
	const int infd = 0, outfd = 1;
	//setpgid(grpid, grpid); //-> already setup outside
	//loop
	if (curr_job->status == JOB_NOTRUN){
		//first run setup
		curr_job->status = JOB_RUNNING;
		curr_job->current_fd = 0;
		curr_job->last_fd = -1;
	}
	for(curr_process = curr_job->status == JOB_STOPPED ? curr_job->curr_process : curr_job->process_list; curr_process != NULL; curr_process = curr_process->next){
		if (pipe(curr_job->pipefd + curr_job->current_fd) == -1){
			curr_job->status = JOB_FINISHED;
			perror("pipe");
		}
		//connect input of pipefd[0] <-> output of pipefd[1]
		if (curr_job->status == JOB_STOPPED){
			curr_job->pid = curr_job->pid;
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
			execute_process(curr_process, curr_job->pipefd, &curr_job->current_fd, &curr_job->last_fd, envp);
		}else{
			if (curr_job->pid == -1){
				perror("fork");
				break;
			}
			else{
				//parent
				if (job_ppid == -1){
					//first job after stopped or when start from begin
					job_ppid = curr_job->pid;
					if (setpgid(curr_job->pid, job_ppid) == -1)
						perror("setpgid");
					if (curr_job->mode == FOREGROUND){
						//bring to front
						if (tcsetpgrp(STDIN_FILENO, job_ppid) == -1)
							perror("tcsetgrp");
					}
				}else
				if (setpgid(curr_job->pid, job_ppid) == -1)
					perror("setpgid");
				//wait
				if (curr_job->last_fd != -1){
					//not first process
					if (close(curr_job->pipefd[curr_job->last_fd + infd]) == -1) perror("close");
					if (close(curr_job->pipefd[curr_job->last_fd + outfd]) == -1) perror("close");
				}
				if (curr_process->next == NULL){
					//last process
					if (close(curr_job->pipefd[curr_job->current_fd+outfd]) == -1) perror("close");
					if (close(curr_job->pipefd[curr_job->current_fd+infd]) == -1) perror("close");
				}
				if (curr_job->last_fd == -1)
					curr_job->last_fd = 2;
				int status;
				if (waitpid(curr_job->pid, &status, WUNTRACED) == -1)
					perror("waitpid");
				if (WIFEXITED(status)){
					//printf("exited: %d\n", WEXITSTATUS(status));
					//normal exit
					if (WEXITSTATUS(status)){
						//notify if not the last
						if (curr_process->next != NULL){
							fprintf(stderr, "Interrupted due to error\n");
							break;
						}
					}
				}else if (WIFSIGNALED(status)){
					//printf("signaled: %d\n", WTERMSIG(status));
					//exit by signal
					break;
				}else{
					//printf("stopped: %d\n", WSTOPSIG(status));
					//WIFSTOPPED
					//by ctrl-z
					//restore foreground
					curr_job->status = JOB_STOPPED;
					//dont close pipe
					break;
				}
				int tmp = curr_job->current_fd;
				curr_job->current_fd = curr_job->last_fd;
				curr_job->last_fd = tmp;
			}
		}
	}

	//NOTE NOTE NOTE: cannot restore shell to foreground without wrapping process by another fork
	//restore shell to foreground
	if (curr_job->mode == FOREGROUND)
		if (tcsetpgrp(STDIN_FILENO, shell_ppid) == -1)
			perror("tcsetpgrp");
	if (curr_job->status != JOB_STOPPED){
		curr_job->status = JOB_FINISHED;
		//close pipes
		if (close(curr_job->pipefd[curr_job->current_fd + infd]) == -1) perror("close");
		if (close(curr_job->pipefd[curr_job->current_fd + outfd]) == -1) perror("close");
	}
	return curr_job->status;
}

void setup_job_handler(){
	//setup signal
	sigset_t mask, omask;
	sigemptyset(&mask);
	sigaddset(&mask, SIGINT);
	sigaddset(&mask, SIGTSTP);
	if (sigprocmask(SIG_BLOCK, &mask, &omask) == -1)
		perror("sigprocmask");

	//zombier cleaner
	setup_zombier_cleaner();
}

typedef struct {
	job *curr_job;
	char *envp[];
	queue_t *background_jobs;
	int is_first_run;
} execute_job_arg;

void *execute_job_cb(void *arg){
	execute_job_arg *job_arg = arg;
	execute_job_(job_arg->curr_job, job_arg->envp, job_arg->ppid, job_arg->is_first_run);
}

//do not forget to call free_job
//unless job is added to queue
void execute_job_list_(job* curr_job, char *envp[], queue_t *background_jobs, int is_first_run){

	pid_t ppid = getpgrp();
	execute_job_arg *arg = malloc(sizeof(execute_job_arg));
	arg->curr_job = curr_job;
	arg->envp = envp;
	arg->background_jobs = background_jobs;
	arg->is_first_run = is_first_run;
	pthread_t thread;
	if (pthread_create(&thread, NULL, execute_job_cb, arg) == -1){
		perror("pthread_create");
		free_job(job);
		free(arg);
	}else{

	//there currently is no protocol to notify parent process which is current process
	if (curr_job->mode == FOREGROUND){
		pthread_join(thread);
		//bring to foreground
		if (tcsetpgrp(STDIN_FILENO, pid) == -1)
			perror("tcsetpgrp");
		int status;
		waitpid(pid, &status, WUNTRACED);
		if (WIFEXITED(status)){
			//normal exit
			if (WEXITSTATUS(status) == JOB_STOPPED ){
				//INCOMPLETE_JOB
				curr_job->status = JOB_STOPPED;
				queue_push_back(background_jobs, curr_job);
				//do not free_job
			}else if (WEXITSTATUS(status) == JOB_FINISHED) {
				curr_job->status = JOB_FINISHED;
				free_job(curr_job);
			} else{
				curr_job->status = JOB_RUNNING;
				free_job(curr_job);
				//JOB_RUNNING
				//never happend
			}
		}else if (WIFSIGNALED(status)){
			free_job(curr_job);
			//never happen
			//exit by signal
		}else{
			free_job(curr_job);
			//never happen
			//WIFSTOPPED
			//by ctrl-z
		}
	}else{
		//run background
		//do not free_job
		curr_job->status = JOB_RUNNING;
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
void execute_job_list(job* curr_job, char *envp[], queue_t *background_jobs){
	execute_job_list_(curr_job, envp, background_jobs, 1);

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
	execute_job_list_(curr_job, envp, background_jobs, 0);
	return 1;
}

//find first first UNFINISHED job (stopped or running), bring to foreground (tcsetpgrp and waitpid)
//it not found, print "there is no background job"
int job_fg(char *envp[], queue_t *background_jobs){
	return 0;
}
