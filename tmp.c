# 1 "parse.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 329 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "parse.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 533 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 534 "/usr/include/sys/cdefs.h" 2 3 4
# 599 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 600 "/usr/include/sys/cdefs.h" 2 3 4
# 65 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 172 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 173 "/usr/include/Availability.h" 2 3 4
# 66 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/_types.h" 1 3 4
# 27 "/usr/include/_types.h" 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 33 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 32 "/usr/include/machine/_types.h" 3 4
# 1 "/usr/include/i386/_types.h" 1 3 4
# 37 "/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 70 "/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 33 "/usr/include/machine/_types.h" 2 3 4
# 34 "/usr/include/sys/_types.h" 2 3 4
# 55 "/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];


# 1 "/usr/include/sys/_pthread/_pthread_types.h" 1 3 4
# 57 "/usr/include/sys/_pthread/_pthread_types.h" 3 4
struct __darwin_pthread_handler_rec {
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_cond_t {
 long __sig;
 char __opaque[40];
};

struct _opaque_pthread_condattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_mutex_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_once_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
 long __sig;
 char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
 long __sig;
 char __opaque[16];
};

struct _opaque_pthread_t {
 long __sig;
 struct __darwin_pthread_handler_rec *__cleanup_stack;
 char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
# 81 "/usr/include/sys/_types.h" 2 3 4
# 28 "/usr/include/_types.h" 2 3 4
# 39 "/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 68 "/usr/include/stdio.h" 2 3 4



# 1 "/usr/include/sys/_types/_va_list.h" 1 3 4
# 31 "/usr/include/sys/_types/_va_list.h" 3 4
typedef __darwin_va_list va_list;
# 72 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_size_t.h" 3 4
typedef __darwin_size_t size_t;
# 73 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 74 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/sys/stdio.h" 1 3 4
# 39 "/usr/include/sys/stdio.h" 3 4
int renameat(int, const char *, int, const char *) __attribute__((availability(macosx,introduced=10.10)));
# 76 "/usr/include/stdio.h" 2 3 4

typedef __darwin_off_t fpos_t;
# 88 "/usr/include/stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 122 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (*_close)(void *);
 int (*_read) (void *, char *, int);
 fpos_t (*_seek) (void *, fpos_t, int);
 int (*_write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;


extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;
# 231 "/usr/include/stdio.h" 3 4
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * restrict, fpos_t *);
char *fgets(char * restrict, int, FILE *);



FILE *fopen(const char * restrict, const char * restrict) __asm("_" "fopen" );

int fprintf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * restrict, FILE * restrict) __asm("_" "fputs" );
size_t fread(void * restrict, size_t, size_t, FILE * restrict);
FILE *freopen(const char * restrict, const char * restrict,
                 FILE * restrict) __asm("_" "freopen" );
int fscanf(FILE * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * restrict, size_t, size_t, FILE * restrict) __asm("_" "fwrite" );
int getc(FILE *);
int getchar(void);
char *gets(char *);
void perror(const char *);
int printf(const char * restrict, ...) __attribute__((__format__ (__printf__, 1, 2)));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *, const char *);
void rewind(FILE *);
int scanf(const char * restrict, ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * restrict, char * restrict);
int setvbuf(FILE * restrict, char * restrict, int, size_t);
int sprintf(char * restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
int sscanf(const char * restrict, const char * restrict, ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);


__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * restrict, va_list) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char * restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
# 296 "/usr/include/stdio.h" 3 4
char *ctermid(char *);





FILE *fdopen(int, const char *) __asm("_" "fdopen" );

int fileno(FILE *);
# 315 "/usr/include/stdio.h" 3 4
int pclose(FILE *);



FILE *popen(const char *, const char *) __asm("_" "popen" );
# 337 "/usr/include/stdio.h" 3 4
int __srget(FILE *);
int __svfscanf(FILE *, const char *, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);
# 348 "/usr/include/stdio.h" 3 4
inline __attribute__ ((__always_inline__)) int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 374 "/usr/include/stdio.h" 3 4
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



int getw(FILE *);
int putw(int, FILE *);



__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tempnam(const char *, const char *) __asm("_" "tempnam" );
# 411 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_off_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 412 "/usr/include/stdio.h" 2 3 4


int fseeko(FILE *, off_t, int);
off_t ftello(FILE *);





int snprintf(char * restrict, size_t, const char * restrict, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * restrict, const char * restrict, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * restrict, va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * restrict, size_t, const char * restrict, va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * restrict, const char * restrict, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
# 436 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 437 "/usr/include/stdio.h" 2 3 4


int dprintf(int, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3))) __attribute__((availability(macosx,introduced=10.7)));
int vdprintf(int, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0))) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getdelim(char ** restrict, size_t * restrict, int, FILE * restrict) __attribute__((availability(macosx,introduced=10.7)));
ssize_t getline(char ** restrict, size_t * restrict, FILE * restrict) __attribute__((availability(macosx,introduced=10.7)));
# 452 "/usr/include/stdio.h" 3 4
extern const int sys_nerr;
extern const char *const sys_errlist[];

int asprintf(char ** restrict, const char * restrict, ...) __attribute__((__format__ (__printf__, 2, 3)));
char *ctermid_r(char *);
char *fgetln(FILE *, size_t *);
const char *fmtcheck(const char *, const char *);
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char ** restrict, const char * restrict, va_list) __attribute__((__format__ (__printf__, 2, 0)));
FILE *zopen(const char *, const char *, int);





FILE *funopen(const void *,
                 int (*)(void *, char *, int),
                 int (*)(void *, const char *, int),
                 fpos_t (*)(void *, fpos_t, int),
                 int (*)(void *));
# 492 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/secure/_stdio.h" 1 3 4
# 31 "/usr/include/secure/_stdio.h" 3 4
# 1 "/usr/include/secure/_common.h" 1 3 4
# 32 "/usr/include/secure/_stdio.h" 2 3 4
# 42 "/usr/include/secure/_stdio.h" 3 4
extern int __sprintf_chk (char * restrict, int, size_t,
     const char * restrict, ...);
# 52 "/usr/include/secure/_stdio.h" 3 4
extern int __snprintf_chk (char * restrict, size_t, int, size_t,
      const char * restrict, ...);







extern int __vsprintf_chk (char * restrict, int, size_t,
      const char * restrict, va_list);







extern int __vsnprintf_chk (char * restrict, size_t, int, size_t,
       const char * restrict, va_list);
# 493 "/usr/include/stdio.h" 2 3 4
# 2 "parse.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 65 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/sys/wait.h" 1 3 4
# 79 "/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;






# 1 "/usr/include/sys/_types/_pid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 90 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/_types/_id_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_id_t.h" 3 4
typedef __darwin_id_t id_t;
# 91 "/usr/include/sys/wait.h" 2 3 4
# 109 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/sys/signal.h" 1 3 4
# 73 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 74 "/usr/include/sys/signal.h" 2 3 4








# 1 "/usr/include/machine/signal.h" 1 3 4
# 32 "/usr/include/machine/signal.h" 3 4
# 1 "/usr/include/i386/signal.h" 1 3 4
# 39 "/usr/include/i386/signal.h" 3 4
typedef int sig_atomic_t;
# 33 "/usr/include/machine/signal.h" 2 3 4
# 83 "/usr/include/sys/signal.h" 2 3 4
# 146 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/machine/_mcontext.h" 1 3 4
# 29 "/usr/include/machine/_mcontext.h" 3 4
# 1 "/usr/include/i386/_mcontext.h" 1 3 4
# 33 "/usr/include/i386/_mcontext.h" 3 4
# 1 "/usr/include/mach/i386/_structs.h" 1 3 4
# 43 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_thread_state
{
    unsigned int __eax;
    unsigned int __ebx;
    unsigned int __ecx;
    unsigned int __edx;
    unsigned int __edi;
    unsigned int __esi;
    unsigned int __ebp;
    unsigned int __esp;
    unsigned int __ss;
    unsigned int __eflags;
    unsigned int __eip;
    unsigned int __cs;
    unsigned int __ds;
    unsigned int __es;
    unsigned int __fs;
    unsigned int __gs;
};
# 89 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_control
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
      :2,
    __pc :2,





    __rc :2,






             :1,
      :3;
};
typedef struct __darwin_fp_control __darwin_fp_control_t;
# 147 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_status
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
    __stkflt :1,
    __errsumm :1,
    __c0 :1,
    __c1 :1,
    __c2 :1,
    __tos :3,
    __c3 :1,
    __busy :1;
};
typedef struct __darwin_fp_status __darwin_fp_status_t;
# 191 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_mmst_reg
{
 char __mmst_reg[10];
 char __mmst_rsrv[6];
};
# 210 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_xmm_reg
{
 char __xmm_reg[16];
};
# 232 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_float_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
};


struct __darwin_i386_avx_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
};
# 402 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_exception_state
{
 __uint16_t __trapno;
 __uint16_t __cpu;
 __uint32_t __err;
 __uint32_t __faultvaddr;
};
# 422 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state32
{
 unsigned int __dr0;
 unsigned int __dr1;
 unsigned int __dr2;
 unsigned int __dr3;
 unsigned int __dr4;
 unsigned int __dr5;
 unsigned int __dr6;
 unsigned int __dr7;
};
# 454 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_thread_state64
{
 __uint64_t __rax;
 __uint64_t __rbx;
 __uint64_t __rcx;
 __uint64_t __rdx;
 __uint64_t __rdi;
 __uint64_t __rsi;
 __uint64_t __rbp;
 __uint64_t __rsp;
 __uint64_t __r8;
 __uint64_t __r9;
 __uint64_t __r10;
 __uint64_t __r11;
 __uint64_t __r12;
 __uint64_t __r13;
 __uint64_t __r14;
 __uint64_t __r15;
 __uint64_t __rip;
 __uint64_t __rflags;
 __uint64_t __cs;
 __uint64_t __fs;
 __uint64_t __gs;
};
# 509 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_float_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
};


