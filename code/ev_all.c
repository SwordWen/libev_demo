# 1 "ev.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "ev.c"
# 45 "ev.c"
# 1 "config.h" 1
# 46 "ev.c" 2
# 167 "ev.c"
# 1 "/usr/include/stdlib.h" 1 3 4
# 24 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 367 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 410 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 411 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 368 "/usr/include/features.h" 2 3 4
# 391 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 392 "/usr/include/features.h" 2 3 4
# 25 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4

# 216 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 328 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
typedef int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 64 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 65 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 43 "/usr/include/stdlib.h" 2 3 4
# 67 "/usr/include/stdlib.h" 3 4
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
# 95 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 98 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 146 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 147 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 44 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 64 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 106 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 131 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4


__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 58 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4

# 223 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
# 125 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    signed char __rwelision;




    unsigned char __pad1[7];


    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 220 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 315 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 493 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;




extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));







extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;

# 578 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 619 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 641 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 662 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 711 "/usr/include/stdlib.h" 3 4





extern int system (const char *__command) ;

# 733 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 751 "/usr/include/stdlib.h" 3 4



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 774 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

# 811 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));








extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 898 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 950 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 955 "/usr/include/stdlib.h" 2 3 4
# 967 "/usr/include/stdlib.h" 3 4

# 168 "ev.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 92 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 123 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 160 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 206 "/usr/include/string.h" 3 4

# 231 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 258 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 277 "/usr/include/string.h" 3 4



extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 310 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 337 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 392 "/usr/include/string.h" 3 4


extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

# 422 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
# 440 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 484 "/usr/include/string.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 512 "/usr/include/string.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 529 "/usr/include/string.h" 3 4
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 552 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 658 "/usr/include/string.h" 3 4

# 169 "ev.c" 2
# 1 "/usr/include/fcntl.h" 1 3 4
# 28 "/usr/include/fcntl.h" 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4
struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };
# 61 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 1 3 4
# 363 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4

# 437 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4

# 61 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 2 3 4
# 36 "/usr/include/fcntl.h" 2 3 4
# 76 "/usr/include/fcntl.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 77 "/usr/include/fcntl.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 91 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 106 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];
# 115 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
  };
# 78 "/usr/include/fcntl.h" 2 3 4
# 146 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 156 "/usr/include/fcntl.h" 3 4
extern int open (const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 180 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 202 "/usr/include/fcntl.h" 3 4
extern int creat (const char *__file, mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 231 "/usr/include/fcntl.h" 3 4
extern int lockf (int __fd, int __cmd, off_t __len);
# 248 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) __attribute__ ((__nothrow__ , __leaf__));
# 270 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);
# 292 "/usr/include/fcntl.h" 3 4

# 170 "ev.c" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 149 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 426 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
# 171 "ev.c" 2

# 1 "/usr/include/stdio.h" 1 3 4
# 29 "/usr/include/stdio.h" 3 4




# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;





typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 173 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 241 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 289 "/usr/include/libio.h" 3 4
  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 333 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 385 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 429 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 459 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 108 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;




# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) ;
# 209 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 266 "/usr/include/stdio.h" 3 4






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 295 "/usr/include/stdio.h" 3 4

# 306 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 319 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 412 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 443 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 463 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 494 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 522 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 640 "/usr/include/stdio.h" 3 4

# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 792 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 815 "/usr/include/stdio.h" 3 4

# 824 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;








extern void perror (const char *__s);






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 872 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 912 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 942 "/usr/include/stdio.h" 3 4

# 173 "ev.c" 2

# 1 "/usr/include/assert.h" 1 3 4
# 66 "/usr/include/assert.h" 3 4



extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



# 175 "ev.c" 2
# 1 "/usr/include/errno.h" 1 3 4
# 31 "/usr/include/errno.h" 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/errno.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 2 3 4
# 1 "/usr/include/linux/errno.h" 2 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/errno.h" 2 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
extern int *__errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 36 "/usr/include/errno.h" 2 3 4
# 58 "/usr/include/errno.h" 3 4

# 176 "ev.c" 2

# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4








# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 38 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 42 "/usr/include/time.h" 2 3 4
# 131 "/usr/include/time.h" 3 4


struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
# 186 "/usr/include/time.h" 3 4



extern clock_t clock (void) __attribute__ ((__nothrow__ , __leaf__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));

# 223 "/usr/include/time.h" 3 4
extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
# 236 "/usr/include/time.h" 3 4



extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));





extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));





extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));







extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__ , __leaf__));



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) __attribute__ ((__nothrow__ , __leaf__));
# 319 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int dysize (int __year) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 334 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __attribute__ ((__nothrow__ , __leaf__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ , __leaf__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ , __leaf__));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));





extern int timespec_get (struct timespec *__ts, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 430 "/usr/include/time.h" 3 4

# 178 "ev.c" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 1 3 4
# 168 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 143 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 1 3 4
# 160 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4
# 161 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 144 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 148 "/usr/include/limits.h" 2 3 4
# 169 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-linux-gnu/5/include-fixed/limits.h" 2 3 4
# 179 "ev.c" 2

# 1 "/usr/include/signal.h" 1 3 4
# 30 "/usr/include/signal.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 102 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
extern int __sigismember (const __sigset_t *, int);
extern int __sigaddset (__sigset_t *, int);
extern int __sigdelset (__sigset_t *, int);
# 33 "/usr/include/signal.h" 2 3 4







typedef __sig_atomic_t sig_atomic_t;

# 57 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/signum.h" 1 3 4
# 58 "/usr/include/signal.h" 2 3 4
# 80 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 2 3 4







typedef union sigval
  {
    int sival_int;
    void *sival_ptr;
  } sigval_t;
# 58 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
typedef __clock_t __sigchld_clock_t;



typedef struct
  {
    int si_signo;
    int si_errno;

    int si_code;

    union
      {
 int _pad[((128 / sizeof (int)) - 4)];


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;


 struct
   {
     int si_tid;
     int si_overrun;
     sigval_t si_sigval;
   } _timer;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     sigval_t si_sigval;
   } _rt;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __sigchld_clock_t si_utime;
     __sigchld_clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;
     short int si_addr_lsb;
     struct
       {
  void *_lower;
  void *_upper;
       } si_addr_bnd;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;


 struct
   {
     void *_call_addr;
     int _syscall;
     unsigned int _arch;
   } _sigsys;
      } _sifields;
  } siginfo_t ;
# 160 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
enum
{
  SI_ASYNCNL = -60,

  SI_TKILL = -6,

  SI_SIGIO,

  SI_ASYNCIO,

  SI_MESGQ,

  SI_TIMER,

  SI_QUEUE,

  SI_USER,

  SI_KERNEL = 0x80

};




enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK

};


enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB

};


enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR

};


enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR,

  BUS_MCEERR_AR,

  BUS_MCEERR_AO

};
# 264 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};


enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};
# 320 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
typedef struct sigevent
  {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 4)];



 __pid_t _tid;

 struct
   {
     void (*_function) (sigval_t);
     pthread_attr_t *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;






enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,


  SIGEV_THREAD_ID = 4

};
# 81 "/usr/include/signal.h" 2 3 4




typedef void (*__sighandler_t) (int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
# 100 "/usr/include/signal.h" 3 4


extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
# 114 "/usr/include/signal.h" 3 4

# 127 "/usr/include/signal.h" 3 4
extern int kill (__pid_t __pid, int __sig) __attribute__ ((__nothrow__ , __leaf__));






extern int killpg (__pid_t __pgrp, int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern int raise (int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
extern int gsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern void psignal (int __sig, const char *__s);


extern void psiginfo (const siginfo_t *__pinfo, const char *__s);
# 187 "/usr/include/signal.h" 3 4
extern int sigblock (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int siggetmask (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
# 207 "/usr/include/signal.h" 3 4
typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigismember (const sigset_t *__set, int __signo)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 243 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 3 4
struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (void);
  };
# 244 "/usr/include/signal.h" 2 3 4


extern int sigprocmask (int __how, const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) __attribute__ ((__nothrow__ , __leaf__));






extern int sigsuspend (const sigset_t *__set) __attribute__ ((__nonnull__ (1)));


extern int sigaction (int __sig, const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) __attribute__ ((__nothrow__ , __leaf__));


extern int sigpending (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sigwait (const sigset_t *__restrict __set, int *__restrict __sig)
     __attribute__ ((__nonnull__ (1, 2)));






extern int sigwaitinfo (const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) __attribute__ ((__nonnull__ (1)));






extern int sigtimedwait (const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    const struct timespec *__restrict __timeout)
     __attribute__ ((__nonnull__ (1)));



extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     __attribute__ ((__nothrow__ , __leaf__));
# 301 "/usr/include/signal.h" 3 4
extern const char *const _sys_siglist[65];
extern const char *const sys_siglist[65];



# 1 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
struct _fpx_sw_bytes
{
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t padding[7];
};

struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short padding[3];
};

struct _xmmreg
{
  __uint32_t element[4];
};
# 121 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
struct _fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _fpxreg _st[8];
  struct _xmmreg _xmm[16];
  __uint32_t padding[24];
};

struct sigcontext
{
  __uint64_t r8;
  __uint64_t r9;
  __uint64_t r10;
  __uint64_t r11;
  __uint64_t r12;
  __uint64_t r13;
  __uint64_t r14;
  __uint64_t r15;
  __uint64_t rdi;
  __uint64_t rsi;
  __uint64_t rbp;
  __uint64_t rbx;
  __uint64_t rdx;
  __uint64_t rax;
  __uint64_t rcx;
  __uint64_t rsp;
  __uint64_t rip;
  __uint64_t eflags;
  unsigned short cs;
  unsigned short gs;
  unsigned short fs;
  unsigned short __pad0;
  __uint64_t err;
  __uint64_t trapno;
  __uint64_t oldmask;
  __uint64_t cr2;
  __extension__ union
    {
      struct _fpstate * fpstate;
      __uint64_t __fpstate_word;
    };
  __uint64_t __reserved1 [8];
};



struct _xsave_hdr
{
  __uint64_t xstate_bv;
  __uint64_t reserved1[2];
  __uint64_t reserved2[5];
};

struct _ymmh_state
{
  __uint32_t ymmh_space[64];
};

struct _xstate
{
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};
# 307 "/usr/include/signal.h" 2 3 4


extern int sigreturn (struct sigcontext *__scp) __attribute__ ((__nothrow__ , __leaf__));






# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 317 "/usr/include/signal.h" 2 3 4




extern int siginterrupt (int __sig, int __interrupt) __attribute__ ((__nothrow__ , __leaf__));

# 1 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 3 4
struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };



enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
# 49 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 3 4
typedef struct sigaltstack
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
# 324 "/usr/include/signal.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
__extension__ typedef long long int greg_t;





typedef greg_t gregset_t[23];
# 92 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
struct _libc_fpxreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
  unsigned short int padding[3];
};

struct _libc_xmmreg
{
  __uint32_t element[4];
};

struct _libc_fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t padding[24];
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;

    fpregset_t fpregs;
    __extension__ unsigned long long __reserved1 [8];
} mcontext_t;


typedef struct ucontext
  {
    unsigned long int uc_flags;
    struct ucontext *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    __sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
  } ucontext_t;
# 327 "/usr/include/signal.h" 2 3 4





extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));



extern int sigaltstack (const struct sigaltstack *__restrict __ss,
   struct sigaltstack *__restrict __oss) __attribute__ ((__nothrow__ , __leaf__));
# 362 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__ , __leaf__));


extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__ , __leaf__));
# 363 "/usr/include/signal.h" 2 3 4






extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__ , __leaf__));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__ , __leaf__));




# 181 "ev.c" 2




# 1 "ev.h" 1
# 55 "ev.h"

# 153 "ev.h"

# 153 "ev.h"
typedef double ev_tstamp;
# 167 "ev.h"
# 1 "/usr/include/x86_64-linux-gnu/sys/stat.h" 1 3 4
# 102 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 105 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4
# 208 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4

# 208 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 237 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 262 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 283 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ , __leaf__));





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ , __leaf__));
# 320 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int mkdir (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, const struct timespec __times[2]) __attribute__ ((__nothrow__ , __leaf__));
# 398 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, const char *__filename,
      struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, const char *__filename,
       struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, const char *__filename,
         struct stat *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4)));
# 441 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 5)));
# 533 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4

# 168 "ev.h" 2





# 172 "ev.h"
struct ev_loop;
# 217 "ev.h"
enum {
  EV_UNDEF = (int)0xFFFFFFFF,
  EV_NONE = 0x00,
  EV_READ = 0x01,
  EV_WRITE = 0x02,
  EV__IOFDSET = 0x80,
  EV_IO = EV_READ,
  EV_TIMER = 0x00000100,

  EV_TIMEOUT = EV_TIMER,

  EV_PERIODIC = 0x00000200,
  EV_SIGNAL = 0x00000400,
  EV_CHILD = 0x00000800,
  EV_STAT = 0x00001000,
  EV_IDLE = 0x00002000,
  EV_PREPARE = 0x00004000,
  EV_CHECK = 0x00008000,
  EV_EMBED = 0x00010000,
  EV_FORK = 0x00020000,
  EV_CLEANUP = 0x00040000,
  EV_ASYNC = 0x00080000,
  EV_CUSTOM = 0x01000000,
  EV_ERROR = (int)0x80000000
};
# 298 "ev.h"
typedef struct ev_watcher
{
  int active; int pending; int priority; void *data; void (*cb)(struct ev_loop *loop, struct ev_watcher *w, int revents);
} ev_watcher;


typedef struct ev_watcher_list
{
  int active; int pending; int priority; void *data; void (*cb)(struct ev_loop *loop, struct ev_watcher_list *w, int revents); struct ev_watcher_list *next;
} ev_watcher_list;


typedef struct ev_watcher_time
{
  int active; int pending; int priority; void *data; void (*cb)(struct ev_loop *loop, struct ev_watcher_time *w, int revents); ev_tstamp at;
} ev_watcher_time;



typedef struct ev_io
{
  int active; int pending; int priority; void *data; void (*cb)(struct ev_loop *loop, struct ev_io *w, int revents); struct ev_watcher_list *next;

  int fd;
  int events;
} ev_io;



typedef struct ev_timer
{
  int active; int pending; int priority; void *data; void (*cb)(struct ev_loop *loop, struct ev_timer *w, int revents); ev_tstamp at;

  ev_tstamp repeat;
} ev_timer;



typedef struct ev_periodic
{
  int active; int pending; int priority; void *data; void (*cb)(struct ev_loop *loop, struct ev_periodic *w, int revents); ev_tstamp at;

  ev_tstamp offset;
  ev_tstamp interval;
  ev_tstamp (*reschedule_cb)(struct ev_periodic *w, ev_tstamp now) ;
} ev_periodic;



typedef struct ev_signal
{
  int active; int pending; int priority; void *data; void (*cb)(struct ev_loop *loop, struct ev_signal *w, int revents); struct ev_watcher_list *next;

  int signum;
} ev_signal;




typedef struct ev_child
{
  int active; int pending; int priority; void *data; void (*cb)(struct ev_loop *loop, struct ev_child *w, int revents); struct ev_watcher_list *next;

  int flags;
  int pid;
  int rpid;
  int rstatus;
} ev_child;






typedef struct stat ev_statdata;




typedef struct ev_stat
{
  int active; int pending; int priority; void *data; void (*cb)(struct ev_loop *loop, struct ev_stat *w, int revents); struct ev_watcher_list *next;

  ev_timer timer;
  ev_tstamp interval;
  const char *path;
  ev_statdata prev;
  ev_statdata attr;

  int wd;
} ev_stat;





typedef struct ev_idle
{
  int active; int pending; int priority; void *data; void (*cb)(struct ev_loop *loop, struct ev_idle *w, int revents);
} ev_idle;





typedef struct ev_prepare
{
  int active; int pending; int priority; void *data; void (*cb)(struct ev_loop *loop, struct ev_prepare *w, int revents);
} ev_prepare;



typedef struct ev_check
{
  int active; int pending; int priority; void *data; void (*cb)(struct ev_loop *loop, struct ev_check *w, int revents);
} ev_check;




typedef struct ev_fork
{
  int active; int pending; int priority; void *data; void (*cb)(struct ev_loop *loop, struct ev_fork *w, int revents);
} ev_fork;





typedef struct ev_cleanup
{
  int active; int pending; int priority; void *data; void (*cb)(struct ev_loop *loop, struct ev_cleanup *w, int revents);
} ev_cleanup;





typedef struct ev_embed
{
  int active; int pending; int priority; void *data; void (*cb)(struct ev_loop *loop, struct ev_embed *w, int revents);

  struct ev_loop *other;
  ev_io io;
  ev_prepare prepare;
  ev_check check;
  ev_timer timer;
  ev_periodic periodic;
  ev_idle idle;
  ev_fork fork;

  ev_cleanup cleanup;

} ev_embed;





typedef struct ev_async
{
  int active; int pending; int priority; void *data; void (*cb)(struct ev_loop *loop, struct ev_async *w, int revents);

  sig_atomic_t volatile sent;
} ev_async;





union ev_any_watcher
{
  struct ev_watcher w;
  struct ev_watcher_list wl;

  struct ev_io io;
  struct ev_timer timer;
  struct ev_periodic periodic;
  struct ev_signal signal;
  struct ev_child child;

  struct ev_stat stat;


  struct ev_idle idle;

  struct ev_prepare prepare;
  struct ev_check check;

  struct ev_fork fork;


  struct ev_cleanup cleanup;


  struct ev_embed embed;


  struct ev_async async;

};


enum {

  EVFLAG_AUTO = 0x00000000U,

  EVFLAG_NOENV = 0x01000000U,
  EVFLAG_FORKCHECK = 0x02000000U,

  EVFLAG_NOINOTIFY = 0x00100000U,

  EVFLAG_NOSIGFD = 0,

  EVFLAG_SIGNALFD = 0x00200000U,
  EVFLAG_NOSIGMASK = 0x00400000U
};


enum {
  EVBACKEND_SELECT = 0x00000001U,
  EVBACKEND_POLL = 0x00000002U,
  EVBACKEND_EPOLL = 0x00000004U,
  EVBACKEND_KQUEUE = 0x00000008U,
  EVBACKEND_DEVPOLL = 0x00000010U,
  EVBACKEND_PORT = 0x00000020U,
  EVBACKEND_ALL = 0x0000003FU,
  EVBACKEND_MASK = 0x0000FFFFU
};


extern int ev_version_major (void) ;
extern int ev_version_minor (void) ;

extern unsigned int ev_supported_backends (void) ;
extern unsigned int ev_recommended_backends (void) ;
extern unsigned int ev_embeddable_backends (void) ;

extern ev_tstamp ev_time (void) ;
extern void ev_sleep (ev_tstamp delay) ;







extern void ev_set_allocator (void *(*cb)(void *ptr, long size) ) ;





extern void ev_set_syserr_cb (void (*cb)(const char *msg) ) ;





extern struct ev_loop *ev_default_loop (unsigned int flags ) ;





static inline struct ev_loop *
ev_default_loop_uc_ (void)
{
  extern struct ev_loop *ev_default_loop_ptr;

  return ev_default_loop_ptr;
}

static inline int
ev_is_default_loop (struct ev_loop *loop)
{
  return loop == ev_default_loop_uc_ ();
}


extern struct ev_loop *ev_loop_new (unsigned int flags ) ;

extern ev_tstamp ev_now (struct ev_loop *loop) ;
# 604 "ev.h"
extern void ev_loop_destroy (struct ev_loop *loop);





extern void ev_loop_fork (struct ev_loop *loop) ;

extern unsigned int ev_backend (struct ev_loop *loop) ;

extern void ev_now_update (struct ev_loop *loop) ;
# 626 "ev.h"
enum {
  EVRUN_NOWAIT = 1,
  EVRUN_ONCE = 2
};


enum {
  EVBREAK_CANCEL = 0,
  EVBREAK_ONE = 1,
  EVBREAK_ALL = 2
};


extern int ev_run (struct ev_loop *loop, int flags );
extern void ev_break (struct ev_loop *loop, int how ) ;






extern void ev_ref (struct ev_loop *loop) ;
extern void ev_unref (struct ev_loop *loop) ;





extern void ev_once (struct ev_loop *loop, int fd, int events, ev_tstamp timeout, void (*cb)(int revents, void *arg), void *arg) ;


extern unsigned int ev_iteration (struct ev_loop *loop) ;
extern unsigned int ev_depth (struct ev_loop *loop) ;
extern void ev_verify (struct ev_loop *loop) ;

extern void ev_set_io_collect_interval (struct ev_loop *loop, ev_tstamp interval) ;
extern void ev_set_timeout_collect_interval (struct ev_loop *loop, ev_tstamp interval) ;


extern void ev_set_userdata (struct ev_loop *loop, void *data) ;
extern void *ev_userdata (struct ev_loop *loop) ;
typedef void (*ev_loop_callback)(struct ev_loop *loop);
extern void ev_set_invoke_pending_cb (struct ev_loop *loop, ev_loop_callback invoke_pending_cb) ;

extern void ev_set_loop_release_cb (struct ev_loop *loop, void (*release)(struct ev_loop *loop) , void (*acquire)(struct ev_loop *loop) ) ;

extern unsigned int ev_pending_count (struct ev_loop *loop) ;
extern void ev_invoke_pending (struct ev_loop *loop);




extern void ev_suspend (struct ev_loop *loop) ;
extern void ev_resume (struct ev_loop *loop) ;
# 747 "ev.h"
extern void ev_feed_event (struct ev_loop *loop, void *w, int revents) ;
extern void ev_feed_fd_event (struct ev_loop *loop, int fd, int revents) ;

extern void ev_feed_signal (int signum) ;
extern void ev_feed_signal_event (struct ev_loop *loop, int signum) ;

extern void ev_invoke (struct ev_loop *loop, void *w, int revents);
extern int ev_clear_pending (struct ev_loop *loop, void *w) ;

extern void ev_io_start (struct ev_loop *loop, ev_io *w) ;
extern void ev_io_stop (struct ev_loop *loop, ev_io *w) ;

extern void ev_timer_start (struct ev_loop *loop, ev_timer *w) ;
extern void ev_timer_stop (struct ev_loop *loop, ev_timer *w) ;

extern void ev_timer_again (struct ev_loop *loop, ev_timer *w) ;

extern ev_tstamp ev_timer_remaining (struct ev_loop *loop, ev_timer *w) ;


extern void ev_periodic_start (struct ev_loop *loop, ev_periodic *w) ;
extern void ev_periodic_stop (struct ev_loop *loop, ev_periodic *w) ;
extern void ev_periodic_again (struct ev_loop *loop, ev_periodic *w) ;




extern void ev_signal_start (struct ev_loop *loop, ev_signal *w) ;
extern void ev_signal_stop (struct ev_loop *loop, ev_signal *w) ;




extern void ev_child_start (struct ev_loop *loop, ev_child *w) ;
extern void ev_child_stop (struct ev_loop *loop, ev_child *w) ;



extern void ev_stat_start (struct ev_loop *loop, ev_stat *w) ;
extern void ev_stat_stop (struct ev_loop *loop, ev_stat *w) ;
extern void ev_stat_stat (struct ev_loop *loop, ev_stat *w) ;



extern void ev_idle_start (struct ev_loop *loop, ev_idle *w) ;
extern void ev_idle_stop (struct ev_loop *loop, ev_idle *w) ;



extern void ev_prepare_start (struct ev_loop *loop, ev_prepare *w) ;
extern void ev_prepare_stop (struct ev_loop *loop, ev_prepare *w) ;



extern void ev_check_start (struct ev_loop *loop, ev_check *w) ;
extern void ev_check_stop (struct ev_loop *loop, ev_check *w) ;



extern void ev_fork_start (struct ev_loop *loop, ev_fork *w) ;
extern void ev_fork_stop (struct ev_loop *loop, ev_fork *w) ;



extern void ev_cleanup_start (struct ev_loop *loop, ev_cleanup *w) ;
extern void ev_cleanup_stop (struct ev_loop *loop, ev_cleanup *w) ;




