#ifndef __PARSE_H__
#define __PARSE_H__

#define PROMPT "ish$ " /* 入力ライン冒頭の文字列 */
#define NAMELEN 32    /* 各種名前の長さ */
#define ARGLSTLEN 16  /* 1つのプロセスがとる実行時引数の数 */
#define LINELEN 256   /* 入力コマンドの長さ */
#define FILE_NOT_FOUND_MSG "File not found"
#include <signal.h>
#include "queue.h"

typedef enum write_option_ {
    TRUNC,
    APPEND,
} write_option;

typedef struct process_ {
    char*        program_name;
    char**       argument_list;

    char*        input_redirection;

    write_option output_option;
    char*        output_redirection;

    struct process_* next;
} process;

typedef enum job_mode_ {
    FOREGROUND,
    BACKGROUND,
} job_mode;

typedef enum {
	JOB_FINISHED = 0,
	JOB_STOPPED = 1,
	JOB_RUNNING = 2
} job_status_t;

typedef struct job_ {
    job_mode     mode;
    process*     process_list;
	process* curr_process;
    struct job_* next;
	job_status_t status;
} job;
void setup_job_handler();

typedef enum parse_state_ {
    ARGUMENT,
    IN_REDIRCT,
    OUT_REDIRCT_TRUNC,
    OUT_REDIRCT_APPEND,
} parse_state;

char* get_line(char *, int);
job* parse_line(char *);
void free_job(job *);

void execute_job_list(job*, char *[], queue_t*);

int job_bg(char *[], queue_t*);
int job_fg(char *[], queue_t*);

#endif