struct __darwin_x86_avx_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
 struct __darwin_xmm_reg __fpu_ymmh8;
 struct __darwin_xmm_reg __fpu_ymmh9;
 struct __darwin_xmm_reg __fpu_ymmh10;
 struct __darwin_xmm_reg __fpu_ymmh11;
 struct __darwin_xmm_reg __fpu_ymmh12;
 struct __darwin_xmm_reg __fpu_ymmh13;
 struct __darwin_xmm_reg __fpu_ymmh14;
 struct __darwin_xmm_reg __fpu_ymmh15;
};
# 751 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_exception_state64
{
    __uint16_t __trapno;
    __uint16_t __cpu;
    __uint32_t __err;
    __uint64_t __faultvaddr;
};
# 771 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state64
{
 __uint64_t __dr0;
 __uint64_t __dr1;
 __uint64_t __dr2;
 __uint64_t __dr3;
 __uint64_t __dr4;
 __uint64_t __dr5;
 __uint64_t __dr6;
 __uint64_t __dr7;
};
# 34 "/usr/include/i386/_mcontext.h" 2 3 4




struct __darwin_mcontext32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_float_state __fs;
};


struct __darwin_mcontext_avx32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_avx_state __fs;
};
# 76 "/usr/include/i386/_mcontext.h" 3 4
struct __darwin_mcontext64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_float_state64 __fs;
};


struct __darwin_mcontext_avx64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_avx_state64 __fs;
};
# 115 "/usr/include/i386/_mcontext.h" 3 4
typedef struct __darwin_mcontext64 *mcontext_t;
# 30 "/usr/include/machine/_mcontext.h" 2 3 4
# 147 "/usr/include/sys/signal.h" 2 3 4

# 1 "/usr/include/sys/_pthread/_pthread_attr_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_attr_t.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;
# 149 "/usr/include/sys/signal.h" 2 3 4

# 1 "/usr/include/sys/_types/_sigaltstack.h" 1 3 4
# 36 "/usr/include/sys/_types/_sigaltstack.h" 3 4
struct __darwin_sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
# 151 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_ucontext.h" 1 3 4
# 34 "/usr/include/sys/_types/_ucontext.h" 3 4
struct __darwin_ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 struct __darwin_sigaltstack uc_stack;
 struct __darwin_ucontext *uc_link;
 __darwin_size_t uc_mcsize;
 struct __darwin_mcontext64 *uc_mcontext;



};


typedef struct __darwin_ucontext ucontext_t;
# 152 "/usr/include/sys/signal.h" 2 3 4


# 1 "/usr/include/sys/_types/_sigset_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_sigset_t.h" 3 4
typedef __darwin_sigset_t sigset_t;
# 155 "/usr/include/sys/signal.h" 2 3 4

# 1 "/usr/include/sys/_types/_uid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uid_t.h" 3 4
typedef __darwin_uid_t uid_t;
# 157 "/usr/include/sys/signal.h" 2 3 4

union sigval {

 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify;
 int sigev_signo;
 union sigval sigev_value;
 void (*sigev_notify_function)(union sigval);
 pthread_attr_t *sigev_notify_attributes;
};


typedef struct __siginfo {
 int si_signo;
 int si_errno;
 int si_code;
 pid_t si_pid;
 uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 unsigned long __pad[7];
} siginfo_t;
# 269 "/usr/include/sys/signal.h" 3 4
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
         void *);
};


struct __sigaction {
 union __sigaction_u __sigaction_u;
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask;
 int sa_flags;
};




struct sigaction {
 union __sigaction_u __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 331 "/usr/include/sys/signal.h" 3 4
typedef void (*sig_t)(int);
# 348 "/usr/include/sys/signal.h" 3 4
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 367 "/usr/include/sys/signal.h" 3 4
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
# 390 "/usr/include/sys/signal.h" 3 4
void (*signal(int, void (*)(int)))(int);
# 110 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/resource.h" 1 3 4
# 72 "/usr/include/sys/resource.h" 3 4
# 1 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/7.3.0/include/stdint.h" 1 3 4
# 63 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/7.3.0/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 18 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int8_t.h" 3 4
typedef signed char int8_t;
# 19 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 20 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 21 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 22 "/usr/include/stdint.h" 2 3 4

# 1 "/usr/include/_types/_uint8_t.h" 1 3 4
# 31 "/usr/include/_types/_uint8_t.h" 3 4
typedef unsigned char uint8_t;
# 24 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint16_t.h" 1 3 4
# 31 "/usr/include/_types/_uint16_t.h" 3 4
typedef unsigned short uint16_t;
# 25 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint32_t.h" 1 3 4
# 31 "/usr/include/_types/_uint32_t.h" 3 4
typedef unsigned int uint32_t;
# 26 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint64_t.h" 1 3 4
# 31 "/usr/include/_types/_uint64_t.h" 3 4
typedef unsigned long long uint64_t;
# 27 "/usr/include/stdint.h" 2 3 4


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;






# 1 "/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_intptr_t.h" 3 4
typedef __darwin_intptr_t intptr_t;
# 54 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uintptr_t.h" 3 4
typedef unsigned long uintptr_t;
# 55 "/usr/include/stdint.h" 2 3 4



# 1 "/usr/include/_types/_intmax_t.h" 1 3 4
# 32 "/usr/include/_types/_intmax_t.h" 3 4
typedef long int intmax_t;
# 59 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uintmax_t.h" 1 3 4
# 32 "/usr/include/_types/_uintmax_t.h" 3 4
typedef long unsigned int uintmax_t;
# 60 "/usr/include/stdint.h" 2 3 4
# 64 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/../lib/clang/7.3.0/include/stdint.h" 2 3 4
# 73 "/usr/include/sys/resource.h" 2 3 4







# 1 "/usr/include/sys/_types/_timeval.h" 1 3 4
# 30 "/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 81 "/usr/include/sys/resource.h" 2 3 4








typedef __uint64_t rlim_t;
# 152 "/usr/include/sys/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
# 163 "/usr/include/sys/resource.h" 3 4
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;


};
# 192 "/usr/include/sys/resource.h" 3 4
typedef void *rusage_info_t;

struct rusage_info_v0 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
};

struct rusage_info_v1 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
};

struct rusage_info_v2 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
};

struct rusage_info_v3 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
};

typedef struct rusage_info_v3 rusage_info_current;
# 325 "/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
# 353 "/usr/include/sys/resource.h" 3 4
struct proc_rlimit_control_wakeupmon {
 uint32_t wm_flags;
 int32_t wm_rate;
};
# 383 "/usr/include/sys/resource.h" 3 4
int getpriority(int, id_t);

int getiopolicy_np(int, int) __attribute__((availability(macosx,introduced=10.5)));

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit" );
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) __attribute__((availability(macosx,introduced=10.5)));

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit" );
# 111 "/usr/include/sys/wait.h" 2 3 4
# 186 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/machine/endian.h" 1 3 4
# 35 "/usr/include/machine/endian.h" 3 4
# 1 "/usr/include/i386/endian.h" 1 3 4
# 99 "/usr/include/i386/endian.h" 3 4
# 1 "/usr/include/sys/_endian.h" 1 3 4
# 130 "/usr/include/sys/_endian.h" 3 4
# 1 "/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 66 "/usr/include/libkern/_OSByteOrder.h" 3 4
# 1 "/usr/include/libkern/i386/_OSByteOrder.h" 1 3 4
# 44 "/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static inline
__uint16_t
_OSSwapInt16(
    __uint16_t _data
)
{
    return ((__uint16_t)((_data << 8) | (_data >> 8)));
}

static inline
__uint32_t
_OSSwapInt32(
    __uint32_t _data
)
{

    return __builtin_bswap32(_data);




}


static inline
__uint64_t
_OSSwapInt64(
    __uint64_t _data
)
{
    return __builtin_bswap64(_data);
}
# 67 "/usr/include/libkern/_OSByteOrder.h" 2 3 4
# 131 "/usr/include/sys/_endian.h" 2 3 4
# 100 "/usr/include/i386/endian.h" 2 3 4
# 36 "/usr/include/machine/endian.h" 2 3 4
# 187 "/usr/include/sys/wait.h" 2 3 4







union wait {
 int w_status;



 struct {

  unsigned int w_Termsig:7,
    w_Coredump:1,
    w_Retcode:8,
    w_Filler:16;







 } w_T;





 struct {

  unsigned int w_Stopval:8,
    w_Stopsig:8,
    w_Filler:16;






 } w_S;
};
# 248 "/usr/include/sys/wait.h" 3 4
pid_t wait(int *) __asm("_" "wait" );
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid" );

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid" );


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);
# 66 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/alloca.h" 1 3 4
# 32 "/usr/include/alloca.h" 3 4
void *alloca(size_t);
# 68 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/sys/_types/_ct_rune_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_ct_rune_t.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;
# 77 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_rune_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_rune_t.h" 3 4
typedef __darwin_rune_t rune_t;
# 78 "/usr/include/stdlib.h" 2 3 4


# 1 "/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 33 "/usr/include/sys/_types/_wchar_t.h" 3 4
typedef __darwin_wchar_t wchar_t;
# 81 "/usr/include/stdlib.h" 2 3 4

typedef struct {
 int quot;
 int rem;
} div_t;

typedef struct {
 long quot;
 long rem;
} ldiv_t;