extern void ev_embed_start (struct ev_loop *loop, ev_embed *w) ;
extern void ev_embed_stop (struct ev_loop *loop, ev_embed *w) ;
extern void ev_embed_sweep (struct ev_loop *loop, ev_embed *w) ;



extern void ev_async_start (struct ev_loop *loop, ev_async *w) ;
extern void ev_async_stop (struct ev_loop *loop, ev_async *w) ;
extern void ev_async_send (struct ev_loop *loop, ev_async *w) ;
# 835 "ev.h"
    static inline void ev_loop (struct ev_loop *loop, int flags) { ev_run (loop, flags); }
    static inline void ev_unloop (struct ev_loop *loop, int how ) { ev_break (loop, how ); }
    static inline void ev_default_destroy (void) { ev_loop_destroy (ev_default_loop (0)); }
    static inline void ev_default_fork (void) { ev_loop_fork (ev_default_loop (0)); }

      static inline unsigned int ev_loop_count (struct ev_loop *loop) { return ev_iteration (loop); }
      static inline unsigned int ev_loop_depth (struct ev_loop *loop) { return ev_depth (loop); }
      static inline void ev_loop_verify (struct ev_loop *loop) { ev_verify (loop); }
# 851 "ev.h"

# 186 "ev.c" 2
# 200 "ev.c"
# 1 "/usr/include/x86_64-linux-gnu/sys/time.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/sys/time.h" 2 3 4
# 37 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4

# 55 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4

# 55 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };

typedef struct timezone *__restrict __timezone_ptr_t;
# 71 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
extern int gettimeofday (struct timeval *__restrict __tv,
    __timezone_ptr_t __tz) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int settimeofday (const struct timeval *__tv,
    const struct timezone *__tz)
     __attribute__ ((__nothrow__ , __leaf__));





extern int adjtime (const struct timeval *__delta,
      struct timeval *__olddelta) __attribute__ ((__nothrow__ , __leaf__));




enum __itimer_which
  {

    ITIMER_REAL = 0,


    ITIMER_VIRTUAL = 1,



    ITIMER_PROF = 2

  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };






typedef int __itimer_which_t;




extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) __attribute__ ((__nothrow__ , __leaf__));




extern int setitimer (__itimer_which_t __which,
        const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) __attribute__ ((__nothrow__ , __leaf__));




extern int utimes (const char *__file, const struct timeval __tvp[2])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int lutimes (const char *__file, const struct timeval __tvp[2])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int futimes (int __fd, const struct timeval __tvp[2]) __attribute__ ((__nothrow__ , __leaf__));
# 189 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4

# 201 "ev.c" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/wait.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4

# 102 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
extern __pid_t wait (__WAIT_STATUS __stat_loc);
# 125 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
extern __pid_t waitpid (__pid_t __pid, int *__stat_loc, int __options);
# 135 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 2 3 4
# 136 "/usr/include/x86_64-linux-gnu/sys/wait.h" 2 3 4
# 148 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
extern int waitid (idtype_t __idtype, __id_t __id, siginfo_t *__infop,
     int __options);





struct rusage;






extern __pid_t wait3 (__WAIT_STATUS __stat_loc, int __options,
        struct rusage * __usage) __attribute__ ((__nothrow__));




extern __pid_t wait4 (__pid_t __pid, __WAIT_STATUS __stat_loc, int __options,
        struct rusage *__usage) __attribute__ ((__nothrow__));




# 202 "ev.c" 2
# 1 "/usr/include/unistd.h" 1 3 4
# 27 "/usr/include/unistd.h" 3 4

# 205 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix_opt.h" 1 3 4
# 206 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/environments.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/environments.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/environments.h" 2 3 4
# 210 "/usr/include/unistd.h" 2 3 4
# 229 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 230 "/usr/include/unistd.h" 2 3 4
# 258 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;
# 270 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 290 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 307 "/usr/include/unistd.h" 3 4
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;
# 337 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ , __leaf__));
# 356 "/usr/include/unistd.h" 3 4
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
# 379 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
# 420 "/usr/include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 435 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ , __leaf__));
# 447 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ , __leaf__));






extern int usleep (__useconds_t __useconds);
# 472 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;
# 514 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ , __leaf__)) ;
# 528 "/usr/include/unistd.h" 3 4
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));
# 546 "/usr/include/unistd.h" 3 4
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 601 "/usr/include/unistd.h" 3 4
extern int nice (int __inc) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/x86_64-linux-gnu/bits/confname.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 613 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ , __leaf__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ , __leaf__));
# 663 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__ , __leaf__));






extern __pid_t setsid (void) __attribute__ ((__nothrow__ , __leaf__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__ , __leaf__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 703 "/usr/include/unistd.h" 3 4
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;
# 759 "/usr/include/unistd.h" 3 4
extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ , __leaf__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__ , __leaf__));





extern int ttyslot (void) __attribute__ ((__nothrow__ , __leaf__));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ , __leaf__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ , __leaf__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 874 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 57 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 71 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 150 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__));
# 875 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__ , __leaf__)) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__ , __leaf__));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__ , __leaf__));



extern char *getusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void endusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void setusershell (void) __attribute__ ((__nothrow__ , __leaf__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int chroot (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);
# 972 "/usr/include/unistd.h" 3 4
extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));





extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
# 996 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 1019 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ , __leaf__)) ;
# 1040 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
# 1061 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
# 1115 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
# 1154 "/usr/include/unistd.h" 3 4

# 203 "ev.c" 2
# 423 "ev.c"
# 1 "/usr/include/x86_64-linux-gnu/sys/statfs.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/statfs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/statfs.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/statfs.h" 3 4
struct statfs
  {
    __fsword_t f_type;
    __fsword_t f_bsize;

    __fsblkcnt_t f_blocks;
    __fsblkcnt_t f_bfree;
    __fsblkcnt_t f_bavail;
    __fsfilcnt_t f_files;
    __fsfilcnt_t f_ffree;







    __fsid_t f_fsid;
    __fsword_t f_namelen;
    __fsword_t f_frsize;
    __fsword_t f_flags;
    __fsword_t f_spare[4];
  };
# 26 "/usr/include/x86_64-linux-gnu/sys/statfs.h" 2 3 4





extern int statfs (const char *__file, struct statfs *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 50 "/usr/include/x86_64-linux-gnu/sys/statfs.h" 3 4
extern int fstatfs (int __fildes, struct statfs *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 65 "/usr/include/x86_64-linux-gnu/sys/statfs.h" 3 4

# 424 "ev.c" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/inotify.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/sys/inotify.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 48 "/usr/include/stdint.h" 3 4
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
# 65 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 90 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 103 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 122 "/usr/include/stdint.h" 3 4
typedef unsigned long int uintptr_t;
# 134 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 10 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdint.h" 2 3 4
# 22 "/usr/include/x86_64-linux-gnu/sys/inotify.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/inotify.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/inotify.h" 3 4
enum
  {
    IN_CLOEXEC = 02000000,

    IN_NONBLOCK = 00004000

  };
# 25 "/usr/include/x86_64-linux-gnu/sys/inotify.h" 2 3 4



struct inotify_event
{
  int wd;
  uint32_t mask;
  uint32_t cookie;
  uint32_t len;
  char name [];
};
# 81 "/usr/include/x86_64-linux-gnu/sys/inotify.h" 3 4



extern int inotify_init (void) __attribute__ ((__nothrow__ , __leaf__));


extern int inotify_init1 (int __flags) __attribute__ ((__nothrow__ , __leaf__));



extern int inotify_add_watch (int __fd, const char *__name, uint32_t __mask)
  __attribute__ ((__nothrow__ , __leaf__));


extern int inotify_rm_watch (int __fd, int __wd) __attribute__ ((__nothrow__ , __leaf__));


# 425 "ev.c" 2
# 445 "ev.c"
 
# 445 "ev.c"
                  int (eventfd) (unsigned int initval, int flags);
# 461 "ev.c"
 int signalfd (int fd, const sigset_t *mask, int flags);

struct signalfd_siginfo
{
  uint32_t ssi_signo;
  char pad[128 - sizeof (uint32_t)];
};
# 563 "ev.c"
# 1 "/usr/include/inttypes.h" 1 3 4
# 34 "/usr/include/inttypes.h" 3 4

# 34 "/usr/include/inttypes.h" 3 4
typedef int __gwchar_t;
# 266 "/usr/include/inttypes.h" 3 4





typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
# 290 "/usr/include/inttypes.h" 3 4
extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));
# 432 "/usr/include/inttypes.h" 3 4

# 564 "ev.c" 2
# 813 "ev.c"

# 813 "ev.c"
typedef int ecb_bool;
# 1022 "ev.c"
static __inline__ __attribute__ ((__const__)) ecb_bool ecb_is_pot32 (uint32_t x);
static __inline__ __attribute__ ((__const__)) ecb_bool ecb_is_pot32 (uint32_t x) { return !(x & (x - 1)); }
static __inline__ __attribute__ ((__const__)) ecb_bool ecb_is_pot64 (uint64_t x);
static __inline__ __attribute__ ((__const__)) ecb_bool ecb_is_pot64 (uint64_t x) { return !(x & (x - 1)); }

static __inline__ __attribute__ ((__const__)) uint8_t ecb_bitrev8 (uint8_t x);
static __inline__ __attribute__ ((__const__)) uint8_t ecb_bitrev8 (uint8_t x)
{
  return ( (x * 0x0802U & 0x22110U)
          | (x * 0x8020U & 0x88440U)) * 0x10101U >> 16;
}

static __inline__ __attribute__ ((__const__)) uint16_t ecb_bitrev16 (uint16_t x);
static __inline__ __attribute__ ((__const__)) uint16_t ecb_bitrev16 (uint16_t x)
{
  x = ((x >> 1) & 0x5555) | ((x & 0x5555) << 1);
  x = ((x >> 2) & 0x3333) | ((x & 0x3333) << 2);
  x = ((x >> 4) & 0x0f0f) | ((x & 0x0f0f) << 4);
  x = ( x >> 8 ) | ( x << 8);

  return x;
}

static __inline__ __attribute__ ((__const__)) uint32_t ecb_bitrev32 (uint32_t x);
static __inline__ __attribute__ ((__const__)) uint32_t ecb_bitrev32 (uint32_t x)
{
  x = ((x >> 1) & 0x55555555) | ((x & 0x55555555) << 1);
  x = ((x >> 2) & 0x33333333) | ((x & 0x33333333) << 2);
  x = ((x >> 4) & 0x0f0f0f0f) | ((x & 0x0f0f0f0f) << 4);
  x = ((x >> 8) & 0x00ff00ff) | ((x & 0x00ff00ff) << 8);
  x = ( x >> 16 ) | ( x << 16);

  return x;
}



static __inline__ __attribute__ ((__const__)) int ecb_popcount64 (uint64_t x);
static __inline__ __attribute__ ((__const__)) int
ecb_popcount64 (uint64_t x)
{
  return __builtin_popcount (x) + __builtin_popcount (x >> 32);
}

static __inline__ __attribute__ ((__const__)) uint8_t ecb_rotl8 (uint8_t x, unsigned int count);
static __inline__ __attribute__ ((__const__)) uint8_t ecb_rotr8 (uint8_t x, unsigned int count);
static __inline__ __attribute__ ((__const__)) uint16_t ecb_rotl16 (uint16_t x, unsigned int count);
static __inline__ __attribute__ ((__const__)) uint16_t ecb_rotr16 (uint16_t x, unsigned int count);
static __inline__ __attribute__ ((__const__)) uint32_t ecb_rotl32 (uint32_t x, unsigned int count);
static __inline__ __attribute__ ((__const__)) uint32_t ecb_rotr32 (uint32_t x, unsigned int count);
static __inline__ __attribute__ ((__const__)) uint64_t ecb_rotl64 (uint64_t x, unsigned int count);
static __inline__ __attribute__ ((__const__)) uint64_t ecb_rotr64 (uint64_t x, unsigned int count);

static __inline__ __attribute__ ((__const__)) uint8_t ecb_rotl8 (uint8_t x, unsigned int count) { return (x >> ( 8 - count)) | (x << count); }
static __inline__ __attribute__ ((__const__)) uint8_t ecb_rotr8 (uint8_t x, unsigned int count) { return (x << ( 8 - count)) | (x >> count); }
static __inline__ __attribute__ ((__const__)) uint16_t ecb_rotl16 (uint16_t x, unsigned int count) { return (x >> (16 - count)) | (x << count); }
static __inline__ __attribute__ ((__const__)) uint16_t ecb_rotr16 (uint16_t x, unsigned int count) { return (x << (16 - count)) | (x >> count); }
static __inline__ __attribute__ ((__const__)) uint32_t ecb_rotl32 (uint32_t x, unsigned int count) { return (x >> (32 - count)) | (x << count); }
static __inline__ __attribute__ ((__const__)) uint32_t ecb_rotr32 (uint32_t x, unsigned int count) { return (x << (32 - count)) | (x >> count); }
static __inline__ __attribute__ ((__const__)) uint64_t ecb_rotl64 (uint64_t x, unsigned int count) { return (x >> (64 - count)) | (x << count); }
static __inline__ __attribute__ ((__const__)) uint64_t ecb_rotr64 (uint64_t x, unsigned int count) { return (x << (64 - count)) | (x >> count); }
# 1131 "ev.c"
static __inline__ __attribute__ ((__const__)) uint32_t ecb_byteorder_helper (void);
static __inline__ __attribute__ ((__const__)) uint32_t
ecb_byteorder_helper (void)
{
# 1144 "ev.c"
  return 0x44332211;
# 1157 "ev.c"
}

static __inline__ __attribute__ ((__const__)) ecb_bool ecb_big_endian (void);
static __inline__ __attribute__ ((__const__)) ecb_bool ecb_big_endian (void) { return ecb_byteorder_helper () == 0x11223344; }
static __inline__ __attribute__ ((__const__)) ecb_bool ecb_little_endian (void);
static __inline__ __attribute__ ((__const__)) ecb_bool ecb_little_endian (void) { return ecb_byteorder_helper () == 0x44332211; }
# 1197 "ev.c"
static __inline__ __attribute__ ((__const__)) uint32_t ecb_binary16_to_binary32 (uint32_t x);
static __inline__ __attribute__ ((__const__)) uint32_t
ecb_binary16_to_binary32 (uint32_t x)
{
  unsigned int s = (x & 0x8000) << (31 - 15);
  int e = (x >> 10) & 0x001f;
  unsigned int m = x & 0x03ff;

  if (__builtin_expect ((!!(e == 31)),(0)))

    e = 255 - (127 - 15);
  else if (__builtin_expect ((!!(!e)),(0)))
    {
      if (__builtin_expect ((!!(!m)),(1)))

        e = 0 - (127 - 15);
      else
        {

          unsigned int s = 10 - (__builtin_clz (m) ^ 31);

          m = (m << s) & 0x3ff;
          e -= s - 1;
        }
    }


  e += 127 - 15;

  return s | (e << 23) | (m << (23 - 10));
}

static __inline__ __attribute__ ((__const__)) uint16_t ecb_binary32_to_binary16 (uint32_t x);
static __inline__ __attribute__ ((__const__)) uint16_t
ecb_binary32_to_binary16 (uint32_t x)
{
  unsigned int s = (x >> 16) & 0x00008000;
  unsigned int e = ((x >> 23) & 0x000000ff) - (127 - 15);
  unsigned int m = x & 0x007fffff;

  x &= 0x7fffffff;


  if (__builtin_expect ((!!(0x38800000 <= x && x <= 0x477fefff)),(1)))
    {

      m += 0x00000fff + ((m >> (23 - 10)) & 1);


      if (__builtin_expect ((!!(m >= 0x00800000)),(0)))
        {
          m >>= 1;
          e += 1;
        }

      return s | (e << 10) | (m >> (23 - 10));
    }


  if (__builtin_expect ((!!(0x477fefff < x && x <= 0x7f800000)),(1)))
    return s | 0x7c00;


  if (__builtin_expect ((!!(x < 0x38800000)),(1)))
    {

      if (__builtin_expect ((!!(!x)),(1)))
        return s;




      if (e < (14 - 24))
        return s;

      m |= 0x00800000;


      {
        unsigned int bits = 14 - e;
        unsigned int half = (1 << (bits - 1)) - 1;
        unsigned int even = (m >> bits) & 1;


        m = (m + half + even) >> bits;
      }

      return s | m;
    }


  m >>= 13;

  return s | 0x7c00 | m | !m;
}
# 1321 "ev.c"
# 1 "/usr/include/math.h" 1 3 4
# 28 "/usr/include/math.h" 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 2 3 4
# 32 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 1 3 4
# 36 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 1 3 4
# 38 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 1 3 4
# 39 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/inf.h" 1 3 4
# 42 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/nan.h" 1 3 4
# 45 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4

# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4
typedef float float_t;
typedef double double_t;
# 49 "/usr/include/math.h" 2 3 4
# 83 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double acos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acos (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern double cos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cos (double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern double sin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tan (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double cosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double sinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tanh (double __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double acosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atanh (double __x) __attribute__ ((__nothrow__ , __leaf__));







 extern double exp (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern double log (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log10 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log10 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 126 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log1p (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log1p (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double logb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __logb (double __x) __attribute__ ((__nothrow__ , __leaf__));






extern double exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log2 (double __x) __attribute__ ((__nothrow__ , __leaf__));








 extern double pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));






extern double cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__));








extern double ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));








extern int isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double significand (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __significand (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern double nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern int isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern double j0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double j1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double jn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __jn (int, double) __attribute__ ((__nothrow__ , __leaf__));
extern double y0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double y1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double yn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __yn (int, double) __attribute__ ((__nothrow__ , __leaf__));






extern double erf (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erf (double) __attribute__ ((__nothrow__ , __leaf__));
extern double erfc (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erfc (double) __attribute__ ((__nothrow__ , __leaf__));
extern double lgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double tgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __tgamma (double) __attribute__ ((__nothrow__ , __leaf__));





extern double gamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __gamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern double rint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __rint (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern double nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrint (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lround (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llround (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassify (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__)); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__));




# 383 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__));
# 84 "/usr/include/math.h" 2 3 4
# 104 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float acosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__));


 extern float cosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

 extern float sinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float coshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __coshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));







 extern float expf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern float logf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log10f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log10f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 126 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float logbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logbf (float __x) __attribute__ ((__nothrow__ , __leaf__));






extern float exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log2f (float __x) __attribute__ ((__nothrow__ , __leaf__));








 extern float powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));






extern float cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));








extern float ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));








extern int isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float significandf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __significandf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern int isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern float j0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float j1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float jnf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __jnf (int, float) __attribute__ ((__nothrow__ , __leaf__));
extern float y0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float y1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float ynf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __ynf (int, float) __attribute__ ((__nothrow__ , __leaf__));






extern float erff (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erff (float) __attribute__ ((__nothrow__ , __leaf__));
extern float erfcf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erfcf (float) __attribute__ ((__nothrow__ , __leaf__));
extern float lgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float tgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __tgammaf (float) __attribute__ ((__nothrow__ , __leaf__));





extern float gammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __gammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern float rintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __rintf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__));




# 383 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__));
# 105 "/usr/include/math.h" 2 3 4
# 151 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__));


 extern long double cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

 extern long double sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));







 extern long double expl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


 extern long double logl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 126 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));






extern long double exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));








 extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));






extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));








extern long double ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));








extern int isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern int isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern long double j0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double j1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double erfl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double erfcl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfcl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double lgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double tgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tgammal (long double) __attribute__ ((__nothrow__ , __leaf__));





extern long double gammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __gammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern long double rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__));




# 383 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__));
# 152 "/usr/include/math.h" 2 3 4
# 168 "/usr/include/math.h" 3 4
extern int signgam;
# 209 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
# 347 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 372 "/usr/include/math.h" 3 4
struct exception

  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };




extern int matherr (struct exception *__exc);
# 534 "/usr/include/math.h" 3 4

# 1322 "ev.c" 2
# 1345 "ev.c"
  
# 1345 "ev.c"
 static __inline__ __attribute__ ((__const__)) uint32_t ecb_float_to_binary32 (float x);
  static __inline__ __attribute__ ((__const__)) uint32_t
  ecb_float_to_binary32 (float x)
  {
    uint32_t r;


      memcpy (&r, &x, 4);
# 1381 "ev.c"
    return r;
  }


  static __inline__ __attribute__ ((__const__)) float ecb_binary32_to_float (uint32_t x);
  static __inline__ __attribute__ ((__const__)) float
  ecb_binary32_to_float (uint32_t x)
  {
    float r;


      memcpy (&r, &x, 4);
# 1411 "ev.c"
    return r;
  }


  static __inline__ __attribute__ ((__const__)) uint64_t ecb_double_to_binary64 (double x);
  static __inline__ __attribute__ ((__const__)) uint64_t
  ecb_double_to_binary64 (double x)
  {
    uint64_t r;


      memcpy (&r, &x, 8);
# 1451 "ev.c"
    return r;
  }


  static __inline__ __attribute__ ((__const__)) double ecb_binary64_to_double (uint64_t x);
  static __inline__ __attribute__ ((__const__)) double
  ecb_binary64_to_double (uint64_t x)
  {
    double r;


      memcpy (&r, &x, 8);
# 1481 "ev.c"
    return r;
  }


  static __inline__ __attribute__ ((__const__)) uint16_t ecb_float_to_binary16 (float x);
  static __inline__ __attribute__ ((__const__)) uint16_t
  ecb_float_to_binary16 (float x)
  {
    return ecb_binary32_to_binary16 (ecb_float_to_binary32 (x));
  }


  static __inline__ __attribute__ ((__const__)) float ecb_binary16_to_float (uint16_t x);
  static __inline__ __attribute__ ((__const__)) float
  ecb_binary16_to_float (uint16_t x)
  {
    return ecb_binary32_to_float (ecb_binary16_to_binary32 (x));
  }
# 1546 "ev.c"
typedef ev_watcher *W;
typedef ev_watcher_list *WL;
typedef ev_watcher_time *WT;
# 1560 "ev.c"
static sig_atomic_t volatile have_monotonic;
# 1629 "ev.c"
# 1 "/usr/include/x86_64-linux-gnu/sys/utsname.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/utsname.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/utsname.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/utsname.h" 2 3 4
# 48 "/usr/include/x86_64-linux-gnu/sys/utsname.h" 3 4

# 48 "/usr/include/x86_64-linux-gnu/sys/utsname.h" 3 4
struct utsname
  {

    char sysname[65];


    char nodename[65];


    char release[65];

    char version[65];


    char machine[65];






    char __domainname[65];


  };
# 81 "/usr/include/x86_64-linux-gnu/sys/utsname.h" 3 4
extern int uname (struct utsname *__name) __attribute__ ((__nothrow__ , __leaf__));



# 1630 "ev.c" 2



# 1632 "ev.c"
__attribute__ ((__noinline__)) __attribute__ ((__cold__))
static unsigned int
ev_linux_version (void)
{

  unsigned int v = 0;
  struct utsname buf;
  int i;
  char *p = buf.release;

  if (uname (&buf))
    return 0;

  for (i = 3+1; --i; )
    {
      unsigned int c = 0;

      for (;;)
        {
          if (*p >= '0' && *p <= '9')
            c = c * 10 + *p++ - '0';
          else
            {
              p += *p == '.';
              break;
            }
        }

      v = (v << 8) | c;
    }

  return v;



}
# 1680 "ev.c"
static void (*syserr_cb)(const char *msg) ;

__attribute__ ((__cold__))
void
ev_set_syserr_cb (void (*cb)(const char *msg) )
{
  syserr_cb = cb;
}

__attribute__ ((__noinline__)) __attribute__ ((__cold__))
static void
ev_syserr (const char *msg)
{
  if (!msg)
    msg = "(libev) system error";

  if (syserr_cb)
    syserr_cb (msg);
  else
    {






      perror (msg);

      abort ();
    }
}

