#include <string.h>
#include "parse.h"
#include <stdio.h>
#include "queue.h"

void print_job_list(job*);

void free_job_cb(void *vjob){
	job *jjob = vjob;
	free_job(jjob);
}

int main(int argc, char *argv[], char *envp[]) {
    char s[LINELEN];
	setup_job_handler();
    job *curr_job;
	queue_t *background_jobs = queue_create();
	queue_set_data_destroy_cb(background_jobs, free_job_cb);

    while(get_line(s, LINELEN)) {
        if (!strcmp(s, "\n"))
            continue;
        if(!strcmp(s, "exit\n"))
            break;
		if (!strcmp(s, ""))
			break;
		if (!strcmp(s, "bg\n")){
			//continue one stopped job
			//iterate background_jobs, find first stopped job and continue execution
			//if not found, print "there is no stopped job"
			if (!job_bg(envp, background_jobs))
				fprintf(stderr, "There is no stopped job\n");
		}else
		if (!strcmp(s, "fg\n")){
			//find first first UNFINISHED job (stopped or running), bring to foreground (tcsetpgrp and waitpid)
			//it not found, print "there is no background job"
			if (!job_fg(envp, background_jobs))
				fprintf(stderr, "There is no background job\n");
		}else {

			curr_job = parse_line(s);

			print_job_list(curr_job);

			execute_job_list(curr_job, envp, background_jobs);

		}

    }

	queue_destroy(background_jobs);

    return 0;
}