typedef struct {
 long long quot;
 long long rem;
} lldiv_t;
# 117 "/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;
# 128 "/usr/include/stdlib.h" 3 4
void abort(void) __attribute__((noreturn));
int abs(int) __attribute__((const));
int atexit(void (*)(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void *, const void *, size_t,
     size_t, int (*)(const void *, const void *));
void *calloc(size_t, size_t);
div_t div(int, int) __attribute__((const));
void exit(int) __attribute__((noreturn));
void free(void *);
char *getenv(const char *);
long labs(long) __attribute__((const));
ldiv_t ldiv(long, long) __attribute__((const));

long long
  llabs(long long);
lldiv_t lldiv(long long, long long);

void *malloc(size_t);
int mblen(const char *, size_t);
size_t mbstowcs(wchar_t * restrict , const char * restrict, size_t);
int mbtowc(wchar_t * restrict, const char * restrict, size_t);
int posix_memalign(void **, size_t, size_t) __attribute__((availability(macosx,introduced=10.6)));
void qsort(void *, size_t, size_t,
     int (*)(const void *, const void *));
int rand(void);
void *realloc(void *, size_t);
void srand(unsigned);
double strtod(const char *, char **) __asm("_" "strtod" );
float strtof(const char *, char **) __asm("_" "strtof" );
long strtol(const char *, char **, int);
long double
  strtold(const char *, char **);

long long
  strtoll(const char *, char **, int);

unsigned long
  strtoul(const char *, char **, int);

unsigned long long
  strtoull(const char *, char **, int);

int system(const char *) __asm("_" "system" ) __attribute__((availability(macosx,introduced=10.0))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
size_t wcstombs(char * restrict, const wchar_t * restrict, size_t);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((noreturn));
long a64l(const char *);
double drand48(void);
char *ecvt(double, int, int *restrict, int *restrict);
double erand48(unsigned short[3]);
char *fcvt(double, int, int *restrict, int *restrict);
char *gcvt(double, int, char *);
int getsubopt(char **, char * const *, char **);
int grantpt(int);

char *initstate(unsigned, char *, size_t);



long jrand48(unsigned short[3]);
char *l64a(long);
void lcong48(unsigned short[7]);
long lrand48(void);
char *mktemp(char *);
int mkstemp(char *);
long mrand48(void);
long nrand48(unsigned short[3]);
int posix_openpt(int);
char *ptsname(int);
int putenv(char *) __asm("_" "putenv" );
long random(void);
int rand_r(unsigned *);

char *realpath(const char * restrict, char * restrict) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char *, const char *, int) __asm("_" "setenv" );

void setkey(const char *) __asm("_" "setkey" );



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv" );







# 1 "/usr/include/machine/types.h" 1 3 4
# 35 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/i386/types.h" 1 3 4
# 81 "/usr/include/i386/types.h" 3 4
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long long u_int64_t;


typedef int64_t register_t;
# 97 "/usr/include/i386/types.h" 3 4
typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;







typedef u_int64_t syscall_arg_t;
# 36 "/usr/include/machine/types.h" 2 3 4
# 239 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/sys/_types/_dev_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_dev_t.h" 3 4
typedef __darwin_dev_t dev_t;
# 241 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_mode_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 242 "/usr/include/stdlib.h" 2 3 4

u_int32_t arc4random(void);
void arc4random_addrandom(unsigned char * , int );
void arc4random_buf(void * , size_t ) __attribute__((availability(macosx,introduced=10.7)));
void arc4random_stir(void);
u_int32_t
  arc4random_uniform(u_int32_t ) __attribute__((availability(macosx,introduced=10.7)));

int atexit_b(void (^)(void)) __attribute__((availability(macosx,introduced=10.6)));
void *bsearch_b(const void *, const void *, size_t,
     size_t, int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));



char *cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char **, char **, const char *);
int cgetfirst(char **, char **);
int cgetmatch(const char *, const char *);
int cgetnext(char **, char **);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char **);
int cgetustr(char *, const char *, char **);

int daemon(int, int) __asm("_" "daemon" "$1050") __attribute__((availability(macosx,introduced=10.0,deprecated=10.5,message="Use posix_spawn APIs instead."))) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);

int heapsort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int heapsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

int mergesort(void *, size_t, size_t,
     int (*)(const void *, const void *));

int mergesort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort(void *, size_t, size_t,
     int (*)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void psort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void qsort_b(void *, size_t, size_t,
     int (^)(const void *, const void *)) __attribute__((availability(macosx,introduced=10.6)));

void qsort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *));
int radixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void setprogname(const char *);
int sradixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void sranddev(void);
void srandomdev(void);
void *reallocf(void *, size_t);

long long
  strtoq(const char *, char **, int);
unsigned long long
  strtouq(const char *, char **, int);