static void *
ev_realloc_emul (void *ptr, long size)
{







  if (size)
    return realloc (ptr, size);

  free (ptr);
  return 0;
}

static void *(*alloc)(void *ptr, long size) = ev_realloc_emul;

__attribute__ ((__cold__))
void
ev_set_allocator (void *(*cb)(void *ptr, long size) )
{
  alloc = cb;
}

static __inline__ void *
ev_realloc (void *ptr, long size)
{
  ptr = alloc (ptr, size);

  if (!ptr && size)
    {



      fprintf (
# 1748 "ev.c" 3 4
              stderr
# 1748 "ev.c"
                    , "(libev) cannot allocate %ld bytes, aborting.", size);

      abort ();
    }

  return ptr;
}
# 1765 "ev.c"
typedef struct
{
  WL head;
  unsigned char events;
  unsigned char reify;
  unsigned char emask;
  unsigned char unused;

  unsigned int egen;







} ANFD;


typedef struct
{
  W w;
  int events;
} ANPENDING;



typedef struct
{
  WL head;
} ANFS;





  typedef struct {
    ev_tstamp at;
    WT w;
  } ANHE;
# 1820 "ev.c"
  struct ev_loop
  {
    ev_tstamp ev_rt_now;


# 1 "ev_vars.h" 1
# 42 "ev_vars.h"
ev_tstamp now_floor;
ev_tstamp mn_now;
ev_tstamp rtmn_diff;


W * rfeeds;
int rfeedmax;
int rfeedcnt;

ANPENDING *pendings [((((0x7f) & 4) ? +2 : 0) - (((0x7f) & 4) ? -2 : 0) + 1)];
int pendingmax [((((0x7f) & 4) ? +2 : 0) - (((0x7f) & 4) ? -2 : 0) + 1)];
int pendingcnt [((((0x7f) & 4) ? +2 : 0) - (((0x7f) & 4) ? -2 : 0) + 1)];
int pendingpri;
ev_prepare pending_w;

ev_tstamp io_blocktime;
ev_tstamp timeout_blocktime;

int backend;
int activecnt;
sig_atomic_t volatile loop_done;

int backend_fd;
ev_tstamp backend_mintime;
void (*backend_modify)(struct ev_loop *loop, int fd, int oev, int nev);
void (*backend_poll)(struct ev_loop *loop, ev_tstamp timeout);

ANFD * anfds;
int anfdmax;

int evpipe [2];
ev_io pipe_w;
sig_atomic_t volatile pipe_write_wanted;
sig_atomic_t volatile pipe_write_skipped;


pid_t curpid;


char postfork;


void * vec_ri;
void * vec_ro;
void * vec_wi;
void * vec_wo;



int vec_max;



struct pollfd * polls;
int pollmax;
int pollcnt;
int * pollidxs;
int pollidxmax;



struct epoll_event * epoll_events;
int epoll_eventmax;
int * epoll_eperms;
int epoll_epermcnt;
int epoll_epermmax;
# 128 "ev_vars.h"
int * fdchanges;
int fdchangemax;
int fdchangecnt;

ANHE * timers;
int timermax;
int timercnt;


ANHE * periodics;
int periodicmax;
int periodiccnt;



ev_idle **idles [((((0x7f) & 4) ? +2 : 0) - (((0x7f) & 4) ? -2 : 0) + 1)];
int idlemax [((((0x7f) & 4) ? +2 : 0) - (((0x7f) & 4) ? -2 : 0) + 1)];
int idlecnt [((((0x7f) & 4) ? +2 : 0) - (((0x7f) & 4) ? -2 : 0) + 1)];

int idleall;

struct ev_prepare ** prepares;
int preparemax;
int preparecnt;

struct ev_check ** checks;
int checkmax;
int checkcnt;


struct ev_fork ** forks;
int forkmax;
int forkcnt;



struct ev_cleanup ** cleanups;
int cleanupmax;
int cleanupcnt;



sig_atomic_t volatile async_pending;
struct ev_async ** asyncs;
int asyncmax;
int asynccnt;



int fs_fd;
ev_io fs_w;
char fs_2625;
ANFS fs_hash [((0x7f) & 2) ? 16 : 1];


sig_atomic_t volatile sig_pending;

int sigfd;
ev_io sigfd_w;
sigset_t sigfd_set;


unsigned int origflags;


unsigned int loop_count;
unsigned int loop_depth;

void * userdata;

void (*release_cb)(struct ev_loop *loop) ;
void (*acquire_cb)(struct ev_loop *loop) ;
ev_loop_callback invoke_cb;
# 1826 "ev.c" 2

  };
# 1 "ev_wrap.h" 1
# 1829 "ev.c" 2

  static struct ev_loop default_loop_struct;
  extern struct ev_loop *ev_default_loop_ptr = 0;
# 1859 "ev.c"
ev_tstamp
ev_time (void)
{
# 1871 "ev.c"
  struct timeval tv;
  gettimeofday (&tv, 0);
  return tv.tv_sec + tv.tv_usec * 1e-6;
}


static __inline__ ev_tstamp
get_clock (void)
{

  if (__builtin_expect ((!!(have_monotonic)),(1)))
    {
      struct timespec ts;
      clock_gettime (
# 1884 "ev.c" 3 4
                    1
# 1884 "ev.c"
                                   , &ts);
      return ts.tv_sec + ts.tv_nsec * 1e-9;
    }


  return ev_time ();
}


ev_tstamp
ev_now (struct ev_loop *loop)
{
  return ((loop)->ev_rt_now);
}


void
ev_sleep (ev_tstamp delay)
{
  if (delay > 0.)
    {

      struct timespec ts;

      do { ts.tv_sec = (long)delay; ts.tv_nsec = (long)((delay - ts.tv_sec) * 1e9); } while (0);
      nanosleep (&ts, 0);
# 1921 "ev.c"
    }
}







static __inline__ int
array_nextsize (int elem, int cur, int cnt)
{
  int ncur = cur + 1;

  do
    ncur <<= 1;
  while (cnt > ncur);


  if (elem * ncur > 4096 - sizeof (void *) * 4)
    {
      ncur *= elem;
      ncur = (ncur + elem + (4096 - 1) + sizeof (void *) * 4) & ~(4096 - 1);
      ncur = ncur - sizeof (void *) * 4;
      ncur /= elem;
    }

  return ncur;
}

__attribute__ ((__noinline__)) __attribute__ ((__cold__))
static void *
array_realloc (int elem, void *base, int *cur, int cnt)
{
  *cur = array_nextsize (elem, *cur, cnt);
  return ev_realloc (base, elem * *cur);
}
# 1987 "ev.c"
__attribute__ ((__noinline__))
static void
pendingcb (struct ev_loop *loop, ev_prepare *w, int revents)
{
}

__attribute__ ((__noinline__))
void
ev_feed_event (struct ev_loop *loop, void *w, int revents)
{
  W w_ = (W)w;
  int pri = (((W)w_)->priority - (((0x7f) & 4) ? -2 : 0));

  if (__builtin_expect ((!!(w_->pending)),(0)))
    ((loop)->pendings) [pri][w_->pending - 1].events |= revents;
  else
    {
      w_->pending = ++((loop)->pendingcnt) [pri];
      if (__builtin_expect ((!!((w_->pending) > (((loop)->pendingmax) [pri]))),(0))) { __attribute__ ((__unused__)) int ocur_ = (((loop)->pendingmax) [pri]); (((loop)->pendings) [pri]) = (ANPENDING *)array_realloc (sizeof (ANPENDING), (((loop)->pendings) [pri]), &(((loop)->pendingmax) [pri]), (w_->pending)); ; };
      ((loop)->pendings) [pri][w_->pending - 1].w = w_;
      ((loop)->pendings) [pri][w_->pending - 1].events = revents;
    }

  ((loop)->pendingpri) = ((((0x7f) & 4) ? +2 : 0) - (((0x7f) & 4) ? -2 : 0) + 1) - 1;
}

static __inline__ void
feed_reverse (struct ev_loop *loop, W w)
{
  if (__builtin_expect ((!!((((loop)->rfeedcnt) + 1) > (((loop)->rfeedmax)))),(0))) { __attribute__ ((__unused__)) int ocur_ = (((loop)->rfeedmax)); (((loop)->rfeeds)) = (W *)array_realloc (sizeof (W), (((loop)->rfeeds)), &(((loop)->rfeedmax)), (((loop)->rfeedcnt) + 1)); ; };
  ((loop)->rfeeds) [((loop)->rfeedcnt)++] = w;
}

static __inline__ void
feed_reverse_done (struct ev_loop *loop, int revents)
{
  do
    ev_feed_event (loop, ((loop)->rfeeds) [--((loop)->rfeedcnt)], revents);
  while (((loop)->rfeedcnt));
}

static __inline__ void
queue_events (struct ev_loop *loop, W *events, int eventcnt, int type)
{
  int i;

  for (i = 0; i < eventcnt; ++i)
    ev_feed_event (loop, events [i], type);
}



static __inline__ void
fd_event_nocheck (struct ev_loop *loop, int fd, int revents)
{
  ANFD *anfd = ((loop)->anfds) + fd;
  ev_io *w;

  for (w = (ev_io *)anfd->head; w; w = (ev_io *)((WL)w)->next)
    {
      int ev = w->events & revents;

      if (ev)
        ev_feed_event (loop, (W)w, ev);
    }
}



static __inline__ void
fd_event (struct ev_loop *loop, int fd, int revents)
{
  ANFD *anfd = ((loop)->anfds) + fd;

  if (__builtin_expect ((!!(!anfd->reify)),(1)))
    fd_event_nocheck (loop, fd, revents);
}

void
ev_feed_fd_event (struct ev_loop *loop, int fd, int revents)
{
  if (fd >= 0 && fd < ((loop)->anfdmax))
    fd_event_nocheck (loop, fd, revents);
}



static __inline__ void
fd_reify (struct ev_loop *loop)
{
  int i;
# 2104 "ev.c"
  for (i = 0; i < ((loop)->fdchangecnt); ++i)
    {
      int fd = ((loop)->fdchanges) [i];
      ANFD *anfd = ((loop)->anfds) + fd;
      ev_io *w;

      unsigned char o_events = anfd->events;
      unsigned char o_reify = anfd->reify;

      anfd->reify = 0;


        {
          anfd->events = 0;

          for (w = (ev_io *)anfd->head; w; w = (ev_io *)((WL)w)->next)
            anfd->events |= (unsigned char)w->events;

          if (o_events != anfd->events)
            o_reify = EV__IOFDSET;
        }

      if (o_reify & EV__IOFDSET)
        ((loop)->backend_modify) (loop, fd, o_events, anfd->events);
    }

  ((loop)->fdchangecnt) = 0;
}


static __inline__
void
fd_change (struct ev_loop *loop, int fd, int flags)
{
  unsigned char reify = ((loop)->anfds) [fd].reify;
  ((loop)->anfds) [fd].reify |= flags;

  if (__builtin_expect ((!!(!reify)),(1)))
    {
      ++((loop)->fdchangecnt);
      if (__builtin_expect ((!!((((loop)->fdchangecnt)) > (((loop)->fdchangemax)))),(0))) { __attribute__ ((__unused__)) int ocur_ = (((loop)->fdchangemax)); (((loop)->fdchanges)) = (int *)array_realloc (sizeof (int), (((loop)->fdchanges)), &(((loop)->fdchangemax)), (((loop)->fdchangecnt))); ; };
      ((loop)->fdchanges) [((loop)->fdchangecnt) - 1] = fd;
    }
}


static __inline__ __attribute__ ((__cold__)) void
fd_kill (struct ev_loop *loop, int fd)
{
  ev_io *w;

  while ((w = (ev_io *)((loop)->anfds) [fd].head))
    {
      ev_io_stop (loop, w);
      ev_feed_event (loop, (W)w, EV_ERROR | EV_READ | EV_WRITE);
    }
}


static __inline__ __attribute__ ((__cold__)) int
fd_valid (int fd)
{



  return fcntl (fd, 
# 2169 "ev.c" 3 4
                   1
# 2169 "ev.c"
                          ) != -1;

}


__attribute__ ((__noinline__)) __attribute__ ((__cold__))
static void
fd_ebadf (struct ev_loop *loop)
{
  int fd;

  for (fd = 0; fd < ((loop)->anfdmax); ++fd)
    if (((loop)->anfds) [fd].events)
      if (!fd_valid (fd) && 
# 2182 "ev.c" 3 4
                           (*__errno_location ()) 
# 2182 "ev.c"
                                 == 
# 2182 "ev.c" 3 4
                                    9
# 2182 "ev.c"
                                         )
        fd_kill (loop, fd);
}


__attribute__ ((__noinline__)) __attribute__ ((__cold__))
static void
fd_enomem (struct ev_loop *loop)
{
  int fd;

  for (fd = ((loop)->anfdmax); fd--; )
    if (((loop)->anfds) [fd].events)
      {
        fd_kill (loop, fd);
        break;
      }
}


__attribute__ ((__noinline__))
static void
fd_rearm_all (struct ev_loop *loop)
{
  int fd;

  for (fd = 0; fd < ((loop)->anfdmax); ++fd)
    if (((loop)->anfds) [fd].events)
      {
        ((loop)->anfds) [fd].events = 0;
        ((loop)->anfds) [fd].emask = 0;
        fd_change (loop, fd, EV__IOFDSET | 1);
      }
}



static __inline__ void
fd_intern (int fd)
{




  fcntl (fd, 
# 2226 "ev.c" 3 4
            2
# 2226 "ev.c"
                   , 
# 2226 "ev.c" 3 4
                     1
# 2226 "ev.c"
                               );
  fcntl (fd, 
# 2227 "ev.c" 3 4
            4
# 2227 "ev.c"
                   , 
# 2227 "ev.c" 3 4
                     04000
# 2227 "ev.c"
                               );

}
# 2253 "ev.c"
static __inline__ void
downheap (ANHE *heap, int N, int k)
{
  ANHE he = heap [k];
  ANHE *E = heap + N + (4 - 1);

  for (;;)
    {
      ev_tstamp minat;
      ANHE *minpos;
      ANHE *pos = heap + 4 * (k - (4 - 1)) + (4 - 1) + 1;


      if (__builtin_expect ((!!(pos + 4 - 1 < E)),(1)))
        {
                                                        (minpos = pos + 0), (minat = (*minpos).at);
          if ( (pos [1]).at < minat) (minpos = pos + 1), (minat = (*minpos).at);
          if ( (pos [2]).at < minat) (minpos = pos + 2), (minat = (*minpos).at);
          if ( (pos [3]).at < minat) (minpos = pos + 3), (minat = (*minpos).at);
        }
      else if (pos < E)
        {
                                                        (minpos = pos + 0), (minat = (*minpos).at);
          if (pos + 1 < E && (pos [1]).at < minat) (minpos = pos + 1), (minat = (*minpos).at);
          if (pos + 2 < E && (pos [2]).at < minat) (minpos = pos + 2), (minat = (*minpos).at);
          if (pos + 3 < E && (pos [3]).at < minat) (minpos = pos + 3), (minat = (*minpos).at);
        }
      else
        break;

      if ((he).at <= minat)
        break;

      heap [k] = *minpos;
      ((W)((*minpos).w))->active = k;

      k = minpos - heap;
    }

  heap [k] = he;
  ((W)((he).w))->active = k;
}
# 2333 "ev.c"
static __inline__ void
upheap (ANHE *heap, int k)
{
  ANHE he = heap [k];

  for (;;)
    {
      int p = ((((k) - (4 - 1) - 1) / 4) + (4 - 1));

      if (((p) == (k)) || (heap [p]).at <= (he).at)
        break;

      heap [k] = heap [p];
      ((W)((heap [k]).w))->active = k;
      k = p;
    }

  heap [k] = he;
  ((W)((he).w))->active = k;
}


static __inline__ void
adjustheap (ANHE *heap, int N, int k)
{
  if (k > (4 - 1) && (heap [k]).at <= (heap [((((k) - (4 - 1) - 1) / 4) + (4 - 1))]).at)
    upheap (heap, k);
  else
    downheap (heap, N, k);
}


static __inline__ void
reheap (ANHE *heap, int N)
{
  int i;



  for (i = 0; i < N; ++i)
    upheap (heap, i + (4 - 1));
}




typedef struct
{
  sig_atomic_t volatile pending;

  struct ev_loop *loop;

  WL head;
} ANSIG;

static ANSIG signals [(
# 2388 "ev.c" 3 4
                     65
# 2388 "ev.c"
                     ) - 1];





__attribute__ ((__noinline__)) __attribute__ ((__cold__))
static void
evpipe_init (struct ev_loop *loop)
{
  if (!(0 + ((ev_watcher *)(void *)(&((loop)->pipe_w)))->active))
    {
      int fds [2];


      fds [0] = -1;
      fds [1] = eventfd (0, 
# 2404 "ev.c" 3 4
                           04000 
# 2404 "ev.c"
                                        | 
# 2404 "ev.c" 3 4
                                          02000000
# 2404 "ev.c"
                                                     );
      if (fds [1] < 0 && 
# 2405 "ev.c" 3 4
                        (*__errno_location ()) 
# 2405 "ev.c"
                              == 
# 2405 "ev.c" 3 4
                                 22
# 2405 "ev.c"
                                       )
        fds [1] = eventfd (0, 0);

      if (fds [1] < 0)

        {
          while (pipe (fds))
            ev_syserr ("(libev) error creating signal/async pipe");

          fd_intern (fds [0]);
        }

      ((loop)->evpipe) [0] = fds [0];

      if (((loop)->evpipe) [1] < 0)
        ((loop)->evpipe) [1] = fds [1];
      else
        {





          dup2 (fds [1], ((loop)->evpipe) [1]);
          close (fds [1]);
        }

      fd_intern (((loop)->evpipe) [1]);

      do { (&((loop)->pipe_w))->fd = (((loop)->evpipe) [0] < 0 ? ((loop)->evpipe) [1] : ((loop)->evpipe) [0]); (&((loop)->pipe_w))->events = (EV_READ) | EV__IOFDSET; } while (0);
      ev_io_start (loop, &((loop)->pipe_w));
      ev_unref (loop);
    }
}

static __inline__ void
evpipe_write (struct ev_loop *loop, sig_atomic_t volatile *flag)
{
  __asm__ __volatile__ ("mfence" : : : "memory");

  if (__builtin_expect ((!!(*flag)),(1)))
    return;

  *flag = 1;
  __asm__ __volatile__ ("");

  ((loop)->pipe_write_skipped) = 1;

  __asm__ __volatile__ ("mfence" : : : "memory");

  if (((loop)->pipe_write_wanted))
    {
      int old_errno;

      ((loop)->pipe_write_skipped) = 0;
      __asm__ __volatile__ ("");

      old_errno = 
# 2462 "ev.c" 3 4
                 (*__errno_location ())
# 2462 "ev.c"
                      ;


      if (((loop)->evpipe) [0] < 0)
        {
          uint64_t counter = 1;
          write (((loop)->evpipe) [1], &counter, sizeof (uint64_t));
        }
      else

        {







          write (((loop)->evpipe) [1], &(((loop)->evpipe) [1]), 1);

        }

      
# 2484 "ev.c" 3 4
     (*__errno_location ()) 
# 2484 "ev.c"
           = old_errno;
    }
}



static void
pipecb (struct ev_loop *loop, ev_io *iow, int revents)
{
  int i;

  if (revents & EV_READ)
    {

      if (((loop)->evpipe) [0] < 0)
        {
          uint64_t counter;
          read (((loop)->evpipe) [1], &counter, sizeof (uint64_t));
        }
      else

        {
          char dummy[4];
# 2515 "ev.c"
          read (((loop)->evpipe) [0], &dummy, sizeof (dummy));

        }
    }

  ((loop)->pipe_write_skipped) = 0;

  __asm__ __volatile__ ("mfence" : : : "memory");


  if (((loop)->sig_pending))
    {
      ((loop)->sig_pending) = 0;

      __asm__ __volatile__ ("mfence" : : : "memory");

      for (i = (
# 2531 "ev.c" 3 4
              65
# 2531 "ev.c"
              ) - 1; i--; )
        if (__builtin_expect ((!!(signals [i].pending)),(0)))
          ev_feed_signal_event (loop, i + 1);
    }



  if (((loop)->async_pending))
    {
      ((loop)->async_pending) = 0;

      __asm__ __volatile__ ("mfence" : : : "memory");

      for (i = ((loop)->asynccnt); i--; )
        if (((loop)->asyncs) [i]->sent)
          {
            ((loop)->asyncs) [i]->sent = 0;
            __asm__ __volatile__ ("");
            ev_feed_event (loop, ((loop)->asyncs) [i], EV_ASYNC);
          }
    }

}



void
ev_feed_signal (int signum)
{

  struct ev_loop *loop;
  __asm__ __volatile__ ("" : : : "memory");
  loop = signals [signum - 1].loop;

  if (!loop)
    return;


  signals [signum - 1].pending = 1;
  evpipe_write (loop, &((loop)->sig_pending));
}

static void
ev_sighandler (int signum)
{




  ev_feed_signal (signum);
}

__attribute__ ((__noinline__))
void
ev_feed_signal_event (struct ev_loop *loop, int signum)
{
  WL w;

  if (__builtin_expect ((!!(signum <= 0 || signum >= (
# 2589 "ev.c" 3 4
     65
# 2589 "ev.c"
     ))),(0)))
    return;

  --signum;





  if (__builtin_expect ((!!(signals [signum].loop != loop)),(0)))
    return;


  signals [signum].pending = 0;
  __asm__ __volatile__ ("");

  for (w = signals [signum].head; w; w = w->next)
    ev_feed_event (loop, (W)w, EV_SIGNAL);
}


static void
sigfdcb (struct ev_loop *loop, ev_io *iow, int revents)
{
  struct signalfd_siginfo si[2], *sip;

  for (;;)
    {
      ssize_t res = read (((loop)->sigfd), si, sizeof (si));


      for (sip = si; (char *)sip < (char *)si + res; ++sip)
        ev_feed_signal_event (loop, sip->ssi_signo);

      if (res < (ssize_t)sizeof (si))
        break;
    }
}







static WL childs [((0x7f) & 2) ? 16 : 1];

static ev_signal childev;






static __inline__ void
child_reap (struct ev_loop *loop, int chain, int pid, int status)
{
  ev_child *w;
  int traced = 
# 2647 "ev.c" 3 4
              ((((__extension__ (((union { __typeof(
# 2647 "ev.c"
              status
# 2647 "ev.c" 3 4
              ) __in; int __i; }) { .__in = (
# 2647 "ev.c"
              status
# 2647 "ev.c" 3 4
              ) }).__i))) & 0xff) == 0x7f) 
# 2647 "ev.c"
                                  || 
# 2647 "ev.c" 3 4
                                     (((__extension__ (((union { __typeof(
# 2647 "ev.c"
                                     status
# 2647 "ev.c" 3 4
                                     ) __in; int __i; }) { .__in = (
# 2647 "ev.c"
                                     status
# 2647 "ev.c" 3 4
                                     ) }).__i))) == 0xffff)
# 2647 "ev.c"
                                                          ;

  for (w = (ev_child *)childs [chain & ((((0x7f) & 2) ? 16 : 1) - 1)]; w; w = (ev_child *)((WL)w)->next)
    {
      if ((w->pid == pid || !w->pid)
          && (!traced || (w->flags & 1)))
        {
          ( (ev_watcher *)(void *)(w))->priority = ((((0x7f) & 4) ? +2 : 0));
          w->rpid = pid;
          w->rstatus = status;
          ev_feed_event (loop, (W)w, EV_CHILD);
        }
    }
}






