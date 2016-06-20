#include <string.h>
#include "parse.h"
#include <stdio.h>

void print_job_list(job*);

int main(int argc, char *argv[], char *envp[]) {
    char s[LINELEN];
	setup_job_handler();
    job *curr_job;

    while(get_line(s, LINELEN)) {
        if (!strcmp(s, "\n"))
            continue;
        if(!strcmp(s, "exit\n"))
            break;
		if (!strcmp(s, ""))
			break;

        curr_job = parse_line(s);

        print_job_list(curr_job);

		execute_job_list(curr_job, envp);

        free_job(curr_job);
    }

    return 0;
}