extern char *suboptarg;
void *valloc(size_t);
# 3 "parse.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 70 "/usr/include/string.h" 3 4
void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
void *memset(void *, int, size_t);
char *strcat(char *, const char *);
char *strchr(const char *, int);
int strcmp(const char *, const char *);
int strcoll(const char *, const char *);
char *strcpy(char *, const char *);
size_t strcspn(const char *, const char *);
char *strerror(int) __asm("_" "strerror" );
size_t strlen(const char *);
char *strncat(char *, const char *, size_t);
int strncmp(const char *, const char *, size_t);
char *strncpy(char *, const char *, size_t);
char *strpbrk(const char *, const char *);
char *strrchr(const char *, int);
size_t strspn(const char *, const char *);
char *strstr(const char *, const char *);
char *strtok(char *, const char *);
size_t strxfrm(char *, const char *, size_t);
# 104 "/usr/include/string.h" 3 4
char *strtok_r(char *, const char *, char **);
# 116 "/usr/include/string.h" 3 4
int strerror_r(int, char *, size_t);
char *strdup(const char *);
void *memccpy(void *, const void *, int, size_t);
# 130 "/usr/include/string.h" 3 4
char *stpcpy(char *, const char *);
char *stpncpy(char *, const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strndup(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
size_t strnlen(const char *, size_t) __attribute__((availability(macosx,introduced=10.7)));
char *strsignal(int sig);







# 1 "/usr/include/sys/_types/_rsize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_rsize_t.h" 3 4
typedef __darwin_size_t rsize_t;
# 142 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 143 "/usr/include/string.h" 2 3 4


errno_t memset_s(void *, rsize_t, int, rsize_t) __attribute__((availability(macosx,introduced=10.9)));
# 155 "/usr/include/string.h" 3 4
void *memmem(const void *, size_t, const void *, size_t) __attribute__((availability(macosx,introduced=10.7)));
void memset_pattern4(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern8(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));
void memset_pattern16(void *, const void *, size_t) __attribute__((availability(macosx,introduced=10.5)));

char *strcasestr(const char *, const char *);
char *strnstr(const char *, const char *, size_t);
size_t strlcat(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
void strmode(int, char *);
char *strsep(char **, const char *);


void swab(const void * restrict, void * restrict, ssize_t);








# 1 "/usr/include/strings.h" 1 3 4
# 70 "/usr/include/strings.h" 3 4
int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);





int ffsl(long) __attribute__((availability(macosx,introduced=10.5)));
int ffsll(long long) __attribute__((availability(macosx,introduced=10.9)));
int fls(int) __attribute__((availability(macosx,introduced=10.5)));
int flsl(long) __attribute__((availability(macosx,introduced=10.5)));
int flsll(long long) __attribute__((availability(macosx,introduced=10.9)));



# 1 "/usr/include/string.h" 1 3 4
# 93 "/usr/include/strings.h" 2 3 4
# 177 "/usr/include/string.h" 2 3 4
# 186 "/usr/include/string.h" 3 4
# 1 "/usr/include/secure/_string.h" 1 3 4
# 187 "/usr/include/string.h" 2 3 4
# 4 "parse.c" 2
# 1 "/usr/include/signal.h" 1 3 4
# 66 "/usr/include/signal.h" 3 4
# 1 "/usr/include/sys/_pthread/_pthread_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_t.h" 3 4
typedef __darwin_pthread_t pthread_t;
# 67 "/usr/include/signal.h" 2 3 4


extern const char *const sys_signame[32];
extern const char *const sys_siglist[32];



int raise(int);




void (*bsd_signal(int, void (*)(int)))(int);
int kill(pid_t, int) __asm("_" "kill" );
int killpg(pid_t, int) __asm("_" "killpg" );
int pthread_kill(pthread_t, int);
int pthread_sigmask(int, const sigset_t *, sigset_t *) __asm("_" "pthread_sigmask" );
int sigaction(int, const struct sigaction * restrict,
     struct sigaction * restrict);
int sigaddset(sigset_t *, int);
int sigaltstack(const stack_t * restrict, stack_t * restrict) __asm("_" "sigaltstack" ) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int sigdelset(sigset_t *, int);
int sigemptyset(sigset_t *);
int sigfillset(sigset_t *);
int sighold(int);
int sigignore(int);
int siginterrupt(int, int);
int sigismember(const sigset_t *, int);
int sigpause(int) __asm("_" "sigpause" );
int sigpending(sigset_t *);
int sigprocmask(int, const sigset_t * restrict, sigset_t * restrict);
int sigrelse(int);
void (*sigset(int, void (*)(int)))(int);
int sigsuspend(const sigset_t *) __asm("_" "sigsuspend" );
int sigwait(const sigset_t * restrict, int * restrict) __asm("_" "sigwait" );

void psignal(unsigned int, const char *);
int sigblock(int);
int sigsetmask(int);
int sigvec(int, struct sigvec *, struct sigvec *);






inline __attribute__ ((__always_inline__)) int
__sigbits(int __signo)
{
    return __signo > 32 ? 0 : (1 << (__signo - 1));
}
# 5 "parse.c" 2
# 1 "/usr/include/fcntl.h" 1 3 4
# 23 "/usr/include/fcntl.h" 3 4
# 1 "/usr/include/sys/fcntl.h" 1 3 4
# 116 "/usr/include/sys/fcntl.h" 3 4
# 1 "/usr/include/sys/_types/_o_sync.h" 1 3 4
# 117 "/usr/include/sys/fcntl.h" 2 3 4
# 157 "/usr/include/sys/fcntl.h" 3 4
# 1 "/usr/include/sys/_types/_o_dsync.h" 1 3 4
# 158 "/usr/include/sys/fcntl.h" 2 3 4
# 306 "/usr/include/sys/fcntl.h" 3 4
# 1 "/usr/include/sys/_types/_seek_set.h" 1 3 4
# 307 "/usr/include/sys/fcntl.h" 2 3 4





# 1 "/usr/include/sys/_types/_s_ifmt.h" 1 3 4
# 313 "/usr/include/sys/fcntl.h" 2 3 4
# 331 "/usr/include/sys/fcntl.h" 3 4
struct flock {
 off_t l_start;
 off_t l_len;
 pid_t l_pid;
 short l_type;
 short l_whence;
};


# 1 "/usr/include/sys/_types/_timespec.h" 1 3 4
# 30 "/usr/include/sys/_types/_timespec.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 340 "/usr/include/sys/fcntl.h" 2 3 4






struct flocktimeout {
 struct flock fl;
 struct timespec timeout;
};
# 359 "/usr/include/sys/fcntl.h" 3 4
struct radvisory {
       off_t ra_offset;
       int ra_count;
};



typedef struct fcodeblobs {
 void *f_cd_hash;
 size_t f_hash_size;
 void *f_cd_buffer;
 size_t f_cd_size;
 unsigned int *f_out_size;
 int f_arch;
 int __padding;
} fcodeblobs_t;
# 383 "/usr/include/sys/fcntl.h" 3 4
typedef struct fsignatures {
 off_t fs_file_start;
 void *fs_blob_start;
 size_t fs_blob_size;
} fsignatures_t;
# 397 "/usr/include/sys/fcntl.h" 3 4
typedef struct fstore {
 unsigned int fst_flags;
 int fst_posmode;
 off_t fst_offset;
 off_t fst_length;
 off_t fst_bytesalloc;
} fstore_t;



typedef struct fbootstraptransfer {
  off_t fbt_offset;
  size_t fbt_length;
  void *fbt_buffer;
} fbootstraptransfer_t;
# 435 "/usr/include/sys/fcntl.h" 3 4
#pragma pack(4)

struct log2phys {
 unsigned int l2p_flags;
 off_t l2p_contigbytes;


 off_t l2p_devoffset;


};

#pragma pack()
# 458 "/usr/include/sys/fcntl.h" 3 4
# 1 "/usr/include/sys/_types/_filesec_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_filesec_t.h" 3 4
struct _filesec;
typedef struct _filesec *filesec_t;
# 459 "/usr/include/sys/fcntl.h" 2 3 4

typedef enum {
 FILESEC_OWNER = 1,
 FILESEC_GROUP = 2,
 FILESEC_UUID = 3,
 FILESEC_MODE = 4,
 FILESEC_ACL = 5,
 FILESEC_GRPUUID = 6,


 FILESEC_ACL_RAW = 100,
 FILESEC_ACL_ALLOCSIZE = 101
} filesec_property_t;






int open(const char *, int, ...) __asm("_" "open" );

int openat(int, const char *, int, ...) __asm("_" "openat" ) __attribute__((availability(macosx,introduced=10.10)));

int creat(const char *, mode_t) __asm("_" "creat" );
int fcntl(int, int, ...) __asm("_" "fcntl" );


int openx_np(const char *, int, filesec_t);




int open_dprotected_np ( const char *, int, int, int, ...);
int flock(int, int);
filesec_t filesec_init(void);
filesec_t filesec_dup(filesec_t);
void filesec_free(filesec_t);
int filesec_get_property(filesec_t, filesec_property_t, void *);
int filesec_query_property(filesec_t, filesec_property_t, int *);
int filesec_set_property(filesec_t, filesec_property_t, const void *);
int filesec_unset_property(filesec_t, filesec_property_t) __attribute__((availability(macosx,introduced=10.6)));
# 24 "/usr/include/fcntl.h" 2 3 4
# 6 "parse.c" 2
# 1 "/usr/include/sys/types.h" 1 3 4
# 84 "/usr/include/sys/types.h" 3 4
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;

typedef unsigned long u_long;


typedef unsigned short ushort;
typedef unsigned int uint;


typedef u_int64_t u_quad_t;
typedef int64_t quad_t;
typedef quad_t * qaddr_t;

typedef char * caddr_t;
typedef int32_t daddr_t;



typedef u_int32_t fixpt_t;


# 1 "/usr/include/sys/_types/_blkcnt_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_blkcnt_t.h" 3 4
typedef __darwin_blkcnt_t blkcnt_t;
# 107 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_blksize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_blksize_t.h" 3 4
typedef __darwin_blksize_t blksize_t;
# 108 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_gid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_gid_t.h" 3 4
typedef __darwin_gid_t gid_t;
# 109 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_in_addr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_in_addr_t.h" 3 4
typedef __uint32_t in_addr_t;
# 110 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_in_port_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_in_port_t.h" 3 4
typedef __uint16_t in_port_t;
# 111 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_ino_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ino_t.h" 3 4
typedef __darwin_ino_t ino_t;
# 112 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/_types/_ino64_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ino64_t.h" 3 4
typedef __darwin_ino64_t ino64_t;
# 115 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/_types/_key_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_key_t.h" 3 4
typedef __int32_t key_t;
# 118 "/usr/include/sys/types.h" 2 3 4

# 1 "/usr/include/sys/_types/_nlink_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_nlink_t.h" 3 4
typedef __uint16_t nlink_t;
# 120 "/usr/include/sys/types.h" 2 3 4




typedef int32_t segsz_t;
typedef int32_t swblk_t;
# 161 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/_types/_clock_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_clock_t.h" 3 4
typedef __darwin_clock_t clock_t;
# 162 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/_types/_time_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 165 "/usr/include/sys/types.h" 2 3 4

# 1 "/usr/include/sys/_types/_useconds_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_useconds_t.h" 3 4
typedef __darwin_useconds_t useconds_t;
# 167 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_suseconds_t.h" 3 4
typedef __darwin_suseconds_t suseconds_t;
# 168 "/usr/include/sys/types.h" 2 3 4
# 180 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/_types/_fd_def.h" 1 3 4
# 46 "/usr/include/sys/_types/_fd_def.h" 3 4
typedef struct fd_set {
 __int32_t fds_bits[((((1024) % ((sizeof(__int32_t) * 8))) == 0) ? ((1024) / ((sizeof(__int32_t) * 8))) : (((1024) / ((sizeof(__int32_t) * 8))) + 1))];
} fd_set;



static __inline int
__darwin_fd_isset(int _n, const struct fd_set *_p)
{
 return (_p->fds_bits[(unsigned long)_n/(sizeof(__int32_t) * 8)] & ((__int32_t)(1<<((unsigned long)_n % (sizeof(__int32_t) * 8)))));
}
# 181 "/usr/include/sys/types.h" 2 3 4




typedef __int32_t fd_mask;








# 1 "/usr/include/sys/_types/_fd_setsize.h" 1 3 4
# 194 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_set.h" 1 3 4
# 195 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_clr.h" 1 3 4
# 196 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_zero.h" 1 3 4
# 197 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_isset.h" 1 3 4
# 198 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/_types/_fd_copy.h" 1 3 4
# 201 "/usr/include/sys/types.h" 2 3 4
# 212 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/_pthread/_pthread_cond_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_cond_t.h" 3 4
typedef __darwin_pthread_cond_t pthread_cond_t;
# 213 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_condattr_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_condattr_t.h" 3 4
typedef __darwin_pthread_condattr_t pthread_condattr_t;
# 214 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_mutex_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_mutex_t.h" 3 4
typedef __darwin_pthread_mutex_t pthread_mutex_t;
# 215 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_mutexattr_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_mutexattr_t.h" 3 4
typedef __darwin_pthread_mutexattr_t pthread_mutexattr_t;
# 216 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_once_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_once_t.h" 3 4
typedef __darwin_pthread_once_t pthread_once_t;
# 217 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_rwlock_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_rwlock_t.h" 3 4
typedef __darwin_pthread_rwlock_t pthread_rwlock_t;
# 218 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_rwlockattr_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_rwlockattr_t.h" 3 4
typedef __darwin_pthread_rwlockattr_t pthread_rwlockattr_t;
# 219 "/usr/include/sys/types.h" 2 3 4




# 1 "/usr/include/sys/_pthread/_pthread_key_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_key_t.h" 3 4
typedef __darwin_pthread_key_t pthread_key_t;
# 224 "/usr/include/sys/types.h" 2 3 4




# 1 "/usr/include/sys/_types/_fsblkcnt_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_fsblkcnt_t.h" 3 4
typedef __darwin_fsblkcnt_t fsblkcnt_t;
# 229 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_fsfilcnt_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_fsfilcnt_t.h" 3 4
typedef __darwin_fsfilcnt_t fsfilcnt_t;
# 230 "/usr/include/sys/types.h" 2 3 4
# 7 "parse.c" 2

# 1 "/usr/include/unistd.h" 1 3 4
# 72 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/unistd.h" 1 3 4
# 84 "/usr/include/sys/unistd.h" 3 4
# 1 "/usr/include/sys/_types/_posix_vdisable.h" 1 3 4
# 85 "/usr/include/sys/unistd.h" 2 3 4
# 122 "/usr/include/sys/unistd.h" 3 4
# 1 "/usr/include/sys/_types/_seek_set.h" 1 3 4
# 123 "/usr/include/sys/unistd.h" 2 3 4
# 132 "/usr/include/sys/unistd.h" 3 4
struct accessx_descriptor {
 unsigned int ad_name_offset;
 int ad_flags;
 int ad_pad[2];
};
# 185 "/usr/include/sys/unistd.h" 3 4
int getattrlistbulk(int, void *, void *, size_t, uint64_t) __attribute__((availability(macosx,introduced=10.10)));
# 203 "/usr/include/sys/unistd.h" 3 4
int faccessat(int, const char *, int, int) __attribute__((availability(macosx,introduced=10.10)));
int fchownat(int, const char *, uid_t, gid_t, int) __attribute__((availability(macosx,introduced=10.10)));
int linkat(int, const char *, int, const char *, int) __attribute__((availability(macosx,introduced=10.10)));
ssize_t readlinkat(int, const char *, char *, size_t) __attribute__((availability(macosx,introduced=10.10)));
int symlinkat(const char *, int, const char *) __attribute__((availability(macosx,introduced=10.10)));
int unlinkat(int, const char *, int) __attribute__((availability(macosx,introduced=10.10)));
int getattrlistat(int, const char *, void *, void *, size_t, unsigned long) __attribute__((availability(macosx,introduced=10.10)));
# 73 "/usr/include/unistd.h" 2 3 4
# 429 "/usr/include/unistd.h" 3 4
void _exit(int) __attribute__((noreturn));
int access(const char *, int);
unsigned int
  alarm(unsigned int);
int chdir(const char *);
int chown(const char *, uid_t, gid_t);

int close(int) __asm("_" "close" );

int dup(int);
int dup2(int, int);
int execl(const char *, const char *, ...) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int execle(const char *, const char *, ...) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int execlp(const char *, const char *, ...) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int execv(const char *, char * const *) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int execve(const char *, char * const *, char * const *) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int execvp(const char *, char * const *) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
pid_t fork(void) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
long fpathconf(int, int);
char *getcwd(char *, size_t);
gid_t getegid(void);
uid_t geteuid(void);
gid_t getgid(void);



int getgroups(int, gid_t []);

char *getlogin(void);
pid_t getpgrp(void);
pid_t getpid(void);
pid_t getppid(void);
uid_t getuid(void);
int isatty(int);
int link(const char *, const char *);
off_t lseek(int, off_t, int);
long pathconf(const char *, int);

int pause(void) __asm("_" "pause" );

int pipe(int [2]);

ssize_t read(int, void *, size_t) __asm("_" "read" );

int rmdir(const char *);
int setgid(gid_t);
int setpgid(pid_t, pid_t);
pid_t setsid(void);
int setuid(uid_t);

unsigned int
  sleep(unsigned int) __asm("_" "sleep" );

long sysconf(int);
pid_t tcgetpgrp(int);
int tcsetpgrp(int, pid_t);
char *ttyname(int);


int ttyname_r(int, char *, size_t) __asm("_" "ttyname_r" );




int unlink(const char *);

ssize_t write(int, const void *, size_t) __asm("_" "write" );
# 506 "/usr/include/unistd.h" 3 4
size_t confstr(int, char *, size_t) __asm("_" "confstr" );

int getopt(int, char * const [], const char *) __asm("_" "getopt" );

extern char *optarg;
extern int optind, opterr, optopt;
# 536 "/usr/include/unistd.h" 3 4
__attribute__((deprecated)) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)))