static void
childcb (struct ev_loop *loop, ev_signal *sw, int revents)
{
  int pid, status;


  if (0 >= (pid = waitpid (-1, &status, 
# 2673 "ev.c" 3 4
                                       1 
# 2673 "ev.c"
                                               | 
# 2673 "ev.c" 3 4
                                                 2 
# 2673 "ev.c"
                                                           | 
# 2673 "ev.c" 3 4
                                                             8
# 2673 "ev.c"
                                                                       )))
    if (!
# 2674 "ev.c" 3 4
        8
        
# 2675 "ev.c"
       || 
# 2675 "ev.c" 3 4
          (*__errno_location ()) 
# 2675 "ev.c"
                != 
# 2675 "ev.c" 3 4
                   22
        
# 2676 "ev.c"
       || 0 >= (pid = waitpid (-1, &status, 
# 2676 "ev.c" 3 4
                                            1 
# 2676 "ev.c"
                                                    | 
# 2676 "ev.c" 3 4
                                                      2
# 2676 "ev.c"
                                                               )))
      return;



  ev_feed_event (loop, (W)sw, EV_SIGNAL);

  child_reap (loop, pid, pid, status);
  if ((((0x7f) & 2) ? 16 : 1) > 1)
    child_reap (loop, 0, pid, status);
}
# 2702 "ev.c"
# 1 "ev_epoll.c" 1
# 66 "ev_epoll.c"
# 1 "/usr/include/x86_64-linux-gnu/sys/epoll.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/epoll.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/sys/epoll.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/epoll.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/epoll.h" 3 4

# 23 "/usr/include/x86_64-linux-gnu/bits/epoll.h" 3 4
enum
  {
    EPOLL_CLOEXEC = 02000000

  };
# 34 "/usr/include/x86_64-linux-gnu/sys/epoll.h" 2 3 4






enum EPOLL_EVENTS
  {
    EPOLLIN = 0x001,

    EPOLLPRI = 0x002,

    EPOLLOUT = 0x004,

    EPOLLRDNORM = 0x040,

    EPOLLRDBAND = 0x080,

    EPOLLWRNORM = 0x100,

    EPOLLWRBAND = 0x200,

    EPOLLMSG = 0x400,

    EPOLLERR = 0x008,

    EPOLLHUP = 0x010,

    EPOLLRDHUP = 0x2000,

    EPOLLWAKEUP = 1u << 29,

    EPOLLONESHOT = 1u << 30,

    EPOLLET = 1u << 31

  };
# 79 "/usr/include/x86_64-linux-gnu/sys/epoll.h" 3 4
typedef union epoll_data
{
  void *ptr;
  int fd;
  uint32_t u32;
  uint64_t u64;
} epoll_data_t;

struct epoll_event
{
  uint32_t events;
  epoll_data_t data;
} __attribute__ ((__packed__));








extern int epoll_create (int __size) __attribute__ ((__nothrow__ , __leaf__));



extern int epoll_create1 (int __flags) __attribute__ ((__nothrow__ , __leaf__));
# 113 "/usr/include/x86_64-linux-gnu/sys/epoll.h" 3 4
extern int epoll_ctl (int __epfd, int __op, int __fd,
        struct epoll_event *__event) __attribute__ ((__nothrow__ , __leaf__));
# 127 "/usr/include/x86_64-linux-gnu/sys/epoll.h" 3 4
extern int epoll_wait (int __epfd, struct epoll_event *__events,
         int __maxevents, int __timeout);







extern int epoll_pwait (int __epfd, struct epoll_event *__events,
   int __maxevents, int __timeout,
   const __sigset_t *__ss);


# 67 "ev_epoll.c" 2




# 70 "ev_epoll.c"
static void
epoll_modify (struct ev_loop *loop, int fd, int oev, int nev)
{
  struct epoll_event ev;
  unsigned char oldmask;
# 84 "ev_epoll.c"
  if (!nev)
    return;

  oldmask = ((loop)->anfds) [fd].emask;
  ((loop)->anfds) [fd].emask = nev;


  ev.data.u64 = (uint64_t)(uint32_t)fd
              | ((uint64_t)(uint32_t)++((loop)->anfds) [fd].egen << 32);
  ev.events = (nev & EV_READ ? 
# 93 "ev_epoll.c" 3 4
                                 EPOLLIN 
# 93 "ev_epoll.c"
                                          : 0)
              | (nev & EV_WRITE ? 
# 94 "ev_epoll.c" 3 4
                                 EPOLLOUT 
# 94 "ev_epoll.c"
                                          : 0);

  if (__builtin_expect ((!!(!epoll_ctl (((loop)->backend_fd), oev && oldmask != nev ? 
# 96 "ev_epoll.c" 3 4
     3 
# 96 "ev_epoll.c"
     : 
# 96 "ev_epoll.c" 3 4
     1
# 96 "ev_epoll.c"
     , fd, &ev))),(1)))
    return;

  if (__builtin_expect ((!!(
# 99 "ev_epoll.c" 3 4
     (*__errno_location ()) 
# 99 "ev_epoll.c"
     == 
# 99 "ev_epoll.c" 3 4
     2
# 99 "ev_epoll.c"
     )),(1)))
    {

      if (!nev)
        goto dec_egen;

      if (!epoll_ctl (((loop)->backend_fd), 
# 105 "ev_epoll.c" 3 4
                                 1
# 105 "ev_epoll.c"
                                              , fd, &ev))
        return;
    }
  else if (__builtin_expect ((!!(
# 108 "ev_epoll.c" 3 4
          (*__errno_location ()) 
# 108 "ev_epoll.c"
          == 
# 108 "ev_epoll.c" 3 4
          17
# 108 "ev_epoll.c"
          )),(1)))
    {


      if (oldmask == nev)
        goto dec_egen;

      if (!epoll_ctl (((loop)->backend_fd), 
# 115 "ev_epoll.c" 3 4
                                 3
# 115 "ev_epoll.c"
                                              , fd, &ev))
        return;
    }
  else if (__builtin_expect ((!!(
# 118 "ev_epoll.c" 3 4
          (*__errno_location ()) 
# 118 "ev_epoll.c"
          == 
# 118 "ev_epoll.c" 3 4
          1
# 118 "ev_epoll.c"
          )),(1)))
    {


      ((loop)->anfds) [fd].emask = 0x80;


      if (!(oldmask & 0x80))
        {
          if (__builtin_expect ((!!((((loop)->epoll_epermcnt) + 1) > (((loop)->epoll_epermmax)))),(0))) { __attribute__ ((__unused__)) int ocur_ = (((loop)->epoll_epermmax)); (((loop)->epoll_eperms)) = (int *)array_realloc (sizeof (int), (((loop)->epoll_eperms)), &(((loop)->epoll_epermmax)), (((loop)->epoll_epermcnt) + 1)); ; };
          ((loop)->epoll_eperms) [((loop)->epoll_epermcnt)++] = fd;
        }

      return;
    }

  fd_kill (loop, fd);

dec_egen:

  --((loop)->anfds) [fd].egen;
}

static void
epoll_poll (struct ev_loop *loop, ev_tstamp timeout)
{
  int i;
  int eventcnt;

  if (__builtin_expect ((!!(((loop)->epoll_epermcnt))),(0)))
    timeout = 0.;



  if (__builtin_expect ((!!(((loop)->release_cb))),(0))) ((loop)->release_cb) (loop);
  eventcnt = epoll_wait (((loop)->backend_fd), ((loop)->epoll_events), ((loop)->epoll_eventmax), timeout * 1e3);
  if (__builtin_expect ((!!(((loop)->acquire_cb))),(0))) ((loop)->acquire_cb) (loop);

  if (__builtin_expect ((!!(eventcnt < 0)),(0)))
    {
      if (
# 158 "ev_epoll.c" 3 4
         (*__errno_location ()) 
# 158 "ev_epoll.c"
               != 
# 158 "ev_epoll.c" 3 4
                  4
# 158 "ev_epoll.c"
                       )
        ev_syserr ("(libev) epoll_wait");

      return;
    }

  for (i = 0; i < eventcnt; ++i)
    {
      struct epoll_event *ev = ((loop)->epoll_events) + i;

      int fd = (uint32_t)ev->data.u64;
      int want = ((loop)->anfds) [fd].events;
      int got = (ev->events & (
# 170 "ev_epoll.c" 3 4
                               EPOLLOUT 
# 170 "ev_epoll.c"
                                        | 
# 170 "ev_epoll.c" 3 4
                                          EPOLLERR 
# 170 "ev_epoll.c"
                                                   | 
# 170 "ev_epoll.c" 3 4
                                                     EPOLLHUP
# 170 "ev_epoll.c"
                                                             ) ? EV_WRITE : 0)
               | (ev->events & (
# 171 "ev_epoll.c" 3 4
                               EPOLLIN 
# 171 "ev_epoll.c"
                                        | 
# 171 "ev_epoll.c" 3 4
                                          EPOLLERR 
# 171 "ev_epoll.c"
                                                   | 
# 171 "ev_epoll.c" 3 4
                                                     EPOLLHUP
# 171 "ev_epoll.c"
                                                             ) ? EV_READ : 0);







      if (__builtin_expect ((!!((uint32_t)((loop)->anfds) [fd].egen != (uint32_t)(ev->data.u64 >> 32))),(0)))
        {

          ((loop)->postfork) |= 2;
          continue;
        }

      if (__builtin_expect ((!!(got & ~want)),(0)))
        {
          ((loop)->anfds) [fd].emask = want;
# 199 "ev_epoll.c"
          ev->events = (want & EV_READ ? 
# 199 "ev_epoll.c" 3 4
                                         EPOLLIN 
# 199 "ev_epoll.c"
                                                  : 0)
                     | (want & EV_WRITE ? 
# 200 "ev_epoll.c" 3 4
                                         EPOLLOUT 
# 200 "ev_epoll.c"
                                                  : 0);



          if (epoll_ctl (((loop)->backend_fd), want ? 
# 204 "ev_epoll.c" 3 4
                                           3 
# 204 "ev_epoll.c"
                                                         : 
# 204 "ev_epoll.c" 3 4
                                                           2
# 204 "ev_epoll.c"
                                                                        , fd, ev))
            {
              ((loop)->postfork) |= 2;
              continue;
            }
        }

      fd_event (loop, fd, got);
    }


  if (__builtin_expect ((!!(eventcnt == ((loop)->epoll_eventmax))),(0)))
    {
      ev_realloc ((((loop)->epoll_events)), 0);
      ((loop)->epoll_eventmax) = array_nextsize (sizeof (struct epoll_event), ((loop)->epoll_eventmax), ((loop)->epoll_eventmax) + 1);
      ((loop)->epoll_events) = (struct epoll_event *)ev_realloc (0, (sizeof (struct epoll_event) * ((loop)->epoll_eventmax)));
    }


  for (i = ((loop)->epoll_epermcnt); i--; )
    {
      int fd = ((loop)->epoll_eperms) [i];
      unsigned char events = ((loop)->anfds) [fd].events & (EV_READ | EV_WRITE);

      if (((loop)->anfds) [fd].emask & 0x80 && events)
        fd_event (loop, fd, events);
      else
        {
          ((loop)->epoll_eperms) [i] = ((loop)->epoll_eperms) [--((loop)->epoll_epermcnt)];
          ((loop)->anfds) [fd].emask = 0;
        }
    }
}

static __inline__
int
epoll_init (struct ev_loop *loop, int flags)
{

  ((loop)->backend_fd) = epoll_create1 (
# 243 "ev_epoll.c" 3 4
                             EPOLL_CLOEXEC
# 243 "ev_epoll.c"
                                          );

  if (((loop)->backend_fd) < 0 && (
# 245 "ev_epoll.c" 3 4
                        (*__errno_location ()) 
# 245 "ev_epoll.c"
                              == 
# 245 "ev_epoll.c" 3 4
                                 22 
# 245 "ev_epoll.c"
                                        || 
# 245 "ev_epoll.c" 3 4
                                           (*__errno_location ()) 
# 245 "ev_epoll.c"
                                                 == 
# 245 "ev_epoll.c" 3 4
                                                    38
# 245 "ev_epoll.c"
                                                          ))

    ((loop)->backend_fd) = epoll_create (256);

  if (((loop)->backend_fd) < 0)
    return 0;

  fcntl (((loop)->backend_fd), 
# 252 "ev_epoll.c" 3 4
                    2
# 252 "ev_epoll.c"
                           , 
# 252 "ev_epoll.c" 3 4
                             1
# 252 "ev_epoll.c"
                                       );

  ((loop)->backend_mintime) = 1e-3;
  ((loop)->backend_modify) = epoll_modify;
  ((loop)->backend_poll) = epoll_poll;

  ((loop)->epoll_eventmax) = 64;
  ((loop)->epoll_events) = (struct epoll_event *)ev_realloc (0, (sizeof (struct epoll_event) * ((loop)->epoll_eventmax)));

  return EVBACKEND_EPOLL;
}

static __inline__
void
epoll_destroy (struct ev_loop *loop)
{
  ev_realloc ((((loop)->epoll_events)), 0);
  ev_realloc ((((loop)->epoll_eperms)), 0); ((loop)->epoll_epermcnt) = ((loop)->epoll_epermmax) = 0; ((loop)->epoll_eperms) = 0;
}

static __inline__
void
epoll_fork (struct ev_loop *loop)
{
  close (((loop)->backend_fd));

  while ((((loop)->backend_fd) = epoll_create (256)) < 0)
    ev_syserr ("(libev) epoll_create");

  fcntl (((loop)->backend_fd), 
# 281 "ev_epoll.c" 3 4
                    2
# 281 "ev_epoll.c"
                           , 
# 281 "ev_epoll.c" 3 4
                             1
# 281 "ev_epoll.c"
                                       );

  fd_rearm_all (loop);
}
# 2703 "ev.c" 2


# 1 "ev_poll.c" 1
# 40 "ev_poll.c"
# 1 "/usr/include/poll.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/poll.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/poll.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/poll.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/sys/poll.h" 2 3 4
# 36 "/usr/include/x86_64-linux-gnu/sys/poll.h" 3 4

# 36 "/usr/include/x86_64-linux-gnu/sys/poll.h" 3 4
typedef unsigned long int nfds_t;


struct pollfd
  {
    int fd;
    short int events;
    short int revents;
  };



# 57 "/usr/include/x86_64-linux-gnu/sys/poll.h" 3 4
extern int poll (struct pollfd *__fds, nfds_t __nfds, int __timeout);
# 71 "/usr/include/x86_64-linux-gnu/sys/poll.h" 3 4

# 1 "/usr/include/poll.h" 2 3 4
# 41 "ev_poll.c" 2


# 42 "ev_poll.c"
static __inline__
void
pollidx_init (int *base, int count)
{


  while (count--)
    *base++ = -1;
}

static void
poll_modify (struct ev_loop *loop, int fd, int oev, int nev)
{
  int idx;

  if (oev == nev)
    return;

  if (__builtin_expect ((!!((fd + 1) > (((loop)->pollidxmax)))),(0))) { __attribute__ ((__unused__)) int ocur_ = (((loop)->pollidxmax)); (((loop)->pollidxs)) = (int *)array_realloc (sizeof (int), (((loop)->pollidxs)), &(((loop)->pollidxmax)), (fd + 1)); pollidx_init ((((loop)->pollidxs)) + (ocur_), (((loop)->pollidxmax)) - ocur_); };

  idx = ((loop)->pollidxs) [fd];

  if (idx < 0)
    {
      ((loop)->pollidxs) [fd] = idx = ((loop)->pollcnt)++;
      if (__builtin_expect ((!!((((loop)->pollcnt)) > (((loop)->pollmax)))),(0))) { __attribute__ ((__unused__)) int ocur_ = (((loop)->pollmax)); (((loop)->polls)) = (struct pollfd *)array_realloc (sizeof (struct pollfd), (((loop)->polls)), &(((loop)->pollmax)), (((loop)->pollcnt))); ; };
      ((loop)->polls) [idx].fd = fd;
    }

  
# 71 "ev_poll.c" 3 4
 ((
# 71 "ev_poll.c"
 ((loop)->polls) [idx].fd == fd
# 71 "ev_poll.c" 3 4
 ) ? (void) (0) : __assert_fail (
# 71 "ev_poll.c"
 "polls [idx].fd == fd"
# 71 "ev_poll.c" 3 4
 , "ev_poll.c", 71, __PRETTY_FUNCTION__))
# 71 "ev_poll.c"
                              ;

  if (nev)
    ((loop)->polls) [idx].events =
        (nev & EV_READ ? 
# 75 "ev_poll.c" 3 4
                        0x001 
# 75 "ev_poll.c"
                               : 0)
        | (nev & EV_WRITE ? 
# 76 "ev_poll.c" 3 4
                           0x004 
# 76 "ev_poll.c"
                                   : 0);
  else
    {
      ((loop)->pollidxs) [fd] = -1;

      if (__builtin_expect ((!!(idx < --((loop)->pollcnt))),(1)))
        {
          ((loop)->polls) [idx] = ((loop)->polls) [((loop)->pollcnt)];
          ((loop)->pollidxs) [((loop)->polls) [idx].fd] = idx;
        }
    }
}

static void
poll_poll (struct ev_loop *loop, ev_tstamp timeout)
{
  struct pollfd *p;
  int res;

  if (__builtin_expect ((!!(((loop)->release_cb))),(0))) ((loop)->release_cb) (loop);
  res = poll (((loop)->polls), ((loop)->pollcnt), timeout * 1e3);
  if (__builtin_expect ((!!(((loop)->acquire_cb))),(0))) ((loop)->acquire_cb) (loop);

  if (__builtin_expect ((!!(res < 0)),(0)))
    {
      if (
# 101 "ev_poll.c" 3 4
         (*__errno_location ()) 
# 101 "ev_poll.c"
               == 
# 101 "ev_poll.c" 3 4
                  9
# 101 "ev_poll.c"
                       )
        fd_ebadf (loop);
      else if (
# 103 "ev_poll.c" 3 4
              (*__errno_location ()) 
# 103 "ev_poll.c"
                    == 
# 103 "ev_poll.c" 3 4
                       12 
# 103 "ev_poll.c"
                              && !syserr_cb)
        fd_enomem (loop);
      else if (
# 105 "ev_poll.c" 3 4
              (*__errno_location ()) 
# 105 "ev_poll.c"
                    != 
# 105 "ev_poll.c" 3 4
                       4
# 105 "ev_poll.c"
                            )
        ev_syserr ("(libev) poll");
    }
  else
    for (p = ((loop)->polls); res; ++p)
      {
        
# 111 "ev_poll.c" 3 4
       ((
# 111 "ev_poll.c"
       ("libev: poll() returned illegal result, broken BSD kernel?", p < ((loop)->polls) + ((loop)->pollcnt))
# 111 "ev_poll.c" 3 4
       ) ? (void) (0) : __assert_fail (
# 111 "ev_poll.c"
       "(\"libev: poll() returned illegal result, broken BSD kernel?\", p < polls + pollcnt)"
# 111 "ev_poll.c" 3 4
       , "ev_poll.c", 111, __PRETTY_FUNCTION__))
# 111 "ev_poll.c"
                                                                                                  ;

        if (__builtin_expect ((!!(p->revents)),(0)))
          {
            --res;

            if (__builtin_expect ((!!(p->revents & 
# 117 "ev_poll.c" 3 4
               0x020
# 117 "ev_poll.c"
               )),(0)))
              fd_kill (loop, p->fd);
            else
              fd_event (
                loop,
                p->fd,
                (p->revents & (
# 123 "ev_poll.c" 3 4
                              0x004 
# 123 "ev_poll.c"
                                      | 
# 123 "ev_poll.c" 3 4
                                        0x008 
# 123 "ev_poll.c"
                                                | 
# 123 "ev_poll.c" 3 4
                                                  0x010
# 123 "ev_poll.c"
                                                         ) ? EV_WRITE : 0)
                | (p->revents & (
# 124 "ev_poll.c" 3 4
                                0x001 
# 124 "ev_poll.c"
                                       | 
# 124 "ev_poll.c" 3 4
                                         0x008 
# 124 "ev_poll.c"
                                                 | 
# 124 "ev_poll.c" 3 4
                                                   0x010
# 124 "ev_poll.c"
                                                          ) ? EV_READ : 0)
              );
          }
      }
}

static __inline__
int
poll_init (struct ev_loop *loop, int flags)
{
  ((loop)->backend_mintime) = 1e-3;
  ((loop)->backend_modify) = poll_modify;
  ((loop)->backend_poll) = poll_poll;

  ((loop)->pollidxs) = 0; ((loop)->pollidxmax) = 0;
  ((loop)->polls) = 0; ((loop)->pollmax) = 0; ((loop)->pollcnt) = 0;

  return EVBACKEND_POLL;
}

static __inline__
void
poll_destroy (struct ev_loop *loop)
{
  ev_realloc ((((loop)->pollidxs)), 0);
  ev_realloc ((((loop)->polls)), 0);
}
# 2706 "ev.c" 2


# 1 "ev_select.c" 1
# 70 "ev_select.c"
static void
select_modify (struct ev_loop *loop, int fd, int oev, int nev)
{
  if (oev == nev)
    return;

  {
# 108 "ev_select.c"
    int word = fd / 
# 108 "ev_select.c" 3 4
                       (8 * (int) sizeof (__fd_mask))
# 108 "ev_select.c"
                              ;
    fd_mask mask = 1UL << (fd % 
# 109 "ev_select.c" 3 4
                               (8 * (int) sizeof (__fd_mask))
# 109 "ev_select.c"
                                      );

    if (__builtin_expect ((!!(((loop)->vec_max) <= word)),(0)))
      {
        int new_max = word + 1;

        ((loop)->vec_ri) = ev_realloc (((loop)->vec_ri), new_max * (
# 115 "ev_select.c" 3 4
                                              (8 * (int) sizeof (__fd_mask)) 
# 115 "ev_select.c"
                                              / 8));
        ((loop)->vec_ro) = ev_realloc (((loop)->vec_ro), new_max * (
# 116 "ev_select.c" 3 4
                                              (8 * (int) sizeof (__fd_mask)) 
# 116 "ev_select.c"
                                              / 8));
        ((loop)->vec_wi) = ev_realloc (((loop)->vec_wi), new_max * (
# 117 "ev_select.c" 3 4
                                              (8 * (int) sizeof (__fd_mask)) 
# 117 "ev_select.c"
                                              / 8));
        ((loop)->vec_wo) = ev_realloc (((loop)->vec_wo), new_max * (
# 118 "ev_select.c" 3 4
                                              (8 * (int) sizeof (__fd_mask)) 
# 118 "ev_select.c"
                                              / 8));




        for (; ((loop)->vec_max) < new_max; ++((loop)->vec_max))
          ((fd_mask *)((loop)->vec_ri)) [((loop)->vec_max)] =
          ((fd_mask *)((loop)->vec_wi)) [((loop)->vec_max)] = 0;
      }

    ((fd_mask *)((loop)->vec_ri)) [word] |= mask;
    if (!(nev & EV_READ))
      ((fd_mask *)((loop)->vec_ri)) [word] &= ~mask;

    ((fd_mask *)((loop)->vec_wi)) [word] |= mask;
    if (!(nev & EV_WRITE))
      ((fd_mask *)((loop)->vec_wi)) [word] &= ~mask;

  }
}

static void
select_poll (struct ev_loop *loop, ev_tstamp timeout)
{
  struct timeval tv;
  int res;
  int fd_setsize;

  if (__builtin_expect ((!!(((loop)->release_cb))),(0))) ((loop)->release_cb) (loop);
  do { tv.tv_sec = (long)timeout; tv.tv_usec = (long)((timeout - tv.tv_sec) * 1e6); } while (0);




  fd_setsize = ((loop)->vec_max) * (
# 152 "ev_select.c" 3 4
                        (8 * (int) sizeof (__fd_mask)) 
# 152 "ev_select.c"
                        / 8);


  memcpy (((loop)->vec_ro), ((loop)->vec_ri), fd_setsize);
  memcpy (((loop)->vec_wo), ((loop)->vec_wi), fd_setsize);
# 170 "ev_select.c"
  res = select (((loop)->vec_max) * 
# 170 "ev_select.c" 3 4
                         (8 * (int) sizeof (__fd_mask))
# 170 "ev_select.c"
                                , (fd_set *)((loop)->vec_ro), (fd_set *)((loop)->vec_wo), 0, &tv);

  if (__builtin_expect ((!!(((loop)->acquire_cb))),(0))) ((loop)->acquire_cb) (loop);

  if (__builtin_expect ((!!(res < 0)),(0)))
    {
# 208 "ev_select.c"
      if (
# 208 "ev_select.c" 3 4
         (*__errno_location ()) 
# 208 "ev_select.c"
               == 
# 208 "ev_select.c" 3 4
                  9
# 208 "ev_select.c"
                       )
        fd_ebadf (loop);
      else if (
# 210 "ev_select.c" 3 4
              (*__errno_location ()) 
# 210 "ev_select.c"
                    == 
# 210 "ev_select.c" 3 4
                       12 
# 210 "ev_select.c"
                              && !syserr_cb)
        fd_enomem (loop);
      else if (
# 212 "ev_select.c" 3 4
              (*__errno_location ()) 
# 212 "ev_select.c"
                    != 
# 212 "ev_select.c" 3 4
                       4
# 212 "ev_select.c"
                            )
        ev_syserr ("(libev) select");

      return;
    }
# 246 "ev_select.c"
  {
    int word, bit;
    for (word = ((loop)->vec_max); word--; )
      {
        fd_mask word_r = ((fd_mask *)((loop)->vec_ro)) [word];
        fd_mask word_w = ((fd_mask *)((loop)->vec_wo)) [word];




        if (word_r || word_w)
          for (bit = 
# 257 "ev_select.c" 3 4
                    (8 * (int) sizeof (__fd_mask))
# 257 "ev_select.c"
                           ; bit--; )
            {
              fd_mask mask = 1UL << bit;
              int events = 0;

              events |= word_r & mask ? EV_READ : 0;
              events |= word_w & mask ? EV_WRITE : 0;

              if (__builtin_expect ((!!(events)),(1)))
                fd_event (loop, word * 
# 266 "ev_select.c" 3 4
                                      (8 * (int) sizeof (__fd_mask)) 
# 266 "ev_select.c"
                                              + bit, events);
            }
      }
  }


}

static __inline__
int
select_init (struct ev_loop *loop, int flags)
{
  ((loop)->backend_mintime) = 1e-6;
  ((loop)->backend_modify) = select_modify;
  ((loop)->backend_poll) = select_poll;
# 291 "ev_select.c"
  ((loop)->vec_max) = 0;
  ((loop)->vec_ri) = 0;
  ((loop)->vec_ro) = 0;
  ((loop)->vec_wi) = 0;
  ((loop)->vec_wo) = 0;





  return EVBACKEND_SELECT;
}

static __inline__
void
select_destroy (struct ev_loop *loop)
{
  ev_realloc ((((loop)->vec_ri)), 0);
  ev_realloc ((((loop)->vec_ro)), 0);
  ev_realloc ((((loop)->vec_wi)), 0);
  ev_realloc ((((loop)->vec_wo)), 0);



}
# 2709 "ev.c" 2


__attribute__ ((__cold__)) int
ev_version_major (void)
{
  return 4;
}

__attribute__ ((__cold__)) int
ev_version_minor (void)
{
  return 24;
}


static __inline__ __attribute__ ((__cold__)) int
enable_secure (void)
{



  return getuid () != geteuid ()
      || getgid () != getegid ();

}

__attribute__ ((__cold__))
unsigned int
ev_supported_backends (void)
{
  unsigned int flags = 0;

  if (0 ) flags |= EVBACKEND_PORT;
  if (0) flags |= EVBACKEND_KQUEUE;
  if (((0x7f) & 32) ) flags |= EVBACKEND_EPOLL;
  if (((0x7f) & 32) ) flags |= EVBACKEND_POLL;
  if (((0x7f) & 32)) flags |= EVBACKEND_SELECT;

  return flags;
}

__attribute__ ((__cold__))
unsigned int
ev_recommended_backends (void)
{
  unsigned int flags = ev_supported_backends ();




  flags &= ~EVBACKEND_KQUEUE;
# 2770 "ev.c"
  return flags;
}

__attribute__ ((__cold__))
unsigned int
ev_embeddable_backends (void)
{
  int flags = EVBACKEND_EPOLL | EVBACKEND_KQUEUE | EVBACKEND_PORT;


  if (ev_linux_version () < 0x020620)
    flags &= ~EVBACKEND_EPOLL;

  return flags;
}

unsigned int
ev_backend (struct ev_loop *loop)
{
  return ((loop)->backend);
}


unsigned int
ev_iteration (struct ev_loop *loop)
{
  return ((loop)->loop_count);
}

unsigned int
ev_depth (struct ev_loop *loop)
{
  return ((loop)->loop_depth);
}

void
ev_set_io_collect_interval (struct ev_loop *loop, ev_tstamp interval)
{
  ((loop)->io_blocktime) = interval;
}

void
ev_set_timeout_collect_interval (struct ev_loop *loop, ev_tstamp interval)
{
  ((loop)->timeout_blocktime) = interval;
}

void
ev_set_userdata (struct ev_loop *loop, void *data)
{
  ((loop)->userdata) = data;
}

void *
ev_userdata (struct ev_loop *loop)
{
  return ((loop)->userdata);
}

void
ev_set_invoke_pending_cb (struct ev_loop *loop, ev_loop_callback invoke_pending_cb)
{
  ((loop)->invoke_cb) = invoke_pending_cb;
}

void
ev_set_loop_release_cb (struct ev_loop *loop, void (*release)(struct ev_loop *loop) , void (*acquire)(struct ev_loop *loop) )
{
  ((loop)->release_cb) = release;
  ((loop)->acquire_cb) = acquire;
}



__attribute__ ((__noinline__)) __attribute__ ((__cold__))
static void
loop_init (struct ev_loop *loop, unsigned int flags)
{
  if (!((loop)->backend))
    {
      ((loop)->origflags) = flags;
# 2863 "ev.c"
      if (!have_monotonic)
        {
          struct timespec ts;

          if (!clock_gettime (
# 2867 "ev.c" 3 4
                             1
# 2867 "ev.c"
                                            , &ts))
            have_monotonic = 1;
        }




      if (flags & EVFLAG_FORKCHECK)
        ((loop)->curpid) = getpid ();


      if (!(flags & EVFLAG_NOENV)
          && !enable_secure ()
          && getenv ("LIBEV_FLAGS"))
        flags = atoi (getenv ("LIBEV_FLAGS"));

      ((loop)->ev_rt_now) = ev_time ();
      ((loop)->mn_now) = get_clock ();
      ((loop)->now_floor) = ((loop)->mn_now);
      ((loop)->rtmn_diff) = ((loop)->ev_rt_now) - ((loop)->mn_now);

      ((loop)->invoke_cb) = ev_invoke_pending;


      ((loop)->io_blocktime) = 0.;
      ((loop)->timeout_blocktime) = 0.;
      ((loop)->backend) = 0;
      ((loop)->backend_fd) = -1;
      ((loop)->sig_pending) = 0;

      ((loop)->async_pending) = 0;

      ((loop)->pipe_write_skipped) = 0;
      ((loop)->pipe_write_wanted) = 0;
      ((loop)->evpipe) [0] = -1;
      ((loop)->evpipe) [1] = -1;

      ((loop)->fs_fd) = flags & EVFLAG_NOINOTIFY ? -1 : -2;


      ((loop)->sigfd) = flags & EVFLAG_SIGNALFD ? -2 : -1;


      if (!(flags & EVBACKEND_MASK))
        flags |= ev_recommended_backends ();
# 2923 "ev.c"
      if (!((loop)->backend) && (flags & EVBACKEND_EPOLL )) ((loop)->backend) = epoll_init (loop, flags);


      if (!((loop)->backend) && (flags & EVBACKEND_POLL )) ((loop)->backend) = poll_init (loop, flags);


      if (!((loop)->backend) && (flags & EVBACKEND_SELECT)) ((loop)->backend) = select_init (loop, flags);


      do { do { ((ev_watcher *)(void *)((&((loop)->pending_w))))->active = ((ev_watcher *)(void *)((&((loop)->pending_w))))->pending = 0; ( (ev_watcher *)(void *)(((&((loop)->pending_w)))))->priority = (0); ((((&((loop)->pending_w))))->cb = ((pendingcb)), memmove (&((ev_watcher *)(((&((loop)->pending_w)))))->cb, &(((&((loop)->pending_w))))->cb, sizeof ((((&((loop)->pending_w))))->cb))); } while (0); ; } while (0);


      do { ((ev_watcher *)(void *)(&((loop)->pipe_w)))->active = ((ev_watcher *)(void *)(&((loop)->pipe_w)))->pending = 0; ( (ev_watcher *)(void *)((&((loop)->pipe_w))))->priority = (0); (((&((loop)->pipe_w)))->cb = (pipecb), memmove (&((ev_watcher *)((&((loop)->pipe_w))))->cb, &((&((loop)->pipe_w)))->cb, sizeof (((&((loop)->pipe_w)))->cb))); } while (0);
      ( (ev_watcher *)(void *)(&((loop)->pipe_w)))->priority = ((((0x7f) & 4) ? +2 : 0));

    }
}


__attribute__ ((__cold__))
void
ev_loop_destroy (struct ev_loop *loop)
{
  int i;



  if (!loop)
    return;




  if (__builtin_expect ((!!(((loop)->cleanupcnt))),(0)))
    {
      queue_events (loop, (W *)((loop)->cleanups), ((loop)->cleanupcnt), EV_CLEANUP);
      ((loop)->invoke_cb) (loop);
    }



  if (ev_is_default_loop (loop) && (0 + ((ev_watcher *)(void *)(&childev))->active))
    {
      ev_ref (loop);
      ev_signal_stop (loop, &childev);
    }


  if ((0 + ((ev_watcher *)(void *)(&((loop)->pipe_w)))->active))
    {



      if (((loop)->evpipe) [0] >= 0) close (((loop)->evpipe) [0]);
      if (((loop)->evpipe) [1] >= 0) close (((loop)->evpipe) [1]);
    }


  if ((0 + ((ev_watcher *)(void *)(&((loop)->sigfd_w)))->active))
    close (((loop)->sigfd));



  if (((loop)->fs_fd) >= 0)
    close (((loop)->fs_fd));


  if (((loop)->backend_fd) >= 0)
    close (((loop)->backend_fd));
# 3003 "ev.c"
  if (((loop)->backend) == EVBACKEND_EPOLL ) epoll_destroy (loop);


  if (((loop)->backend) == EVBACKEND_POLL ) poll_destroy (loop);


  if (((loop)->backend) == EVBACKEND_SELECT) select_destroy (loop);


  for (i = ((((0x7f) & 4) ? +2 : 0) - (((0x7f) & 4) ? -2 : 0) + 1); i--; )
    {
      ev_realloc ((((loop)->pendings) [i]), 0); ((loop)->pendingcnt) [i] = ((loop)->pendingmax) [i] = 0; ((loop)->pendings) [i] = 0;

      ev_realloc ((((loop)->idles) [i]), 0); ((loop)->idlecnt) [i] = ((loop)->idlemax) [i] = 0; ((loop)->idles) [i] = 0;

    }

  ev_realloc ((((loop)->anfds)), 0); ((loop)->anfds) = 0; ((loop)->anfdmax) = 0;


  ev_realloc ((((loop)->rfeeds)), 0); ((loop)->rfeedcnt) = ((loop)->rfeedmax) = 0; ((loop)->rfeeds) = 0;
  ev_realloc ((((loop)->fdchanges)), 0); ((loop)->fdchangecnt) = ((loop)->fdchangemax) = 0; ((loop)->fdchanges) = 0;
  ev_realloc ((((loop)->timers)), 0); ((loop)->timercnt) = ((loop)->timermax) = 0; ((loop)->timers) = 0;

  ev_realloc ((((loop)->periodics)), 0); ((loop)->periodiccnt) = ((loop)->periodicmax) = 0; ((loop)->periodics) = 0;


  ev_realloc ((((loop)->forks)), 0); ((loop)->forkcnt) = ((loop)->forkmax) = 0; ((loop)->forks) = 0;


  ev_realloc ((((loop)->cleanups)), 0); ((loop)->cleanupcnt) = ((loop)->cleanupmax) = 0; ((loop)->cleanups) = 0;

  ev_realloc ((((loop)->prepares)), 0); ((loop)->preparecnt) = ((loop)->preparemax) = 0; ((loop)->prepares) = 0;
  ev_realloc ((((loop)->checks)), 0); ((loop)->checkcnt) = ((loop)->checkmax) = 0; ((loop)->checks) = 0;

  ev_realloc ((((loop)->asyncs)), 0); ((loop)->asynccnt) = ((loop)->asyncmax) = 0; ((loop)->asyncs) = 0;


  ((loop)->backend) = 0;


  if (ev_is_default_loop (loop))

    ev_default_loop_ptr = 0;

  else
    ev_realloc ((loop), 0);

}


static __inline__ void infy_fork (struct ev_loop *loop);


static __inline__ void
loop_fork (struct ev_loop *loop)
{







  if (((loop)->backend) == EVBACKEND_EPOLL ) epoll_fork (loop);


  infy_fork (loop);



  if ((0 + ((ev_watcher *)(void *)(&((loop)->pipe_w)))->active) && ((loop)->postfork) != 2)
    {


      ev_ref (loop);
      ev_io_stop (loop, &((loop)->pipe_w));

      if (((loop)->evpipe) [0] >= 0)
        close (((loop)->evpipe) [0]);

      evpipe_init (loop);

      ev_feed_event (loop, &((loop)->pipe_w), EV_CUSTOM);
    }


  ((loop)->postfork) = 0;
}



__attribute__ ((__cold__))
struct ev_loop *
ev_loop_new (unsigned int flags)
{
  struct ev_loop *loop = (struct ev_loop *)ev_realloc (0, (sizeof (struct ev_loop)));

  memset (loop, 0, sizeof (struct ev_loop));
  loop_init (loop, flags);

  if (ev_backend (loop))
    return loop;

  ev_realloc ((loop), 0);
  return 0;
}




__attribute__ ((__noinline__)) __attribute__ ((__cold__))
static void
verify_watcher (struct ev_loop *loop, W w)
{
  
# 3118 "ev.c" 3 4
 ((
# 3118 "ev.c"
 ("libev: watcher has invalid priority", (((W)w)->priority - (((0x7f) & 4) ? -2 : 0)) >= 0 && (((W)w)->priority - (((0x7f) & 4) ? -2 : 0)) < ((((0x7f) & 4) ? +2 : 0) - (((0x7f) & 4) ? -2 : 0) + 1))
# 3118 "ev.c" 3 4
 ) ? (void) (0) : __assert_fail (
# 3118 "ev.c"
 "(\"libev: watcher has invalid priority\", ABSPRI (w) >= 0 && ABSPRI (w) < NUMPRI)"
# 3118 "ev.c" 3 4
 , "ev.c", 3118, __PRETTY_FUNCTION__))
# 3118 "ev.c"
                                                                                         ;

  if (w->pending)
    
# 3121 "ev.c" 3 4
   ((
# 3121 "ev.c"
   ("libev: pending watcher not on pending queue", ((loop)->pendings) [(((W)w)->priority - (((0x7f) & 4) ? -2 : 0))][w->pending - 1].w == w)
# 3121 "ev.c" 3 4
   ) ? (void) (0) : __assert_fail (
# 3121 "ev.c"
   "(\"libev: pending watcher not on pending queue\", pendings [ABSPRI (w)][w->pending - 1].w == w)"
# 3121 "ev.c" 3 4
   , "ev.c", 3121, __PRETTY_FUNCTION__))
# 3121 "ev.c"
                                                                                                         ;
}

__attribute__ ((__noinline__)) __attribute__ ((__cold__))
static void
verify_heap (struct ev_loop *loop, ANHE *heap, int N)
{
  int i;

  for (i = (4 - 1); i < N + (4 - 1); ++i)
    {
      
# 3132 "ev.c" 3 4
     ((
# 3132 "ev.c"
     ("libev: active index mismatch in heap", ((W)((heap [i]).w))->active == i)
# 3132 "ev.c" 3 4
     ) ? (void) (0) : __assert_fail (
# 3132 "ev.c"
     "(\"libev: active index mismatch in heap\", ev_active (ANHE_w (heap [i])) == i)"
# 3132 "ev.c" 3 4
     , "ev.c", 3132, __PRETTY_FUNCTION__))
# 3132 "ev.c"
                                                                                          ;
      
# 3133 "ev.c" 3 4
     ((
# 3133 "ev.c"
     ("libev: heap condition violated", i == (4 - 1) || (heap [((((i) - (4 - 1) - 1) / 4) + (4 - 1))]).at <= (heap [i]).at)
# 3133 "ev.c" 3 4
     ) ? (void) (0) : __assert_fail (
# 3133 "ev.c"
     "(\"libev: heap condition violated\", i == HEAP0 || ANHE_at (heap [HPARENT (i)]) <= ANHE_at (heap [i]))"
# 3133 "ev.c" 3 4
     , "ev.c", 3133, __PRETTY_FUNCTION__))
# 3133 "ev.c"
                                                                                                                  ;
      
# 3134 "ev.c" 3 4
     ((
# 3134 "ev.c"
     ("libev: heap at cache mismatch", (heap [i]).at == ((WT)((heap [i]).w))->at)
# 3134 "ev.c" 3 4
     ) ? (void) (0) : __assert_fail (
# 3134 "ev.c"
     "(\"libev: heap at cache mismatch\", ANHE_at (heap [i]) == ev_at (ANHE_w (heap [i])))"
# 3134 "ev.c" 3 4
     , "ev.c", 3134, __PRETTY_FUNCTION__))
# 3134 "ev.c"
                                                                                                ;

      verify_watcher (loop, (W)(heap [i]).w);
    }
}

__attribute__ ((__noinline__)) __attribute__ ((__cold__))
static void
array_verify (struct ev_loop *loop, W *ws, int cnt)
{
  while (cnt--)
    {
      
# 3146 "ev.c" 3 4
     ((
# 3146 "ev.c"
     ("libev: active index mismatch", ((W)(ws [cnt]))->active == cnt + 1)
# 3146 "ev.c" 3 4
     ) ? (void) (0) : __assert_fail (
# 3146 "ev.c"
     "(\"libev: active index mismatch\", ev_active (ws [cnt]) == cnt + 1)"
# 3146 "ev.c" 3 4
     , "ev.c", 3146, __PRETTY_FUNCTION__))
# 3146 "ev.c"
                                                                               ;
      verify_watcher (loop, ws [cnt]);
    }
}



void __attribute__ ((__cold__))
ev_verify (struct ev_loop *loop)
{

  int i;
  WL w, w2;

  
# 3160 "ev.c" 3 4
 ((
# 3160 "ev.c"
 ((loop)->activecnt) >= -1
# 3160 "ev.c" 3 4
 ) ? (void) (0) : __assert_fail (
# 3160 "ev.c"
 "activecnt >= -1"
# 3160 "ev.c" 3 4
 , "ev.c", 3160, __PRETTY_FUNCTION__))
# 3160 "ev.c"
                         ;

  
# 3162 "ev.c" 3 4
 ((
# 3162 "ev.c"
 ((loop)->fdchangemax) >= ((loop)->fdchangecnt)
# 3162 "ev.c" 3 4
 ) ? (void) (0) : __assert_fail (
# 3162 "ev.c"
 "fdchangemax >= fdchangecnt"
# 3162 "ev.c" 3 4
 , "ev.c", 3162, __PRETTY_FUNCTION__))
# 3162 "ev.c"
                                    ;
  for (i = 0; i < ((loop)->fdchangecnt); ++i)
    
# 3164 "ev.c" 3 4
   ((
# 3164 "ev.c"
   ("libev: negative fd in fdchanges", ((loop)->fdchanges) [i] >= 0)
# 3164 "ev.c" 3 4
   ) ? (void) (0) : __assert_fail (
# 3164 "ev.c"
   "(\"libev: negative fd in fdchanges\", fdchanges [i] >= 0)"
# 3164 "ev.c" 3 4
   , "ev.c", 3164, __PRETTY_FUNCTION__))
# 3164 "ev.c"
                                                                   ;

  
# 3166 "ev.c" 3 4
 ((
# 3166 "ev.c"
 ((loop)->anfdmax) >= 0
# 3166 "ev.c" 3 4
 ) ? (void) (0) : __assert_fail (
# 3166 "ev.c"
 "anfdmax >= 0"
# 3166 "ev.c" 3 4
 , "ev.c", 3166, __PRETTY_FUNCTION__))
# 3166 "ev.c"
                      ;
  for (i = 0; i < ((loop)->anfdmax); ++i)
    {
      int j = 0;

      for (w = w2 = ((loop)->anfds) [i].head; w; w = w->next)
        {
          verify_watcher (loop, (W)w);

          if (j++ & 1)
            {
              
# 3177 "ev.c" 3 4
             ((
# 3177 "ev.c"
             ("libev: io watcher list contains a loop", w != w2)
# 3177 "ev.c" 3 4
             ) ? (void) (0) : __assert_fail (
# 3177 "ev.c"
             "(\"libev: io watcher list contains a loop\", w != w2)"
# 3177 "ev.c" 3 4
             , "ev.c", 3177, __PRETTY_FUNCTION__))
# 3177 "ev.c"
                                                                         ;
              w2 = w2->next;
            }

          
# 3181 "ev.c" 3 4
         ((
# 3181 "ev.c"
         ("libev: inactive fd watcher on anfd list", ((W)(w))->active == 1)
# 3181 "ev.c" 3 4
         ) ? (void) (0) : __assert_fail (
# 3181 "ev.c"
         "(\"libev: inactive fd watcher on anfd list\", ev_active (w) == 1)"
# 3181 "ev.c" 3 4
         , "ev.c", 3181, __PRETTY_FUNCTION__))
# 3181 "ev.c"
                                                                                 ;
          
# 3182 "ev.c" 3 4
         ((
# 3182 "ev.c"
         ("libev: fd mismatch between watcher and anfd", ((ev_io *)w)->fd == i)
# 3182 "ev.c" 3 4
         ) ? (void) (0) : __assert_fail (
# 3182 "ev.c"
         "(\"libev: fd mismatch between watcher and anfd\", ((ev_io *)w)->fd == i)"
# 3182 "ev.c" 3 4
         , "ev.c", 3182, __PRETTY_FUNCTION__))
# 3182 "ev.c"
                                                                                        ;
        }
    }

  
# 3186 "ev.c" 3 4
 ((
# 3186 "ev.c"
 ((loop)->timermax) >= ((loop)->timercnt)
# 3186 "ev.c" 3 4
 ) ? (void) (0) : __assert_fail (
# 3186 "ev.c"
 "timermax >= timercnt"
# 3186 "ev.c" 3 4
 , "ev.c", 3186, __PRETTY_FUNCTION__))
# 3186 "ev.c"
                              ;
  verify_heap (loop, ((loop)->timers), ((loop)->timercnt));


  
# 3190 "ev.c" 3 4
 ((
# 3190 "ev.c"
 ((loop)->periodicmax) >= ((loop)->periodiccnt)
# 3190 "ev.c" 3 4
 ) ? (void) (0) : __assert_fail (
# 3190 "ev.c"
 "periodicmax >= periodiccnt"
# 3190 "ev.c" 3 4
 , "ev.c", 3190, __PRETTY_FUNCTION__))
# 3190 "ev.c"
                                    ;
  verify_heap (loop, ((loop)->periodics), ((loop)->periodiccnt));


  for (i = ((((0x7f) & 4) ? +2 : 0) - (((0x7f) & 4) ? -2 : 0) + 1); i--; )
    {
      
# 3196 "ev.c" 3 4
     ((
# 3196 "ev.c"
     ((loop)->pendingmax) [i] >= ((loop)->pendingcnt) [i]
# 3196 "ev.c" 3 4
     ) ? (void) (0) : __assert_fail (
# 3196 "ev.c"
     "pendingmax [i] >= pendingcnt [i]"
# 3196 "ev.c" 3 4
     , "ev.c", 3196, __PRETTY_FUNCTION__))
# 3196 "ev.c"
                                              ;

      
# 3198 "ev.c" 3 4
     ((
# 3198 "ev.c"
     ((loop)->idleall) >= 0
# 3198 "ev.c" 3 4
     ) ? (void) (0) : __assert_fail (
# 3198 "ev.c"
     "idleall >= 0"
# 3198 "ev.c" 3 4
     , "ev.c", 3198, __PRETTY_FUNCTION__))
# 3198 "ev.c"
                          ;
      
# 3199 "ev.c" 3 4
     ((
# 3199 "ev.c"
     ((loop)->idlemax) [i] >= ((loop)->idlecnt) [i]
# 3199 "ev.c" 3 4
     ) ? (void) (0) : __assert_fail (
# 3199 "ev.c"
     "idlemax [i] >= idlecnt [i]"
# 3199 "ev.c" 3 4
     , "ev.c", 3199, __PRETTY_FUNCTION__))
# 3199 "ev.c"
                                        ;
      array_verify (loop, (W *)((loop)->idles) [i], ((loop)->idlecnt) [i]);

    }


  
# 3205 "ev.c" 3 4
 ((
# 3205 "ev.c"
 ((loop)->forkmax) >= ((loop)->forkcnt)
# 3205 "ev.c" 3 4
 ) ? (void) (0) : __assert_fail (
# 3205 "ev.c"
 "forkmax >= forkcnt"
# 3205 "ev.c" 3 4
 , "ev.c", 3205, __PRETTY_FUNCTION__))
# 3205 "ev.c"
                            ;
  array_verify (loop, (W *)((loop)->forks), ((loop)->forkcnt));



  
# 3210 "ev.c" 3 4
 ((
# 3210 "ev.c"
 ((loop)->cleanupmax) >= ((loop)->cleanupcnt)
# 3210 "ev.c" 3 4
 ) ? (void) (0) : __assert_fail (
# 3210 "ev.c"
 "cleanupmax >= cleanupcnt"
# 3210 "ev.c" 3 4
 , "ev.c", 3210, __PRETTY_FUNCTION__))
# 3210 "ev.c"
                                  ;
  array_verify (loop, (W *)((loop)->cleanups), ((loop)->cleanupcnt));



  
# 3215 "ev.c" 3 4
 ((
# 3215 "ev.c"
 ((loop)->asyncmax) >= ((loop)->asynccnt)
# 3215 "ev.c" 3 4
 ) ? (void) (0) : __assert_fail (
# 3215 "ev.c"
 "asyncmax >= asynccnt"
# 3215 "ev.c" 3 4
 , "ev.c", 3215, __PRETTY_FUNCTION__))
# 3215 "ev.c"
                              ;
  array_verify (loop, (W *)((loop)->asyncs), ((loop)->asynccnt));



  
# 3220 "ev.c" 3 4
 ((
# 3220 "ev.c"
 ((loop)->preparemax) >= ((loop)->preparecnt)
# 3220 "ev.c" 3 4
 ) ? (void) (0) : __assert_fail (
# 3220 "ev.c"
 "preparemax >= preparecnt"
# 3220 "ev.c" 3 4
 , "ev.c", 3220, __PRETTY_FUNCTION__))
# 3220 "ev.c"
                                  ;
  array_verify (loop, (W *)((loop)->prepares), ((loop)->preparecnt));



  
# 3225 "ev.c" 3 4
 ((
# 3225 "ev.c"
 ((loop)->checkmax) >= ((loop)->checkcnt)
# 3225 "ev.c" 3 4
 ) ? (void) (0) : __assert_fail (
# 3225 "ev.c"
 "checkmax >= checkcnt"
# 3225 "ev.c" 3 4
 , "ev.c", 3225, __PRETTY_FUNCTION__))
# 3225 "ev.c"
                              ;
  array_verify (loop, (W *)((loop)->checks), ((loop)->checkcnt));
# 3236 "ev.c"
}