void *brk(const void *);
int chroot(const char *) ;


char *crypt(const char *, const char *);






void encrypt(char *, int) __asm("_" "encrypt" );



int fchdir(int);
long gethostid(void);
pid_t getpgid(pid_t);
pid_t getsid(pid_t);



int getdtablesize(void) ;
int getpagesize(void) __attribute__((const)) ;
char *getpass(const char *) ;




char *getwd(char *) ;


int lchown(const char *, uid_t, gid_t) __asm("_" "lchown" );

int lockf(int, int, off_t) __asm("_" "lockf" );

int nice(int) __asm("_" "nice" );

ssize_t pread(int, void *, size_t, off_t) __asm("_" "pread" );

ssize_t pwrite(int, const void *, size_t, off_t) __asm("_" "pwrite" );






__attribute__((deprecated)) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)))

void *sbrk(int);



pid_t setpgrp(void) __asm("_" "setpgrp" );




int setregid(gid_t, gid_t) __asm("_" "setregid" );

int setreuid(uid_t, uid_t) __asm("_" "setreuid" );

void swab(const void * restrict, void * restrict, ssize_t);
void sync(void);
int truncate(const char *, off_t);
useconds_t ualarm(useconds_t, useconds_t);
int usleep(useconds_t) __asm("_" "usleep" );
pid_t vfork(void) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));


int fsync(int) __asm("_" "fsync" );

int ftruncate(int, off_t);
int getlogin_r(char *, size_t);
# 624 "/usr/include/unistd.h" 3 4
int fchown(int, uid_t, gid_t);
int gethostname(char *, size_t);
ssize_t readlink(const char * restrict, char * restrict, size_t);
int setegid(gid_t);
int seteuid(uid_t);
int symlink(const char *, const char *);
# 638 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 114 "/usr/include/sys/select.h" 3 4
int pselect(int, fd_set * restrict, fd_set * restrict,
  fd_set * restrict, const struct timespec * restrict,
  const sigset_t * restrict)




  __asm("_" "pselect" "$1050")




  ;



# 1 "/usr/include/sys/_select.h" 1 3 4
# 39 "/usr/include/sys/_select.h" 3 4
int select(int, fd_set * restrict, fd_set * restrict,
  fd_set * restrict, struct timeval * restrict)




  __asm("_" "select" "$1050")




  ;
# 130 "/usr/include/sys/select.h" 2 3 4
# 639 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/sys/_types/_uuid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uuid_t.h" 3 4
typedef __darwin_uuid_t uuid_t;
# 643 "/usr/include/unistd.h" 2 3 4


void _Exit(int) __attribute__((noreturn));
int accessx_np(const struct accessx_descriptor *, size_t, int *, uid_t);
int acct(const char *);
int add_profil(char *, size_t, unsigned long, unsigned int) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
void endusershell(void);
int execvP(const char *, const char *, char * const *) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
char *fflagstostr(unsigned long);
int getdomainname(char *, int);
int getgrouplist(const char *, int, int *, int *);





# 1 "/usr/include/gethostuuid.h" 1 3 4
# 39 "/usr/include/gethostuuid.h" 3 4
int gethostuuid(uuid_t, const struct timespec *) __attribute__((availability(macosx,introduced=10.5)));
# 659 "/usr/include/unistd.h" 2 3 4




mode_t getmode(const void *, mode_t);
int getpeereid(int, uid_t *, gid_t *);
int getsgroups_np(int *, uuid_t);
char *getusershell(void);
int getwgroups_np(int *, uuid_t);
int initgroups(const char *, int);
int iruserok(unsigned long, int, const char *, const char *);
int iruserok_sa(const void *, int, int, const char *, const char *);
int issetugid(void);
char *mkdtemp(char *);
int mknod(const char *, mode_t, dev_t);
int mkpath_np(const char *path, mode_t omode) __attribute__((availability(macosx,introduced=10.8)));
int mkstemp(char *);
int mkstemps(char *, int);
char *mktemp(char *);
int nfssvc(int, void *);
int profil(char *, size_t, unsigned long, unsigned int);
int pthread_setugid_np(uid_t, gid_t);
int pthread_getugid_np( uid_t *, gid_t *);
int rcmd(char **, int, const char *, const char *, const char *, int *);
int rcmd_af(char **, int, const char *, const char *, const char *, int *,
  int);
int reboot(int);
int revoke(const char *);
int rresvport(int *);
int rresvport_af(int *, int);
int ruserok(const char *, int, const char *, const char *);
int setdomainname(const char *, int);
int setgroups(int, const gid_t *);
void sethostid(long);
int sethostname(const char *, int);

void setkey(const char *) __asm("_" "setkey" );



int setlogin(const char *);
void *setmode(const char *) __asm("_" "setmode" );
int setrgid(gid_t);
int setruid(uid_t);
int setsgroups_np(int, const uuid_t);
void setusershell(void);
int setwgroups_np(int, const uuid_t);
int strtofflags(char **, unsigned long *, unsigned long *);
int swapon(const char *);
int syscall(int, ...) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int ttyslot(void);
int undelete(const char *);
int unwhiteout(const char *);
void *valloc(size_t);

extern char *suboptarg;
int getsubopt(char **, char * const *, char **);



int fgetattrlist(int,void*,void*,size_t,unsigned int) __attribute__((availability(macosx,introduced=10.6)));
int fsetattrlist(int,void*,void*,size_t,unsigned int) __attribute__((availability(macosx,introduced=10.6)));
int getattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "getattrlist" );
int setattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "setattrlist" );
int exchangedata(const char*,const char*,unsigned int) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int getdirentriesattr(int,void*,void*,size_t,unsigned int*,unsigned int*,unsigned int*,unsigned int) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
# 736 "/usr/include/unistd.h" 3 4
struct fssearchblock;
struct searchstate;

int searchfs(const char *, struct fssearchblock *, unsigned long *, unsigned int, unsigned int, struct searchstate *) __attribute__((availability(watchos,unavailable))) __attribute__((availability(tvos,unavailable)));
int fsctl(const char *,unsigned long,void*,unsigned int);
int ffsctl(int,unsigned long,void*,unsigned int) __attribute__((availability(macosx,introduced=10.6)));




int fsync_volume_np(int, int) __attribute__((availability(macosx,introduced=10.8)));
int sync_volume_np(const char *, int) __attribute__((availability(macosx,introduced=10.8)));

extern int optreset;
# 9 "parse.c" 2
# 1 "/usr/include/errno.h" 1 3 4
# 23 "/usr/include/errno.h" 3 4
# 1 "/usr/include/sys/errno.h" 1 3 4
# 80 "/usr/include/sys/errno.h" 3 4
extern int * __error(void);
# 24 "/usr/include/errno.h" 2 3 4
# 10 "parse.c" 2
# 1 "./parse.h" 1
# 10 "./parse.h"
# 1 "./queue.h" 1



# 1 "/usr/include/pthread.h" 1 3 4
# 57 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/pthread/pthread_impl.h" 1 3 4
# 58 "/usr/include/pthread.h" 2 3 4

# 1 "/usr/include/pthread/sched.h" 1 3 4
# 35 "/usr/include/pthread/sched.h" 3 4
struct sched_param { int sched_priority; char __opaque[4]; };


extern int sched_yield(void);
extern int sched_get_priority_min(int);
extern int sched_get_priority_max(int);
# 60 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
# 73 "/usr/include/time.h" 3 4
struct tm {
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
 long tm_gmtoff;
 char *tm_zone;
};
# 96 "/usr/include/time.h" 3 4
extern char *tzname[];


extern int getdate_err;

extern long timezone __asm("_" "timezone" );

extern int daylight;