__attribute__ ((__cold__))
struct ev_loop *



ev_default_loop (unsigned int flags)
{
  if (!ev_default_loop_ptr)
    {

      struct ev_loop *loop = ev_default_loop_ptr = &default_loop_struct;




      loop_init (loop, flags);

      if (ev_backend (loop))
        {

          do { do { ((ev_watcher *)(void *)((&childev)))->active = ((ev_watcher *)(void *)((&childev)))->pending = 0; ( (ev_watcher *)(void *)(((&childev))))->priority = (0); ((((&childev)))->cb = ((childcb)), memmove (&((ev_watcher *)(((&childev))))->cb, &(((&childev)))->cb, sizeof ((((&childev)))->cb))); } while (0); do { ((&childev))->signum = ((
# 3260 "ev.c" 3 4
         17
# 3260 "ev.c"
         )); } while (0); } while (0);
          ( (ev_watcher *)(void *)(&childev))->priority = ((((0x7f) & 4) ? +2 : 0));
          ev_signal_start (loop, &childev);
          ev_unref (loop);

        }
      else
        ev_default_loop_ptr = 0;
    }

  return ev_default_loop_ptr;
}

void
ev_loop_fork (struct ev_loop *loop)
{
  ((loop)->postfork) = 1;
}



void
ev_invoke (struct ev_loop *loop, void *w, int revents)
{
  ((W)w)->cb (loop, ((W)w), (revents));
}

unsigned int
ev_pending_count (struct ev_loop *loop)
{
  int pri;
  unsigned int count = 0;

  for (pri = ((((0x7f) & 4) ? +2 : 0) - (((0x7f) & 4) ? -2 : 0) + 1); pri--; )
    count += ((loop)->pendingcnt) [pri];

  return count;
}

__attribute__ ((__noinline__))
void
ev_invoke_pending (struct ev_loop *loop)
{
  ((loop)->pendingpri) = ((((0x7f) & 4) ? +2 : 0) - (((0x7f) & 4) ? -2 : 0) + 1);

  while (((loop)->pendingpri))
    {
      --((loop)->pendingpri);

      while (((loop)->pendingcnt) [((loop)->pendingpri)])
        {
          ANPENDING *p = ((loop)->pendings) [((loop)->pendingpri)] + --((loop)->pendingcnt) [((loop)->pendingpri)];

          p->w->pending = 0;
          (p->w)->cb (loop, (p->w), (p->events));
          do { } while (0);
        }
    }
}




static __inline__ void
idle_reify (struct ev_loop *loop)
{
  if (__builtin_expect ((!!(((loop)->idleall))),(0)))
    {
      int pri;

      for (pri = ((((0x7f) & 4) ? +2 : 0) - (((0x7f) & 4) ? -2 : 0) + 1); pri--; )
        {
          if (((loop)->pendingcnt) [pri])
            break;

          if (((loop)->idlecnt) [pri])
            {
              queue_events (loop, (W *)((loop)->idles) [pri], ((loop)->idlecnt) [pri], EV_IDLE);
              break;
            }
        }
    }
}



static __inline__ void
timers_reify (struct ev_loop *loop)
{
  do { } while (0);

  if (((loop)->timercnt) && (((loop)->timers) [(4 - 1)]).at < ((loop)->mn_now))
    {
      do
        {
          ev_timer *w = (ev_timer *)(((loop)->timers) [(4 - 1)]).w;




          if (w->repeat)
            {
              ((WT)(w))->at += w->repeat;
              if (((WT)(w))->at < ((loop)->mn_now))
                ((WT)(w))->at = ((loop)->mn_now);

              
# 3366 "ev.c" 3 4
             ((
# 3366 "ev.c"
             ("libev: negative ev_timer repeat value found while processing timers", w->repeat > 0.)
# 3366 "ev.c" 3 4
             ) ? (void) (0) : __assert_fail (
# 3366 "ev.c"
             "(\"libev: negative ev_timer repeat value found while processing timers\", w->repeat > 0.)"
# 3366 "ev.c" 3 4
             , "ev.c", 3366, __PRETTY_FUNCTION__))
# 3366 "ev.c"
                                                                                                             ;

              (((loop)->timers) [(4 - 1)]).at = (((loop)->timers) [(4 - 1)]).w->at;
              downheap (((loop)->timers), ((loop)->timercnt), (4 - 1));
            }
          else
            ev_timer_stop (loop, w);

          do { } while (0);
          feed_reverse (loop, (W)w);
        }
      while (((loop)->timercnt) && (((loop)->timers) [(4 - 1)]).at < ((loop)->mn_now));

      feed_reverse_done (loop, EV_TIMER);
    }
}



__attribute__ ((__noinline__))
static void
periodic_recalc (struct ev_loop *loop, ev_periodic *w)
{
  ev_tstamp interval = w->interval > 0.0001220703125 ? w->interval : 0.0001220703125;
  ev_tstamp at = w->offset + interval * floor ((((loop)->ev_rt_now) - w->offset) / interval);


  while (at <= ((loop)->ev_rt_now))
    {
      ev_tstamp nat = at + w->interval;


      if (__builtin_expect ((!!(nat == at)),(0)))
        {
          at = ((loop)->ev_rt_now);
          break;
        }

      at = nat;
    }

  ((WT)(w))->at = at;
}


static __inline__ void
periodics_reify (struct ev_loop *loop)
{
  do { } while (0);

  while (((loop)->periodiccnt) && (((loop)->periodics) [(4 - 1)]).at < ((loop)->ev_rt_now))
    {
      do
        {
          ev_periodic *w = (ev_periodic *)(((loop)->periodics) [(4 - 1)]).w;




          if (w->reschedule_cb)
            {
              ((WT)(w))->at = w->reschedule_cb (w, ((loop)->ev_rt_now));

              
# 3429 "ev.c" 3 4
             ((
# 3429 "ev.c"
             ("libev: ev_periodic reschedule callback returned time in the past", ((WT)(w))->at >= ((loop)->ev_rt_now))
# 3429 "ev.c" 3 4
             ) ? (void) (0) : __assert_fail (
# 3429 "ev.c"
             "(\"libev: ev_periodic reschedule callback returned time in the past\", ev_at (w) >= ev_rt_now)"
# 3429 "ev.c" 3 4
             , "ev.c", 3429, __PRETTY_FUNCTION__))
# 3429 "ev.c"
                                                                                                                  ;

              (((loop)->periodics) [(4 - 1)]).at = (((loop)->periodics) [(4 - 1)]).w->at;
              downheap (((loop)->periodics), ((loop)->periodiccnt), (4 - 1));
            }
          else if (w->interval)
            {
              periodic_recalc (loop, w);
              (((loop)->periodics) [(4 - 1)]).at = (((loop)->periodics) [(4 - 1)]).w->at;
              downheap (((loop)->periodics), ((loop)->periodiccnt), (4 - 1));
            }
          else
            ev_periodic_stop (loop, w);

          do { } while (0);
          feed_reverse (loop, (W)w);
        }
      while (((loop)->periodiccnt) && (((loop)->periodics) [(4 - 1)]).at < ((loop)->ev_rt_now));

      feed_reverse_done (loop, EV_PERIODIC);
    }
}



__attribute__ ((__noinline__)) __attribute__ ((__cold__))
static void
periodics_reschedule (struct ev_loop *loop)
{
  int i;


  for (i = (4 - 1); i < ((loop)->periodiccnt) + (4 - 1); ++i)
    {
      ev_periodic *w = (ev_periodic *)(((loop)->periodics) [i]).w;

      if (w->reschedule_cb)
        ((WT)(w))->at = w->reschedule_cb (w, ((loop)->ev_rt_now));
      else if (w->interval)
        periodic_recalc (loop, w);

      (((loop)->periodics) [i]).at = (((loop)->periodics) [i]).w->at;
    }

  reheap (((loop)->periodics), ((loop)->periodiccnt));
}



__attribute__ ((__noinline__)) __attribute__ ((__cold__))
static void
timers_reschedule (struct ev_loop *loop, ev_tstamp adjust)
{
  int i;

  for (i = 0; i < ((loop)->timercnt); ++i)
    {
      ANHE *he = ((loop)->timers) + i + (4 - 1);
      (*he).w->at += adjust;
      (*he).at = (*he).w->at;
    }
}



static __inline__ void
time_update (struct ev_loop *loop, ev_tstamp max_block)
{

  if (__builtin_expect ((!!(have_monotonic)),(1)))
    {
      int i;
      ev_tstamp odiff = ((loop)->rtmn_diff);

      ((loop)->mn_now) = get_clock ();



      if (__builtin_expect ((!!(((loop)->mn_now) - ((loop)->now_floor) < 1. * .5)),(1)))
        {
          ((loop)->ev_rt_now) = ((loop)->rtmn_diff) + ((loop)->mn_now);
          return;
        }

      ((loop)->now_floor) = ((loop)->mn_now);
      ((loop)->ev_rt_now) = ev_time ();
# 3524 "ev.c"
      for (i = 4; --i; )
        {
          ev_tstamp diff;
          ((loop)->rtmn_diff) = ((loop)->ev_rt_now) - ((loop)->mn_now);

          diff = odiff - ((loop)->rtmn_diff);

          if (__builtin_expect ((!!((diff < 0. ? -diff : diff) < 1.)),(1)))
            return;

          ((loop)->ev_rt_now) = ev_time ();
          ((loop)->mn_now) = get_clock ();
          ((loop)->now_floor) = ((loop)->mn_now);
        }




      periodics_reschedule (loop);

    }
  else

    {
      ((loop)->ev_rt_now) = ev_time ();

      if (__builtin_expect ((!!(((loop)->mn_now) > ((loop)->ev_rt_now) || ((loop)->ev_rt_now) > ((loop)->mn_now) + max_block + 1.)),(0)))
        {

          timers_reschedule (loop, ((loop)->ev_rt_now) - ((loop)->mn_now));

          periodics_reschedule (loop);

        }

      ((loop)->mn_now) = ((loop)->ev_rt_now);
    }
}

int
ev_run (struct ev_loop *loop, int flags)
{

  ++((loop)->loop_depth);


  
# 3570 "ev.c" 3 4
 ((
# 3570 "ev.c"
 ("libev: ev_loop recursion during release detected", ((loop)->loop_done) != 0x80)
# 3570 "ev.c" 3 4
 ) ? (void) (0) : __assert_fail (
# 3570 "ev.c"
 "(\"libev: ev_loop recursion during release detected\", loop_done != EVBREAK_RECURSE)"
# 3570 "ev.c" 3 4
 , "ev.c", 3570, __PRETTY_FUNCTION__))
# 3570 "ev.c"
                                                                                            ;

  ((loop)->loop_done) = EVBREAK_CANCEL;

  ((loop)->invoke_cb) (loop);

  do
    {





      if (__builtin_expect ((!!(((loop)->curpid))),(0)))
        if (__builtin_expect ((!!(getpid () != ((loop)->curpid))),(0)))
          {
            ((loop)->curpid) = getpid ();
            ((loop)->postfork) = 1;
          }




      if (__builtin_expect ((!!(((loop)->postfork))),(0)))
        if (((loop)->forkcnt))
          {
            queue_events (loop, (W *)((loop)->forks), ((loop)->forkcnt), EV_FORK);
            ((loop)->invoke_cb) (loop);
          }




      if (__builtin_expect ((!!(((loop)->preparecnt))),(0)))
        {
          queue_events (loop, (W *)((loop)->prepares), ((loop)->preparecnt), EV_PREPARE);
          ((loop)->invoke_cb) (loop);
        }


      if (__builtin_expect ((!!(((loop)->loop_done))),(0)))
        break;


      if (__builtin_expect ((!!(((loop)->postfork))),(0)))
        loop_fork (loop);


      fd_reify (loop);


      {
        ev_tstamp waittime = 0.;
        ev_tstamp sleeptime = 0.;


        ev_tstamp prev_mn_now = ((loop)->mn_now);


        time_update (loop, 1e100);


        ((loop)->pipe_write_wanted) = 1;

        __asm__ __volatile__ ("mfence" : : : "memory");

        if (__builtin_expect ((!!(!(flags & EVRUN_NOWAIT || ((loop)->idleall) || !((loop)->activecnt) || ((loop)->pipe_write_skipped)))),(1)))
          {
            waittime = 59.743;

            if (((loop)->timercnt))
              {
                ev_tstamp to = (((loop)->timers) [(4 - 1)]).at - ((loop)->mn_now);
                if (waittime > to) waittime = to;
              }


            if (((loop)->periodiccnt))
              {
                ev_tstamp to = (((loop)->periodics) [(4 - 1)]).at - ((loop)->ev_rt_now);
                if (waittime > to) waittime = to;
              }



            if (__builtin_expect ((!!(waittime < ((loop)->timeout_blocktime))),(0)))
              waittime = ((loop)->timeout_blocktime);



            if (__builtin_expect ((!!(waittime < ((loop)->backend_mintime))),(0)))
              waittime = ((loop)->backend_mintime);


            if (__builtin_expect ((!!(((loop)->io_blocktime))),(0)))
              {
                sleeptime = ((loop)->io_blocktime) - (((loop)->mn_now) - prev_mn_now);

                if (sleeptime > waittime - ((loop)->backend_mintime))
                  sleeptime = waittime - ((loop)->backend_mintime);

                if (__builtin_expect ((!!(sleeptime > 0.)),(1)))
                  {
                    ev_sleep (sleeptime);
                    waittime -= sleeptime;
                  }
              }
          }


        ++((loop)->loop_count);

        
# 3682 "ev.c" 3 4
       ((
# 3682 "ev.c"
       (((loop)->loop_done) = 0x80, 1)
# 3682 "ev.c" 3 4
       ) ? (void) (0) : __assert_fail (
# 3682 "ev.c"
       "(loop_done = EVBREAK_RECURSE, 1)"
# 3682 "ev.c" 3 4
       , "ev.c", 3682, __PRETTY_FUNCTION__))
# 3682 "ev.c"
                                                ;
        ((loop)->backend_poll) (loop, waittime);
        
# 3684 "ev.c" 3 4
       ((
# 3684 "ev.c"
       (((loop)->loop_done) = EVBREAK_CANCEL, 1)
# 3684 "ev.c" 3 4
       ) ? (void) (0) : __assert_fail (
# 3684 "ev.c"
       "(loop_done = EVBREAK_CANCEL, 1)"
# 3684 "ev.c" 3 4
       , "ev.c", 3684, __PRETTY_FUNCTION__))
# 3684 "ev.c"
                                               ;

        ((loop)->pipe_write_wanted) = 0;

        __asm__ __volatile__ ("" : : : "memory");
        if (((loop)->pipe_write_skipped))
          {
            
# 3691 "ev.c" 3 4
           ((
# 3691 "ev.c"
           ("libev: pipe_w not active, but pipe not written", (0 + ((ev_watcher *)(void *)(&((loop)->pipe_w)))->active))
# 3691 "ev.c" 3 4
           ) ? (void) (0) : __assert_fail (
# 3691 "ev.c"
           "(\"libev: pipe_w not active, but pipe not written\", ev_is_active (&pipe_w))"
# 3691 "ev.c" 3 4
           , "ev.c", 3691, __PRETTY_FUNCTION__))
# 3691 "ev.c"
                                                                                              ;
            ev_feed_event (loop, &((loop)->pipe_w), EV_CUSTOM);
          }



        time_update (loop, waittime + sleeptime);
      }


      timers_reify (loop);

      periodics_reify (loop);




      idle_reify (loop);




      if (__builtin_expect ((!!(((loop)->checkcnt))),(0)))
        queue_events (loop, (W *)((loop)->checks), ((loop)->checkcnt), EV_CHECK);


      ((loop)->invoke_cb) (loop);
    }
  while (__builtin_expect ((!!(((loop)->activecnt) && !((loop)->loop_done) && !(flags & (EVRUN_ONCE | EVRUN_NOWAIT)))),(1))



   );

  if (((loop)->loop_done) == EVBREAK_ONE)
    ((loop)->loop_done) = EVBREAK_CANCEL;


  --((loop)->loop_depth);


  return ((loop)->activecnt);
}

void
ev_break (struct ev_loop *loop, int how)
{
  ((loop)->loop_done) = how;
}

void
ev_ref (struct ev_loop *loop)
{
  ++((loop)->activecnt);
}

void
ev_unref (struct ev_loop *loop)
{
  --((loop)->activecnt);
}

void
ev_now_update (struct ev_loop *loop)
{
  time_update (loop, 1e100);
}

void
ev_suspend (struct ev_loop *loop)
{
  ev_now_update (loop);
}

void
ev_resume (struct ev_loop *loop)
{
  ev_tstamp mn_prev = ((loop)->mn_now);

  ev_now_update (loop);
  timers_reschedule (loop, ((loop)->mn_now) - mn_prev);


  periodics_reschedule (loop);

}




static __inline__ void
wlist_add (WL *head, WL elem)
{
  elem->next = *head;
  *head = elem;
}

static __inline__ void
wlist_del (WL *head, WL elem)
{
  while (*head)
    {
      if (__builtin_expect ((!!(*head == elem)),(1)))
        {
          *head = elem->next;
          break;
        }

      head = &(*head)->next;
    }
}


static __inline__ void
clear_pending (struct ev_loop *loop, W w)
{
  if (w->pending)
    {
      ((loop)->pendings) [(((W)w)->priority - (((0x7f) & 4) ? -2 : 0))][w->pending - 1].w = (W)&((loop)->pending_w);
      w->pending = 0;
    }
}

int
ev_clear_pending (struct ev_loop *loop, void *w)
{
  W w_ = (W)w;
  int pending = w_->pending;

  if (__builtin_expect ((!!(pending)),(1)))
    {
      ANPENDING *p = ((loop)->pendings) [(((W)w_)->priority - (((0x7f) & 4) ? -2 : 0))] + pending - 1;
      p->w = (W)&((loop)->pending_w);
      w_->pending = 0;
      return p->events;
    }
  else
    return 0;
}

static __inline__ void
pri_adjust (struct ev_loop *loop, W w)
{
  int pri = (+(((ev_watcher *)(void *)(w))->priority));
  pri = pri < (((0x7f) & 4) ? -2 : 0) ? (((0x7f) & 4) ? -2 : 0) : pri;
  pri = pri > (((0x7f) & 4) ? +2 : 0) ? (((0x7f) & 4) ? +2 : 0) : pri;
  ( (ev_watcher *)(void *)(w))->priority = (pri);
}

static __inline__ void
ev_start (struct ev_loop *loop, W w, int active)
{
  pri_adjust (loop, w);
  w->active = active;
  ev_ref (loop);
}

static __inline__ void
ev_stop (struct ev_loop *loop, W w)
{
  ev_unref (loop);
  w->active = 0;
}



__attribute__ ((__noinline__))
void
ev_io_start (struct ev_loop *loop, ev_io *w)
{
  int fd = w->fd;

  if (__builtin_expect ((!!((0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  
# 3866 "ev.c" 3 4
 ((
# 3866 "ev.c"
 ("libev: ev_io_start called with negative fd", fd >= 0)
# 3866 "ev.c" 3 4
 ) ? (void) (0) : __assert_fail (
# 3866 "ev.c"
 "(\"libev: ev_io_start called with negative fd\", fd >= 0)"
# 3866 "ev.c" 3 4
 , "ev.c", 3866, __PRETTY_FUNCTION__))
# 3866 "ev.c"
                                                                 ;
  
# 3867 "ev.c" 3 4
 ((
# 3867 "ev.c"
 ("libev: ev_io_start called with illegal event mask", !(w->events & ~(EV__IOFDSET | EV_READ | EV_WRITE)))
# 3867 "ev.c" 3 4
 ) ? (void) (0) : __assert_fail (
# 3867 "ev.c"
 "(\"libev: ev_io_start called with illegal event mask\", !(w->events & ~(EV__IOFDSET | EV_READ | EV_WRITE)))"
# 3867 "ev.c" 3 4
 , "ev.c", 3867, __PRETTY_FUNCTION__))
# 3867 "ev.c"
                                                                                                                   ;

  do { } while (0);

  ev_start (loop, (W)w, 1);
  if (__builtin_expect ((!!((fd + 1) > (((loop)->anfdmax)))),(0))) { __attribute__ ((__unused__)) int ocur_ = (((loop)->anfdmax)); (((loop)->anfds)) = (ANFD *)array_realloc (sizeof (ANFD), (((loop)->anfds)), &(((loop)->anfdmax)), (fd + 1)); memset ((void *)((((loop)->anfds)) + (ocur_)), 0, sizeof (*((((loop)->anfds)) + (ocur_))) * ((((loop)->anfdmax)) - ocur_)); };
  wlist_add (&((loop)->anfds)[fd].head, (WL)w);


  
# 3876 "ev.c" 3 4
 ((
# 3876 "ev.c"
 ("libev: ev_io_start called with corrupted watcher", ((WL)w)->next != (WL)w)
# 3876 "ev.c" 3 4
 ) ? (void) (0) : __assert_fail (
# 3876 "ev.c"
 "(\"libev: ev_io_start called with corrupted watcher\", ((WL)w)->next != (WL)w)"
# 3876 "ev.c" 3 4
 , "ev.c", 3876, __PRETTY_FUNCTION__))
# 3876 "ev.c"
                                                                                      ;

  fd_change (loop, fd, w->events & EV__IOFDSET | 1);
  w->events &= ~EV__IOFDSET;

  do { } while (0);
}

__attribute__ ((__noinline__))
void
ev_io_stop (struct ev_loop *loop, ev_io *w)
{
  clear_pending (loop, (W)w);
  if (__builtin_expect ((!!(!(0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  
# 3892 "ev.c" 3 4
 ((
# 3892 "ev.c"
 ("libev: ev_io_stop called with illegal fd (must stay constant after start!)", w->fd >= 0 && w->fd < ((loop)->anfdmax))
# 3892 "ev.c" 3 4
 ) ? (void) (0) : __assert_fail (
# 3892 "ev.c"
 "(\"libev: ev_io_stop called with illegal fd (must stay constant after start!)\", w->fd >= 0 && w->fd < anfdmax)"
# 3892 "ev.c" 3 4
 , "ev.c", 3892, __PRETTY_FUNCTION__))
# 3892 "ev.c"
                                                                                                                       ;

  do { } while (0);

  wlist_del (&((loop)->anfds)[w->fd].head, (WL)w);
  ev_stop (loop, (W)w);

  fd_change (loop, w->fd, 1);

  do { } while (0);
}

__attribute__ ((__noinline__))
void
ev_timer_start (struct ev_loop *loop, ev_timer *w)
{
  if (__builtin_expect ((!!((0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  ((WT)(w))->at += ((loop)->mn_now);

  
# 3913 "ev.c" 3 4
 ((
# 3913 "ev.c"
 ("libev: ev_timer_start called with negative timer repeat value", w->repeat >= 0.)
# 3913 "ev.c" 3 4
 ) ? (void) (0) : __assert_fail (
# 3913 "ev.c"
 "(\"libev: ev_timer_start called with negative timer repeat value\", w->repeat >= 0.)"
# 3913 "ev.c" 3 4
 , "ev.c", 3913, __PRETTY_FUNCTION__))
# 3913 "ev.c"
                                                                                            ;

  do { } while (0);

  ++((loop)->timercnt);
  ev_start (loop, (W)w, ((loop)->timercnt) + (4 - 1) - 1);
  if (__builtin_expect ((!!((((W)(w))->active + 1) > (((loop)->timermax)))),(0))) { __attribute__ ((__unused__)) int ocur_ = (((loop)->timermax)); (((loop)->timers)) = (ANHE *)array_realloc (sizeof (ANHE), (((loop)->timers)), &(((loop)->timermax)), (((W)(w))->active + 1)); ; };
  (((loop)->timers) [((W)(w))->active]).w = (WT)w;
  (((loop)->timers) [((W)(w))->active]).at = (((loop)->timers) [((W)(w))->active]).w->at;
  upheap (((loop)->timers), ((W)(w))->active);

  do { } while (0);


}

__attribute__ ((__noinline__))
void
ev_timer_stop (struct ev_loop *loop, ev_timer *w)
{
  clear_pending (loop, (W)w);
  if (__builtin_expect ((!!(!(0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  do { } while (0);

  {
    int active = ((W)(w))->active;

    
# 3942 "ev.c" 3 4
   ((
# 3942 "ev.c"
   ("libev: internal timer heap corruption", (((loop)->timers) [active]).w == (WT)w)
# 3942 "ev.c" 3 4
   ) ? (void) (0) : __assert_fail (
# 3942 "ev.c"
   "(\"libev: internal timer heap corruption\", ANHE_w (timers [active]) == (WT)w)"
# 3942 "ev.c" 3 4
   , "ev.c", 3942, __PRETTY_FUNCTION__))
# 3942 "ev.c"
                                                                                        ;

    --((loop)->timercnt);

    if (__builtin_expect ((!!(active < ((loop)->timercnt) + (4 - 1))),(1)))
      {
        ((loop)->timers) [active] = ((loop)->timers) [((loop)->timercnt) + (4 - 1)];
        adjustheap (((loop)->timers), ((loop)->timercnt), active);
      }
  }

  ((WT)(w))->at -= ((loop)->mn_now);

  ev_stop (loop, (W)w);

  do { } while (0);
}

__attribute__ ((__noinline__))
void
ev_timer_again (struct ev_loop *loop, ev_timer *w)
{
  do { } while (0);

  clear_pending (loop, (W)w);

  if ((0 + ((ev_watcher *)(void *)(w))->active))
    {
      if (w->repeat)
        {
          ((WT)(w))->at = ((loop)->mn_now) + w->repeat;
          (((loop)->timers) [((W)(w))->active]).at = (((loop)->timers) [((W)(w))->active]).w->at;
          adjustheap (((loop)->timers), ((loop)->timercnt), ((W)(w))->active);
        }
      else
        ev_timer_stop (loop, w);
    }
  else if (w->repeat)
    {
      ((WT)(w))->at = w->repeat;
      ev_timer_start (loop, w);
    }

  do { } while (0);
}

ev_tstamp
ev_timer_remaining (struct ev_loop *loop, ev_timer *w)
{
  return ((WT)(w))->at - ((0 + ((ev_watcher *)(void *)(w))->active) ? ((loop)->mn_now) : 0.);
}


__attribute__ ((__noinline__))
void
ev_periodic_start (struct ev_loop *loop, ev_periodic *w)
{
  if (__builtin_expect ((!!((0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  if (w->reschedule_cb)
    ((WT)(w))->at = w->reschedule_cb (w, ((loop)->ev_rt_now));
  else if (w->interval)
    {
      
# 4006 "ev.c" 3 4
     ((
# 4006 "ev.c"
     ("libev: ev_periodic_start called with negative interval value", w->interval >= 0.)
# 4006 "ev.c" 3 4
     ) ? (void) (0) : __assert_fail (
# 4006 "ev.c"
     "(\"libev: ev_periodic_start called with negative interval value\", w->interval >= 0.)"
# 4006 "ev.c" 3 4
     , "ev.c", 4006, __PRETTY_FUNCTION__))
# 4006 "ev.c"
                                                                                                 ;
      periodic_recalc (loop, w);
    }
  else
    ((WT)(w))->at = w->offset;

  do { } while (0);

  ++((loop)->periodiccnt);
  ev_start (loop, (W)w, ((loop)->periodiccnt) + (4 - 1) - 1);
  if (__builtin_expect ((!!((((W)(w))->active + 1) > (((loop)->periodicmax)))),(0))) { __attribute__ ((__unused__)) int ocur_ = (((loop)->periodicmax)); (((loop)->periodics)) = (ANHE *)array_realloc (sizeof (ANHE), (((loop)->periodics)), &(((loop)->periodicmax)), (((W)(w))->active + 1)); ; };
  (((loop)->periodics) [((W)(w))->active]).w = (WT)w;
  (((loop)->periodics) [((W)(w))->active]).at = (((loop)->periodics) [((W)(w))->active]).w->at;
  upheap (((loop)->periodics), ((W)(w))->active);

  do { } while (0);


}

__attribute__ ((__noinline__))
void
ev_periodic_stop (struct ev_loop *loop, ev_periodic *w)
{
  clear_pending (loop, (W)w);
  if (__builtin_expect ((!!(!(0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  do { } while (0);

  {
    int active = ((W)(w))->active;

    
# 4039 "ev.c" 3 4
   ((
# 4039 "ev.c"
   ("libev: internal periodic heap corruption", (((loop)->periodics) [active]).w == (WT)w)
# 4039 "ev.c" 3 4
   ) ? (void) (0) : __assert_fail (
# 4039 "ev.c"
   "(\"libev: internal periodic heap corruption\", ANHE_w (periodics [active]) == (WT)w)"
# 4039 "ev.c" 3 4
   , "ev.c", 4039, __PRETTY_FUNCTION__))
# 4039 "ev.c"
                                                                                              ;

    --((loop)->periodiccnt);

    if (__builtin_expect ((!!(active < ((loop)->periodiccnt) + (4 - 1))),(1)))
      {
        ((loop)->periodics) [active] = ((loop)->periodics) [((loop)->periodiccnt) + (4 - 1)];
        adjustheap (((loop)->periodics), ((loop)->periodiccnt), active);
      }
  }

  ev_stop (loop, (W)w);

  do { } while (0);
}

__attribute__ ((__noinline__))
void
ev_periodic_again (struct ev_loop *loop, ev_periodic *w)
{

  ev_periodic_stop (loop, w);
  ev_periodic_start (loop, w);
}
# 4071 "ev.c"
__attribute__ ((__noinline__))
void
ev_signal_start (struct ev_loop *loop, ev_signal *w)
{
  if (__builtin_expect ((!!((0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  
# 4078 "ev.c" 3 4
 ((
# 4078 "ev.c"
 ("libev: ev_signal_start called with illegal signal number", w->signum > 0 && w->signum < (
# 4078 "ev.c" 3 4
 65
# 4078 "ev.c"
 ))
# 4078 "ev.c" 3 4
 ) ? (void) (0) : __assert_fail (
# 4078 "ev.c"
 "(\"libev: ev_signal_start called with illegal signal number\", w->signum > 0 && w->signum < EV_NSIG)"
# 4078 "ev.c" 3 4
 , "ev.c", 4078, __PRETTY_FUNCTION__))
# 4078 "ev.c"
                                                                                                            ;


  
# 4081 "ev.c" 3 4
 ((
# 4081 "ev.c"
 ("libev: a signal must not be attached to two different loops", !signals [w->signum - 1].loop || signals [w->signum - 1].loop == loop)
# 4081 "ev.c" 3 4
 ) ? (void) (0) : __assert_fail (
# 4081 "ev.c"
 "(\"libev: a signal must not be attached to two different loops\", !signals [w->signum - 1].loop || signals [w->signum - 1].loop == loop)"
# 4081 "ev.c" 3 4
 ,
                                                                                 "ev.c"
# 4081 "ev.c" 3 4
  ,
                                                                                 4082
# 4081 "ev.c" 3 4
  , __PRETTY_FUNCTION__))
                                                                                  
# 4082 "ev.c"
                                                                                 ;

  signals [w->signum - 1].loop = loop;
  __asm__ __volatile__ ("");


  do { } while (0);


  if (((loop)->sigfd) == -2)
    {
      ((loop)->sigfd) = signalfd (-1, &((loop)->sigfd_set), 
# 4093 "ev.c" 3 4
                                       04000 
# 4093 "ev.c"
                                                    | 
# 4093 "ev.c" 3 4
                                                      02000000
# 4093 "ev.c"
                                                                 );
      if (((loop)->sigfd) < 0 && 
# 4094 "ev.c" 3 4
                      (*__errno_location ()) 
# 4094 "ev.c"
                            == 
# 4094 "ev.c" 3 4
                               22
# 4094 "ev.c"
                                     )
        ((loop)->sigfd) = signalfd (-1, &((loop)->sigfd_set), 0);

      if (((loop)->sigfd) >= 0)
        {
          fd_intern (((loop)->sigfd));

          sigemptyset (&((loop)->sigfd_set));

          do { do { ((ev_watcher *)(void *)((&((loop)->sigfd_w))))->active = ((ev_watcher *)(void *)((&((loop)->sigfd_w))))->pending = 0; ( (ev_watcher *)(void *)(((&((loop)->sigfd_w)))))->priority = (0); ((((&((loop)->sigfd_w))))->cb = ((sigfdcb)), memmove (&((ev_watcher *)(((&((loop)->sigfd_w)))))->cb, &(((&((loop)->sigfd_w))))->cb, sizeof ((((&((loop)->sigfd_w))))->cb))); } while (0); do { ((&((loop)->sigfd_w)))->fd = ((((loop)->sigfd))); ((&((loop)->sigfd_w)))->events = ((EV_READ)) | EV__IOFDSET; } while (0); } while (0);
          ( (ev_watcher *)(void *)(&((loop)->sigfd_w)))->priority = ((((0x7f) & 4) ? +2 : 0));
          ev_io_start (loop, &((loop)->sigfd_w));
          ev_unref (loop);
        }
    }

  if (((loop)->sigfd) >= 0)
    {

      sigaddset (&((loop)->sigfd_set), w->signum);
      sigprocmask (
# 4114 "ev.c" 3 4
                  0
# 4114 "ev.c"
                           , &((loop)->sigfd_set), 0);

      signalfd (((loop)->sigfd), &((loop)->sigfd_set), 0);
    }


  ev_start (loop, (W)w, 1);
  wlist_add (&signals [w->signum - 1].head, (WL)w);

  if (!((WL)w)->next)

    if (((loop)->sigfd) < 0)

      {





        struct sigaction sa;

        evpipe_init (loop);

        sa.
# 4137 "ev.c" 3 4
          __sigaction_handler.sa_handler 
# 4137 "ev.c"
                     = ev_sighandler;
        sigfillset (&sa.sa_mask);
        sa.sa_flags = 
# 4139 "ev.c" 3 4
                     0x10000000
# 4139 "ev.c"
                               ;
        sigaction (w->signum, &sa, 0);

        if (((loop)->origflags) & EVFLAG_NOSIGMASK)
          {
            sigemptyset (&sa.sa_mask);
            sigaddset (&sa.sa_mask, w->signum);
            sigprocmask (
# 4146 "ev.c" 3 4
                        1
# 4146 "ev.c"
                                   , &sa.sa_mask, 0);
          }

      }

  do { } while (0);
}

__attribute__ ((__noinline__))
void
ev_signal_stop (struct ev_loop *loop, ev_signal *w)
{
  clear_pending (loop, (W)w);
  if (__builtin_expect ((!!(!(0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  do { } while (0);

  wlist_del (&signals [w->signum - 1].head, (WL)w);
  ev_stop (loop, (W)w);

  if (!signals [w->signum - 1].head)
    {

      signals [w->signum - 1].loop = 0;


      if (((loop)->sigfd) >= 0)
        {
          sigset_t ss;

          sigemptyset (&ss);
          sigaddset (&ss, w->signum);
          sigdelset (&((loop)->sigfd_set), w->signum);

          signalfd (((loop)->sigfd), &((loop)->sigfd_set), 0);
          sigprocmask (
# 4182 "ev.c" 3 4
                      1
# 4182 "ev.c"
                                 , &ss, 0);
        }
      else

        signal (w->signum, 
# 4186 "ev.c" 3 4
                          ((__sighandler_t) 0)
# 4186 "ev.c"
                                 );
    }

  do { } while (0);
}





void
ev_child_start (struct ev_loop *loop, ev_child *w)
{

  
# 4200 "ev.c" 3 4
 ((
# 4200 "ev.c"
 ("libev: child watchers are only supported in the default loop", loop == ev_default_loop_ptr)
# 4200 "ev.c" 3 4
 ) ? (void) (0) : __assert_fail (
# 4200 "ev.c"
 "(\"libev: child watchers are only supported in the default loop\", loop == ev_default_loop_ptr)"
# 4200 "ev.c" 3 4
 , "ev.c", 4200, __PRETTY_FUNCTION__))
# 4200 "ev.c"
                                                                                                       ;

  if (__builtin_expect ((!!((0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  do { } while (0);

  ev_start (loop, (W)w, 1);
  wlist_add (&childs [w->pid & ((((0x7f) & 2) ? 16 : 1) - 1)], (WL)w);

  do { } while (0);
}

void
ev_child_stop (struct ev_loop *loop, ev_child *w)
{
  clear_pending (loop, (W)w);
  if (__builtin_expect ((!!(!(0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  do { } while (0);

  wlist_del (&childs [w->pid & ((((0x7f) & 2) ? 16 : 1) - 1)], (WL)w);
  ev_stop (loop, (W)w);

  do { } while (0);
}
# 4241 "ev.c"
__attribute__ ((__noinline__)) static void stat_timer_cb (struct ev_loop *loop, ev_timer *w_, int revents);






__attribute__ ((__noinline__))
static void
infy_add (struct ev_loop *loop, ev_stat *w)
{
  w->wd = inotify_add_watch (((loop)->fs_fd), w->path,
                             
# 4253 "ev.c" 3 4
                            0x00000004 
# 4253 "ev.c"
                                      | 
# 4253 "ev.c" 3 4
                                        0x00000400 
# 4253 "ev.c"
                                                       | 
# 4253 "ev.c" 3 4
                                                         0x00000800 
# 4253 "ev.c"
                                                                      | 
# 4253 "ev.c" 3 4
                                                                        0x00000002
                             
# 4254 "ev.c"
                            | 
# 4254 "ev.c" 3 4
                              0x00000100 
# 4254 "ev.c"
                                        | 
# 4254 "ev.c" 3 4
                                          0x00000200 
# 4254 "ev.c"
                                                    | 
# 4254 "ev.c" 3 4
                                                      0x00000040 
# 4254 "ev.c"
                                                                    | 
# 4254 "ev.c" 3 4
                                                                      0x00000080
                             
# 4255 "ev.c"
                            | 
# 4255 "ev.c" 3 4
                              0x02000000 
# 4255 "ev.c"
                                             | 
# 4255 "ev.c" 3 4
                                               0x20000000
# 4255 "ev.c"
                                                          );

  if (w->wd >= 0)
    {
      struct statfs sfs;





      if (!((loop)->fs_2625))
        w->timer.repeat = w->interval ? w->interval : 5.0074891;
      else if (!statfs (w->path, &sfs)
               && (sfs.f_type == 0x1373
                   || sfs.f_type == 0x4006
                   || sfs.f_type == 0x4d44
                   || sfs.f_type == 0xEF53
                   || sfs.f_type == 0x72b6
                   || sfs.f_type == 0x858458f6
                   || sfs.f_type == 0x5346544e
                   || sfs.f_type == 0x3153464a
                   || sfs.f_type == 0x9123683e
                   || sfs.f_type == 0x52654973
                   || sfs.f_type == 0x01021994
                   || sfs.f_type == 0x58465342 ))
        w->timer.repeat = 0.;
      else
        w->timer.repeat = w->interval ? w->interval : 30.1074891;
    }
  else
    {

      w->timer.repeat = w->interval ? w->interval : 5.0074891;




      if ((
# 4292 "ev.c" 3 4
          (*__errno_location ()) 
# 4292 "ev.c"
                == 
# 4292 "ev.c" 3 4
                   2 
# 4292 "ev.c"
                          || 
# 4292 "ev.c" 3 4
                             (*__errno_location ()) 
# 4292 "ev.c"
                                   == 
# 4292 "ev.c" 3 4
                                      13
# 4292 "ev.c"
                                            ) && strlen (w->path) < 4096)
        {
          char path [4096];
          strcpy (path, w->path);

          do
            {
              int mask = 
# 4299 "ev.c" 3 4
                        0x20000000 
# 4299 "ev.c"
                                    | 
# 4299 "ev.c" 3 4
                                      0x00000400 
# 4299 "ev.c"
                                                     | 
# 4299 "ev.c" 3 4
                                                       0x00000800
                       
# 4300 "ev.c"
                      | (
# 4300 "ev.c" 3 4
                         (*__errno_location ()) 
# 4300 "ev.c"
                               == 
# 4300 "ev.c" 3 4
                                  13 
# 4300 "ev.c"
                                         ? 
# 4300 "ev.c" 3 4
                                           0x00000004 
# 4300 "ev.c"
                                                     : 
# 4300 "ev.c" 3 4
                                                       0x00000100 
# 4300 "ev.c"
                                                                 | 
# 4300 "ev.c" 3 4
                                                                   0x00000080
# 4300 "ev.c"
                                                                              );

              char *pend = strrchr (path, '/');

              if (!pend || pend == path)
                break;

              *pend = 0;
              w->wd = inotify_add_watch (((loop)->fs_fd), path, mask);
            }
          while (w->wd < 0 && (
# 4310 "ev.c" 3 4
                              (*__errno_location ()) 
# 4310 "ev.c"
                                    == 
# 4310 "ev.c" 3 4
                                       2 
# 4310 "ev.c"
                                              || 
# 4310 "ev.c" 3 4
                                                 (*__errno_location ()) 
# 4310 "ev.c"
                                                       == 
# 4310 "ev.c" 3 4
                                                          13
# 4310 "ev.c"
                                                                ));
        }
    }

  if (w->wd >= 0)
    wlist_add (&((loop)->fs_hash) [w->wd & ((((0x7f) & 2) ? 16 : 1) - 1)].head, (WL)w);


  if ((0 + ((ev_watcher *)(void *)(&w->timer))->active)) ev_ref (loop);
  ev_timer_again (loop, &w->timer);
  if ((0 + ((ev_watcher *)(void *)(&w->timer))->active)) ev_unref (loop);
}

__attribute__ ((__noinline__))
static void
infy_del (struct ev_loop *loop, ev_stat *w)
{
  int slot;
  int wd = w->wd;

  if (wd < 0)
    return;

  w->wd = -2;
  slot = wd & ((((0x7f) & 2) ? 16 : 1) - 1);
  wlist_del (&((loop)->fs_hash) [slot].head, (WL)w);


  inotify_rm_watch (((loop)->fs_fd), wd);
}

__attribute__ ((__noinline__))
static void
infy_wd (struct ev_loop *loop, int slot, int wd, struct inotify_event *ev)
{
  if (slot < 0)

    for (slot = 0; slot < (((0x7f) & 2) ? 16 : 1); ++slot)
      infy_wd (loop, slot, wd, ev);
  else
    {
      WL w_;

      for (w_ = ((loop)->fs_hash) [slot & ((((0x7f) & 2) ? 16 : 1) - 1)].head; w_; )
        {
          ev_stat *w = (ev_stat *)w_;
          w_ = w_->next;

          if (w->wd == wd || wd == -1)
            {
              if (ev->mask & (
# 4360 "ev.c" 3 4
                             0x00008000 
# 4360 "ev.c"
                                        | 
# 4360 "ev.c" 3 4
                                          0x00002000 
# 4360 "ev.c"
                                                     | 
# 4360 "ev.c" 3 4
                                                       0x00000400
# 4360 "ev.c"
                                                                     ))
                {
                  wlist_del (&((loop)->fs_hash) [slot & ((((0x7f) & 2) ? 16 : 1) - 1)].head, (WL)w);
                  w->wd = -1;
                  infy_add (loop, w);
                }

              stat_timer_cb (loop, &w->timer, 0);
            }
        }
    }
}

static void
infy_cb (struct ev_loop *loop, ev_io *w, int revents)
{
  char buf [(sizeof (struct inotify_event) * 2 + 
# 4376 "ev.c" 3 4
           255
# 4376 "ev.c"
           )];
  int ofs;
  int len = read (((loop)->fs_fd), buf, sizeof (buf));

  for (ofs = 0; ofs < len; )
    {
      struct inotify_event *ev = (struct inotify_event *)(buf + ofs);
      infy_wd (loop, ev->wd, ev->wd, ev);
      ofs += sizeof (struct inotify_event) + ev->len;
    }
}

static __inline__ __attribute__ ((__cold__))
void
ev_check_2625 (struct ev_loop *loop)
{



  if (ev_linux_version () < 0x020619)
    return;

  ((loop)->fs_2625) = 1;
}

static __inline__ int
infy_newfd (void)
{

  int fd = inotify_init1 (
# 4405 "ev.c" 3 4
                         IN_CLOEXEC 
# 4405 "ev.c"
                                    | 
# 4405 "ev.c" 3 4
                                      IN_NONBLOCK
# 4405 "ev.c"
                                                 );
  if (fd >= 0)
    return fd;

  return inotify_init ();
}

static __inline__ void
infy_init (struct ev_loop *loop)
{
  if (((loop)->fs_fd) != -2)
    return;

  ((loop)->fs_fd) = -1;

  ev_check_2625 (loop);

  ((loop)->fs_fd) = infy_newfd ();

  if (((loop)->fs_fd) >= 0)
    {
      fd_intern (((loop)->fs_fd));
      do { do { ((ev_watcher *)(void *)((&((loop)->fs_w))))->active = ((ev_watcher *)(void *)((&((loop)->fs_w))))->pending = 0; ( (ev_watcher *)(void *)(((&((loop)->fs_w)))))->priority = (0); ((((&((loop)->fs_w))))->cb = ((infy_cb)), memmove (&((ev_watcher *)(((&((loop)->fs_w)))))->cb, &(((&((loop)->fs_w))))->cb, sizeof ((((&((loop)->fs_w))))->cb))); } while (0); do { ((&((loop)->fs_w)))->fd = ((((loop)->fs_fd))); ((&((loop)->fs_w)))->events = ((EV_READ)) | EV__IOFDSET; } while (0); } while (0);
      ( (ev_watcher *)(void *)(&((loop)->fs_w)))->priority = ((((0x7f) & 4) ? +2 : 0));
      ev_io_start (loop, &((loop)->fs_w));
      ev_unref (loop);
    }
}

static __inline__ void
infy_fork (struct ev_loop *loop)
{
  int slot;

  if (((loop)->fs_fd) < 0)
    return;

  ev_ref (loop);
  ev_io_stop (loop, &((loop)->fs_w));
  close (((loop)->fs_fd));
  ((loop)->fs_fd) = infy_newfd ();

  if (((loop)->fs_fd) >= 0)
    {
      fd_intern (((loop)->fs_fd));
      do { (&((loop)->fs_w))->fd = (((loop)->fs_fd)); (&((loop)->fs_w))->events = (EV_READ) | EV__IOFDSET; } while (0);
      ev_io_start (loop, &((loop)->fs_w));
      ev_unref (loop);
    }

  for (slot = 0; slot < (((0x7f) & 2) ? 16 : 1); ++slot)
    {
      WL w_ = ((loop)->fs_hash) [slot].head;
      ((loop)->fs_hash) [slot].head = 0;

      while (w_)
        {
          ev_stat *w = (ev_stat *)w_;
          w_ = w_->next;

          w->wd = -1;

          if (((loop)->fs_fd) >= 0)
            infy_add (loop, w);
          else
            {
              w->timer.repeat = w->interval ? w->interval : 5.0074891;
              if ((0 + ((ev_watcher *)(void *)(&w->timer))->active)) ev_ref (loop);
              ev_timer_again (loop, &w->timer);
              if ((0 + ((ev_watcher *)(void *)(&w->timer))->active)) ev_unref (loop);
            }
        }
    }
}
# 4488 "ev.c"
void
ev_stat_stat (struct ev_loop *loop, ev_stat *w)
{
  if (lstat (w->path, &w->attr) < 0)
    w->attr.st_nlink = 0;
  else if (!w->attr.st_nlink)
    w->attr.st_nlink = 1;
}

__attribute__ ((__noinline__))
static void
stat_timer_cb (struct ev_loop *loop, ev_timer *w_, int revents)
{
  ev_stat *w = (ev_stat *)(((char *)w_) - 
# 4501 "ev.c" 3 4
                                         __builtin_offsetof (
# 4501 "ev.c"
                                         ev_stat
# 4501 "ev.c" 3 4
                                         , 
# 4501 "ev.c"
                                         timer
# 4501 "ev.c" 3 4
                                         )
# 4501 "ev.c"
                                                                  );

  ev_statdata prev = w->attr;
  ev_stat_stat (loop, w);


  if (
    prev.st_dev != w->attr.st_dev
    || prev.st_ino != w->attr.st_ino
    || prev.st_mode != w->attr.st_mode
    || prev.st_nlink != w->attr.st_nlink
    || prev.st_uid != w->attr.st_uid
    || prev.st_gid != w->attr.st_gid
    || prev.st_rdev != w->attr.st_rdev
    || prev.st_size != w->attr.st_size
    || prev.
# 4516 "ev.c" 3 4
           st_atim.tv_sec 
# 4516 "ev.c"
                    != w->attr.
# 4516 "ev.c" 3 4
                               st_atim.tv_sec
    
# 4517 "ev.c"
   || prev.
# 4517 "ev.c" 3 4
           st_mtim.tv_sec 
# 4517 "ev.c"
                    != w->attr.
# 4517 "ev.c" 3 4
                               st_mtim.tv_sec
    
# 4518 "ev.c"
   || prev.
# 4518 "ev.c" 3 4
           st_ctim.tv_sec 
# 4518 "ev.c"
                    != w->attr.
# 4518 "ev.c" 3 4
                               st_ctim.tv_sec
  
# 4519 "ev.c"
 ) {



      w->prev = prev;


        if (((loop)->fs_fd) >= 0)
          {
            infy_del (loop, w);
            infy_add (loop, w);
            ev_stat_stat (loop, w);
          }


      ev_feed_event (loop, w, EV_STAT);
    }
}

void
ev_stat_start (struct ev_loop *loop, ev_stat *w)
{
  if (__builtin_expect ((!!((0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  ev_stat_stat (loop, w);

  if (w->interval < 0.1074891 && w->interval)
    w->interval = 0.1074891;

  do { do { ((ev_watcher *)(void *)((&w->timer)))->active = ((ev_watcher *)(void *)((&w->timer)))->pending = 0; ( (ev_watcher *)(void *)(((&w->timer))))->priority = (0); ((((&w->timer)))->cb = ((stat_timer_cb)), memmove (&((ev_watcher *)(((&w->timer))))->cb, &(((&w->timer)))->cb, sizeof ((((&w->timer)))->cb))); } while (0); do { ((ev_watcher_time *)((&w->timer)))->at = ((0.)); ((&w->timer))->repeat = ((w->interval ? w->interval : 5.0074891)); } while (0); } while (0);
  ( (ev_watcher *)(void *)(&w->timer))->priority = ((+(((ev_watcher *)(void *)(w))->priority)));


  infy_init (loop);

  if (((loop)->fs_fd) >= 0)
    infy_add (loop, w);
  else

    {
      ev_timer_again (loop, &w->timer);
      ev_unref (loop);
    }

  ev_start (loop, (W)w, 1);

  do { } while (0);
}

void
ev_stat_stop (struct ev_loop *loop, ev_stat *w)
{
  clear_pending (loop, (W)w);
  if (__builtin_expect ((!!(!(0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  do { } while (0);


  infy_del (loop, w);


  if ((0 + ((ev_watcher *)(void *)(&w->timer))->active))
    {
      ev_ref (loop);
      ev_timer_stop (loop, &w->timer);
    }

  ev_stop (loop, (W)w);

  do { } while (0);
}



void
ev_idle_start (struct ev_loop *loop, ev_idle *w)
{
  if (__builtin_expect ((!!((0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  pri_adjust (loop, (W)w);

  do { } while (0);

  {
    int active = ++((loop)->idlecnt) [(((W)w)->priority - (((0x7f) & 4) ? -2 : 0))];

    ++((loop)->idleall);
    ev_start (loop, (W)w, active);

    if (__builtin_expect ((!!((active) > (((loop)->idlemax) [(((W)w)->priority - (((0x7f) & 4) ? -2 : 0))]))),(0))) { __attribute__ ((__unused__)) int ocur_ = (((loop)->idlemax) [(((W)w)->priority - (((0x7f) & 4) ? -2 : 0))]); (((loop)->idles) [(((W)w)->priority - (((0x7f) & 4) ? -2 : 0))]) = (ev_idle * *)array_realloc (sizeof (ev_idle *), (((loop)->idles) [(((W)w)->priority - (((0x7f) & 4) ? -2 : 0))]), &(((loop)->idlemax) [(((W)w)->priority - (((0x7f) & 4) ? -2 : 0))]), (active)); ; };
    ((loop)->idles) [(((W)w)->priority - (((0x7f) & 4) ? -2 : 0))][active - 1] = w;
  }

  do { } while (0);
}

void
ev_idle_stop (struct ev_loop *loop, ev_idle *w)
{
  clear_pending (loop, (W)w);
  if (__builtin_expect ((!!(!(0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  do { } while (0);

  {
    int active = ((W)(w))->active;

    ((loop)->idles) [(((W)w)->priority - (((0x7f) & 4) ? -2 : 0))][active - 1] = ((loop)->idles) [(((W)w)->priority - (((0x7f) & 4) ? -2 : 0))][--((loop)->idlecnt) [(((W)w)->priority - (((0x7f) & 4) ? -2 : 0))]];
    ((W)(((loop)->idles) [(((W)w)->priority - (((0x7f) & 4) ? -2 : 0))][active - 1]))->active = active;

    ev_stop (loop, (W)w);
    --((loop)->idleall);
  }

  do { } while (0);
}



void
ev_prepare_start (struct ev_loop *loop, ev_prepare *w)
{
  if (__builtin_expect ((!!((0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  do { } while (0);

  ev_start (loop, (W)w, ++((loop)->preparecnt));
  if (__builtin_expect ((!!((((loop)->preparecnt)) > (((loop)->preparemax)))),(0))) { __attribute__ ((__unused__)) int ocur_ = (((loop)->preparemax)); (((loop)->prepares)) = (ev_prepare * *)array_realloc (sizeof (ev_prepare *), (((loop)->prepares)), &(((loop)->preparemax)), (((loop)->preparecnt))); ; };
  ((loop)->prepares) [((loop)->preparecnt) - 1] = w;

  do { } while (0);
}

void
ev_prepare_stop (struct ev_loop *loop, ev_prepare *w)
{
  clear_pending (loop, (W)w);
  if (__builtin_expect ((!!(!(0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  do { } while (0);

  {
    int active = ((W)(w))->active;

    ((loop)->prepares) [active - 1] = ((loop)->prepares) [--((loop)->preparecnt)];
    ((W)(((loop)->prepares) [active - 1]))->active = active;
  }

  ev_stop (loop, (W)w);

  do { } while (0);
}



void
ev_check_start (struct ev_loop *loop, ev_check *w)
{
  if (__builtin_expect ((!!((0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  do { } while (0);

  ev_start (loop, (W)w, ++((loop)->checkcnt));
  if (__builtin_expect ((!!((((loop)->checkcnt)) > (((loop)->checkmax)))),(0))) { __attribute__ ((__unused__)) int ocur_ = (((loop)->checkmax)); (((loop)->checks)) = (ev_check * *)array_realloc (sizeof (ev_check *), (((loop)->checks)), &(((loop)->checkmax)), (((loop)->checkcnt))); ; };
  ((loop)->checks) [((loop)->checkcnt) - 1] = w;

  do { } while (0);
}

void
ev_check_stop (struct ev_loop *loop, ev_check *w)
{
  clear_pending (loop, (W)w);
  if (__builtin_expect ((!!(!(0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  do { } while (0);

  {
    int active = ((W)(w))->active;

    ((loop)->checks) [active - 1] = ((loop)->checks) [--((loop)->checkcnt)];
    ((W)(((loop)->checks) [active - 1]))->active = active;
  }

  ev_stop (loop, (W)w);

  do { } while (0);
}



__attribute__ ((__noinline__))
void
ev_embed_sweep (struct ev_loop *loop, ev_embed *w)
{
  ev_run (w->other, EVRUN_NOWAIT);
}

static void
embed_io_cb (struct ev_loop *loop, ev_io *io, int revents)
{
  ev_embed *w = (ev_embed *)(((char *)io) - 
# 4728 "ev.c" 3 4
                                           __builtin_offsetof (
# 4728 "ev.c"
                                           ev_embed
# 4728 "ev.c" 3 4
                                           , 
# 4728 "ev.c"
                                           io
# 4728 "ev.c" 3 4
                                           )
# 4728 "ev.c"
                                                                  );

  if ((memmove (&(w)->cb, &((ev_watcher *)(w))->cb, sizeof ((w)->cb)), (w)->cb))
    ev_feed_event (loop, (W)w, EV_EMBED);
  else
    ev_run (w->other, EVRUN_NOWAIT);
}

static void
embed_prepare_cb (struct ev_loop *loop, ev_prepare *prepare, int revents)
{
  ev_embed *w = (ev_embed *)(((char *)prepare) - 
# 4739 "ev.c" 3 4
                                                __builtin_offsetof (
# 4739 "ev.c"
                                                ev_embed
# 4739 "ev.c" 3 4
                                                , 
# 4739 "ev.c"
                                                prepare
# 4739 "ev.c" 3 4
                                                )
# 4739 "ev.c"
                                                                            );

  {
    struct ev_loop *loop = w->other;

    while (((loop)->fdchangecnt))
      {
        fd_reify (loop);
        ev_run (loop, EVRUN_NOWAIT);
      }
  }
}

static void
embed_fork_cb (struct ev_loop *loop, ev_fork *fork_w, int revents)
{
  ev_embed *w = (ev_embed *)(((char *)fork_w) - 
# 4755 "ev.c" 3 4
                                               __builtin_offsetof (
# 4755 "ev.c"
                                               ev_embed
# 4755 "ev.c" 3 4
                                               , 
# 4755 "ev.c"
                                               fork
# 4755 "ev.c" 3 4
                                               )
# 4755 "ev.c"
                                                                        );

  ev_embed_stop (loop, w);

  {
    struct ev_loop *loop = w->other;

    ev_loop_fork (loop);
    ev_run (loop, EVRUN_NOWAIT);
  }

  ev_embed_start (loop, w);
}
# 4777 "ev.c"
void
ev_embed_start (struct ev_loop *loop, ev_embed *w)
{
  if (__builtin_expect ((!!((0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  {
    struct ev_loop *loop = w->other;
    
# 4785 "ev.c" 3 4
   ((
# 4785 "ev.c"
   ("libev: loop to be embedded is not embeddable", ((loop)->backend) & ev_embeddable_backends ())
# 4785 "ev.c" 3 4
   ) ? (void) (0) : __assert_fail (
# 4785 "ev.c"
   "(\"libev: loop to be embedded is not embeddable\", backend & ev_embeddable_backends ())"
# 4785 "ev.c" 3 4
   , "ev.c", 4785, __PRETTY_FUNCTION__))
# 4785 "ev.c"
                                                                                                 ;
    do { do { ((ev_watcher *)(void *)((&w->io)))->active = ((ev_watcher *)(void *)((&w->io)))->pending = 0; ( (ev_watcher *)(void *)(((&w->io))))->priority = (0); ((((&w->io)))->cb = ((embed_io_cb)), memmove (&((ev_watcher *)(((&w->io))))->cb, &(((&w->io)))->cb, sizeof ((((&w->io)))->cb))); } while (0); do { ((&w->io))->fd = ((((loop)->backend_fd))); ((&w->io))->events = ((EV_READ)) | EV__IOFDSET; } while (0); } while (0);
  }

  do { } while (0);

  ( (ev_watcher *)(void *)(&w->io))->priority = ((+(((ev_watcher *)(void *)(w))->priority)));
  ev_io_start (loop, &w->io);

  do { do { ((ev_watcher *)(void *)((&w->prepare)))->active = ((ev_watcher *)(void *)((&w->prepare)))->pending = 0; ( (ev_watcher *)(void *)(((&w->prepare))))->priority = (0); ((((&w->prepare)))->cb = ((embed_prepare_cb)), memmove (&((ev_watcher *)(((&w->prepare))))->cb, &(((&w->prepare)))->cb, sizeof ((((&w->prepare)))->cb))); } while (0); ; } while (0);
  ( (ev_watcher *)(void *)(&w->prepare))->priority = ((((0x7f) & 4) ? -2 : 0));
  ev_prepare_start (loop, &w->prepare);

  do { do { ((ev_watcher *)(void *)((&w->fork)))->active = ((ev_watcher *)(void *)((&w->fork)))->pending = 0; ( (ev_watcher *)(void *)(((&w->fork))))->priority = (0); ((((&w->fork)))->cb = ((embed_fork_cb)), memmove (&((ev_watcher *)(((&w->fork))))->cb, &(((&w->fork)))->cb, sizeof ((((&w->fork)))->cb))); } while (0); ; } while (0);
  ev_fork_start (loop, &w->fork);



  ev_start (loop, (W)w, 1);

  do { } while (0);
}

void
ev_embed_stop (struct ev_loop *loop, ev_embed *w)
{
  clear_pending (loop, (W)w);
  if (__builtin_expect ((!!(!(0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  do { } while (0);

  ev_io_stop (loop, &w->io);
  ev_prepare_stop (loop, &w->prepare);
  ev_fork_stop (loop, &w->fork);

  ev_stop (loop, (W)w);

  do { } while (0);
}



void
ev_fork_start (struct ev_loop *loop, ev_fork *w)
{
  if (__builtin_expect ((!!((0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  do { } while (0);

  ev_start (loop, (W)w, ++((loop)->forkcnt));
  if (__builtin_expect ((!!((((loop)->forkcnt)) > (((loop)->forkmax)))),(0))) { __attribute__ ((__unused__)) int ocur_ = (((loop)->forkmax)); (((loop)->forks)) = (ev_fork * *)array_realloc (sizeof (ev_fork *), (((loop)->forks)), &(((loop)->forkmax)), (((loop)->forkcnt))); ; };
  ((loop)->forks) [((loop)->forkcnt) - 1] = w;

  do { } while (0);
}

void
ev_fork_stop (struct ev_loop *loop, ev_fork *w)
{
  clear_pending (loop, (W)w);
  if (__builtin_expect ((!!(!(0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  do { } while (0);

  {
    int active = ((W)(w))->active;

    ((loop)->forks) [active - 1] = ((loop)->forks) [--((loop)->forkcnt)];
    ((W)(((loop)->forks) [active - 1]))->active = active;
  }

  ev_stop (loop, (W)w);

  do { } while (0);
}



void
ev_cleanup_start (struct ev_loop *loop, ev_cleanup *w)
{
  if (__builtin_expect ((!!((0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  do { } while (0);

  ev_start (loop, (W)w, ++((loop)->cleanupcnt));
  if (__builtin_expect ((!!((((loop)->cleanupcnt)) > (((loop)->cleanupmax)))),(0))) { __attribute__ ((__unused__)) int ocur_ = (((loop)->cleanupmax)); (((loop)->cleanups)) = (ev_cleanup * *)array_realloc (sizeof (ev_cleanup *), (((loop)->cleanups)), &(((loop)->cleanupmax)), (((loop)->cleanupcnt))); ; };
  ((loop)->cleanups) [((loop)->cleanupcnt) - 1] = w;


  ev_unref (loop);
  do { } while (0);
}

void
ev_cleanup_stop (struct ev_loop *loop, ev_cleanup *w)
{
  clear_pending (loop, (W)w);
  if (__builtin_expect ((!!(!(0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  do { } while (0);
  ev_ref (loop);

  {
    int active = ((W)(w))->active;

    ((loop)->cleanups) [active - 1] = ((loop)->cleanups) [--((loop)->cleanupcnt)];
    ((W)(((loop)->cleanups) [active - 1]))->active = active;
  }

  ev_stop (loop, (W)w);

  do { } while (0);
}



void
ev_async_start (struct ev_loop *loop, ev_async *w)
{
  if (__builtin_expect ((!!((0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  w->sent = 0;

  evpipe_init (loop);

  do { } while (0);

  ev_start (loop, (W)w, ++((loop)->asynccnt));
  if (__builtin_expect ((!!((((loop)->asynccnt)) > (((loop)->asyncmax)))),(0))) { __attribute__ ((__unused__)) int ocur_ = (((loop)->asyncmax)); (((loop)->asyncs)) = (ev_async * *)array_realloc (sizeof (ev_async *), (((loop)->asyncs)), &(((loop)->asyncmax)), (((loop)->asynccnt))); ; };
  ((loop)->asyncs) [((loop)->asynccnt) - 1] = w;

  do { } while (0);
}

void
ev_async_stop (struct ev_loop *loop, ev_async *w)
{
  clear_pending (loop, (W)w);
  if (__builtin_expect ((!!(!(0 + ((ev_watcher *)(void *)(w))->active))),(0)))
    return;

  do { } while (0);

  {
    int active = ((W)(w))->active;

    ((loop)->asyncs) [active - 1] = ((loop)->asyncs) [--((loop)->asynccnt)];
    ((W)(((loop)->asyncs) [active - 1]))->active = active;
  }

  ev_stop (loop, (W)w);

  do { } while (0);
}

void
ev_async_send (struct ev_loop *loop, ev_async *w)
{
  w->sent = 1;
  evpipe_write (loop, &((loop)->async_pending));
}




struct ev_once
{
  ev_io io;
  ev_timer to;
  void (*cb)(int revents, void *arg);
  void *arg;
};

static void
once_cb (struct ev_loop *loop, struct ev_once *once, int revents)
{
  void (*cb)(int revents, void *arg) = once->cb;
  void *arg = once->arg;

  ev_io_stop (loop, &once->io);
  ev_timer_stop (loop, &once->to);
  ev_realloc ((once), 0);

  cb (revents, arg);
}

static void
once_cb_io (struct ev_loop *loop, ev_io *w, int revents)
{
  struct ev_once *once = (struct ev_once *)(((char *)w) - 
# 4981 "ev.c" 3 4
                                                         __builtin_offsetof (
# 4981 "ev.c"
                                                         struct ev_once
# 4981 "ev.c" 3 4
                                                         , 
# 4981 "ev.c"
                                                         io
# 4981 "ev.c" 3 4
                                                         )
# 4981 "ev.c"
                                                                                      );

  once_cb (loop, once, revents | ev_clear_pending (loop, &once->to));
}

static void
once_cb_to (struct ev_loop *loop, ev_timer *w, int revents)
{
  struct ev_once *once = (struct ev_once *)(((char *)w) - 
# 4989 "ev.c" 3 4
                                                         __builtin_offsetof (
# 4989 "ev.c"
                                                         struct ev_once
# 4989 "ev.c" 3 4
                                                         , 
# 4989 "ev.c"
                                                         to
# 4989 "ev.c" 3 4
                                                         )
# 4989 "ev.c"
                                                                                      );

  once_cb (loop, once, revents | ev_clear_pending (loop, &once->io));
}

void
ev_once (struct ev_loop *loop, int fd, int events, ev_tstamp timeout, void (*cb)(int revents, void *arg), void *arg)
{
  struct ev_once *once = (struct ev_once *)ev_realloc (0, (sizeof (struct ev_once)));

  if (__builtin_expect ((!!(!once)),(0)))
    {
      cb (EV_ERROR | EV_READ | EV_WRITE | EV_TIMER, arg);
      return;
    }

  once->cb = cb;
  once->arg = arg;

  do { ((ev_watcher *)(void *)(&once->io))->active = ((ev_watcher *)(void *)(&once->io))->pending = 0; ( (ev_watcher *)(void *)((&once->io)))->priority = (0); (((&once->io))->cb = (once_cb_io), memmove (&((ev_watcher *)((&once->io)))->cb, &((&once->io))->cb, sizeof (((&once->io))->cb))); } while (0);
  if (fd >= 0)
    {
      do { (&once->io)->fd = (fd); (&once->io)->events = (events) | EV__IOFDSET; } while (0);
      ev_io_start (loop, &once->io);
    }

  do { ((ev_watcher *)(void *)(&once->to))->active = ((ev_watcher *)(void *)(&once->to))->pending = 0; ( (ev_watcher *)(void *)((&once->to)))->priority = (0); (((&once->to))->cb = (once_cb_to), memmove (&((ev_watcher *)((&once->to)))->cb, &((&once->to))->cb, sizeof (((&once->to))->cb))); } while (0);
  if (timeout >= 0.)
    {
      do { ((ev_watcher_time *)(&once->to))->at = (timeout); (&once->to)->repeat = (0.); } while (0);
      ev_timer_start (loop, &once->to);
    }
}
# 5141 "ev.c"
# 1 "ev_wrap.h" 1
# 5142 "ev.c" 2