char *asctime(const struct tm *);
clock_t clock(void) __asm("_" "clock" );
char *ctime(const time_t *);
double difftime(time_t, time_t);
struct tm *getdate(const char *);
struct tm *gmtime(const time_t *);
struct tm *localtime(const time_t *);
time_t mktime(struct tm *) __asm("_" "mktime" );
size_t strftime(char * restrict, size_t, const char * restrict, const struct tm * restrict) __asm("_" "strftime" );
char *strptime(const char * restrict, const char * restrict, struct tm * restrict) __asm("_" "strptime" );
time_t time(time_t *);


void tzset(void);



char *asctime_r(const struct tm * restrict, char * restrict);
char *ctime_r(const time_t *, char *);
struct tm *gmtime_r(const time_t * restrict, struct tm * restrict);
struct tm *localtime_r(const time_t * restrict, struct tm * restrict);


time_t posix2time(time_t);



void tzsetwall(void);
time_t time2posix(time_t);
time_t timelocal(struct tm * const);
time_t timegm(struct tm * const);



int nanosleep(const struct timespec *, struct timespec *) __asm("_" "nanosleep" );
# 61 "/usr/include/pthread.h" 2 3 4
# 73 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/pthread/qos.h" 1 3 4
# 32 "/usr/include/pthread/qos.h" 3 4
# 1 "/usr/include/sys/qos.h" 1 3 4
# 124 "/usr/include/sys/qos.h" 3 4
enum { QOS_CLASS_USER_INTERACTIVE __attribute__((availability(macosx,introduced=10.10))) = 0x21, QOS_CLASS_USER_INITIATED __attribute__((availability(macosx,introduced=10.10))) = 0x19, QOS_CLASS_DEFAULT __attribute__((availability(macosx,introduced=10.10))) = 0x15, QOS_CLASS_UTILITY __attribute__((availability(macosx,introduced=10.10))) = 0x11, QOS_CLASS_BACKGROUND __attribute__((availability(macosx,introduced=10.10))) = 0x09, QOS_CLASS_UNSPECIFIED __attribute__((availability(macosx,introduced=10.10))) = 0x00, }; typedef unsigned int qos_class_t;
# 164 "/usr/include/sys/qos.h" 3 4
__attribute__((availability(macosx,introduced=10.10)))
qos_class_t
qos_class_self(void);
# 186 "/usr/include/sys/qos.h" 3 4
__attribute__((availability(macosx,introduced=10.10)))
qos_class_t
qos_class_main(void);
# 33 "/usr/include/pthread/qos.h" 2 3 4
# 76 "/usr/include/pthread/qos.h" 3 4
__attribute__((availability(macosx,introduced=10.10)))
int
pthread_attr_set_qos_class_np(pthread_attr_t *__attr,
  qos_class_t __qos_class, int __relative_priority);
# 107 "/usr/include/pthread/qos.h" 3 4
__attribute__((availability(macosx,introduced=10.10)))
int
pthread_attr_get_qos_class_np(pthread_attr_t * restrict __attr,
  qos_class_t * restrict __qos_class,
  int * restrict __relative_priority);
# 148 "/usr/include/pthread/qos.h" 3 4
__attribute__((availability(macosx,introduced=10.10)))
int
pthread_set_qos_class_self_np(qos_class_t __qos_class,
  int __relative_priority);
# 179 "/usr/include/pthread/qos.h" 3 4
__attribute__((availability(macosx,introduced=10.10)))
int
pthread_get_qos_class_np(pthread_t __pthread,
  qos_class_t * restrict __qos_class,
  int * restrict __relative_priority);
# 206 "/usr/include/pthread/qos.h" 3 4
typedef struct pthread_override_s* pthread_override_t;
# 258 "/usr/include/pthread/qos.h" 3 4
__attribute__((availability(macosx,introduced=10.10)))
pthread_override_t
pthread_override_qos_class_start_np(pthread_t __pthread,
  qos_class_t __qos_class, int __relative_priority);
# 286 "/usr/include/pthread/qos.h" 3 4
__attribute__((availability(macosx,introduced=10.10)))
int
pthread_override_qos_class_end_np(pthread_override_t __override);
# 74 "/usr/include/pthread.h" 2 3 4



# 1 "/usr/include/sys/_types/_mach_port_t.h" 1 3 4
# 49 "/usr/include/sys/_types/_mach_port_t.h" 3 4
typedef __darwin_mach_port_t mach_port_t;
# 78 "/usr/include/pthread.h" 2 3 4
# 208 "/usr/include/pthread.h" 3 4
__attribute__((availability(macosx,introduced=10.4)))
int pthread_atfork(void (*)(void), void (*)(void), void (*)(void));

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_destroy(pthread_attr_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_getdetachstate(const pthread_attr_t *, int *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_getguardsize(const pthread_attr_t * restrict, size_t * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_getinheritsched(const pthread_attr_t * restrict, int * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_getschedparam(const pthread_attr_t * restrict,
  struct sched_param * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_getschedpolicy(const pthread_attr_t * restrict, int * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_getscope(const pthread_attr_t * restrict, int * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_getstack(const pthread_attr_t * restrict, void ** restrict,
  size_t * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_getstackaddr(const pthread_attr_t * restrict, void ** restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_getstacksize(const pthread_attr_t * restrict, size_t * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_init(pthread_attr_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_setdetachstate(pthread_attr_t *, int);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_setguardsize(pthread_attr_t *, size_t);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_setinheritsched(pthread_attr_t *, int);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_setschedparam(pthread_attr_t * restrict,
  const struct sched_param * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_setschedpolicy(pthread_attr_t *, int);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_setscope(pthread_attr_t *, int);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_setstack(pthread_attr_t *, void *, size_t);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_setstackaddr(pthread_attr_t *, void *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_attr_setstacksize(pthread_attr_t *, size_t);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_cancel(pthread_t) __asm("_" "pthread_cancel" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_cond_broadcast(pthread_cond_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_cond_destroy(pthread_cond_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_cond_init(pthread_cond_t * restrict,
  const pthread_condattr_t * restrict) __asm("_" "pthread_cond_init" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_cond_signal(pthread_cond_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_cond_timedwait(pthread_cond_t * restrict, pthread_mutex_t * restrict,
  const struct timespec * restrict) __asm("_" "pthread_cond_timedwait" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_cond_wait(pthread_cond_t * restrict,
  pthread_mutex_t * restrict) __asm("_" "pthread_cond_wait" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_condattr_destroy(pthread_condattr_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_condattr_init(pthread_condattr_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_condattr_getpshared(const pthread_condattr_t * restrict,
  int * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_condattr_setpshared(pthread_condattr_t *, int);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_create(pthread_t * restrict, const pthread_attr_t * restrict,
  void *(*)(void *), void * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_detach(pthread_t);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_equal(pthread_t, pthread_t);

__attribute__((availability(macosx,introduced=10.4)))
void pthread_exit(void *) __attribute__((noreturn));

__attribute__((availability(macosx,introduced=10.4)))
int pthread_getconcurrency(void);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_getschedparam(pthread_t , int * restrict,
  struct sched_param * restrict);

__attribute__((availability(macosx,introduced=10.4)))
void* pthread_getspecific(pthread_key_t);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_join(pthread_t , void **) __asm("_" "pthread_join" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_key_create(pthread_key_t *, void (*)(void *));

__attribute__((availability(macosx,introduced=10.4)))
int pthread_key_delete(pthread_key_t);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutex_destroy(pthread_mutex_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutex_getprioceiling(const pthread_mutex_t * restrict,
  int * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutex_init(pthread_mutex_t * restrict,
  const pthread_mutexattr_t * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutex_lock(pthread_mutex_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutex_setprioceiling(pthread_mutex_t * restrict, int,
  int * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutex_trylock(pthread_mutex_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutex_unlock(pthread_mutex_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutexattr_destroy(pthread_mutexattr_t *) __asm("_" "pthread_mutexattr_destroy" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutexattr_getprioceiling(const pthread_mutexattr_t * restrict,
  int * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutexattr_getprotocol(const pthread_mutexattr_t * restrict,
  int * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutexattr_getpshared(const pthread_mutexattr_t * restrict,
  int * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutexattr_gettype(const pthread_mutexattr_t * restrict,
  int * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutexattr_init(pthread_mutexattr_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutexattr_setprioceiling(pthread_mutexattr_t *, int);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutexattr_setprotocol(pthread_mutexattr_t *, int);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutexattr_setpshared(pthread_mutexattr_t *, int);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_mutexattr_settype(pthread_mutexattr_t *, int);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_once(pthread_once_t *, void (*)(void));

__attribute__((availability(macosx,introduced=10.4)))
int pthread_rwlock_destroy(pthread_rwlock_t * ) __asm("_" "pthread_rwlock_destroy" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_rwlock_init(pthread_rwlock_t * restrict,
  const pthread_rwlockattr_t * restrict) __asm("_" "pthread_rwlock_init" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_rwlock_rdlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_rdlock" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_rwlock_tryrdlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_tryrdlock" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_rwlock_trywrlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_trywrlock" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_rwlock_wrlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_wrlock" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_rwlock_unlock(pthread_rwlock_t *) __asm("_" "pthread_rwlock_unlock" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_rwlockattr_destroy(pthread_rwlockattr_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_rwlockattr_getpshared(const pthread_rwlockattr_t * restrict,
  int * restrict);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_rwlockattr_init(pthread_rwlockattr_t *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_rwlockattr_setpshared(pthread_rwlockattr_t *, int);

__attribute__((availability(macosx,introduced=10.4)))
pthread_t pthread_self(void);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_setcancelstate(int , int *) __asm("_" "pthread_setcancelstate" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_setcanceltype(int , int *) __asm("_" "pthread_setcanceltype" );

__attribute__((availability(macosx,introduced=10.4)))
int pthread_setconcurrency(int);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_setschedparam(pthread_t, int, const struct sched_param *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_setspecific(pthread_key_t , const void *);

__attribute__((availability(macosx,introduced=10.4)))
void pthread_testcancel(void) __asm("_" "pthread_testcancel" );




__attribute__((availability(macosx,introduced=10.4)))
int pthread_is_threaded_np(void);

__attribute__((availability(macosx,introduced=10.6)))
int pthread_threadid_np(pthread_t,__uint64_t*);


__attribute__((availability(macosx,introduced=10.6)))
int pthread_getname_np(pthread_t,char*,size_t);

__attribute__((availability(macosx,introduced=10.6)))
int pthread_setname_np(const char*);


__attribute__((availability(macosx,introduced=10.4)))
int pthread_main_np(void);


__attribute__((availability(macosx,introduced=10.4)))
mach_port_t pthread_mach_thread_np(pthread_t);

__attribute__((availability(macosx,introduced=10.4)))
size_t pthread_get_stacksize_np(pthread_t);

__attribute__((availability(macosx,introduced=10.4)))
void* pthread_get_stackaddr_np(pthread_t);


__attribute__((availability(macosx,introduced=10.4)))
int pthread_cond_signal_thread_np(pthread_cond_t *, pthread_t);


__attribute__((availability(macosx,introduced=10.4)))
int pthread_cond_timedwait_relative_np(pthread_cond_t *, pthread_mutex_t *,
  const struct timespec *);


__attribute__((availability(macosx,introduced=10.4)))
int pthread_create_suspended_np(pthread_t *, const pthread_attr_t *,
  void *(*)(void *), void *);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_kill(pthread_t, int);

__attribute__((availability(macosx,introduced=10.5)))
pthread_t pthread_from_mach_thread_np(mach_port_t);

__attribute__((availability(macosx,introduced=10.4)))
int pthread_sigmask(int, const sigset_t *, sigset_t *) __asm("_" "pthread_sigmask" );

__attribute__((availability(macosx,introduced=10.4)))
void pthread_yield_np(void);
# 5 "./queue.h" 2
typedef struct queue_node_t_ {
 struct queue_node_t_ *next;
 void *data;
} queue_node_t;

typedef struct {
 queue_node_t *front, *back;
 pthread_mutex_t lock;
 void (*data_destroy_cb)(void*);
} queue_t;

queue_t *queue_create();
void queue_push_back(queue_t*, void *);


void *queue_pop_front(queue_t*);

void queue_destroy(queue_t*);

void queue_set_data_destroy_cb(queue_t*, void (*)(void*));

int queue_is_empty(queue_t*);


void *queue_filter(queue_t *queue, int (*asserter)(void*));

void queue_remove_by_data(queue_t *queue, void *data);
# 11 "./parse.h" 2

typedef enum write_option_ {
    TRUNC,
    APPEND,
} write_option;

typedef struct process_ {
    char* program_name;
    char** argument_list;

    char* input_redirection;

    write_option output_option;
    char* output_redirection;

    struct process_* next;
} process;

typedef enum job_mode_ {
    FOREGROUND,
    BACKGROUND,
} job_mode;

typedef enum {
 JOB_FINISHED = 0,
 JOB_STOPPED = 1,
 JOB_RUNNING = 2,
 JOB_NOTRUN
} job_status_t;

typedef struct job_ {
    job_mode mode;
    process* process_list;
    struct job_* next;

 pid_t pid;
 process* curr_process;
 job_status_t status;
 int pipefd[4];
 int current_fd, last_fd;
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
# 11 "parse.c" 2
# 1 "/usr/include/sys/stat.h" 1 3 4
# 110 "/usr/include/sys/stat.h" 3 4
struct ostat {
 __uint16_t st_dev;
 ino_t st_ino;
 mode_t st_mode;
 nlink_t st_nlink;
 __uint16_t st_uid;
 __uint16_t st_gid;
 __uint16_t st_rdev;
 __int32_t st_size;
 struct timespec st_atimespec;
 struct timespec st_mtimespec;
 struct timespec st_ctimespec;
 __int32_t st_blksize;
 __int32_t st_blocks;
 __uint32_t st_flags;
 __uint32_t st_gen;
};
# 182 "/usr/include/sys/stat.h" 3 4
struct stat { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec; off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; };
# 221 "/usr/include/sys/stat.h" 3 4
struct stat64 { dev_t st_dev; mode_t st_mode; nlink_t st_nlink; __darwin_ino64_t st_ino; uid_t st_uid; gid_t st_gid; dev_t st_rdev; struct timespec st_atimespec; struct timespec st_mtimespec; struct timespec st_ctimespec; struct timespec st_birthtimespec; off_t st_size; blkcnt_t st_blocks; blksize_t st_blksize; __uint32_t st_flags; __uint32_t st_gen; __int32_t st_lspare; __int64_t st_qspare[2]; };
# 352 "/usr/include/sys/stat.h" 3 4
int chmod(const char *, mode_t) __asm("_" "chmod" );
int fchmod(int, mode_t) __asm("_" "fchmod" );
int fstat(int, struct stat *) __asm("_" "fstat" "$INODE64");
int lstat(const char *, struct stat *) __asm("_" "lstat" "$INODE64");
int mkdir(const char *, mode_t);
int mkfifo(const char *, mode_t);
int stat(const char *, struct stat *) __asm("_" "stat" "$INODE64");
int mknod(const char *, mode_t, dev_t);
mode_t umask(mode_t);


int fchmodat(int, const char *, mode_t, int) __attribute__((availability(macosx,introduced=10.10)));
int fstatat(int, const char *, struct stat *, int) __asm("_" "fstatat" "$INODE64") __attribute__((availability(macosx,introduced=10.10)));
int mkdirat(int, const char *, mode_t) __attribute__((availability(macosx,introduced=10.10)));






int chflags(const char *, __uint32_t);
int chmodx_np(const char *, filesec_t);
int fchflags(int, __uint32_t);
int fchmodx_np(int, filesec_t);
int fstatx_np(int, struct stat *, filesec_t) __asm("_" "fstatx_np" "$INODE64");
int lchflags(const char *, __uint32_t) __attribute__((availability(macosx,introduced=10.5)));
int lchmod(const char *, mode_t) __attribute__((availability(macosx,introduced=10.5)));
int lstatx_np(const char *, struct stat *, filesec_t) __asm("_" "lstatx_np" "$INODE64");
int mkdirx_np(const char *, filesec_t);
int mkfifox_np(const char *, filesec_t);
int statx_np(const char *, struct stat *, filesec_t) __asm("_" "statx_np" "$INODE64");
int umaskx_np(filesec_t) __attribute__((availability(macosx,introduced=10.4,deprecated=10.6)));



int fstatx64_np(int, struct stat64 *, filesec_t) __attribute__((availability(macosx,introduced=10.5,deprecated=10.6)));
int lstatx64_np(const char *, struct stat64 *, filesec_t) __attribute__((availability(macosx,introduced=10.5,deprecated=10.6)));
int statx64_np(const char *, struct stat64 *, filesec_t) __attribute__((availability(macosx,introduced=10.5,deprecated=10.6)));
int fstat64(int, struct stat64 *) __attribute__((availability(macosx,introduced=10.5,deprecated=10.6)));
int lstat64(const char *, struct stat64 *) __attribute__((availability(macosx,introduced=10.5,deprecated=10.6)));
int stat64(const char *, struct stat64 *) __attribute__((availability(macosx,introduced=10.5,deprecated=10.6)));
# 12 "parse.c" 2


# 1 "./common.h" 1


# 15 "parse.c" 2


char* get_line(char *s, int size) {

 printf("ish$ ");

 while(fgets(s, size, __stdinp) == ((void *)0)) {
  if((*__error()) == 4)
   continue;
  return ((void *)0);
 }

 return s;
}

static char* initialize_program_name(process *p) {

 if(!(p->program_name = (char*)malloc(sizeof(char)*32)))
  return ((void *)0);

 __builtin___memset_chk (p->program_name, 0, 32, __builtin_object_size (p->program_name, 0));

 return p->program_name;
}

static char** initialize_argument_list(process *p) {

 if(!(p->argument_list = (char**)malloc(sizeof(char*)*16)))
  return ((void *)0);

 int i;
 for(i=0; i<16; i++)
  p->argument_list[i] = ((void *)0);

 return p->argument_list;
}

static char* initialize_argument_list_element(process *p, int n) {

 if(!(p->argument_list[n] = (char*)malloc(sizeof(char)*32)))
  return ((void *)0);

 __builtin___memset_chk (p->argument_list[n], 0, 32, __builtin_object_size (p->argument_list[n], 0));

 return p->argument_list[n];
}

static char* initialize_input_redirection(process *p) {

 if(!(p->input_redirection = (char*)malloc(sizeof(char)*32)))
  return ((void *)0);

 __builtin___memset_chk (p->input_redirection, 0, 32, __builtin_object_size (p->input_redirection, 0));

 return p->input_redirection;
}

static char* initialize_output_redirection(process *p) {

 if(!(p->output_redirection = (char*)malloc(sizeof(char)*32)))
  return ((void *)0);

 __builtin___memset_chk (p->output_redirection, 0, 32, __builtin_object_size (p->output_redirection, 0));

 return p->output_redirection;
}

static process* initialize_process() {

 process *p;

 if((p = (process*)malloc(sizeof(process))) == ((void *)0))
  return ((void *)0);

 initialize_program_name(p);
 initialize_argument_list(p);
 initialize_argument_list_element(p, 0);
 p->input_redirection = ((void *)0);
 p->output_option = TRUNC;
 p->output_redirection = ((void *)0);
 p->next = ((void *)0);

 return p;
}

static job* initialize_job() {

 job *j;

 if((j = (job*)malloc(sizeof(job))) == ((void *)0))
  return ((void *)0);

 j->mode = FOREGROUND;
 j->process_list = initialize_process();
 j->next = ((void *)0);
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
  for(i=0; p->argument_list[i] != ((void *)0); i++)
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



job* parse_line(char *buf) {

 job *curr_job = ((void *)0);
 process *curr_prc = ((void *)0);
 parse_state state = ARGUMENT;
 int index=0, arg_index=0;


 while(*buf != '\n') {

  if(*buf == ' ' || *buf == '\t') {
   buf++;
   if(index) {
    index = 0;
    state = ARGUMENT;
    ++arg_index;
   }
  }

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
    __builtin___strcpy_chk (curr_prc->program_name, curr_prc->argument_list[0], __builtin_object_size (curr_prc->program_name, 2 > 1 ? 1 : 0));

    curr_prc->next = initialize_process();
    curr_prc = curr_prc->next;
   }
  }

  else if(*buf == '&') {
   buf++;
   if(curr_job) {
    curr_job->mode = BACKGROUND;
    break;
   }
  }





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


 if(curr_prc)
  __builtin___strcpy_chk (curr_prc->program_name, curr_prc->argument_list[0], __builtin_object_size (curr_prc->program_name, 2 > 1 ? 1 : 0));

 return curr_job;
}

char *get_full_path(char *full_path, char *program_name){
 if (program_name[0] == '/')
  return __builtin___strcpy_chk (full_path, program_name, __builtin_object_size (full_path, 2 > 1 ? 1 : 0));
 int start = 0;
 char *path = getenv("PATH");
 int i;
 for(i = 0; path[i] != '\0'; i++)
  if (path[i] == ':'){
   __builtin___strncpy_chk (full_path, path + start, i - start, __builtin_object_size (full_path, 2 > 1 ? 1 : 0));
   int len = i - start;
   if (full_path[len - 1] != '/'){
    full_path[len] = '/';
    len++;
   }
   __builtin___strcpy_chk (full_path + len, program_name, __builtin_object_size (full_path + len, 2 > 1 ? 1 : 0));
   struct stat sb;
   if (stat(full_path, &sb) == 0 && (sb.st_mode & 0000100 || sb.st_mode & 0000010 || sb.st_mode & 0000001))
    return full_path;
   start = i + 1;
  }
 return ((void *)0);
}


void sigchld_handler(int sig){
 int status;
 waitpid((-1), &status, 0x00000001 | 0x00000002);
}
void setup_zombier_cleaner(){
 struct sigaction handler;
 handler.__sigaction_u.__sa_handler = sigchld_handler;
 handler.sa_flags = 0;
 sigset_t empty;
 (*(&empty) = 0, 0);
 handler.sa_mask = empty;
 sigaction(20, &handler, ((void *)0));
}

void execute_process(process *curr_process, int *pipefd, int *current, int *last, char *envp[]){

 sigset_t mask;
 (*(&mask) = 0, 0);
 (*(&mask) |= __sigbits(2), 0);
 (*(&mask) |= __sigbits(18), 0);
 if ((sigprocmask(2, &mask, ((void *)0))) == -1) perror("parse.c" " at line " S(281) " " "sigprocmask(SIG_UNBLOCK, &mask, NULL)");
 if ((-1) == -1) perror("parse.c" " at line " S(282) " " "-1");

 int fd;
 const int infd = 0, outfd = 1;

 if (curr_process->output_redirection != ((void *)0)){
  mode_t mode = 0000400 | 0000200 | 0000040 | 0000020 | 0000004 | 0000002;
  if (curr_process->output_option == APPEND){
   fd = open(curr_process->output_redirection, 0x0001 | 0x0008 | 0x0200, mode);
  }else{
   fd = open(curr_process->output_redirection, 0x0001 | 0x0200 | 0x0400, mode);
  }
  if (fd == -1){
   perror("open");
   exit(1);
  }
  if (dup2(fd, 1) == -1) perror("dup2");
  if (close(fd) == -1) perror("close");
 }else
  if (curr_process->next != ((void *)0))
   if (dup2(pipefd[*current + outfd], 1) == -1) perror("dup2");

 if (curr_process->input_redirection != ((void *)0)){
  int fd = open(curr_process->input_redirection, 0x0000);
  if (fd == -1){
   perror("open");
   exit(1);
  }else{
   if (dup2(fd, 0) == -1) perror("dup2");
   if (close(fd) == -1) perror("close");
  }
 }
 else if (*last != -1)
  if (dup2(pipefd[*last + infd], 0) == -1) perror("dup2");


 if (*last != -1){
  if (close(pipefd[*last + infd]) == -1) perror("close");
  if (close(pipefd[*last + outfd]) == -1) perror("close");
 }

 if (close(pipefd[*current + infd]) == -1) perror("close");
 if (close(pipefd[*current + outfd]) == -1) perror("close");
 char full_path[256];
 if (!get_full_path(full_path, curr_process->program_name))
  fprintf(__stderrp, "%s\n", "File not found");
 else
  if (execve(full_path, curr_process->argument_list, envp) == -1) perror("execve");
 exit(1);
}


int execute_job_(job *curr_job, char *envp[]){
 process *curr_process;
 int shell_pgrp = getpgrp();
 int job_pgrp = -1;
 const int infd = 0, outfd = 1;


 if (curr_job->status == JOB_NOTRUN){

  curr_job->status = JOB_RUNNING;
  curr_job->current_fd = 0;
  curr_job->last_fd = -1;
 }
 for(curr_process = curr_job->status == JOB_STOPPED ? curr_job->curr_process : curr_job->process_list; curr_process != ((void *)0); curr_process = curr_process->next){
  if (pipe(curr_job->pipefd + curr_job->current_fd) == -1){
   curr_job->status = JOB_FINISHED;
   perror("pipe");
  }

  if (curr_job->status == JOB_STOPPED){
   curr_job->pid = curr_job->pid;

   kill(curr_job->pid, 19);


  }else{
   curr_job->pid = fork();
  }
  curr_job->status = JOB_RUNNING;
  if (curr_job->pid == 0){

   execute_process(curr_process, curr_job->pipefd, &curr_job->current_fd, &curr_job->last_fd, envp);
  }else{
   if (curr_job->pid == -1){
    perror("fork");

    if (close(curr_job->pipefd[curr_job->current_fd + infd]) == -1) perror("close");
    if (close(curr_job->pipefd[curr_job->current_fd + outfd]) == -1) perror("close");
    break;
   }
   else{

    if (job_pgrp == -1){

     job_pgrp = curr_job->pid;
     if (setpgid(curr_job->pid, job_pgrp) == -1)
      perror("setpgid");
     if (curr_job->mode == FOREGROUND){

      if (tcsetpgrp(0, job_pgrp) == -1)
       perror("tcsetgrp");

      setpgid(getpid(), job_pgrp);
     }
    }else
    if (setpgid(curr_job->pid, job_pgrp) == -1)
     perror("setpgid");

    if (curr_job->last_fd != -1){

     if (close(curr_job->pipefd[curr_job->last_fd + infd]) == -1) perror("close");
     if (close(curr_job->pipefd[curr_job->last_fd + outfd]) == -1) perror("close");
    }
    if (curr_process->next == ((void *)0)){

     if (close(curr_job->pipefd[curr_job->current_fd+outfd]) == -1) perror("close");
     if (close(curr_job->pipefd[curr_job->current_fd+infd]) == -1) perror("close");
    }
    if (curr_job->last_fd == -1)
     curr_job->last_fd = 2;
    int status;
    if (waitpid(curr_job->pid, &status, 0x00000002) == -1)
     perror("waitpid");
    if ((((*(int *)&(status)) & 0177) == 0)){


     if ((((*(int *)&(status)) >> 8) & 0x000000ff)){

      if (curr_process->next != ((void *)0)){
       fprintf(__stderrp, "Interrupted due to error\n");
       break;
      }
     }
    }else if ((((*(int *)&(status)) & 0177) != 0177 && ((*(int *)&(status)) & 0177) != 0)){


     break;
    }else{




     curr_job->status = JOB_STOPPED;

     break;
    }
    int tmp = curr_job->current_fd;
    curr_job->current_fd = curr_job->last_fd;
    curr_job->last_fd = tmp;
   }
  }
 }



 if (curr_job->mode == FOREGROUND){
  if (tcsetpgrp(0, shell_pgrp) == -1)
   perror("tcsetpgrp");

  setpgid(getpid(), shell_pgrp);
 }
 if (curr_job->status != JOB_STOPPED){
  curr_job->status = JOB_FINISHED;
 }
 return curr_job->status;
}

void setup_job_handler(){

 sigset_t mask;
 (*(&mask) = 0, 0);
 (*(&mask) |= __sigbits(2), 0);
 (*(&mask) |= __sigbits(18), 0);
 if (sigprocmask(1, &mask, ((void *)0)) == -1)
  perror("sigprocmask");


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
 return ((void *)0);
}



void execute_job_list(job* curr_job, char *envp[], queue_t *background_jobs){

 int is_first_run = curr_job->status == JOB_NOTRUN;
 execute_job_arg *arg = malloc(sizeof(execute_job_arg));
 arg->curr_job = curr_job;
 arg->envp = envp;
 arg->background_jobs = background_jobs;
 pthread_t thread;
 if (pthread_create(&thread, ((void *)0), execute_job_cb, arg) == -1){
  perror("pthread_create");
  free_job(curr_job);
  free(arg);
 }else{


 if (curr_job->mode == FOREGROUND){

  void *result;
  pthread_join(thread, &result);
  if (curr_job->status == JOB_STOPPED){

   if (!is_first_run)
    queue_push_back(background_jobs, curr_job);
  }else{

   if (!is_first_run){

    queue_remove_by_data(background_jobs, curr_job);
   }
   else
    free_job(curr_job);

  }
 }else{


  if (is_first_run)


   queue_push_back(background_jobs, curr_job);
  else{



  }
 }
}


}
int stopped_job_filter(void *vjob){
 job *jjob = vjob;
 return jjob->status == JOB_STOPPED;
}




int job_bg(char *envp[], queue_t *background_jobs){
 job *curr_job = queue_filter(background_jobs, stopped_job_filter);
 if (curr_job == ((void *)0))
  return 0;
 execute_job_list(curr_job, envp, background_jobs);
 return 1;
}



int job_fg(char *envp[], queue_t *background_jobs){
 return 0;
}
