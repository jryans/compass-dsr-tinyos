#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 18 "/usr/include/stdint.h"
typedef signed char int8_t;
typedef short int16_t;
typedef long int32_t;
typedef long long int64_t;


typedef unsigned char uint8_t;
typedef unsigned short uint16_t;


typedef unsigned long uint32_t;

typedef unsigned long long uint64_t;



typedef signed char int_least8_t;
typedef short int_least16_t;
typedef long int_least32_t;
typedef long long int_least64_t;

typedef unsigned char uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned long uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef signed char int_fast8_t;
typedef long int_fast16_t;
typedef long int_fast32_t;
typedef long long int_fast64_t;

typedef unsigned char uint_fast8_t;
typedef unsigned long uint_fast16_t;
typedef unsigned long uint_fast32_t;
typedef unsigned long long uint_fast64_t;





typedef long intptr_t;

typedef unsigned long uintptr_t;



typedef long long intmax_t;
typedef unsigned long long uintmax_t;
# 231 "/usr/include/inttypes.h"
#line 228
typedef struct __nesc_unnamed4242 {
  intmax_t quot;
  intmax_t rem;
} imaxdiv_t;
# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void *source);




static __inline uint8_t __nesc_hton_uint8(void *target, uint8_t value);
#line 264
static __inline uint16_t __nesc_ntoh_uint16(const void *source);




static __inline uint16_t __nesc_hton_uint16(void *target, uint16_t value);
#line 385
typedef struct { char data[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { char data[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { char data[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { char data[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { char data[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { char data[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { char data[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 26 "/usr/include/machine/_types.h"
typedef signed char __int8_t;
typedef unsigned char __uint8_t;








typedef signed short __int16_t;
typedef unsigned short __uint16_t;








typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
# 58 "/usr/include/machine/_types.h" 3
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
#line 76
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
#line 99
typedef signed long long __int64_t;
typedef unsigned long long __uint64_t;
# 14 "/usr/include/sys/lock.h"
typedef void *_LOCK_T;
# 14 "/usr/include/sys/_types.h"
typedef long _off_t;
__extension__ 
#line 15
typedef long long _off64_t;


typedef int _ssize_t;
# 354 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stddef.h" 3
typedef unsigned int wint_t;
# 35 "/usr/include/sys/_types.h"
#line 27
typedef struct __nesc_unnamed4243 {

  int __count;
  union __nesc_unnamed4244 {

    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;

typedef _LOCK_T _flock_t;


typedef void *_iconv_t;
# 151 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stddef.h" 3
typedef int ptrdiff_t;
#line 213
typedef unsigned int size_t;
#line 325
typedef short unsigned int wchar_t;
# 19 "/usr/include/machine/types.h"
typedef long int __off_t;
typedef int __pid_t;

__extension__ 
#line 22
typedef long long int __loff_t;
# 92 "/usr/include/sys/types.h"
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;



typedef unsigned short ushort;
typedef unsigned int uint;



typedef unsigned long clock_t;




typedef long time_t;




struct timespec {
  time_t tv_sec;
  long tv_nsec;
};

struct itimerspec {
  struct timespec it_interval;
  struct timespec it_value;
};


typedef long daddr_t;
typedef char *caddr_t;
# 180 "/usr/include/sys/types.h" 3
typedef int pid_t;



typedef _ssize_t ssize_t;
#line 203
typedef unsigned short nlink_t;
#line 225
typedef long fd_mask;









#line 233
typedef struct _types_fd_set {
  fd_mask fds_bits[(64 + (sizeof(fd_mask ) * 8 - 1)) / (sizeof(fd_mask ) * 8)];
} _types_fd_set;
#line 256
typedef unsigned long clockid_t;




typedef unsigned long timer_t;



typedef unsigned long useconds_t;
typedef long suseconds_t;
# 26 "/usr/include/cygwin/types.h"
typedef struct timespec timespec_t;




typedef struct timespec timestruc_t;





typedef _off64_t off_t;





typedef __loff_t loff_t;



typedef short __dev16_t;
typedef unsigned long __dev32_t;

typedef __dev32_t dev_t;







typedef long blksize_t;




typedef long __blkcnt32_t;
typedef long long __blkcnt64_t;

typedef __blkcnt64_t blkcnt_t;







typedef unsigned long fsblkcnt_t;




typedef unsigned long fsfilcnt_t;




typedef unsigned short __uid16_t;
typedef unsigned long __uid32_t;

typedef __uid32_t uid_t;







typedef unsigned short __gid16_t;
typedef unsigned long __gid32_t;

typedef __gid32_t gid_t;







typedef unsigned long __ino32_t;
typedef unsigned long long __ino64_t;

typedef __ino64_t ino_t;








typedef unsigned long id_t;
# 140 "/usr/include/cygwin/types.h" 3
struct flock {
  short l_type;
  short l_whence;
  off_t l_start;
  off_t l_len;

  pid_t l_pid;
};







typedef long long key_t;







typedef unsigned long vm_offset_t;




typedef unsigned long vm_size_t;




typedef void *vm_object_t;




typedef unsigned char u_int8_t;



typedef __uint16_t u_int16_t;



typedef __uint32_t u_int32_t;



typedef __uint64_t u_int64_t;




typedef __int32_t register_t;




typedef char *addr_t;




typedef unsigned mode_t;





typedef struct __pthread_t {
#line 211
  char __dummy;
} *
#line 211
pthread_t;
typedef struct __pthread_mutex_t {
#line 212
  char __dummy;
} *
#line 212
pthread_mutex_t;

typedef struct __pthread_key_t {
#line 214
  char __dummy;
} *
#line 214
pthread_key_t;
typedef struct __pthread_attr_t {
#line 215
  char __dummy;
} *
#line 215
pthread_attr_t;
typedef struct __pthread_mutexattr_t {
#line 216
  char __dummy;
} *
#line 216
pthread_mutexattr_t;
typedef struct __pthread_condattr_t {
#line 217
  char __dummy;
} *
#line 217
pthread_condattr_t;
typedef struct __pthread_cond_t {
#line 218
  char __dummy;
} *
#line 218
pthread_cond_t;







#line 221
typedef struct __nesc_unnamed4245 {

  pthread_mutex_t mutex;
  int state;
} 
pthread_once_t;
typedef struct __pthread_rwlock_t {
#line 227
  char __dummy;
} *
#line 227
pthread_rwlock_t;
typedef struct __pthread_rwlockattr_t {
#line 228
  char __dummy;
} *
#line 228
pthread_rwlockattr_t;
# 44 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
# 19 "/usr/include/sys/reent.h"
typedef unsigned long __ULong;
# 40 "/usr/include/sys/reent.h" 3
struct _Bigint {

  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm {

  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
  void *_fnargs[32];
  void *_dso_handle[32];

  __ULong _fntypes;


  __ULong _is_cxa;
};









struct _atexit {
  struct _atexit *_next;
  int _ind;

  void (*_fns[32])(void );
  struct _on_exit_args _on_exit_args;
};









struct __sbuf {
  unsigned char *_base;
  int _size;
};






typedef long _fpos_t;



typedef _off64_t _fpos64_t;
#line 166
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void *_cookie;

  _ssize_t __attribute((__cdecl__)) (*_read)(void *_cookie, char *_buf, int _n);
  _ssize_t __attribute((__cdecl__)) (*_write)(void *_cookie, const char *_buf, int _n);

  _fpos_t __attribute((__cdecl__)) (*_seek)(void *_cookie, _fpos_t _offset, int _whence);
  int __attribute((__cdecl__)) (*_close)(void *_cookie);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  int _offset;


  struct _reent *_data;



  _flock_t _lock;
};



struct __sFILE64 {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;

  struct _reent *_data;


  void *_cookie;

  _ssize_t __attribute((__cdecl__)) (*_read)(void *_cookie, char *_buf, int _n);
  _ssize_t __attribute((__cdecl__)) (*_write)(void *_cookie, const char *_buf, int _n);

  _fpos_t __attribute((__cdecl__)) (*_seek)(void *_cookie, _fpos_t _offset, int _whence);
  int __attribute((__cdecl__)) (*_close)(void *_cookie);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  int _flags2;

  _off64_t _offset;
  _fpos64_t __attribute((__cdecl__)) (*_seek64)(void *_cookie, _fpos64_t _offset, int _whence);


  _flock_t _lock;
};

typedef struct __sFILE64 __FILE;




struct _glue {

  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
#line 290
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;
};
#line 565
struct _reent {

  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];

  int _current_category;
  const char *_current_locale;

  int __sdidinit;

  void __attribute((__cdecl__)) (*__cleanup)(struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union __nesc_unnamed4246 {

    struct __nesc_unnamed4247 {

      unsigned int _unused_rand;
      char *_strtok_last;
      char _asctime_buf[26];
      struct __tm _localtime_buf;
      int _gamma_signgam;
      __extension__ unsigned long long _rand_next;
      struct _rand48 _r48;
      _mbstate_t _mblen_state;
      _mbstate_t _mbtowc_state;
      _mbstate_t _wctomb_state;
      char _l64a_buf[8];
      char _signal_buf[24];
      int _getdate_err;
      _mbstate_t _mbrlen_state;
      _mbstate_t _mbrtowc_state;
      _mbstate_t _mbsrtowcs_state;
      _mbstate_t _wcrtomb_state;
      _mbstate_t _wcsrtombs_state;
    } _reent;



    struct __nesc_unnamed4248 {


      unsigned char *_nextf[30];
      unsigned int _nmalloc[30];
    } _unused;
  } _new;


  struct _atexit *_atexit;
  struct _atexit _atexit0;


  void (**_sig_func)(int );




  struct _glue __sglue;
  __FILE __sf[3];
};
#line 799
struct _reent;
struct _reent;









struct _reent;
# 50 "/usr/include/stdio.h"
typedef __FILE FILE;



typedef _fpos64_t fpos_t;
# 173 "/usr/include/stdio.h" 3
int __attribute((__cdecl__)) fflush(FILE *);



int __attribute((__cdecl__)) fprintf(FILE *, const char *, ...);

int __attribute((__cdecl__)) printf(const char *, ...);


int __attribute((__cdecl__)) vfprintf(FILE *, const char *, __gnuc_va_list );
#line 217
int __attribute((__cdecl__)) sprintf(char *, const char *, ...);
#line 242
int __attribute((__cdecl__)) snprintf(char *, size_t , const char *, ...);
#line 267
FILE *__attribute((__cdecl__)) fdopen(int , const char *);

int __attribute((__cdecl__)) fileno(FILE *);
# 23 "/usr/include/string.h"
int __attribute((__cdecl__)) memcmp(const void *, const void *, size_t );
void *__attribute((__cdecl__)) memcpy(void *, const void *, size_t );

void *__attribute((__cdecl__)) memset(void *, int , size_t );


int __attribute((__cdecl__)) strcmp(const char *, const char *);

char *__attribute((__cdecl__)) strcpy(char *, const char *);


size_t __attribute((__cdecl__)) strlen(const char *);




char *__attribute((__cdecl__)) strrchr(const char *, int );
# 32 "/usr/include/stdlib.h"
#line 28
typedef struct __nesc_unnamed4249 {

  int quot;
  int rem;
} div_t;





#line 34
typedef struct __nesc_unnamed4250 {

  long quot;
  long rem;
} ldiv_t;






#line 41
typedef struct __nesc_unnamed4251 {

  long long int quot;
  long long int rem;
} lldiv_t;
#line 80
void __attribute((__cdecl__)) free(void *);






void *__attribute((__cdecl__)) malloc(size_t __size);
# 11 "/usr/include/math.h"
union __dmath {

  __ULong i[2];
  double d;
};

union __fmath {

  __ULong i[1];
  float f;
};

union __ldmath {

  __ULong i[4];
  long double ld;
};
# 111 "/usr/include/math.h" 3
typedef float float_t;
typedef double double_t;
#line 344
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
  int err;
};
#line 399
enum __fdlibm_version {

  __fdlibm_ieee = -1, 
  __fdlibm_svid, 
  __fdlibm_xopen, 
  __fdlibm_posix
};




enum __fdlibm_version;
# 57 "/opt/tinyos-2.x/tos/lib/tossim/tos.h"
typedef uint8_t bool;


enum __nesc_unnamed4252 {
#line 60
  FALSE = 0, TRUE = 1
};
extern uint16_t TOS_NODE_ID;
# 43 "/opt/tinyos-2.x/tos/lib/tossim/sim_tossim.h"
typedef long long int sim_time_t;

void sim_init(void);

void sim_end(void);

void sim_random_seed(int seed);
int sim_random(void);

sim_time_t sim_time(void);
void sim_set_time(sim_time_t time);
sim_time_t sim_ticks_per_sec(void);

unsigned long sim_node(void);
void sim_set_node(unsigned long node);

int sim_print_time(char *buf, int bufLen, sim_time_t time);
int sim_print_now(char *buf, int bufLen);
char *sim_time_string(void);

void sim_add_channel(char *channel, FILE *file);
bool sim_remove_channel(char *channel, FILE *file);

bool sim_run_next_event(void);
# 42 "/opt/tinyos-2.x/tos/lib/tossim/sim_event_queue.h"
struct sim_event;
typedef struct sim_event sim_event_t;

struct sim_event {
  sim_time_t time;
  unsigned long mote;
  bool force;

  bool cancelled;
  void *data;

  void (*handle)(sim_event_t *e);
  void (*cleanup)(sim_event_t *e);
};



void sim_queue_init(void);
void sim_queue_insert(sim_event_t *event);
bool sim_queue_is_empty(void);
long long int sim_queue_peek_time(void);
sim_event_t *sim_queue_pop(void);

void sim_queue_cleanup_none(sim_event_t *e);
void sim_queue_cleanup_event(sim_event_t *e);
void sim_queue_cleanup_data(sim_event_t *e);
void sim_queue_cleanup_total(sim_event_t *e);
# 45 "/opt/tinyos-2.x/tos/lib/tossim/sim_mote.h"
long long int sim_mote_euid(int mote);
void sim_mote_set_euid(int mote, long long int euid);

long long int sim_mote_start_time(int mote);
void sim_mote_set_start_time(int mote, long long int t);

bool sim_mote_is_on(int mote);
void sim_mote_turn_on(int mote);
void sim_mote_turn_off(int mote);
int sim_mote_get_variable_info(int mote, char *name, void **addr, size_t *len);
void sim_mote_enqueue_boot_event(int mote);
# 57 "/opt/tinyos-2.x/tos/lib/tossim/sim_log.h"
static inline void sim_log_init(void);
static inline void sim_log_add_channel(char *output, FILE *file);
static inline bool sim_log_remove_channel(char *output, FILE *file);
static void sim_log_commit_change(void);

static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
# 81 "/opt/tinyos-2.x/tos/lib/tossim/tos.h"
struct __nesc_attr_atmostonce {
};
#line 82
struct __nesc_attr_atleastonce {
};
#line 83
struct __nesc_attr_exactlyonce {
};
# 106 "/usr/lib/gcc/i686-pc-cygwin/3.4.4/include/stdarg.h" 3
typedef __gnuc_va_list va_list;
# 9 "/opt/tinyos-2.x/tos/lib/tossim/hashtable.h"
struct hashtable;
typedef struct hashtable hashtable_t;
#line 78
struct hashtable *
create_hashtable(unsigned int minsize, 
unsigned int (*hashfunction)(void *), 
int (*key_eq_fn)(void *, void *));
#line 103
#line 102
int 
hashtable_insert(struct hashtable *h, void *k, void *v);
#line 120
void *
hashtable_search(struct hashtable *h, void *k);
# 39 "/opt/tinyos-2.x/tos/lib/tossim/sim_log.c"
enum __nesc_unnamed4253 {
  DEFAULT_CHANNEL_SIZE = 8
};




#line 43
typedef struct sim_log_output {
  int num;
  FILE **files;
} sim_log_output_t;






#line 48
typedef struct sim_log_channel {
  const char *name;
  int numOutputs;
  int size;
  FILE **outputs;
} sim_log_channel_t;

enum __nesc_unnamed4254 {
  SIM_LOG_OUTPUT_COUNT = 191U
};

sim_log_output_t outputs[SIM_LOG_OUTPUT_COUNT];
struct hashtable *channelTable = (void *)0;


inline static unsigned int sim_log_hash(void *key);
inline static int sim_log_eq(void *key1, void *key2);
#line 76
static void fillInOutput(int id, char *name);
#line 151
static inline void sim_log_init(void);
#line 164
static inline void sim_log_add_channel(char *name, FILE *file);
#line 204
static inline bool sim_log_remove_channel(char *output, FILE *file);
#line 226
static void sim_log_commit_change(void);
#line 238
static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
#line 253
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
#line 268
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
#line 298
inline static unsigned int sim_log_hash(void *key);










inline static int sim_log_eq(void *key1, void *key2);
# 54 "/opt/tinyos-2.x/tos/lib/tossim/heap.h"
#line 50
typedef struct heap {
  int size;
  void *data;
  int private_size;
} heap_t;

static inline void init_heap(heap_t *heap);

static inline int heap_is_empty(heap_t *heap);

static inline long long int heap_get_min_key(heap_t *heap);

static void *heap_pop_min_data(heap_t *heap, long long int *key);
static inline void heap_insert(heap_t *heap, void *data, long long int key);
# 47 "/opt/tinyos-2.x/tos/lib/tossim/heap.c"
const int STARTING_SIZE = 511;






#line 51
typedef struct node {
  void *data;
  long long int key;
} node_t;

static void down_heap(heap_t *heap, int findex);
static void up_heap(heap_t *heap, int findex);
static void swap(node_t *first, node_t *second);








static inline void init_heap(heap_t *heap);









static inline int is_empty(heap_t *heap);



static inline int heap_is_empty(heap_t *heap);



static inline long long int heap_get_min_key(heap_t *heap);
#line 103
static void *heap_pop_min_data(heap_t *heap, long long int *key);
#line 119
static inline void expand_heap(heap_t *heap);
#line 133
static inline void heap_insert(heap_t *heap, void *data, long long int key);
#line 147
static void swap(node_t *first, node_t *second);
#line 160
static void down_heap(heap_t *heap, int findex);
#line 186
static void up_heap(heap_t *heap, int findex);
# 36 "/opt/tinyos-2.x/tos/lib/tossim/sim_event_queue.c"
static heap_t eventHeap;

void sim_queue_init(void)   ;



void sim_queue_insert(sim_event_t *event)   ;




sim_event_t *sim_queue_pop(void)   ;




bool sim_queue_is_empty(void)   ;



long long int sim_queue_peek_time(void)   ;









void sim_queue_cleanup_none(sim_event_t *event)   ;




void sim_queue_cleanup_event(sim_event_t *event)   ;




void sim_queue_cleanup_data(sim_event_t *event)   ;





void sim_queue_cleanup_total(sim_event_t *event)   ;
# 16 "/usr/include/sys/time.h"
struct timeval {
  time_t tv_sec;
  suseconds_t tv_usec;
};

struct timezone {
  int tz_minuteswest;
  int tz_dsttime;
};
# 33 "/usr/include/time.h"
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
};








struct tm;
struct tm;





struct tm;
struct tm;
#line 83
#line 74
typedef struct __tzrule_struct {

  char ch;
  int m;
  int n;
  int d;
  int s;
  time_t change;
  long offset;
} __tzrule_type;






#line 85
typedef struct __tzinfo_struct {

  int __tznorth;
  int __tzyear;
  __tzrule_type __tzrule[2];
} __tzinfo_type;
# 18 "/usr/include/sys/signal.h"
typedef unsigned long sigset_t;
# 17 "/usr/include/cygwin/signal.h"
struct _fpstate {

  unsigned long cw;
  unsigned long sw;
  unsigned long tag;
  unsigned long ipoff;
  unsigned long cssel;
  unsigned long dataoff;
  unsigned long datasel;
  unsigned char _st[80];
  unsigned long nxst;
};

struct ucontext {

  unsigned long cr2;
  unsigned long dr0;
  unsigned long dr1;
  unsigned long dr2;
  unsigned long dr3;
  unsigned long dr6;
  unsigned long dr7;
  struct _fpstate fpstate;
  unsigned long gs;
  unsigned long fs;
  unsigned long es;
  unsigned long ds;
  unsigned long edi;
  unsigned long esi;
  unsigned long ebx;
  unsigned long edx;
  unsigned long ecx;
  unsigned long eax;
  unsigned long ebp;
  unsigned long eip;
  unsigned long cs;
  unsigned long eflags;
  unsigned long esp;
  unsigned long ss;
  unsigned char _internal;
  unsigned long oldmask;
};







#line 62
typedef union sigval {

  int sival_int;
  void *sival_ptr;
} sigval_t;








#line 68
typedef struct sigevent {

  sigval_t sigev_value;
  int sigev_signo;
  int sigev_notify;
  void (*sigev_notify_function)(sigval_t );
  pthread_attr_t *sigev_notify_attributes;
} sigevent_t;


struct _sigcommune {

  __uint32_t _si_code;
  void *_si_read_handle;
  void *_si_write_handle;
  void *_si_process_handle;
  __extension__ union  {

    int _si_fd;
    void *_si_pipe_fhandler;
    char *_si_str;
  } ;
};
#line 133
#line 92
typedef struct __nesc_unnamed4255 {

  int si_signo;
  int si_code;
  pid_t si_pid;
  uid_t si_uid;
  int si_errno;

  __extension__ union  {

    __uint32_t __pad[32];
    struct _sigcommune _si_commune;
    union  {


      struct  {

        union  {

          struct  {

            timer_t si_tid;
            unsigned int si_overrun;
          } ;
          sigval_t si_sigval;
          sigval_t si_value;
        } ;
      } ;
    } ;


    __extension__ struct  {

      int si_status;
      clock_t si_utime;
      clock_t si_stime;
    } ;


    void *si_addr;
  } ;
} siginfo_t;


enum __nesc_unnamed4256 {

  SI_USER = 0, 
  SI_ASYNCIO = 2, 

  SI_MESGQ, 

  SI_TIMER, 
  SI_QUEUE, 

  SI_KERNEL, 

  ILL_ILLOPC, 
  ILL_ILLOPN, 
  ILL_ILLADR, 
  ILL_ILLTRP, 
  ILL_PRVOPC, 
  ILL_PRVREG, 
  ILL_COPROC, 
  ILL_BADSTK, 

  FPE_INTDIV, 
  FPE_INTOVF, 
  FPE_FLTDIV, 
  FPE_FLTOVF, 
  FPE_FLTUND, 
  FPE_FLTRES, 
  FPE_FLTINV, 
  FPE_FLTSUB, 

  SEGV_MAPERR, 
  SEGV_ACCERR, 

  BUS_ADRALN, 
  BUS_ADRERR, 
  BUS_OBJERR, 

  CLD_EXITED, 
  CLD_KILLED, 
  CLD_DUMPED, 
  CLD_TRAPPED, 
  CLD_STOPPED, 
  CLD_CONTINUED
};

enum __nesc_unnamed4257 {

  SIGEV_SIGNAL = 0, 


  SIGEV_NONE, 


  SIGEV_THREAD
};


typedef void (*_sig_func_ptr)(int );

struct sigaction {

  __extension__ union  {

    _sig_func_ptr sa_handler;
    void (*sa_sigaction)(int , siginfo_t *, void *);
  } ;
  sigset_t sa_mask;
  int sa_flags;
};
# 9 "/usr/include/signal.h"
typedef int sig_atomic_t;





struct _reent;
# 36 "/usr/include/sys/time.h"
struct itimerval {
  struct timeval it_interval;
  struct timeval it_value;
};
# 73 "/usr/include/sys/time.h" 3
int __attribute((__cdecl__)) gettimeofday(struct timeval *__p, struct timezone *__z);
# 43 "/opt/tinyos-2.x/tos/lib/tossim/sim_noise.h"
enum __nesc_unnamed4258 {
  NOISE_MIN = -115, 
  NOISE_MAX = -5, 
  NOISE_MIN_QUANTIZE = -115, 
  NOISE_QUANTIZE_INTERVAL = 5, 
  NOISE_BIN_SIZE = (NOISE_MAX - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL, 
  NOISE_HISTORY = 20, 
  NOISE_DEFAULT_ELEMENT_SIZE = 8, 
  NOISE_HASHTABLE_SIZE = 128, 
  NOISE_MIN_TRACE = 128
};








#line 55
typedef struct sim_noise_hash_t {
  char key[NOISE_HISTORY];
  int numElements;
  int size;
  char *elements;
  char flag;
  float dist[NOISE_BIN_SIZE];
} sim_noise_hash_t;
#line 74
#line 64
typedef struct sim_noise_node_t {
  char key[NOISE_HISTORY];
  char freqKey[NOISE_HISTORY];
  char lastNoiseVal;
  uint32_t noiseGenTime;
  struct hashtable *noiseTable;
  char *noiseTrace;
  uint32_t noiseTraceLen;
  uint32_t noiseTraceIndex;
  bool generated;
} sim_noise_node_t;

void sim_noise_init(void);

char sim_noise_generate(uint16_t node_id, uint32_t cur_t);
void sim_noise_trace_add(uint16_t node_id, char val);
void sim_noise_create_model(uint16_t node_id);
# 43 "/opt/tinyos-2.x/tos/lib/tossim/sim_tossim.c"
static sim_time_t sim_ticks;
static unsigned long current_node;
static int sim_seed;

static int __nesc_nido_resolve(int mote, char *varname, uintptr_t *addr, size_t *size);

void sim_init(void)   ;
#line 62
void sim_end(void)   ;





int sim_random(void)   ;
#line 84
void sim_random_seed(int seed)   ;



sim_time_t sim_time(void)   ;


void sim_set_time(sim_time_t t)   ;



sim_time_t sim_ticks_per_sec(void)   ;



unsigned long sim_node(void)   ;


void sim_set_node(unsigned long node)   ;




bool sim_run_next_event(void)   ;
#line 134
int sim_print_time(char *buf, int len, sim_time_t ftime)   ;
#line 157
int sim_print_now(char *buf, int len)   ;



char simTimeBuf[128];
char *sim_time_string(void)   ;




void sim_add_channel(char *channel, FILE *file)   ;



bool sim_remove_channel(char *channel, FILE *file)   ;
# 91 "/opt/tinyos-2.x/tos/lib/tossim/sim_csma.h"
int sim_csma_init_high(void);
int sim_csma_init_low(void);
int sim_csma_high(void);
int sim_csma_low(void);
int sim_csma_symbols_per_sec(void);
int sim_csma_bits_per_symbol(void);
int sim_csma_preamble_length(void);
int sim_csma_exponent_base(void);
int sim_csma_max_iterations(void);
int sim_csma_min_free_samples(void);
int sim_csma_rxtx_delay(void);
int sim_csma_ack_time(void);

void sim_csma_set_init_high(int val);
void sim_csma_set_init_low(int val);
void sim_csma_set_high(int val);
void sim_csma_set_low(int val);
void sim_csma_set_symbols_per_sec(int val);
void sim_csma_set_bits_per_symbol(int val);
void sim_csma_set_preamble_length(int val);
void sim_csma_set_exponent_base(int val);
void sim_csma_set_max_iterations(int val);
void sim_csma_set_min_free_samples(int val);
void sim_csma_set_rxtx_delay(int val);
void sim_csma_set_ack_time(int val);
# 36 "/opt/tinyos-2.x/tos/lib/tossim/sim_csma.c"
int csmaInitHigh = 640;
int csmaInitLow = 20;
int csmaHigh = 160;
int csmaLow = 20;
int csmaSymbolsPerSec = 65536;
int csmaBitsPerSymbol = 4;
int csmaPreambleLength = 12;
int csmaExponentBase = 1;
int csmaMaxIterations = 0;
int csmaMinFreeSamples = 1;
int csmaRxTxDelay = 11;
int csmaAckTime = 34;

int sim_csma_init_high(void)   ;


int sim_csma_init_low(void)   ;


int sim_csma_high(void)   ;


int sim_csma_low(void)   ;


int sim_csma_symbols_per_sec(void)   ;


int sim_csma_bits_per_symbol(void)   ;


int sim_csma_preamble_length(void)   ;


int sim_csma_exponent_base(void)   ;


int sim_csma_max_iterations(void)   ;


int sim_csma_min_free_samples(void)   ;


int sim_csma_rxtx_delay(void)   ;


int sim_csma_ack_time(void)   ;





void sim_csma_set_init_high(int val)   ;


void sim_csma_set_init_low(int val)   ;


void sim_csma_set_high(int val)   ;


void sim_csma_set_low(int val)   ;


void sim_csma_set_symbols_per_sec(int val)   ;


void sim_csma_set_bits_per_symbol(int val)   ;


void sim_csma_set_preamble_length(int val)   ;


void sim_csma_set_exponent_base(int val)   ;


void sim_csma_set_max_iterations(int val)   ;


void sim_csma_set_min_free_samples(int val)   ;


void sim_csma_set_rxtx_delay(int val)   ;


void sim_csma_set_ack_time(int val)   ;
# 49 "/opt/tinyos-2.x/tos/lib/tossim/sim_gain.h"
#line 45
typedef struct gain_entry {
  int mote;
  double gain;
  struct gain_entry *next;
} gain_entry_t;

void sim_gain_add(int src, int dest, double gain);
double sim_gain_value(int src, int dest);
bool sim_gain_connected(int src, int dest);
void sim_gain_remove(int src, int dest);
void sim_gain_set_noise_floor(int node, double mean, double range);
double sim_gain_sample_noise(int node);



void sim_gain_set_sensitivity(double value);
double sim_gain_sensitivity(void);

gain_entry_t *sim_gain_first(int src);
gain_entry_t *sim_gain_next(gain_entry_t *e);
# 6 "/opt/tinyos-2.x/tos/lib/tossim/sim_gain.c"
#line 3
typedef struct sim_gain_noise {
  double mean;
  double range;
} sim_gain_noise_t;


gain_entry_t *connectivity[1000 + 1];
sim_gain_noise_t localNoise[1000 + 1];
double sensitivity = 4.0;

static inline gain_entry_t *sim_gain_allocate_link(int mote);
void sim_gain_deallocate_link(gain_entry_t *linkToDelete);

gain_entry_t *sim_gain_first(int src)   ;






gain_entry_t *sim_gain_next(gain_entry_t *currentLink)   ;



void sim_gain_add(int src, int dest, double gain)   ;
#line 55
double sim_gain_value(int src, int dest)   ;
#line 73
bool sim_gain_connected(int src, int dest)   ;
#line 89
void sim_gain_remove(int src, int dest)   ;
#line 122
void sim_gain_set_noise_floor(int node, double mean, double range)   ;
#line 146
double sim_gain_sample_noise(int node)   ;
#line 159
static inline gain_entry_t *sim_gain_allocate_link(int mote);







void sim_gain_deallocate_link(gain_entry_t *linkToDelete)   ;



void sim_gain_set_sensitivity(double s)   ;



double sim_gain_sensitivity(void)   ;
# 39 "/opt/tinyos-2.x/tos/lib/tossim/randomlib.c"
static double randU[97];
#line 39
static double randC;
#line 39
static double randCD;
#line 39
static double randCM;
static int i97;
#line 40
static int j97;
static int test = FALSE;
#line 55
static inline void RandomInitialise(int ij, int kl);
#line 103
static inline double RandomUniform(void );
# 46 "/opt/tinyos-2.x/tos/lib/tossim/randomlib.h"
static inline void RandomInitialise(int , int );
static inline double RandomUniform(void );
# 42 "/opt/tinyos-2.x/tos/lib/tossim/sim_noise.c"
uint32_t FreqKeyNum = 0;

sim_noise_node_t noiseData[1000];

inline static unsigned int sim_noise_hash(void *key);
inline static int sim_noise_eq(void *key1, void *key2);

void makeNoiseModel(uint16_t node_id);
void makePmfDistr(uint16_t node_id);
uint8_t search_bin_num(char noise);

void sim_noise_init(void)   ;
#line 70
void sim_noise_create_model(uint16_t node_id)   ;
#line 83
void sim_noise_trace_add(uint16_t node_id, char noiseVal)   ;
#line 98
uint8_t search_bin_num(char noise)   ;









char search_noise_from_bin_num(int i)   ;






inline static unsigned int sim_noise_hash(void *key);









inline static int sim_noise_eq(void *key1, void *key2);



void sim_noise_add(uint16_t node_id, char noise)   ;
#line 176
void sim_noise_dist(uint16_t node_id)   ;
#line 225
void arrangeKey(uint16_t node_id)   ;









void makePmfDistr(uint16_t node_id)   ;
#line 264
int dummy;
static inline void sim_noise_alarm(void);



char sim_noise_gen(uint16_t node_id)   ;
#line 327
char sim_noise_generate(uint16_t node_id, uint32_t cur_t)   ;
#line 381
void makeNoiseModel(uint16_t node_id)   ;
# 51 "/opt/tinyos-2.x/tos/lib/tossim/sim_packet.h"
typedef struct sim_packet {
} 
#line 51
sim_packet_t;

void sim_packet_set_source(sim_packet_t *msg, uint16_t src);
uint16_t sim_packet_source(sim_packet_t *msg);

void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest);
uint16_t sim_packet_destination(sim_packet_t *msg);

void sim_packet_set_length(sim_packet_t *msg, uint8_t len);
uint16_t sim_packet_length(sim_packet_t *msg);

void sim_packet_set_type(sim_packet_t *msg, uint8_t type);
uint8_t sim_packet_type(sim_packet_t *msg);

uint8_t *sim_packet_data(sim_packet_t *msg);
void sim_packet_set_strength(sim_packet_t *msg, uint16_t str);

void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t);
uint8_t sim_packet_max_length(sim_packet_t *msg);

sim_packet_t *sim_packet_allocate(void);
void sim_packet_free(sim_packet_t *m);
# 6 "/opt/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4259 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4260 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 12 "/opt/tinyos-2.x/tos/lib/tossim/TossimRadioMsg.h"
#line 6
typedef nx_struct tossim_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) tossim_header_t;



#line 14
typedef nx_struct tossim_footer {
  nxle_uint16_t crc;
} __attribute__((packed)) tossim_footer_t;





#line 18
typedef nx_struct tossim_metadata {
  nx_uint16_t strength;
  nx_uint8_t ack;
  nx_uint16_t time;
} __attribute__((packed)) tossim_metadata_t;
# 72 "/opt/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4261 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4262 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4263 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 110
#line 98
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 112
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 120
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;
# 44 "/opt/tinyos-2.x/tos/lib/tossim/platform_message.h"
#line 41
typedef union message_header {
  tossim_header_t tossim;
  serial_header_t serial;
} message_header_t;



#line 46
typedef union message_footer {
  tossim_footer_t tossim;
} message_footer_t;



#line 50
typedef union message_metadata {
  tossim_metadata_t tossim;
} message_metadata_t;
# 19 "/opt/tinyos-2.x/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 40 "/opt/tinyos-2.x/tos/lib/tossim/sim_packet.c"
void active_message_deliver(int node, message_t *m, sim_time_t t);

inline static tossim_header_t *getHeader(message_t *msg);



void sim_packet_set_source(sim_packet_t *msg, uint16_t src)   ;




uint16_t sim_packet_source(sim_packet_t *msg)   ;




void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)   ;




uint16_t sim_packet_destination(sim_packet_t *msg)   ;




void sim_packet_set_length(sim_packet_t *msg, uint8_t length)   ;



uint16_t sim_packet_length(sim_packet_t *msg)   ;




void sim_packet_set_type(sim_packet_t *msg, uint8_t type)   ;




uint8_t sim_packet_type(sim_packet_t *msg)   ;




uint8_t *sim_packet_data(sim_packet_t *p)   ;



void sim_packet_set_strength(sim_packet_t *p, uint16_t str)   ;




void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)   ;







uint8_t sim_packet_max_length(sim_packet_t *msg)   ;



sim_packet_t *sim_packet_allocate(void)   ;



void sim_packet_free(sim_packet_t *p)   ;
# 34 "/opt/tinyos-2.x/tos/types/TinyError.h"
enum __nesc_unnamed4264 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2);
# 35 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/Graph.h"
typedef uint8_t graph_vertex_id_t;
typedef uint8_t graph_edge_id_t;
typedef uint8_t graph_edge_unit_weight_t;




#line 39
typedef struct __nesc_unnamed4265 {
  graph_vertex_id_t dest;
  graph_edge_id_t next;
} graph_edge_node_t;




#line 44
typedef struct __nesc_unnamed4266 {
  graph_vertex_id_t src;
  graph_edge_id_t current;
} graph_edge_list_t;

enum __nesc_unnamed4267 {
  GRAPH_PARALLEL_EDGES_ALLOWED = TRUE, 
  GRAPH_PARALLEL_EDGES_NOT_ALLOWED = FALSE
};
# 25 "/opt/tinyos-2.x/tos/chips/atm128/sim/atm128_sim.h"
enum __nesc_unnamed4268 {

  ATM128_PINF = 0x00, 


  ATM128_PINE = 0x01, 


  ATM128_DDRE = 0x02, 


  ATM128_PORTE = 0x03, 


  ATM128_ADCW = 0x04, 

  ATM128_ADC = 0x04, 

  ATM128_ADCL = 0x04, 
  ATM128_ADCH = 0x05, 


  ATM128_ADCSR = 0x06, 
  ATM128_ADCSRA = 0x06, 


  ATM128_ADMUX = 0x07, 


  ATM128_ACSR = 0x08, 


  ATM128_UBRR0L = 0x09, 


  ATM128_UCSR0B = 0x0A, 


  ATM128_UCSR0A = 0x0B, 


  ATM128_UDR0 = 0x0C, 


  ATM128_SPCR = 0x0D, 


  ATM128_SPSR = 0x0E, 


  ATM128_SPDR = 0x0F, 


  ATM128_PIND = 0x10, 


  ATM128_DDRD = 0x11, 


  ATM128_PORTD = 0x12, 


  ATM128_PINC = 0x13, 


  ATM128_DDRC = 0x14, 


  ATM128_PORTC = 0x15, 


  ATM128_PINB = 0x16, 


  ATM128_DDRB = 0x17, 


  ATM128_PORTB = 0x18, 


  ATM128_PINA = 0x19, 


  ATM128_DDRA = 0x1A, 


  ATM128_PORTA = 0x1B, 




  ATM128_SFIOR = 0x20, 


  ATM128_WDTCR = 0x21, 


  ATM128_OCDR = 0x22, 


  ATM128_OCR2 = 0x23, 


  ATM128_TCNT2 = 0x24, 


  ATM128_TCCR2 = 0x25, 


  ATM128_ICR1 = 0x26, 
  ATM128_ICR1L = 0x26, 
  ATM128_ICR1H = 0x27, 


  ATM128_OCR1B = 0x28, 
  ATM128_OCR1BL = 0x28, 
  ATM128_OCR1BH = 0x29, 


  ATM128_OCR1A = 0x2A, 
  ATM128_OCR1AL = 0x2A, 
  ATM128_OCR1AH = 0x2B, 


  ATM128_TCNT1 = 0x2C, 
  ATM128_TCNT1L = 0x2C, 
  ATM128_TCNT1H = 0x2D, 


  ATM128_TCCR1B = 0x2E, 


  ATM128_TCCR1A = 0x2F, 


  ATM128_ASSR = 0x30, 


  ATM128_OCR0 = 0x31, 


  ATM128_TCNT0 = 0x32, 


  ATM128_TCCR0 = 0x33, 


  ATM128_MCUSR = 0x34, 
  ATM128_MCUCSR = 0x34, 


  ATM128_MCUCR = 0x35, 


  ATM128_TIFR = 0x36, 


  ATM128_TIMSK = 0x37, 


  ATM128_EIFR = 0x38, 


  ATM128_EIMSK = 0x39, 


  ATM128_EICRB = 0x3A, 


  ATM128_RAMPZ = 0x3B, 


  ATM128_XDIV = 0x3C, 




  ATM128_SREG = 0x3F, 




  ATM128_DDRF = 0x61, 


  ATM128_PORTF = 0x62, 


  ATM128_PING = 0x63, 


  ATM128_DDRG = 0x64, 


  ATM128_PORTG = 0x65, 


  ATM128_SPMCR = 0x68, 
  ATM128_SPMCSR = 0x68, 


  ATM128_EICRA = 0x6A, 


  ATM128_XMCRB = 0x6C, 


  ATM128_XMCRA = 0x6D, 


  ATM128_OSCCAL = 0x6F, 


  ATM128_TWBR = 0x70, 


  ATM128_TWSR = 0x71, 


  ATM128_TWAR = 0x72, 


  ATM128_TWDR = 0x73, 


  ATM128_TWCR = 0x74, 


  ATM128_OCR1C = 0x78, 
  ATM128_OCR1CL = 0x78, 
  ATM128_OCR1CH = 0x79, 


  ATM128_TCCR1C = 0x7A, 


  ATM128_ETIFR = 0x7C, 


  ATM128_ETIMSK = 0x7D, 


  ATM128_ICR3 = 0x80, 
  ATM128_ICR3L = 0x80, 
  ATM128_ICR3H = 0x81, 


  ATM128_OCR3C = 0x82, 
  ATM128_OCR3CL = 0x82, 
  ATM128_OCR3CH = 0x83, 


  ATM128_OCR3B = 0x84, 
  ATM128_OCR3BL = 0x84, 
  ATM128_OCR3BH = 0x85, 


  ATM128_OCR3A = 0x86, 
  ATM128_OCR3AL = 0x86, 
  ATM128_OCR3AH = 0x87, 


  ATM128_TCNT3 = 0x88, 
  ATM128_TCNT3L = 0x88, 
  ATM128_TCNT3H = 0x89, 


  ATM128_TCCR3B = 0x8A, 


  ATM128_TCCR3A = 0x8B, 


  ATM128_TCCR3C = 0x8C, 


  ATM128_UBRR0H = 0x90, 


  ATM128_UCSR0C = 0x95, 


  ATM128_UBRR1H = 0x98, 


  ATM128_UBRR1L = 0x99, 


  ATM128_UCSR1B = 0x9A, 


  ATM128_UCSR1A = 0x9B, 


  ATM128_UDR1 = 0x9C, 


  ATM128_UCSR1C = 0x9D
};
#line 673
enum __nesc_unnamed4269 {

  TWINT = 7, 
  TWEA = 6, 
  TWSTA = 5, 
  TWSTO = 4, 
  TWWC = 3, 
  TWEN = 2, 
  TWIE = 0, 


  TWA6 = 7, 
  TWA5 = 6, 
  TWA4 = 5, 
  TWA3 = 4, 
  TWA2 = 3, 
  TWA1 = 2, 
  TWA0 = 1, 
  TWGCE = 0, 


  TWS7 = 7, 
  TWS6 = 6, 
  TWS5 = 5, 
  TWS4 = 4, 
  TWS3 = 3, 
  TWPS1 = 1, 
  TWPS0 = 0, 


  SRL2 = 6, 
  SRL1 = 5, 
  SRL0 = 4, 
  SRW01 = 3, 
  SRW00 = 2, 
  SRW11 = 1, 


  XMBK = 7, 
  XMM2 = 2, 
  XMM1 = 1, 
  XMM0 = 0, 


  XDIVEN = 7, 
  XDIV6 = 6, 
  XDIV5 = 5, 
  XDIV4 = 4, 
  XDIV3 = 3, 
  XDIV2 = 2, 
  XDIV1 = 1, 
  XDIV0 = 0, 


  RAMPZ0 = 0, 


  ISC31 = 7, 
  ISC30 = 6, 
  ISC21 = 5, 
  ISC20 = 4, 
  ISC11 = 3, 
  ISC10 = 2, 
  ISC01 = 1, 
  ISC00 = 0, 


  ISC71 = 7, 
  ISC70 = 6, 
  ISC61 = 5, 
  ISC60 = 4, 
  ISC51 = 3, 
  ISC50 = 2, 
  ISC41 = 1, 
  ISC40 = 0, 


  SPMIE = 7, 
  RWWSB = 6, 
  RWWSRE = 4, 
  BLBSET = 3, 
  PGWRT = 2, 
  PGERS = 1, 
  SPMEN = 0, 


  INT7 = 7, 
  INT6 = 6, 
  INT5 = 5, 
  INT4 = 4, 
  INT3 = 3, 
  INT2 = 2, 
  INT1 = 1, 
  INT0 = 0, 


  INTF7 = 7, 
  INTF6 = 6, 
  INTF5 = 5, 
  INTF4 = 4, 
  INTF3 = 3, 
  INTF2 = 2, 
  INTF1 = 1, 
  INTF0 = 0, 


  OCIE2 = 7, 
  TOIE2 = 6, 
  TICIE1 = 5, 
  OCIE1A = 4, 
  OCIE1B = 3, 
  TOIE1 = 2, 
  OCIE0 = 1, 
  TOIE0 = 0, 


  OCF2 = 7, 
  TOV2 = 6, 
  ICF1 = 5, 
  OCF1A = 4, 
  OCF1B = 3, 
  TOV1 = 2, 
  OCF0 = 1, 
  TOV0 = 0, 


  TICIE3 = 5, 
  OCIE3A = 4, 
  OCIE3B = 3, 
  TOIE3 = 2, 
  OCIE3C = 1, 
  OCIE1C = 0, 


  ICF3 = 5, 
  OCF3A = 4, 
  OCF3B = 3, 
  TOV3 = 2, 
  OCF3C = 1, 
  OCF1C = 0, 


  SRE = 7, 
  SRW = 6, 
  SRW10 = 6, 
  SE = 5, 
  SM1 = 4, 
  SM0 = 3, 
  SM2 = 2, 
  IVSEL = 1, 
  IVCE = 0, 


  JTD = 7, 
  JTRF = 4, 
  WDRF = 3, 
  BORF = 2, 
  EXTRF = 1, 
  PORF = 0, 


  FOC = 7, 
  WGM0 = 6, 
  COM1 = 5, 
  COM0 = 4, 
  WGM1 = 3, 
  CS2 = 2, 
  CS1 = 1, 
  CS0 = 0, 


  FOC0 = 7, 
  WGM00 = 6, 
  COM01 = 5, 
  COM00 = 4, 
  WGM01 = 3, 
  CS02 = 2, 
  CS01 = 1, 
  CS00 = 0, 


  FOC2 = 7, 
  WGM20 = 6, 
  COM21 = 5, 
  COM20 = 4, 
  WGM21 = 3, 
  CS22 = 2, 
  CS21 = 1, 
  CS20 = 0, 


  AS0 = 3, 
  TCN0UB = 2, 
  OCR0UB = 1, 
  TCR0UB = 0, 


  COMA1 = 7, 
  COMA0 = 6, 
  COMB1 = 5, 
  COMB0 = 4, 
  COMC1 = 3, 
  COMC0 = 2, 
  WGMA1 = 1, 
  WGMA0 = 0, 


  COM1A1 = 7, 
  COM1A0 = 6, 
  COM1B1 = 5, 
  COM1B0 = 4, 
  COM1C1 = 3, 
  COM1C0 = 2, 
  WGM11 = 1, 
  WGM10 = 0, 


  COM3A1 = 7, 
  COM3A0 = 6, 
  COM3B1 = 5, 
  COM3B0 = 4, 
  COM3C1 = 3, 
  COM3C0 = 2, 
  WGM31 = 1, 
  WGM30 = 0, 


  ICNC = 7, 
  ICES = 6, 
  WGMB3 = 4, 
  WGMB2 = 3, 
  CSB2 = 2, 
  CSB1 = 1, 
  CSB0 = 0, 


  ICNC1 = 7, 
  ICES1 = 6, 
  WGM13 = 4, 
  WGM12 = 3, 
  CS12 = 2, 
  CS11 = 1, 
  CS10 = 0, 


  ICNC3 = 7, 
  ICES3 = 6, 
  WGM33 = 4, 
  WGM32 = 3, 
  CS32 = 2, 
  CS31 = 1, 
  CS30 = 0, 


  FOCA = 7, 
  FOCB = 6, 
  FOCC = 5, 


  FOC3A = 7, 
  FOC3B = 6, 
  FOC3C = 5, 


  FOC1A = 7, 
  FOC1B = 6, 
  FOC1C = 5, 


  IDRD = 7, 
  OCDR7 = 7, 
  OCDR6 = 6, 
  OCDR5 = 5, 
  OCDR4 = 4, 
  OCDR3 = 3, 
  OCDR2 = 2, 
  OCDR1 = 1, 
  OCDR0 = 0, 


  WDCE = 4, 
  WDE = 3, 
  WDP2 = 2, 
  WDP1 = 1, 
  WDP0 = 0, 


  TSM = 7, 
  ADHSM = 4, 
  ACME = 3, 
  PUD = 2, 
  PSR0 = 1, 
  PSR321 = 0, 


  SPIF = 7, 
  WCOL = 6, 
  SPI2X = 0, 


  SPIE = 7, 
  SPE = 6, 
  DORD = 5, 
  MSTR = 4, 
  CPOL = 3, 
  CPHA = 2, 
  SPR1 = 1, 
  SPR0 = 0, 


  UMSEL = 6, 
  UPM1 = 5, 
  UPM0 = 4, 
  USBS = 3, 
  UCSZ1 = 2, 
  UCSZ0 = 1, 
  UCPOL = 0, 


  UMSEL1 = 6, 
  UPM11 = 5, 
  UPM10 = 4, 
  USBS1 = 3, 
  UCSZ11 = 2, 
  UCSZ10 = 1, 
  UCPOL1 = 0, 


  UMSEL0 = 6, 
  UPM01 = 5, 
  UPM00 = 4, 
  USBS0 = 3, 
  UCSZ01 = 2, 
  UCSZ00 = 1, 
  UCPOL0 = 0, 


  RXC = 7, 
  TXC = 6, 
  UDRE = 5, 
  FE = 4, 
  DOR = 3, 
  UPE = 2, 
  U2X = 1, 
  MPCM = 0, 


  RXC1 = 7, 
  TXC1 = 6, 
  UDRE1 = 5, 
  FE1 = 4, 
  DOR1 = 3, 
  UPE1 = 2, 
  U2X1 = 1, 
  MPCM1 = 0, 


  RXC0 = 7, 
  TXC0 = 6, 
  UDRE0 = 5, 
  FE0 = 4, 
  DOR0 = 3, 
  UPE0 = 2, 
  U2X0 = 1, 
  MPCM0 = 0, 


  RXCIE = 7, 
  TXCIE = 6, 
  UDRIE = 5, 
  RXEN = 4, 
  TXEN = 3, 
  UCSZ = 2, 
  UCSZ2 = 2, 
  RXB8 = 1, 
  TXB8 = 0, 


  RXCIE1 = 7, 
  TXCIE1 = 6, 
  UDRIE1 = 5, 
  RXEN1 = 4, 
  TXEN1 = 3, 
  UCSZ12 = 2, 
  RXB81 = 1, 
  TXB81 = 0, 


  RXCIE0 = 7, 
  TXCIE0 = 6, 
  UDRIE0 = 5, 
  RXEN0 = 4, 
  TXEN0 = 3, 
  UCSZ02 = 2, 
  RXB80 = 1, 
  TXB80 = 0, 


  ACD = 7, 
  ACBG = 6, 
  ACO = 5, 
  ACI = 4, 
  ACIE = 3, 
  ACIC = 2, 
  ACIS1 = 1, 
  ACIS0 = 0, 


  ADEN = 7, 
  ADSC = 6, 
  ADFR = 5, 
  ADIF = 4, 
  ADIE = 3, 
  ADPS2 = 2, 
  ADPS1 = 1, 
  ADPS0 = 0, 


  REFS1 = 7, 
  REFS0 = 6, 
  ADLAR = 5, 
  MUX4 = 4, 
  MUX3 = 3, 
  MUX2 = 2, 
  MUX1 = 1, 
  MUX0 = 0, 


  PA7 = 7, 
  PA6 = 6, 
  PA5 = 5, 
  PA4 = 4, 
  PA3 = 3, 
  PA2 = 2, 
  PA1 = 1, 
  PA0 = 0, 


  DDA7 = 7, 
  DDA6 = 6, 
  DDA5 = 5, 
  DDA4 = 4, 
  DDA3 = 3, 
  DDA2 = 2, 
  DDA1 = 1, 
  DDA0 = 0, 


  PINA7 = 7, 
  PINA6 = 6, 
  PINA5 = 5, 
  PINA4 = 4, 
  PINA3 = 3, 
  PINA2 = 2, 
  PINA1 = 1, 
  PINA0 = 0, 


  PB7 = 7, 
  PB6 = 6, 
  PB5 = 5, 
  PB4 = 4, 
  PB3 = 3, 
  PB2 = 2, 
  PB1 = 1, 
  PB0 = 0, 


  DDB7 = 7, 
  DDB6 = 6, 
  DDB5 = 5, 
  DDB4 = 4, 
  DDB3 = 3, 
  DDB2 = 2, 
  DDB1 = 1, 
  DDB0 = 0, 


  PINB7 = 7, 
  PINB6 = 6, 
  PINB5 = 5, 
  PINB4 = 4, 
  PINB3 = 3, 
  PINB2 = 2, 
  PINB1 = 1, 
  PINB0 = 0, 


  PC7 = 7, 
  PC6 = 6, 
  PC5 = 5, 
  PC4 = 4, 
  PC3 = 3, 
  PC2 = 2, 
  PC1 = 1, 
  PC0 = 0, 


  DDC7 = 7, 
  DDC6 = 6, 
  DDC5 = 5, 
  DDC4 = 4, 
  DDC3 = 3, 
  DDC2 = 2, 
  DDC1 = 1, 
  DDC0 = 0, 


  PINC7 = 7, 
  PINC6 = 6, 
  PINC5 = 5, 
  PINC4 = 4, 
  PINC3 = 3, 
  PINC2 = 2, 
  PINC1 = 1, 
  PINC0 = 0, 


  PD7 = 7, 
  PD6 = 6, 
  PD5 = 5, 
  PD4 = 4, 
  PD3 = 3, 
  PD2 = 2, 
  PD1 = 1, 
  PD0 = 0, 


  DDD7 = 7, 
  DDD6 = 6, 
  DDD5 = 5, 
  DDD4 = 4, 
  DDD3 = 3, 
  DDD2 = 2, 
  DDD1 = 1, 
  DDD0 = 0, 


  PIND7 = 7, 
  PIND6 = 6, 
  PIND5 = 5, 
  PIND4 = 4, 
  PIND3 = 3, 
  PIND2 = 2, 
  PIND1 = 1, 
  PIND0 = 0, 


  PE7 = 7, 
  PE6 = 6, 
  PE5 = 5, 
  PE4 = 4, 
  PE3 = 3, 
  PE2 = 2, 
  PE1 = 1, 
  PE0 = 0, 


  DDE7 = 7, 
  DDE6 = 6, 
  DDE5 = 5, 
  DDE4 = 4, 
  DDE3 = 3, 
  DDE2 = 2, 
  DDE1 = 1, 
  DDE0 = 0, 


  PINE7 = 7, 
  PINE6 = 6, 
  PINE5 = 5, 
  PINE4 = 4, 
  PINE3 = 3, 
  PINE2 = 2, 
  PINE1 = 1, 
  PINE0 = 0, 


  PF7 = 7, 
  PF6 = 6, 
  PF5 = 5, 
  PF4 = 4, 
  PF3 = 3, 
  PF2 = 2, 
  PF1 = 1, 
  PF0 = 0, 


  DDF7 = 7, 
  DDF6 = 6, 
  DDF5 = 5, 
  DDF4 = 4, 
  DDF3 = 3, 
  DDF2 = 2, 
  DDF1 = 1, 
  DDF0 = 0, 


  PINF7 = 7, 
  PINF6 = 6, 
  PINF5 = 5, 
  PINF4 = 4, 
  PINF3 = 3, 
  PINF2 = 2, 
  PINF1 = 1, 
  PINF0 = 0, 


  PG4 = 4, 
  PG3 = 3, 
  PG2 = 2, 
  PG1 = 1, 
  PG0 = 0, 


  DDG4 = 4, 
  DDG3 = 3, 
  DDG2 = 2, 
  DDG1 = 1, 
  DDG0 = 0, 


  PING4 = 4, 
  PING3 = 3, 
  PING2 = 2, 
  PING1 = 1, 
  PING0 = 0
};
# 45 "/opt/tinyos-2.x/tos/chips/atm128/sim/atm128hardware.h"
uint8_t atm128RegFile[1000][0xa0];
#line 79
static __inline void __nesc_enable_interrupt(void);



static __inline void __nesc_disable_interrupt(void);




typedef uint8_t __nesc_atomic_t;



#line 91
__inline __nesc_atomic_t 
__nesc_atomic_start(void )  ;








#line 100
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)  ;
#line 114
typedef uint8_t mcu_power_t  ;





enum __nesc_unnamed4270 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};
# 34 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4271 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4272 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4273 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 85
typedef struct __nesc_unnamed4274 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4275 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4276 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4277 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4278 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4279 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4280 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 141
typedef struct __nesc_unnamed4281 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 48 "/opt/tinyos-2.x/tos/platforms/micaz/sim/platform_hardware.h"
enum __nesc_unnamed4282 {
  CHANNEL_RSSI = ATM128_ADC_SNGL_ADC0, 
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1, 
  CHANNEL_BATTERY = ATM128_ADC_SNGL_ADC7, 
  CHANNEL_BANDGAP = 30, 
  CHANNEL_GND = 31, 

  ATM128_TIMER0_TICKSPPS = 32768
};
# 33 "/opt/tinyos-2.x/tos/lib/tossim/SimMainP.nc"
static void __nesc_nido_initialise(int node);
# 35 "/home/jryans/tinyos-2.x-contrib-rice/tos/types/Iterator.h"
typedef bool iterator_end_t  ;
# 35 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/alloc/IndexedAlloc.h"
typedef uint8_t indexed_alloc_id_t;
# 35 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueue.h"
typedef uint8_t priority_queue_id_t;
enum TestGraphAppC$__nesc_unnamed4283 {
  TestGraphAppC$MAX_VERTICES = 5, TestGraphAppC$MAX_EDGES = 7
};
typedef graph_vertex_id_t TestGraphP$PathEdgeList$iterator_item_t;
typedef uint8_t TestGraphP$GraphEdgeWeight$weight_t;
typedef graph_edge_id_t TestGraphP$GraphEdgeList$iterator_item_t;
typedef uint8_t /*TestGraphAppC.GraphWeightedC*/GraphWeightedC$0$graph_edge_weight_t;
typedef graph_edge_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$iterator_item_t;
typedef /*TestGraphAppC.GraphWeightedC*/GraphWeightedC$0$graph_edge_weight_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC*/SourceShortestPathC$0$graph_edge_weight_t;
typedef priority_queue_id_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$compare_t;
typedef /*TestGraphAppC.GraphWeightedC.SourceShortestPathC*/SourceShortestPathC$0$graph_edge_weight_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$graph_edge_weight_t;
typedef graph_edge_id_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$iterator_item_t;
typedef graph_vertex_id_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$iterator_item_t;
typedef graph_vertex_id_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Compare$compare_t;
typedef /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$graph_edge_weight_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeWeight$weight_t;
typedef uint8_t /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$graph_edge_weight_t;
typedef /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$graph_edge_weight_t /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$GraphEdgeWeight$weight_t;
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t PlatformP$Init$init(void);
#line 51
static  error_t MotePlatformP$SubInit$default$init(void);
#line 51
static  error_t MotePlatformP$PlatformInit$init(void);
# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void);
#line 30
static   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t MeasureClockC$Init$init(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t SimSchedulerBasicP$TaskBasic$postTask(
# 41 "/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x7e835cc8);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SimSchedulerBasicP$TaskBasic$default$runTask(
# 41 "/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x7e835cc8);
# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static  void SimSchedulerBasicP$Scheduler$init(void);







static  bool SimSchedulerBasicP$Scheduler$runNextTask(void);
# 36 "/opt/tinyos-2.x/tos/lib/tossim/SimMote.nc"
static   void SimMoteP$SimMote$setEuid(long long int arg_0x7e5e9960);


static   int SimMoteP$SimMote$getVariableInfo(char *arg_0x7e5e84b8, void **arg_0x7e5e8678, size_t *arg_0x7e5e8820);

static   void SimMoteP$SimMote$turnOff(void);
#line 40
static  void SimMoteP$SimMote$turnOn(void);
#line 35
static   long long int SimMoteP$SimMote$getEuid(void);


static   bool SimMoteP$SimMote$isOn(void);
#line 37
static   long long int SimMoteP$SimMote$getStartTime(void);
# 48 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
static  am_addr_t TossimActiveMessageP$default$amAddress(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *TossimActiveMessageP$Snoop$default$receive(
# 41 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
am_id_t arg_0x7e5a7d50, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7e5a99d8, void *arg_0x7e5a9b78, uint8_t arg_0x7e5a9d00);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t TossimActiveMessageP$Packet$payloadLength(message_t *arg_0x7e5a3c58);
#line 108
static  void *TossimActiveMessageP$Packet$getPayload(message_t *arg_0x7e5a10d0, uint8_t *arg_0x7e5a1278);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *TossimActiveMessageP$Receive$default$receive(
# 40 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
am_id_t arg_0x7e5a75b8, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7e5a99d8, void *arg_0x7e5a9b78, uint8_t arg_0x7e5a9d00);
# 77 "/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
static  void TossimActiveMessageP$Model$receive(message_t *arg_0x7e590978);
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t TossimActiveMessageP$AMPacket$address(void);









static  am_addr_t TossimActiveMessageP$AMPacket$destination(message_t *arg_0x7e59ba28);
#line 136
static  am_id_t TossimActiveMessageP$AMPacket$type(message_t *arg_0x7e598f08);
#line 125
static  bool TossimActiveMessageP$AMPacket$isForMe(message_t *arg_0x7e5987d8);
# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static  void TestGraphP$Boot$booted(void);
# 150 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/Graph.nc"
static  void TestGraphP$Graph$removed(graph_edge_id_t arg_0x7e5341b8);
#line 143
static  void TestGraphP$Graph$inserted(graph_edge_id_t arg_0x7e535a40);
# 54 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPath.nc"
static  void TestGraphP$SourceShortestPath$builtTree(graph_vertex_id_t arg_0x7e51a010);
#line 72
static  void TestGraphP$SourceShortestPath$builtTreeTo(graph_vertex_id_t arg_0x7e518138, graph_vertex_id_t arg_0x7e5182d0, 
error_t arg_0x7e518470);
# 71 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdgeWeight.nc"
static  void TestGraphP$GraphEdgeWeight$weightChanged(graph_edge_id_t arg_0x7e528478);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$Init$init(void);
# 34 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
static   void /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$BitVector$clearAll(void);
#line 58
static   void /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$BitVector$clear(uint16_t arg_0x7e4071a0);
#line 46
static   bool /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$BitVector$get(uint16_t arg_0x7e409770);





static   void /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$BitVector$set(uint16_t arg_0x7e409c88);
# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static  void /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$Boot$booted(void);
# 79 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/alloc/IndexedAlloc.nc"
static  indexed_alloc_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$IndexedAlloc$alloc(void);








static  error_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$IndexedAlloc$free(indexed_alloc_id_t arg_0x7e4a8978);
# 115 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/Graph.nc"
static  error_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$remove(graph_vertex_id_t arg_0x7e538db0, graph_vertex_id_t arg_0x7e537010);










static  graph_edge_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edge(graph_vertex_id_t arg_0x7e537838, graph_vertex_id_t arg_0x7e5379d0);
#line 49
static  graph_vertex_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$vertices(void);
#line 105
static  graph_edge_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$insert(graph_vertex_id_t arg_0x7e538370, graph_vertex_id_t arg_0x7e538508);
#line 136
static  graph_edge_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edgeList(graph_vertex_id_t arg_0x7e535250);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Init$init(void);
# 54 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdge.nc"
static  graph_vertex_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdge$dest(graph_edge_id_t arg_0x7e531e68);
# 56 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/IndexedIterator.nc"
static  iterator_end_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$end(/*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$iterator_item_t arg_0x7e5212e0);
#line 48
static  /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$iterator_item_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$next(/*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$iterator_item_t arg_0x7e522b40);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Init$init(void);
# 122 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueue.nc"
static  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$clear(void);
#line 72
static  error_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$insert(priority_queue_id_t arg_0x7e398ce8);
#line 87
static  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$moveUp(priority_queue_id_t arg_0x7e397d10);
#line 47
static  bool /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$empty(void);
#line 117
static  priority_queue_id_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$removeBest(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$runTask(void);
# 150 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/Graph.nc"
static  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$removed(graph_edge_id_t arg_0x7e5341b8);
#line 143
static  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$inserted(graph_edge_id_t arg_0x7e535a40);
# 56 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/IndexedIterator.nc"
static  iterator_end_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$end(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$iterator_item_t arg_0x7e5212e0);
#line 48
static  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$iterator_item_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$next(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$iterator_item_t arg_0x7e522b40);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Init$init(void);
# 47 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPath.nc"
static  error_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildTree(graph_vertex_id_t arg_0x7e51b830);
#line 93
static  graph_edge_id_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$edgeCount(graph_vertex_id_t arg_0x7e517478);
#line 64
static  error_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildTreeTo(graph_vertex_id_t arg_0x7e51a778, graph_vertex_id_t arg_0x7e51a910);
# 49 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/Compare.nc"
static  int16_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Compare$test(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Compare$compare_t arg_0x7e390628, /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Compare$compare_t arg_0x7e3907b8);
# 71 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdgeWeight.nc"
static  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeWeight$weightChanged(graph_edge_id_t arg_0x7e528478);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$weightChanged$runTask(void);
# 64 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdgeWeight.nc"
static  void /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$GraphEdgeWeight$setWeight(graph_edge_id_t arg_0x7e52ab58, /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$GraphEdgeWeight$weight_t arg_0x7e52ace8);
#line 55
static  /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$GraphEdgeWeight$weight_t /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$GraphEdgeWeight$weight(graph_edge_id_t arg_0x7e52a3d0);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t PlatformP$MoteInit$init(void);
#line 51
static  error_t PlatformP$MeasureClock$init(void);
# 42 "/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void);






static inline  error_t PlatformP$Init$init(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t MotePlatformP$SubInit$init(void);
# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void MotePlatformP$SerialIdPin$makeInput(void);
#line 30
static   void MotePlatformP$SerialIdPin$clr(void);
# 26 "/opt/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline  error_t MotePlatformP$PlatformInit$init(void);
#line 38
static inline   error_t MotePlatformP$SubInit$default$init(void);
# 50 "/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void);


static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void);
# 21 "/opt/tinyos-2.x/tos/platforms/mica/sim/MeasureClockC.nc"
static inline  error_t MeasureClockC$Init$init(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t SimMainP$SoftwareInit$init(void);
# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static  void SimMainP$Boot$booted(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t SimMainP$PlatformInit$init(void);
# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static  void SimMainP$Scheduler$init(void);







static  bool SimMainP$Scheduler$runNextTask(void);
# 43 "/opt/tinyos-2.x/tos/lib/tossim/SimMainP.nc"
int sim_main_start_mote(void)   ;
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SimSchedulerBasicP$TaskBasic$runTask(
# 41 "/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x7e835cc8);



enum SimSchedulerBasicP$__nesc_unnamed4284 {

  SimSchedulerBasicP$NUM_TASKS = 2U, 
  SimSchedulerBasicP$NO_TASK = 255
};

uint8_t SimSchedulerBasicP$m_head[1000];
uint8_t SimSchedulerBasicP$m_tail[1000];
uint8_t SimSchedulerBasicP$m_next[1000][SimSchedulerBasicP$NUM_TASKS];




bool SimSchedulerBasicP$sim_scheduler_event_pending[1000];
sim_event_t SimSchedulerBasicP$sim_scheduler_event[1000];

static inline int SimSchedulerBasicP$sim_config_task_latency(void);







static void SimSchedulerBasicP$sim_scheduler_submit_event(void);







static inline void SimSchedulerBasicP$sim_scheduler_event_handle(sim_event_t *e);
#line 95
static inline void SimSchedulerBasicP$sim_scheduler_event_init(sim_event_t *e);
#line 112
static inline uint8_t SimSchedulerBasicP$popTask(void);
#line 131
static inline bool SimSchedulerBasicP$isWaiting(uint8_t id);




static inline bool SimSchedulerBasicP$pushTask(uint8_t id);
#line 158
static inline  void SimSchedulerBasicP$Scheduler$init(void);
#line 172
static  bool SimSchedulerBasicP$Scheduler$runNextTask(void);
#line 197
static   error_t SimSchedulerBasicP$TaskBasic$postTask(uint8_t id);
#line 213
static inline   void SimSchedulerBasicP$TaskBasic$default$runTask(uint8_t id);
# 42 "/opt/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
long long int SimMoteP$euid[1000];
long long int SimMoteP$startTime[1000];
bool SimMoteP$isOn[1000];
sim_event_t *SimMoteP$bootEvent[1000];

static inline   long long int SimMoteP$SimMote$getEuid(void);


static inline   void SimMoteP$SimMote$setEuid(long long int e);


static inline   long long int SimMoteP$SimMote$getStartTime(void);


static inline   bool SimMoteP$SimMote$isOn(void);



static inline   int SimMoteP$SimMote$getVariableInfo(char *name, void **addr, size_t *size);



static  void SimMoteP$SimMote$turnOn(void);
#line 77
static inline   void SimMoteP$SimMote$turnOff(void);




long long int sim_mote_euid(int mote)   ;








void sim_mote_set_euid(int mote, long long int id)   ;






long long int sim_mote_start_time(int mote)   ;








int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)   ;









void sim_mote_set_start_time(int mote, long long int t)   ;








bool sim_mote_is_on(int mote)   ;








void sim_mote_turn_on(int mote)   ;






void sim_mote_turn_off(int mote)   ;






static inline void SimMoteP$sim_mote_boot_handle(sim_event_t *e);








void sim_mote_enqueue_boot_event(int mote)   ;
# 48 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
static  am_addr_t TossimActiveMessageP$amAddress(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *TossimActiveMessageP$Snoop$receive(
# 41 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
am_id_t arg_0x7e5a7d50, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7e5a99d8, void *arg_0x7e5a9b78, uint8_t arg_0x7e5a9d00);
#line 67
static  message_t *TossimActiveMessageP$Receive$receive(
# 40 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
am_id_t arg_0x7e5a75b8, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7e5a99d8, void *arg_0x7e5a9b78, uint8_t arg_0x7e5a9d00);
# 53 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
message_t TossimActiveMessageP$buffer[1000];
message_t *TossimActiveMessageP$bufferPointer[1000];

static inline tossim_header_t *TossimActiveMessageP$getHeader(message_t *amsg);
#line 108
static inline  void TossimActiveMessageP$Model$receive(message_t *msg);
#line 134
static inline  am_addr_t TossimActiveMessageP$AMPacket$address(void);



static  am_addr_t TossimActiveMessageP$AMPacket$destination(message_t *amsg);
#line 158
static inline  bool TossimActiveMessageP$AMPacket$isForMe(message_t *amsg);




static  am_id_t TossimActiveMessageP$AMPacket$type(message_t *amsg);
#line 175
static inline  uint8_t TossimActiveMessageP$Packet$payloadLength(message_t *msg);
#line 187
static inline  void *TossimActiveMessageP$Packet$getPayload(message_t *msg, uint8_t *len);
#line 208
static inline   message_t *TossimActiveMessageP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline   message_t *TossimActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
#line 228
static inline   am_addr_t TossimActiveMessageP$default$amAddress(void);



static inline void TossimActiveMessageP$active_message_deliver_handle(sim_event_t *evt);





static inline sim_event_t *TossimActiveMessageP$allocate_deliver_event(int node, message_t *msg, sim_time_t t);
#line 250
void active_message_deliver(int node, message_t *msg, sim_time_t t)   ;
# 115 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/Graph.nc"
static  error_t TestGraphP$Graph$remove(graph_vertex_id_t arg_0x7e538db0, graph_vertex_id_t arg_0x7e537010);










static  graph_edge_id_t TestGraphP$Graph$edge(graph_vertex_id_t arg_0x7e537838, graph_vertex_id_t arg_0x7e5379d0);
#line 49
static  graph_vertex_id_t TestGraphP$Graph$vertices(void);
#line 105
static  graph_edge_id_t TestGraphP$Graph$insert(graph_vertex_id_t arg_0x7e538370, graph_vertex_id_t arg_0x7e538508);
#line 136
static  graph_edge_id_t TestGraphP$Graph$edgeList(graph_vertex_id_t arg_0x7e535250);
# 48 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/IndexedIterator.nc"
static  TestGraphP$PathEdgeList$iterator_item_t TestGraphP$PathEdgeList$next(TestGraphP$PathEdgeList$iterator_item_t arg_0x7e522b40);
# 47 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPath.nc"
static  error_t TestGraphP$SourceShortestPath$buildTree(graph_vertex_id_t arg_0x7e51b830);
#line 93
static  graph_edge_id_t TestGraphP$SourceShortestPath$edgeCount(graph_vertex_id_t arg_0x7e517478);
#line 64
static  error_t TestGraphP$SourceShortestPath$buildTreeTo(graph_vertex_id_t arg_0x7e51a778, graph_vertex_id_t arg_0x7e51a910);
# 54 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdge.nc"
static  graph_vertex_id_t TestGraphP$GraphEdge$dest(graph_edge_id_t arg_0x7e531e68);
# 64 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdgeWeight.nc"
static  void TestGraphP$GraphEdgeWeight$setWeight(graph_edge_id_t arg_0x7e52ab58, TestGraphP$GraphEdgeWeight$weight_t arg_0x7e52ace8);
# 56 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/IndexedIterator.nc"
static  iterator_end_t TestGraphP$GraphEdgeList$end(TestGraphP$GraphEdgeList$iterator_item_t arg_0x7e5212e0);
#line 48
static  TestGraphP$GraphEdgeList$iterator_item_t TestGraphP$GraphEdgeList$next(TestGraphP$GraphEdgeList$iterator_item_t arg_0x7e522b40);
# 54 "TestGraphP.nc"
uint8_t TestGraphP$test[1000];



graph_edge_id_t TestGraphP$a_b[1000];
#line 58
graph_edge_id_t TestGraphP$a_c[1000];
#line 58
graph_edge_id_t TestGraphP$b_d[1000];
#line 58
graph_edge_id_t TestGraphP$b_e[1000];
#line 58
graph_edge_id_t TestGraphP$c_b[1000];
#line 58
graph_edge_id_t TestGraphP$c_e[1000];
#line 58
graph_edge_id_t TestGraphP$e_d[1000];
graph_edge_id_t TestGraphP$testEdge[1000];



static inline  void TestGraphP$Boot$booted(void);
#line 75
static inline  void TestGraphP$Graph$inserted(graph_edge_id_t m);
#line 135
static  void TestGraphP$Graph$removed(graph_edge_id_t m);
#line 157
static inline  void TestGraphP$GraphEdgeWeight$weightChanged(graph_edge_id_t m);
#line 198
static inline  void TestGraphP$SourceShortestPath$builtTree(graph_vertex_id_t src);
#line 247
static inline  void TestGraphP$SourceShortestPath$builtTreeTo(graph_vertex_id_t src, graph_vertex_id_t dest, 
error_t pathResult);
# 40 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
typedef uint8_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$int_type;

enum /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$__nesc_unnamed4285 {

  BitVectorC$0$ELEMENT_SIZE = 8 * sizeof(/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$int_type ), 
  BitVectorC$0$ARRAY_SIZE = (7 + /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$ELEMENT_SIZE - 1) / /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$ELEMENT_SIZE
};

/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$int_type /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$m_bits[1000][/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$ARRAY_SIZE];

static inline uint16_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$getIndex(uint16_t bitnum);




static inline uint16_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$getMask(uint16_t bitnum);




static inline  error_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$Init$init(void);





static inline   void /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$BitVector$clearAll(void);









static   bool /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$BitVector$get(uint16_t bitnum);




static inline   void /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$BitVector$set(uint16_t bitnum);




static inline   void /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$BitVector$clear(uint16_t bitnum);
# 34 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
static   void /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$clearAll(void);
#line 58
static   void /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$clear(uint16_t arg_0x7e4071a0);
#line 46
static   bool /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$get(uint16_t arg_0x7e409770);





static   void /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$set(uint16_t arg_0x7e409c88);
# 54 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/alloc/IndexedAllocBitsP.nc"
indexed_alloc_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free[1000];
indexed_alloc_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$size[1000];



static inline void /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$findFree(void);



static inline  void /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$Boot$booted(void);
#line 112
static inline  indexed_alloc_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$IndexedAlloc$alloc(void);
#line 130
static  error_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$IndexedAlloc$free(indexed_alloc_id_t m);
#line 157
static inline void /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$findFree(void);
# 150 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/Graph.nc"
static  void /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$removed(graph_edge_id_t arg_0x7e5341b8);
#line 143
static  void /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$inserted(graph_edge_id_t arg_0x7e535a40);
# 79 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/alloc/IndexedAlloc.nc"
static  indexed_alloc_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$IndexedAlloc$alloc(void);








static  error_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$IndexedAlloc$free(indexed_alloc_id_t arg_0x7e4a8978);
# 57 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphSparseP.nc"
graph_vertex_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$vSize[1000];
graph_edge_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[1000][5];
graph_edge_node_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[1000][7];



static void /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$printGraph(void);



static inline  error_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Init$init(void);
#line 84
static inline  graph_vertex_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$vertices(void);
#line 152
static  graph_edge_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$insert(graph_vertex_id_t s, 
graph_vertex_id_t d);
#line 185
static  error_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$remove(graph_vertex_id_t s, graph_vertex_id_t d);
#line 231
static  graph_edge_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edge(graph_vertex_id_t s, graph_vertex_id_t d);
#line 251
static inline  graph_edge_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edgeList(graph_vertex_id_t s);
#line 274
static inline  graph_vertex_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdge$dest(graph_edge_id_t m);
#line 286
static inline  graph_edge_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$next(graph_edge_id_t m);









static inline  iterator_end_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$end(graph_edge_id_t m);








static void /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$printGraph(void);
# 49 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/Compare.nc"
static  int16_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$test(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$compare_t arg_0x7e390628, /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$compare_t arg_0x7e3907b8);
# 56 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueueP.nc"
priority_queue_id_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[1000];


priority_queue_id_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[1000][5];

priority_queue_id_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[1000][5];




static void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$clearData(void);
static void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$moveUpPos(priority_queue_id_t a);
static inline void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$moveDownPos(priority_queue_id_t a, priority_queue_id_t curSize);
static void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$flip(priority_queue_id_t a, priority_queue_id_t b);
static void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTree(void);
static void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTreeChild(priority_queue_id_t n, char *pre);



static inline  error_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Init$init(void);
#line 87
static inline  bool /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$empty(void);
#line 118
static  error_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$insert(priority_queue_id_t m);
#line 150
static inline  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$moveUp(priority_queue_id_t m);
#line 194
static inline  priority_queue_id_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$removeBest(void);
#line 206
static inline  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$clear(void);
#line 218
static void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$moveUpPos(priority_queue_id_t a);
#line 234
static inline void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$moveDownPos(priority_queue_id_t a, priority_queue_id_t curSize);
#line 253
static void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$flip(priority_queue_id_t a, priority_queue_id_t b);
#line 267
static void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTree(void);
#line 292
static void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTreeChild(priority_queue_id_t n, char *pre);
#line 312
static void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$clearData(void);
# 56 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/IndexedIterator.nc"
static  iterator_end_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$end(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$iterator_item_t arg_0x7e5212e0);
#line 48
static  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$iterator_item_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$next(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$iterator_item_t arg_0x7e522b40);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$postTask(void);
# 136 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/Graph.nc"
static  graph_edge_id_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$edgeList(graph_vertex_id_t arg_0x7e535250);
# 54 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPath.nc"
static  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$builtTree(graph_vertex_id_t arg_0x7e51a010);
#line 72
static  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$builtTreeTo(graph_vertex_id_t arg_0x7e518138, graph_vertex_id_t arg_0x7e5182d0, 
error_t arg_0x7e518470);
# 54 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdge.nc"
static  graph_vertex_id_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdge$dest(graph_edge_id_t arg_0x7e531e68);
# 122 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueue.nc"
static  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$clear(void);
#line 72
static  error_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$insert(priority_queue_id_t arg_0x7e398ce8);
#line 87
static  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$moveUp(priority_queue_id_t arg_0x7e397d10);
#line 47
static  bool /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$empty(void);
#line 117
static  priority_queue_id_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$removeBest(void);
# 55 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdgeWeight.nc"
static  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeWeight$weight_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeWeight$weight(graph_edge_id_t arg_0x7e52a3d0);
# 84 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPathP.nc"
enum /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$__nesc_unnamed4286 {
#line 84
  SourceShortestPathP$0$buildTreeTask = 0U
};
#line 84
typedef int /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$__nesc_sillytask_buildTreeTask[/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask];
#line 61
graph_vertex_id_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[1000][5];

graph_vertex_id_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[1000][5];

/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$graph_edge_weight_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[1000][5];

graph_vertex_id_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc[1000];


bool /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded[1000];


graph_vertex_id_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[1000];

error_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$foundDest[1000];

bool /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree[1000];



static void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$initTree(void);
static inline void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$printPaths(void);
static void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$printPathLink(graph_vertex_id_t m, char *path, char *tmp);




static inline  error_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Init$init(void);
#line 105
static inline  error_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildTree(graph_vertex_id_t src);
#line 117
static  error_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildTreeTo(graph_vertex_id_t src, 
graph_vertex_id_t dest);
#line 165
static  graph_edge_id_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$edgeCount(graph_vertex_id_t dest);
#line 194
static inline  graph_vertex_id_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$next(graph_vertex_id_t dest);
#line 207
static inline  iterator_end_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$end(graph_vertex_id_t dest);









static inline  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$runTask(void);
#line 276
static inline  int16_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Compare$test(graph_vertex_id_t a, graph_vertex_id_t b);










static inline  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$inserted(graph_edge_id_t m);








static inline  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$removed(graph_edge_id_t m);










static inline  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeWeight$weightChanged(graph_edge_id_t m);








static void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$initTree(void);
#line 329
static inline void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$printPaths(void);
#line 350
static void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$printPathLink(graph_vertex_id_t m, char *path, char *tmp);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$weightChanged$postTask(void);
# 71 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdgeWeight.nc"
static  void /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$GraphEdgeWeight$weightChanged(graph_edge_id_t arg_0x7e528478);
# 53 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdgeWeightC.nc"
enum /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$__nesc_unnamed4287 {
#line 53
  GraphEdgeWeightC$0$weightChanged = 1U
};
#line 53
typedef int /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$__nesc_sillytask_weightChanged[/*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$weightChanged];
#line 49
/*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$graph_edge_weight_t /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$weight[1000][7];

graph_edge_id_t /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$changed[1000];
#line 74
static inline  /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$graph_edge_weight_t /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$GraphEdgeWeight$weight(graph_edge_id_t m);










static inline  void /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$GraphEdgeWeight$setWeight(graph_edge_id_t m, 
/*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$graph_edge_weight_t w);










static inline  void /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$weightChanged$runTask(void);
# 67 "/opt/tinyos-2.x/tos/lib/tossim/heap.c"
static inline void init_heap(heap_t *heap)
#line 67
{
  heap->size = 0;
  heap->private_size = STARTING_SIZE;
  heap->data = malloc(sizeof(node_t ) * heap->private_size);
}

#line 119
static inline void expand_heap(heap_t *heap)
#line 119
{
  int new_size = heap->private_size * 2 + 1;
  void *new_data = malloc(sizeof(node_t ) * new_size);



  memcpy(new_data, heap->data, sizeof(node_t ) * heap->private_size);
  free(heap->data);

  heap->data = new_data;
  heap->private_size = new_size;
}


static inline void heap_insert(heap_t *heap, void *data, long long int key)
#line 133
{
  int findex = heap->size;

#line 135
  if (findex == heap->private_size) {
      expand_heap(heap);
    }

  findex = heap->size;
  ((node_t *)heap->data)[findex].key = key;
  ((node_t *)heap->data)[findex].data = data;
  up_heap(heap, findex);

  heap->size++;
}

#line 77
static inline int is_empty(heap_t *heap)
#line 77
{
  return heap->size == 0;
}

static inline int heap_is_empty(heap_t *heap)
#line 81
{
  return is_empty(heap);
}

static inline long long int heap_get_min_key(heap_t *heap)
#line 85
{
  if (is_empty(heap)) {
      return -1;
    }
  else {
      return ((node_t *)heap->data)[0].key;
    }
}

# 309 "/opt/tinyos-2.x/tos/lib/tossim/sim_log.c"
inline static int sim_log_eq(void *key1, void *key2)
#line 309
{
  return strcmp((char *)key1, (char *)key2) == 0;
}

#line 298
inline static unsigned int sim_log_hash(void *key)
#line 298
{
  char *str = (char *)key;
  unsigned int hashVal = 0;
  int hashChar;

  while ((hashChar = * str++)) 
    hashVal = hashChar + (hashVal << 6) + (hashVal << 16) - hashVal;

  return hashVal;
}

#line 151
static inline void sim_log_init(void)
#line 151
{
  int i;

  channelTable = create_hashtable(128, sim_log_hash, sim_log_eq);

  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      outputs[i].num = 1;
      outputs[i].files = (FILE **)malloc(sizeof(FILE *));
      outputs[i].files[0] = fdopen(1, "w");
    }
}

# 115 "/opt/tinyos-2.x/tos/lib/tossim/sim_noise.c"
inline static unsigned int sim_noise_hash(void *key)
#line 115
{
  char *pt = (char *)key;
  unsigned int hashVal = 0;
  int i;

#line 119
  for (i = 0; i < NOISE_HISTORY; i++) {
      hashVal = pt[i] + (hashVal << 6) + (hashVal << 16) - hashVal;
    }
  return hashVal;
}

inline static int sim_noise_eq(void *key1, void *key2)
#line 125
{
  return memcmp((void *)key1, (void *)key2, NOISE_HISTORY) == 0;
}

# 56 "/opt/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
static inline   bool SimMoteP$SimMote$isOn(void)
#line 56
{
  return SimMoteP$isOn[sim_node()];
}

# 164 "/opt/tinyos-2.x/tos/lib/tossim/sim_log.c"
static inline void sim_log_add_channel(char *name, FILE *file)
#line 164
{
  sim_log_channel_t *channel;

#line 166
  channel = (sim_log_channel_t *)hashtable_search(channelTable, name);



  if (channel == (void *)0) {
      char *newName = (char *)malloc(strlen(name) + 1);

#line 172
      strcpy(newName, name);
      newName[strlen(name)] = 0;

      channel = (sim_log_channel_t *)malloc(sizeof(sim_log_channel_t ));
      channel->name = newName;
      channel->numOutputs = 0;
      channel->size = DEFAULT_CHANNEL_SIZE;
      channel->outputs = (FILE **)malloc(sizeof(FILE *) * channel->size);
      memset(channel->outputs, 0, sizeof(FILE *) * channel->size);
      hashtable_insert(channelTable, newName, channel);
    }



  if (channel->numOutputs == channel->size) {
      FILE **newOutputs;
      int newSize = channel->size * 2;

      newOutputs = (FILE **)malloc(sizeof(FILE *) * newSize);
      memcpy(newOutputs, channel->outputs, channel->size * sizeof(FILE **));

      free(channel->outputs);

      channel->outputs = newOutputs;
      channel->size = newSize;
    }

  channel->outputs[channel->numOutputs] = file;
  channel->numOutputs++;
  sim_log_commit_change();
}

static inline bool sim_log_remove_channel(char *output, FILE *file)
#line 204
{
  sim_log_channel_t *channel;
  int i;

#line 207
  channel = (sim_log_channel_t *)hashtable_search(channelTable, output);

  if (channel == (void *)0) {
      return FALSE;
    }


  for (i = 0; i < channel->numOutputs; i++) {
      FILE *f = channel->outputs[i];

#line 216
      if (file == f) {
          memcpy(&channel->outputs[i], &channel->outputs[i + 1], channel->numOutputs - (i + 1));
          channel->outputs[channel->numOutputs - 1] = (void *)0;
          channel->numOutputs--;
        }
    }

  return TRUE;
}

# 159 "/opt/tinyos-2.x/tos/lib/tossim/sim_gain.c"
static inline gain_entry_t *sim_gain_allocate_link(int mote)
#line 159
{
  gain_entry_t *newLink = (gain_entry_t *)malloc(sizeof(gain_entry_t ));

#line 161
  newLink->next = (void *)0;
  newLink->mote = mote;
  newLink->gain = -10000000.0;
  return newLink;
}

# 55 "/opt/tinyos-2.x/tos/lib/tossim/randomlib.c"
static inline void RandomInitialise(int ij, int kl)
{
  double s;
#line 57
  double t;
  int ii;
#line 58
  int i;
#line 58
  int j;
#line 58
  int k;
#line 58
  int l;
#line 58
  int jj;
#line 58
  int m;






  if (((ij < 0 || ij > 31328) || kl < 0) || kl > 30081) {
      ij = 1802;
      kl = 9373;
    }

  i = ij / 177 % 177 + 2;
  j = ij % 177 + 2;
  k = kl / 169 % 178 + 1;
  l = kl % 169;

  for (ii = 0; ii < 97; ii++) {
      s = 0.0;
      t = 0.5;
      for (jj = 0; jj < 24; jj++) {
          m = i * j % 179 * k % 179;
          i = j;
          j = k;
          k = m;
          l = (53 * l + 1) % 169;
          if (l * m % 64 >= 32) {
            s += t;
            }
#line 86
          t *= 0.5;
        }
      randU[ii] = s;
    }

  randC = 362436.0 / 16777216.0;
  randCD = 7654321.0 / 16777216.0;
  randCM = 16777213.0 / 16777216.0;
  i97 = 97;
  j97 = 33;
  test = TRUE;
}





static inline double RandomUniform(void )
{
  double uni;
  int seed1;
#line 106
  int seed2;


  if (!test) 
    {



      seed1 = sim_random() % 31329;
      seed2 = sim_random() % 30082;
      RandomInitialise(seed1, seed2);
    }

  uni = randU[i97 - 1] - randU[j97 - 1];
  if (uni <= 0.0) {
    uni++;
    }
#line 122
  randU[i97 - 1] = uni;
  i97--;
  if (i97 == 0) {
    i97 = 97;
    }
#line 126
  j97--;
  if (j97 == 0) {
    j97 = 97;
    }
#line 129
  randC -= randCD;
  if (randC < 0.0) {
    randC += randCM;
    }
#line 132
  uni -= randC;
  if (uni < 0.0) {
    uni++;
    }
  return uni;
}

# 265 "/opt/tinyos-2.x/tos/lib/tossim/sim_noise.c"
static inline void sim_noise_alarm(void)
#line 265
{
  dummy = 5;
}

# 42 "/opt/tinyos-2.x/tos/lib/tossim/sim_packet.c"
inline static tossim_header_t *getHeader(message_t *msg)
#line 42
{
  return (tossim_header_t *)(msg->data - sizeof(tossim_header_t ));
}

# 269 "/usr/lib/ncc/nesc_nx.h"
static __inline uint16_t __nesc_hton_uint16(void *target, uint16_t value)
#line 269
{
  uint8_t *base = target;

#line 271
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

#line 264
static __inline uint16_t __nesc_ntoh_uint16(const void *source)
#line 264
{
  const uint8_t *base = source;

#line 266
  return ((uint16_t )base[0] << 8) | base[1];
}

#line 240
static __inline uint8_t __nesc_hton_uint8(void *target, uint8_t value)
#line 240
{
  uint8_t *base = target;

#line 242
  base[0] = value;
  return value;
}

# 212 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
static inline   message_t *TossimActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 212
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *TossimActiveMessageP$Snoop$receive(am_id_t arg_0x7e5a7d50, message_t *arg_0x7e5a99d8, void *arg_0x7e5a9b78, uint8_t arg_0x7e5a9d00){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
    result = TossimActiveMessageP$Snoop$default$receive(arg_0x7e5a7d50, arg_0x7e5a99d8, arg_0x7e5a9b78, arg_0x7e5a9d00);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 208 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
static inline   message_t *TossimActiveMessageP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 208
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *TossimActiveMessageP$Receive$receive(am_id_t arg_0x7e5a75b8, message_t *arg_0x7e5a99d8, void *arg_0x7e5a9b78, uint8_t arg_0x7e5a9d00){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
    result = TossimActiveMessageP$Receive$default$receive(arg_0x7e5a75b8, arg_0x7e5a99d8, arg_0x7e5a9b78, arg_0x7e5a9d00);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 228 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
static inline   am_addr_t TossimActiveMessageP$default$amAddress(void)
#line 228
{
  return 0;
}

#line 48
inline static  am_addr_t TossimActiveMessageP$amAddress(void){
#line 48
  unsigned short result;
#line 48

#line 48
  result = TossimActiveMessageP$default$amAddress();
#line 48

#line 48
  return result;
#line 48
}
#line 48
#line 134
static inline  am_addr_t TossimActiveMessageP$AMPacket$address(void)
#line 134
{
  return TossimActiveMessageP$amAddress();
}

#line 158
static inline  bool TossimActiveMessageP$AMPacket$isForMe(message_t *amsg)
#line 158
{
  return TossimActiveMessageP$AMPacket$destination(amsg) == TossimActiveMessageP$AMPacket$address() || 
  TossimActiveMessageP$AMPacket$destination(amsg) == AM_BROADCAST_ADDR;
}

# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void *source)
#line 235
{
  const uint8_t *base = source;

#line 237
  return base[0];
}

# 56 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
static inline tossim_header_t *TossimActiveMessageP$getHeader(message_t *amsg)
#line 56
{
  return (tossim_header_t *)(amsg->data - sizeof(tossim_header_t ));
}

#line 175
static inline  uint8_t TossimActiveMessageP$Packet$payloadLength(message_t *msg)
#line 175
{
  return __nesc_ntoh_uint8((unsigned char *)&TossimActiveMessageP$getHeader(msg)->length);
}









static inline  void *TossimActiveMessageP$Packet$getPayload(message_t *msg, uint8_t *len)
#line 187
{
  if (len != (void *)0) {
      *len = TossimActiveMessageP$Packet$payloadLength(msg);
    }
  return msg->data;
}

#line 108
static inline  void TossimActiveMessageP$Model$receive(message_t *msg)
#line 108
{
  uint8_t len;
  void *payload;

  memcpy(TossimActiveMessageP$bufferPointer[sim_node()], msg, sizeof(message_t ));
  payload = TossimActiveMessageP$Packet$getPayload(TossimActiveMessageP$bufferPointer[sim_node()], &len);

  if (TossimActiveMessageP$AMPacket$isForMe(msg)) {
      sim_log_debug(98U, "AM", "Received active message (%p) of type %hhu and length %hhu for me @ %s.\n", TossimActiveMessageP$bufferPointer[sim_node()], TossimActiveMessageP$AMPacket$type(TossimActiveMessageP$bufferPointer[sim_node()]), len, sim_time_string());
      TossimActiveMessageP$bufferPointer[sim_node()] = TossimActiveMessageP$Receive$receive(TossimActiveMessageP$AMPacket$type(TossimActiveMessageP$bufferPointer[sim_node()]), TossimActiveMessageP$bufferPointer[sim_node()], payload, len);
    }
  else {
      sim_log_debug(99U, "AM", "Snooped on active message of type %hhu and length %hhu for %hu @ %s.\n", TossimActiveMessageP$AMPacket$type(TossimActiveMessageP$bufferPointer[sim_node()]), len, TossimActiveMessageP$AMPacket$destination(TossimActiveMessageP$bufferPointer[sim_node()]), sim_time_string());
      TossimActiveMessageP$bufferPointer[sim_node()] = TossimActiveMessageP$Snoop$receive(TossimActiveMessageP$AMPacket$type(TossimActiveMessageP$bufferPointer[sim_node()]), TossimActiveMessageP$bufferPointer[sim_node()], payload, len);
    }
}

#line 232
static inline void TossimActiveMessageP$active_message_deliver_handle(sim_event_t *evt)
#line 232
{
  message_t *m = (message_t *)evt->data;

#line 234
  sim_log_debug(101U, "Packet", "Delivering packet to %i at %s\n", (int )sim_node(), sim_time_string());
  TossimActiveMessageP$Model$receive(m);
}

static inline sim_event_t *TossimActiveMessageP$allocate_deliver_event(int node, message_t *msg, sim_time_t t)
#line 238
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 240
  evt->mote = node;
  evt->time = t;
  evt->handle = TossimActiveMessageP$active_message_deliver_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 0;
  evt->data = msg;
  return evt;
}

# 83 "/opt/tinyos-2.x/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_disable_interrupt(void)
#line 83
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] &= ~(1 << 7);
}






 
#line 91
__inline __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F];

#line 95
  __nesc_disable_interrupt();
  return result;
}



 
#line 100
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F] = original_SREG;
}

# 77 "/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP$sim_scheduler_event_handle(sim_event_t *e)
#line 77
{
  SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = FALSE;








  if (SimSchedulerBasicP$Scheduler$runNextTask()) {
      SimSchedulerBasicP$sim_scheduler_submit_event();
    }
}




static inline void SimSchedulerBasicP$sim_scheduler_event_init(sim_event_t *e)
#line 95
{
  e->mote = sim_node();
  e->force = 0;
  e->data = (void *)0;
  e->handle = SimSchedulerBasicP$sim_scheduler_event_handle;
  e->cleanup = sim_queue_cleanup_none;
}

#line 158
static inline  void SimSchedulerBasicP$Scheduler$init(void)
{
  sim_log_debug(88U, "Scheduler", "Initializing scheduler.\n");
  /* atomic removed: atomic calls only */
  {
    memset(SimSchedulerBasicP$m_next[sim_node()], SimSchedulerBasicP$NO_TASK, sizeof SimSchedulerBasicP$m_next[sim_node()]);
    SimSchedulerBasicP$m_head[sim_node()] = SimSchedulerBasicP$NO_TASK;
    SimSchedulerBasicP$m_tail[sim_node()] = SimSchedulerBasicP$NO_TASK;

    SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = FALSE;
    SimSchedulerBasicP$sim_scheduler_event_init(&SimSchedulerBasicP$sim_scheduler_event[sim_node()]);
  }
}

# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static  void SimMainP$Scheduler$init(void){
#line 46
  SimSchedulerBasicP$Scheduler$init();
#line 46
}
#line 46
# 112 "/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline uint8_t SimSchedulerBasicP$popTask(void)
{
  if (SimSchedulerBasicP$m_head[sim_node()] != SimSchedulerBasicP$NO_TASK) 
    {
      uint8_t id = SimSchedulerBasicP$m_head[sim_node()];

#line 117
      SimSchedulerBasicP$m_head[sim_node()] = SimSchedulerBasicP$m_next[sim_node()][SimSchedulerBasicP$m_head[sim_node()]];
      if (SimSchedulerBasicP$m_head[sim_node()] == SimSchedulerBasicP$NO_TASK) 
        {
          SimSchedulerBasicP$m_tail[sim_node()] = SimSchedulerBasicP$NO_TASK;
        }
      SimSchedulerBasicP$m_next[sim_node()][id] = SimSchedulerBasicP$NO_TASK;
      return id;
    }
  else 
    {
      return SimSchedulerBasicP$NO_TASK;
    }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SimSchedulerBasicP$TaskBasic$postTask(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 150 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueueP.nc"
static inline  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$moveUp(priority_queue_id_t m)
#line 150
{
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$moveUpPos(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[sim_node()][m]);
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTree();
}

# 87 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueue.nc"
inline static  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$moveUp(priority_queue_id_t arg_0x7e397d10){
#line 87
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$moveUp(arg_0x7e397d10);
#line 87
}
#line 87
#line 72
inline static  error_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$insert(priority_queue_id_t arg_0x7e398ce8){
#line 72
  unsigned char result;
#line 72

#line 72
  result = /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$insert(arg_0x7e398ce8);
#line 72

#line 72
  return result;
#line 72
}
#line 72
# 74 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdgeWeightC.nc"
static inline  /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$graph_edge_weight_t /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$GraphEdgeWeight$weight(graph_edge_id_t m)
#line 74
{
  return /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$weight[sim_node()][m];
}

# 55 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdgeWeight.nc"
inline static  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeWeight$weight_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeWeight$weight(graph_edge_id_t arg_0x7e52a3d0){
#line 55
  unsigned char result;
#line 55

#line 55
  result = /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$GraphEdgeWeight$weight(arg_0x7e52a3d0);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 274 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphSparseP.nc"
static inline  graph_vertex_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdge$dest(graph_edge_id_t m)
#line 274
{
  return /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[sim_node()][m].dest;
}

# 54 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdge.nc"
inline static  graph_vertex_id_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdge$dest(graph_edge_id_t arg_0x7e531e68){
#line 54
  unsigned char result;
#line 54

#line 54
  result = /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdge$dest(arg_0x7e531e68);
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 286 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphSparseP.nc"
static inline  graph_edge_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$next(graph_edge_id_t m)
#line 286
{
  return /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[sim_node()][m].next;
}

# 48 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/IndexedIterator.nc"
inline static  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$iterator_item_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$next(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$iterator_item_t arg_0x7e522b40){
#line 48
  unsigned char result;
#line 48

#line 48
  result = /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$next(arg_0x7e522b40);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 296 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphSparseP.nc"
static inline  iterator_end_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$end(graph_edge_id_t m)
#line 296
{
  return m == 7;
}

# 56 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/IndexedIterator.nc"
inline static  iterator_end_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$end(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$iterator_item_t arg_0x7e5212e0){
#line 56
  unsigned char result;
#line 56

#line 56
  result = /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$end(arg_0x7e5212e0);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 251 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphSparseP.nc"
static inline  graph_edge_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edgeList(graph_vertex_id_t s)
#line 251
{
  return /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[sim_node()][s];
}

# 136 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/Graph.nc"
inline static  graph_edge_id_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$edgeList(graph_vertex_id_t arg_0x7e535250){
#line 136
  unsigned char result;
#line 136

#line 136
  result = /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edgeList(arg_0x7e535250);
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 206 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueueP.nc"
static inline  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$clear(void)
#line 206
{
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$clearData();
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTree();
}

# 122 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueue.nc"
inline static  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$clear(void){
#line 122
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$clear();
#line 122
}
#line 122
# 276 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPathP.nc"
static inline  int16_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Compare$test(graph_vertex_id_t a, graph_vertex_id_t b)
#line 276
{
  return /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[sim_node()][b] - /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[sim_node()][a];
}

# 49 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/Compare.nc"
inline static  int16_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$test(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$compare_t arg_0x7e390628, /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$compare_t arg_0x7e3907b8){
#line 49
  short result;
#line 49

#line 49
  result = /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Compare$test(arg_0x7e390628, arg_0x7e3907b8);
#line 49

#line 49
  return result;
#line 49
}
#line 49
# 234 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueueP.nc"
static inline void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$moveDownPos(priority_queue_id_t a, priority_queue_id_t curSize)
#line 234
{
  priority_queue_id_t c;

#line 236
  sim_log_debug(170U, "PriorityQueueC", "PQ: Moving heap position %hhu down if needed\n", a);
  while ((c = 2 * a + 1) < curSize) {
      if (c + 1 < curSize && /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$test(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][c + 1], /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][c]) > 0) {
        c++;
        }
#line 240
      if (/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$test(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][a], /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][c]) > 0) {
        break;
        }
#line 242
      /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$flip(a, c);
      a = c;
    }
}

#line 194
static inline  priority_queue_id_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$removeBest(void)
#line 194
{
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$flip(0, --/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()]);
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$moveDownPos(0, /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()]);
  sim_log_debug(168U, "PriorityQueueC", "PQ: Removing best, index %hhu\n", /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()]]);
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTree();
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[sim_node()][/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()]]] = 5;
  return /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()]];
}

# 117 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueue.nc"
inline static  priority_queue_id_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$removeBest(void){
#line 117
  unsigned char result;
#line 117

#line 117
  result = /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$removeBest();
#line 117

#line 117
  return result;
#line 117
}
#line 117
# 64 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPath.nc"
inline static  error_t TestGraphP$SourceShortestPath$buildTreeTo(graph_vertex_id_t arg_0x7e51a778, graph_vertex_id_t arg_0x7e51a910){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildTreeTo(arg_0x7e51a778, arg_0x7e51a910);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 194 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPathP.nc"
static inline  graph_vertex_id_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$next(graph_vertex_id_t dest)
#line 194
{
  if (dest >= 5) {
    return 5;
    }
#line 197
  return /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[sim_node()][dest];
}

# 48 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/IndexedIterator.nc"
inline static  TestGraphP$PathEdgeList$iterator_item_t TestGraphP$PathEdgeList$next(TestGraphP$PathEdgeList$iterator_item_t arg_0x7e522b40){
#line 48
  unsigned char result;
#line 48

#line 48
  result = /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$next(arg_0x7e522b40);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 105 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPathP.nc"
static inline  error_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildTree(graph_vertex_id_t src)
#line 105
{
  return /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildTreeTo(src, 5);
}

# 47 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPath.nc"
inline static  error_t TestGraphP$SourceShortestPath$buildTree(graph_vertex_id_t arg_0x7e51b830){
#line 47
  unsigned char result;
#line 47

#line 47
  result = /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildTree(arg_0x7e51b830);
#line 47

#line 47
  return result;
#line 47
}
#line 47
#line 93
inline static  graph_edge_id_t TestGraphP$SourceShortestPath$edgeCount(graph_vertex_id_t arg_0x7e517478){
#line 93
  unsigned char result;
#line 93

#line 93
  result = /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$edgeCount(arg_0x7e517478);
#line 93

#line 93
  return result;
#line 93
}
#line 93
# 198 "TestGraphP.nc"
static inline  void TestGraphP$SourceShortestPath$builtTree(graph_vertex_id_t src)
#line 198
{
  switch (TestGraphP$test[sim_node()]) {
      case 0: {
          sim_log_debug(115U, "TestGraphP", "Expected SPT:\n");
          sim_log_debug_clear(116U, "TestGraphP", "Dest 0: 0, Cost: 0\n");
          sim_log_debug_clear(117U, "TestGraphP", "Dest 1: 0-2-1, Cost: 2\n");
          sim_log_debug_clear(118U, "TestGraphP", "Dest 2: 0-2, Cost: 1\n");
          sim_log_debug_clear(119U, "TestGraphP", "Dest 3: 0-2-1-3, Cost: 3\n");
          sim_log_debug_clear(120U, "TestGraphP", "Dest 4: 0-2-4, Cost: 4\n");
          sim_log_debug(121U, "TestGraphP", "edgeCount(1): %u Expected: 2\n", TestGraphP$SourceShortestPath$edgeCount(1));

          sim_log_debug(122U, "TestGraphP", "edgeCount(2): %u Expected: 1\n", TestGraphP$SourceShortestPath$edgeCount(2));

          sim_log_debug(123U, "TestGraphP", "PEL.next(3): %u Expected: 1\n", TestGraphP$PathEdgeList$next(3));

          TestGraphP$test[sim_node()] = 1;
          TestGraphP$SourceShortestPath$buildTree(0);
          break;
        }
#line 216
      case 1: {
          sim_log_debug(124U, "TestGraphP", "Expected SPT:\n");
          sim_log_debug_clear(125U, "TestGraphP", "Dest 0: 0, Cost: 0\n");
          sim_log_debug_clear(126U, "TestGraphP", "Dest 1: 0-2-1, Cost: 2\n");
          sim_log_debug_clear(127U, "TestGraphP", "Dest 2: 0-2, Cost: 1\n");
          sim_log_debug_clear(128U, "TestGraphP", "Dest 3: 0-2-1-3, Cost: 3\n");
          sim_log_debug_clear(129U, "TestGraphP", "Dest 4: 0-2-4, Cost: 4\n");
          TestGraphP$test[sim_node()] = 2;
          TestGraphP$SourceShortestPath$buildTree(2);
          break;
        }
#line 226
      case 2: {
          sim_log_debug(130U, "TestGraphP", "Expected SPT:\n");
          sim_log_debug_clear(131U, "TestGraphP", "Dest 0: X\n");
          sim_log_debug_clear(132U, "TestGraphP", "Dest 1: 2-1, Cost: 1\n");
          sim_log_debug_clear(133U, "TestGraphP", "Dest 2: 2, Cost: 0\n");
          sim_log_debug_clear(134U, "TestGraphP", "Dest 3: 2-1-3, Cost: 2\n");
          sim_log_debug_clear(135U, "TestGraphP", "Dest 4: 2-4, Cost: 3\n");
          sim_log_debug(136U, "TestGraphP", "PEL.next(0): %u Expected: 5\n", TestGraphP$PathEdgeList$next(0));

          TestGraphP$test[sim_node()] = 0;
          TestGraphP$SourceShortestPath$buildTreeTo(2, 0);
          break;
        }
    }
}

# 54 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPath.nc"
inline static  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$builtTree(graph_vertex_id_t arg_0x7e51a010){
#line 54
  TestGraphP$SourceShortestPath$builtTree(arg_0x7e51a010);
#line 54
}
#line 54
# 247 "TestGraphP.nc"
static inline  void TestGraphP$SourceShortestPath$builtTreeTo(graph_vertex_id_t src, graph_vertex_id_t dest, 
error_t pathResult)
#line 248
{
  switch (TestGraphP$test[sim_node()]) {
      case 0: {
          sim_log_debug(137U, "TestGraphP", "Expected SPT (Res: %u, Exp: 1):\n", pathResult);
          sim_log_debug_clear(138U, "TestGraphP", "Dest 0: X\n");
          sim_log_debug_clear(139U, "TestGraphP", "Dest 1: 2-1, Cost: 1\n");
          sim_log_debug_clear(140U, "TestGraphP", "Dest 2: 2, Cost: 0\n");
          sim_log_debug_clear(141U, "TestGraphP", "Dest 3: 2-1-3, Cost: 2\n");
          sim_log_debug_clear(142U, "TestGraphP", "Dest 4: 2-4, Cost: 3\n");
          TestGraphP$test[sim_node()] = 1;
          TestGraphP$SourceShortestPath$buildTreeTo(2, 1);
          break;
        }
#line 260
      case 1: {
          sim_log_debug(143U, "TestGraphP", "Expected SPT (Res: %u, Exp: 0):\n", pathResult);
          sim_log_debug_clear(144U, "TestGraphP", "Dest 0: X\n");
          sim_log_debug_clear(145U, "TestGraphP", "Dest 1: 2-1, Cost: 1\n");
          sim_log_debug_clear(146U, "TestGraphP", "Dest 2: 2, Cost: 0\n");
          sim_log_debug_clear(147U, "TestGraphP", "Dest 3: 2-1-3, Cost: 2\n");
          sim_log_debug_clear(148U, "TestGraphP", "Dest 4: X\n");
          TestGraphP$test[sim_node()] = 2;
          TestGraphP$SourceShortestPath$buildTreeTo(2, 1);
          break;
        }
#line 270
      case 2: {
          sim_log_debug(149U, "TestGraphP", "Expected SPT (Res: %u, Exp: 0):\n", pathResult);
          sim_log_debug_clear(150U, "TestGraphP", "Dest 0: X\n");
          sim_log_debug_clear(151U, "TestGraphP", "Dest 1: 2-1, Cost: 1\n");
          sim_log_debug_clear(152U, "TestGraphP", "Dest 2: 2, Cost: 0\n");
          sim_log_debug_clear(153U, "TestGraphP", "Dest 3: 2-1-3, Cost: 2\n");
          sim_log_debug_clear(154U, "TestGraphP", "Dest 4: X\n");
          break;
        }
    }
}

# 72 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPath.nc"
inline static  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$builtTreeTo(graph_vertex_id_t arg_0x7e518138, graph_vertex_id_t arg_0x7e5182d0, error_t arg_0x7e518470){
#line 72
  TestGraphP$SourceShortestPath$builtTreeTo(arg_0x7e518138, arg_0x7e5182d0, arg_0x7e518470);
#line 72
}
#line 72
# 329 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPathP.nc"
static inline void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$printPaths(void)
#line 329
{

  graph_vertex_id_t d;

#line 332
  sim_log_debug(187U, "SourceShortestPathP", "SSP: Current SPT:\n");
  for (d = 0; d < 5; d++) {
      sim_log_debug_clear(188U, "SourceShortestPathP", "Dest %u: ", d);
      if (/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[sim_node()][d] == 5) {
        sim_log_debug_clear(189U, "SourceShortestPathP", "X\n");
        }
      else 
#line 337
        {
          char path[5 * 2] = "";
          char tmp[5 * 2] = "";

#line 340
          /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$printPathLink(d, path, tmp);
          sim_log_debug_clear(190U, "SourceShortestPathP", "%s, Cost: %u\n", path, /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[sim_node()][d]);
        }
    }
}

# 87 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueueP.nc"
static inline  bool /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$empty(void)
#line 87
{
  return !/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()];
}

# 47 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueue.nc"
inline static  bool /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$empty(void){
#line 47
  unsigned char result;
#line 47

#line 47
  result = /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$empty();
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 217 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPathP.nc"
static inline  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$runTask(void)
#line 217
{
  if (/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$empty()) {
      if (/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[sim_node()] != 5) {
          if (/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$foundDest[sim_node()] == SUCCESS) {
            sim_log_debug(182U, "SourceShortestPathP", "SSP: Destination vertex %u added to SPT, stopping build early.\n", /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[sim_node()]);
            }
          else {
            sim_log_debug(183U, "SourceShortestPathP", "SSP: No path was found to destination %u!\n", /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[sim_node()]);
            }
        }
#line 226
      /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree[sim_node()] = FALSE;
      /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$printPaths();
      if (/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[sim_node()] != 5) {
        /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$builtTreeTo(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc[sim_node()], /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[sim_node()], /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$foundDest[sim_node()]);
        }
      else {
#line 231
        /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$builtTree(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc[sim_node()]);
        }
    }
  else 
#line 232
    {

      graph_edge_id_t e;
      graph_vertex_id_t s = /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$removeBest();

#line 236
      /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[sim_node()][s] = /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[sim_node()][s];
      if (s == /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[sim_node()]) {
          /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$foundDest[sim_node()] = SUCCESS;
          /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$clear();
          /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$postTask();
        }
      sim_log_debug(184U, "SourceShortestPathP", "SSP: Added edge %u -> %u to SPT\n", /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[sim_node()][s], s);
      for (e = /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$edgeList(s); !/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$end(e); 
      e = /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$next(e)) {
          graph_vertex_id_t d = /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdge$dest(e);
          /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$graph_edge_weight_t eWeight = /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[sim_node()][s] + /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeWeight$weight(e);

#line 247
          if (/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[sim_node()][d] == 5) {

              sim_log_debug(185U, "SourceShortestPathP", "SSP: Adding edge %u -> %u (%u) to PQ\n", s, d, eWeight);

              /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[sim_node()][d] = eWeight;
              /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$insert(d);
              /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[sim_node()][d] = s;
            }
          else {
#line 254
            if (/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[sim_node()][d] == 5 && eWeight < /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[sim_node()][d]) {

                sim_log_debug(186U, "SourceShortestPathP", "SSP: Edge %u -> %u (%u) replacing %u -> %u (%u) in PQ\n", s, d, eWeight, /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[sim_node()][d], d, /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[sim_node()][d]);

                /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[sim_node()][d] = eWeight;
                /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$moveUp(d);
                /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[sim_node()][d] = s;
              }
            }
        }
#line 263
      /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$postTask();
    }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$weightChanged$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SimSchedulerBasicP$TaskBasic$postTask(/*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$weightChanged);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 85 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdgeWeightC.nc"
static inline  void /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$GraphEdgeWeight$setWeight(graph_edge_id_t m, 
/*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$graph_edge_weight_t w)
#line 86
{
  /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$weight[sim_node()][m] = w;
  /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$changed[sim_node()] = m;
  /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$weightChanged$postTask();
}

# 64 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdgeWeight.nc"
inline static  void TestGraphP$GraphEdgeWeight$setWeight(graph_edge_id_t arg_0x7e52ab58, TestGraphP$GraphEdgeWeight$weight_t arg_0x7e52ace8){
#line 64
  /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$GraphEdgeWeight$setWeight(arg_0x7e52ab58, arg_0x7e52ace8);
#line 64
}
#line 64
# 157 "TestGraphP.nc"
static inline  void TestGraphP$GraphEdgeWeight$weightChanged(graph_edge_id_t m)
#line 157
{
  sim_log_debug(114U, "TestGraphP", "Edge %u's weight changed!\n", m);
  switch (TestGraphP$test[sim_node()]) {
      case 0: {
          TestGraphP$test[sim_node()] = 1;
          TestGraphP$GraphEdgeWeight$setWeight(TestGraphP$a_c[sim_node()], 1);
          break;
        }
#line 164
      case 1: {
          TestGraphP$test[sim_node()] = 2;
          TestGraphP$GraphEdgeWeight$setWeight(TestGraphP$b_d[sim_node()], 1);
          break;
        }
#line 168
      case 2: {
          TestGraphP$test[sim_node()] = 3;
          TestGraphP$GraphEdgeWeight$setWeight(TestGraphP$b_e[sim_node()], 2);
          break;
        }
#line 172
      case 3: {
          TestGraphP$test[sim_node()] = 4;
          TestGraphP$GraphEdgeWeight$setWeight(TestGraphP$c_b[sim_node()], 1);
          break;
        }
#line 176
      case 4: {
          TestGraphP$test[sim_node()] = 5;
          TestGraphP$GraphEdgeWeight$setWeight(TestGraphP$c_e[sim_node()], 3);
          break;
        }
#line 180
      case 5: {
          TestGraphP$test[sim_node()] = 6;
          TestGraphP$GraphEdgeWeight$setWeight(TestGraphP$e_d[sim_node()], 2);
          break;
        }
#line 184
      case 6: {
          TestGraphP$test[sim_node()] = 0;
          TestGraphP$SourceShortestPath$buildTree(0);
          break;
        }
    }
}

# 307 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPathP.nc"
static inline  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeWeight$weightChanged(graph_edge_id_t m)
#line 307
{
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded[sim_node()] = TRUE;
}

# 71 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdgeWeight.nc"
inline static  void /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$GraphEdgeWeight$weightChanged(graph_edge_id_t arg_0x7e528478){
#line 71
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeWeight$weightChanged(arg_0x7e528478);
#line 71
  TestGraphP$GraphEdgeWeight$weightChanged(arg_0x7e528478);
#line 71
}
#line 71
# 97 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdgeWeightC.nc"
static inline  void /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$weightChanged$runTask(void)
#line 97
{
  /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$GraphEdgeWeight$weightChanged(/*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$changed[sim_node()]);
}

# 213 "/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline   void SimSchedulerBasicP$TaskBasic$default$runTask(uint8_t id)
{
}

# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static  void SimSchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x7e835cc8){
#line 64
  switch (arg_0x7e835cc8) {
#line 64
    case /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask:
#line 64
      /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$runTask();
#line 64
      break;
#line 64
    case /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$weightChanged:
#line 64
      /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$weightChanged$runTask();
#line 64
      break;
#line 64
    default:
#line 64
      SimSchedulerBasicP$TaskBasic$default$runTask(arg_0x7e835cc8);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 131 "/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline bool SimSchedulerBasicP$isWaiting(uint8_t id)
{
  return SimSchedulerBasicP$m_next[sim_node()][id] != SimSchedulerBasicP$NO_TASK || SimSchedulerBasicP$m_tail[sim_node()] == id;
}

static inline bool SimSchedulerBasicP$pushTask(uint8_t id)
{
  if (!SimSchedulerBasicP$isWaiting(id)) 
    {
      if (SimSchedulerBasicP$m_head[sim_node()] == SimSchedulerBasicP$NO_TASK) 
        {
          SimSchedulerBasicP$m_head[sim_node()] = id;
          SimSchedulerBasicP$m_tail[sim_node()] = id;
        }
      else 
        {
          SimSchedulerBasicP$m_next[sim_node()][SimSchedulerBasicP$m_tail[sim_node()]] = id;
          SimSchedulerBasicP$m_tail[sim_node()] = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

#line 61
static inline int SimSchedulerBasicP$sim_config_task_latency(void)
#line 61
{
#line 61
  return 100;
}

# 207 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPathP.nc"
static inline  iterator_end_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$end(graph_vertex_id_t dest)
#line 207
{
  return /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[sim_node()][dest] == 5 || /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[sim_node()][dest] == dest;
}

# 42 "/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void)
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    * (volatile uint8_t *)&atm128RegFile[sim_node()][0x35] = 1 << SE;
  }
}

# 38 "/opt/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline   error_t MotePlatformP$SubInit$default$init(void)
#line 38
{
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t MotePlatformP$SubInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = MotePlatformP$SubInit$default$init();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 50 "/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void)
#line 50
{
#line 50
  atm128RegFile[sim_node()][27U] &= ~(1 << 4);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void MotePlatformP$SerialIdPin$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr();
#line 30
}
#line 30
# 53 "/opt/tinyos-2.x/tos/chips/atm128/pins/sim/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void)
#line 53
{
#line 53
  atm128RegFile[sim_node()][26U] &= ~(1 << 4);
}

# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void MotePlatformP$SerialIdPin$makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput();
#line 33
}
#line 33
# 26 "/opt/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline  error_t MotePlatformP$PlatformInit$init(void)
#line 26
{

  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x15] = 0;
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x14] = 0xff;


  MotePlatformP$SerialIdPin$makeInput();
  MotePlatformP$SerialIdPin$clr();

  return MotePlatformP$SubInit$init();
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t PlatformP$MoteInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = MotePlatformP$PlatformInit$init();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 49 "/opt/tinyos-2.x/tos/types/TinyError.h"
static inline error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 21 "/opt/tinyos-2.x/tos/platforms/mica/sim/MeasureClockC.nc"
static inline  error_t MeasureClockC$Init$init(void)
#line 21
{
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t PlatformP$MeasureClock$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = MeasureClockC$Init$init();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 49 "/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline  error_t PlatformP$Init$init(void)
{
  error_t ok;


  ok = PlatformP$MeasureClock$init();
  ok = ecombine(ok, PlatformP$MoteInit$init());

  if (ok != SUCCESS) {
    return ok;
    }
  PlatformP$power_init();

  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t SimMainP$PlatformInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = PlatformP$Init$init();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 54 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static  bool SimMainP$Scheduler$runNextTask(void){
#line 54
  unsigned char result;
#line 54

#line 54
  result = SimSchedulerBasicP$Scheduler$runNextTask();
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 67 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphSparseP.nc"
static inline  error_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Init$init(void)
#line 67
{
  graph_vertex_id_t i;

#line 69
  /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$vSize[sim_node()] = 0;
  for (i = 0; i < 5; i++) 
    /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[sim_node()][i] = 7;
  return SUCCESS;
}

# 66 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline   void /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$BitVector$clearAll(void)
{
  memset(/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$m_bits[sim_node()], 0, sizeof /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$m_bits[sim_node()]);
}

#line 60
static inline  error_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$Init$init(void)
{
  /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$BitVector$clearAll();
  return SUCCESS;
}

# 88 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPathP.nc"
static inline  error_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Init$init(void)
#line 88
{
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree[sim_node()] = FALSE;
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc[sim_node()] = 5;
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded[sim_node()] = TRUE;
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$initTree();
  return SUCCESS;
}

# 75 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueueP.nc"
static inline  error_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Init$init(void)
#line 75
{
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$clearData();
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t SimMainP$SoftwareInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Init$init();
#line 51
  result = ecombine(result, /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Init$init());
#line 51
  result = ecombine(result, /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$Init$init());
#line 51
  result = ecombine(result, /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Init$init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 79 "/opt/tinyos-2.x/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_enable_interrupt(void)
#line 79
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] |= 1 << 7;
}

# 105 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/Graph.nc"
inline static  graph_edge_id_t TestGraphP$Graph$insert(graph_vertex_id_t arg_0x7e538370, graph_vertex_id_t arg_0x7e538508){
#line 105
  unsigned char result;
#line 105

#line 105
  result = /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$insert(arg_0x7e538370, arg_0x7e538508);
#line 105

#line 105
  return result;
#line 105
}
#line 105
# 63 "TestGraphP.nc"
static inline  void TestGraphP$Boot$booted(void)
#line 63
{
  TestGraphP$test[sim_node()] = 0;
  TestGraphP$a_b[sim_node()] = TestGraphP$Graph$insert(0, 1);
}

# 34 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   void /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$clearAll(void){
#line 34
  /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$BitVector$clearAll();
#line 34
}
#line 34
# 63 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/alloc/IndexedAllocBitsP.nc"
static inline  void /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$Boot$booted(void)
#line 63
{
  /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$clearAll();
}

# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
inline static  void SimMainP$Boot$booted(void){
#line 49
  /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$Boot$booted();
#line 49
  TestGraphP$Boot$booted();
#line 49
}
#line 49
# 46 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   bool /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$get(uint16_t arg_0x7e409770){
#line 46
  unsigned char result;
#line 46

#line 46
  result = /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$BitVector$get(arg_0x7e409770);
#line 46

#line 46
  return result;
#line 46
}
#line 46
# 157 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/alloc/IndexedAllocBitsP.nc"
static inline void /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$findFree(void)
#line 157
{
  if (/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$size[sim_node()] == 7) {
    return;
    }
#line 160
  while (/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$get(/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free[sim_node()])) {
      /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free[sim_node()]++;
      /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free[sim_node()] %= 7;
    }
}

# 55 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline uint16_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$getMask(uint16_t bitnum)
{
  return 1 << bitnum % /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$ELEMENT_SIZE;
}

#line 50
static inline uint16_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$getIndex(uint16_t bitnum)
{
  return bitnum / /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$ELEMENT_SIZE;
}

#line 81
static inline   void /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$BitVector$set(uint16_t bitnum)
{
  /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$m_bits[sim_node()][/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$getIndex(bitnum)] |= /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$getMask(bitnum);
}

# 52 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   void /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$set(uint16_t arg_0x7e409c88){
#line 52
  /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$BitVector$set(arg_0x7e409c88);
#line 52
}
#line 52
# 112 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/alloc/IndexedAllocBitsP.nc"
static inline  indexed_alloc_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$IndexedAlloc$alloc(void)
#line 112
{
  indexed_alloc_id_t m;

#line 114
  if (/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$size[sim_node()] == 7) {
    return 7;
    }
#line 116
  /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$set(/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free[sim_node()]);
  /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$size[sim_node()]++;
  m = /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free[sim_node()];
  /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$findFree();
  return m;
}

# 79 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/alloc/IndexedAlloc.nc"
inline static  indexed_alloc_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$IndexedAlloc$alloc(void){
#line 79
  unsigned char result;
#line 79

#line 79
  result = /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$IndexedAlloc$alloc();
#line 79

#line 79
  return result;
#line 79
}
#line 79
# 54 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdge.nc"
inline static  graph_vertex_id_t TestGraphP$GraphEdge$dest(graph_edge_id_t arg_0x7e531e68){
#line 54
  unsigned char result;
#line 54

#line 54
  result = /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdge$dest(arg_0x7e531e68);
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 48 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/IndexedIterator.nc"
inline static  TestGraphP$GraphEdgeList$iterator_item_t TestGraphP$GraphEdgeList$next(TestGraphP$GraphEdgeList$iterator_item_t arg_0x7e522b40){
#line 48
  unsigned char result;
#line 48

#line 48
  result = /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$next(arg_0x7e522b40);
#line 48

#line 48
  return result;
#line 48
}
#line 48








inline static  iterator_end_t TestGraphP$GraphEdgeList$end(TestGraphP$GraphEdgeList$iterator_item_t arg_0x7e5212e0){
#line 56
  unsigned char result;
#line 56

#line 56
  result = /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$end(arg_0x7e5212e0);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 136 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/Graph.nc"
inline static  graph_edge_id_t TestGraphP$Graph$edgeList(graph_vertex_id_t arg_0x7e535250){
#line 136
  unsigned char result;
#line 136

#line 136
  result = /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edgeList(arg_0x7e535250);
#line 136

#line 136
  return result;
#line 136
}
#line 136
#line 126
inline static  graph_edge_id_t TestGraphP$Graph$edge(graph_vertex_id_t arg_0x7e537838, graph_vertex_id_t arg_0x7e5379d0){
#line 126
  unsigned char result;
#line 126

#line 126
  result = /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edge(arg_0x7e537838, arg_0x7e5379d0);
#line 126

#line 126
  return result;
#line 126
}
#line 126
# 84 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphSparseP.nc"
static inline  graph_vertex_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$vertices(void)
#line 84
{
  return /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$vSize[sim_node()];
}

# 49 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/Graph.nc"
inline static  graph_vertex_id_t TestGraphP$Graph$vertices(void){
#line 49
  unsigned char result;
#line 49

#line 49
  result = /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$vertices();
#line 49

#line 49
  return result;
#line 49
}
#line 49
#line 115
inline static  error_t TestGraphP$Graph$remove(graph_vertex_id_t arg_0x7e538db0, graph_vertex_id_t arg_0x7e537010){
#line 115
  unsigned char result;
#line 115

#line 115
  result = /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$remove(arg_0x7e538db0, arg_0x7e537010);
#line 115

#line 115
  return result;
#line 115
}
#line 115
# 75 "TestGraphP.nc"
static inline  void TestGraphP$Graph$inserted(graph_edge_id_t m)
#line 75
{
  sim_log_debug(102U, "TestGraphP", "Edge %u inserted!\n", m);
  switch (TestGraphP$test[sim_node()]) {
      case 0: {
          TestGraphP$test[sim_node()] = 1;
          TestGraphP$a_c[sim_node()] = TestGraphP$Graph$insert(0, 2);
          break;
        }
#line 82
      case 1: {
          TestGraphP$test[sim_node()] = 2;
          TestGraphP$b_d[sim_node()] = TestGraphP$Graph$insert(1, 3);
          break;
        }
#line 86
      case 2: {
          sim_log_debug(103U, "TestGraphP", "vertices: %u Expected: 2\n", TestGraphP$Graph$vertices());
          TestGraphP$test[sim_node()] = 0;
          sim_log_debug(104U, "TestGraphP", "remove(0, 1): %u Expected: 0\n", TestGraphP$Graph$remove(0, 1));
          break;
        }
#line 91
      case 3: {
          TestGraphP$test[sim_node()] = 4;
          TestGraphP$c_b[sim_node()] = TestGraphP$Graph$insert(2, 1);
          break;
        }
#line 95
      case 4: {
          TestGraphP$test[sim_node()] = 5;
          TestGraphP$c_e[sim_node()] = TestGraphP$Graph$insert(2, 4);
          break;
        }
#line 99
      case 5: {
          TestGraphP$test[sim_node()] = 6;
          TestGraphP$a_b[sim_node()] = TestGraphP$Graph$insert(0, 1);
          break;
        }
#line 103
      case 6: {
          TestGraphP$test[sim_node()] = 7;
          TestGraphP$e_d[sim_node()] = TestGraphP$Graph$insert(4, 3);
          break;
        }
#line 107
      case 7: {
          TestGraphP$test[sim_node()] = 1;
          sim_log_debug(105U, "TestGraphP", "Too many edges: %u Expected: 7\n", TestGraphP$Graph$insert(3, 0));
          sim_log_debug(106U, "TestGraphP", "remove(1, 4): %u Expected: 0\n", TestGraphP$Graph$remove(1, 4));
          break;
        }
#line 112
      case 8: {
          TestGraphP$test[sim_node()] = 0;
          sim_log_debug(107U, "TestGraphP", "vertices: %u Expected: 4\n", TestGraphP$Graph$vertices());

          sim_log_debug(108U, "TestGraphP", "edge(0, 2): %u Expected: %u\n", TestGraphP$Graph$edge(0, 2), TestGraphP$a_c[sim_node()]);

          sim_log_debug(109U, "TestGraphP", "edgeList(2): ");
          for (TestGraphP$testEdge[sim_node()] = TestGraphP$Graph$edgeList(2); 
          !TestGraphP$GraphEdgeList$end(TestGraphP$testEdge[sim_node()]); 
          TestGraphP$testEdge[sim_node()] = TestGraphP$GraphEdgeList$next(TestGraphP$testEdge[sim_node()])) {
              sim_log_debug_clear(110U, "TestGraphP", "%u-", TestGraphP$GraphEdge$dest(TestGraphP$testEdge[sim_node()]));
            }
          sim_log_debug_clear(111U, "TestGraphP", "| Expected: 4-1-|\n");
          TestGraphP$GraphEdgeWeight$setWeight(TestGraphP$a_b[sim_node()], 3);
          break;
        }
    }
}

# 287 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPathP.nc"
static inline  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$inserted(graph_edge_id_t m)
#line 287
{
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded[sim_node()] = TRUE;
}

# 143 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/Graph.nc"
inline static  void /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$inserted(graph_edge_id_t arg_0x7e535a40){
#line 143
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$inserted(arg_0x7e535a40);
#line 143
  TestGraphP$Graph$inserted(arg_0x7e535a40);
#line 143
}
#line 143
# 88 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/alloc/IndexedAlloc.nc"
inline static  error_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$IndexedAlloc$free(indexed_alloc_id_t arg_0x7e4a8978){
#line 88
  unsigned char result;
#line 88

#line 88
  result = /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$IndexedAlloc$free(arg_0x7e4a8978);
#line 88

#line 88
  return result;
#line 88
}
#line 88
# 86 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline   void /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$BitVector$clear(uint16_t bitnum)
{
  /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$m_bits[sim_node()][/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$getIndex(bitnum)] &= ~/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$getMask(bitnum);
}

# 58 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   void /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$clear(uint16_t arg_0x7e4071a0){
#line 58
  /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$BitVector$clear(arg_0x7e4071a0);
#line 58
}
#line 58
# 296 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPathP.nc"
static inline  void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$removed(graph_edge_id_t m)
#line 296
{
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded[sim_node()] = TRUE;
}

# 150 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/Graph.nc"
inline static  void /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$removed(graph_edge_id_t arg_0x7e5341b8){
#line 150
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$removed(arg_0x7e5341b8);
#line 150
  TestGraphP$Graph$removed(arg_0x7e5341b8);
#line 150
}
#line 150
# 47 "/opt/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
static inline   long long int SimMoteP$SimMote$getEuid(void)
#line 47
{
  return SimMoteP$euid[sim_node()];
}

#line 50
static inline   void SimMoteP$SimMote$setEuid(long long int e)
#line 50
{
  SimMoteP$euid[sim_node()] = e;
}

#line 53
static inline   long long int SimMoteP$SimMote$getStartTime(void)
#line 53
{
  return SimMoteP$startTime[sim_node()];
}




static inline   int SimMoteP$SimMote$getVariableInfo(char *name, void **addr, size_t *size)
#line 60
{
  return __nesc_nido_resolve(sim_node(), name, (uintptr_t *)addr, (size_t *)size);
}

#line 77
static inline   void SimMoteP$SimMote$turnOff(void)
#line 77
{
  SimMoteP$isOn[sim_node()] = FALSE;
}

#line 149
static inline void SimMoteP$sim_mote_boot_handle(sim_event_t *e)
#line 149
{
  char buf[128];

#line 151
  sim_print_now(buf, 128);

  SimMoteP$bootEvent[sim_node()] = (sim_event_t *)(void *)0;
  sim_log_debug(96U, "SimMoteP", "Turning on mote %i at time %s.\n", (int )sim_node(), buf);
  SimMoteP$SimMote$turnOn();
}

# 38 "/opt/tinyos-2.x/tos/lib/tossim/sim_event_queue.c"
  void sim_queue_init(void)
#line 38
{
  init_heap(&eventHeap);
}

  void sim_queue_insert(sim_event_t *event)
#line 42
{
  sim_log_debug(0U, "Queue", "Inserting 0x%p\n", event);
  heap_insert(&eventHeap, event, event->time);
}

# 238 "/opt/tinyos-2.x/tos/lib/tossim/sim_log.c"
static void sim_log_debug(uint16_t id, char *string, const char *format, ...)
#line 238
{
  va_list args;
  int i;

#line 241
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 246
      __builtin_va_start(args, format);
      fprintf(file, "DEBUG (%i): ", (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

#line 76
static void fillInOutput(int id, char *name)
#line 76
{
  char *termination = name;
  char *namePos = name;
  int count = 0;
  char *newName = (char *)malloc(strlen(name) + 1);

#line 81
  memset(newName, 0, strlen(name) + 1);

  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, namePos);
      if (channel != (void *)0) {
          count += channel->numOutputs;
        }

      namePos = termination + 1;
    }

  termination = name;
  namePos = name;


  outputs[id].files = (FILE **)malloc(sizeof(FILE *) * count);
  outputs[id].num = 0;


  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, namePos);
      if (channel != (void *)0) {
          int i;
#line 129
          int j;

#line 130
          for (i = 0; i < channel->numOutputs; i++) {
              int duplicate = 0;
              int outputCount = outputs[id].num;


              for (j = 0; j < outputCount; j++) {
                  if (fileno(outputs[id].files[j]) == fileno(channel->outputs[i])) {
                      duplicate = 1;
                      j = outputCount;
                    }
                }
              if (!duplicate) {
                  outputs[id].files[outputCount] = channel->outputs[i];
                  outputs[id].num++;
                }
            }
        }
      namePos = termination + 1;
    }
}

# 99 "/opt/tinyos-2.x/tos/lib/tossim/sim_tossim.c"
  unsigned long sim_node(void)
#line 99
{
  return current_node;
}

# 186 "/opt/tinyos-2.x/tos/lib/tossim/heap.c"
static void up_heap(heap_t *heap, int findex)
#line 186
{
  int parent_index;

#line 188
  if (findex == 0) {
      return;
    }

  parent_index = (findex - 1) / 2;

  if (((node_t *)heap->data)[parent_index].key > ((node_t *)heap->data)[findex].key) {
      swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[parent_index]);
      up_heap(heap, parent_index);
    }
}

#line 147
static void swap(node_t *first, node_t *second)
#line 147
{
  long long int key;
  void *data;

  key = first->key;
  first->key = second->key;
  second->key = key;

  data = first->data;
  first->data = second->data;
  second->data = data;
}

# 47 "/opt/tinyos-2.x/tos/lib/tossim/sim_event_queue.c"
  sim_event_t *sim_queue_pop(void)
#line 47
{
  long long int key;

#line 49
  return (sim_event_t *)heap_pop_min_data(&eventHeap, &key);
}

# 103 "/opt/tinyos-2.x/tos/lib/tossim/heap.c"
static void *heap_pop_min_data(heap_t *heap, long long int *key)
#line 103
{
  int last_index = heap->size - 1;
  void *data = ((node_t *)heap->data)[0].data;

#line 106
  if (key != (void *)0) {
      *key = ((node_t *)heap->data)[0].key;
    }
  ((node_t *)heap->data)[0].data = ((node_t *)heap->data)[last_index].data;
  ((node_t *)heap->data)[0].key = ((node_t *)heap->data)[last_index].key;

  heap->size--;

  down_heap(heap, 0);

  return data;
}

#line 160
static void down_heap(heap_t *heap, int findex)
#line 160
{
  int right_index = (findex + 1) * 2;
  int left_index = findex * 2 + 1;

  if (right_index < heap->size) {
      long long int left_key = ((node_t *)heap->data)[left_index].key;
      long long int right_key = ((node_t *)heap->data)[right_index].key;
      int min_key_index = left_key < right_key ? left_index : right_index;

      if (((node_t *)heap->data)[min_key_index].key < ((node_t *)heap->data)[findex].key) {
          swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[min_key_index]);
          down_heap(heap, min_key_index);
        }
    }
  else {
#line 174
    if (left_index >= heap->size) {
        return;
      }
    else {
        long long int left_key = ((node_t *)heap->data)[left_index].key;

#line 179
        if (left_key < ((node_t *)heap->data)[findex].key) {
            swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[left_index]);
            return;
          }
      }
    }
}

# 52 "/opt/tinyos-2.x/tos/lib/tossim/sim_event_queue.c"
  bool sim_queue_is_empty(void)
#line 52
{
  return heap_is_empty(&eventHeap);
}

  long long int sim_queue_peek_time(void)
#line 56
{
  if (heap_is_empty(&eventHeap)) {
      return -1;
    }
  else {
      return heap_get_min_key(&eventHeap);
    }
}


  void sim_queue_cleanup_none(sim_event_t *event)
#line 66
{
  sim_log_debug(1U, "Queue", "cleanup_none: 0x%p\n", event);
}


  void sim_queue_cleanup_event(sim_event_t *event)
#line 71
{
  sim_log_debug(2U, "Queue", "cleanup_event: 0x%p\n", event);
  free(event);
}

  void sim_queue_cleanup_data(sim_event_t *event)
#line 76
{
  sim_log_debug(3U, "Queue", "cleanup_data: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
}

  void sim_queue_cleanup_total(sim_event_t *event)
#line 82
{
  sim_log_debug(4U, "Queue", "cleanup_total: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
  free(event);
}

# 49 "/opt/tinyos-2.x/tos/lib/tossim/sim_tossim.c"
  void sim_init(void)
#line 49
{
  sim_queue_init();
  sim_log_init();
  sim_log_commit_change();
  sim_noise_init();

  {
    struct timeval tv;

#line 57
    gettimeofday(&tv, (void *)0);
    sim_seed = tv.tv_usec;
  }
}

# 226 "/opt/tinyos-2.x/tos/lib/tossim/sim_log.c"
static void sim_log_commit_change(void)
#line 226
{
  int i;

#line 228
  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      if (outputs[i].files != (void *)0) {
          outputs[i].num = 0;
          free(outputs[i].files);
          outputs[i].files = (void *)0;
        }
    }
}

# 53 "/opt/tinyos-2.x/tos/lib/tossim/sim_noise.c"
  void sim_noise_init(void)
{
  int j;



  for (j = 0; j < 1000; j++) {
      noiseData[j].noiseTable = create_hashtable(NOISE_HASHTABLE_SIZE, sim_noise_hash, sim_noise_eq);
      noiseData[j].noiseGenTime = 0;
      noiseData[j].noiseTrace = (char *)malloc(sizeof(char ) * NOISE_MIN_TRACE);
      noiseData[j].noiseTraceLen = NOISE_MIN_TRACE;
      noiseData[j].noiseTraceIndex = 0;
    }
}

# 62 "/opt/tinyos-2.x/tos/lib/tossim/sim_tossim.c"
  void sim_end(void)
#line 62
{
  sim_queue_init();
}



  int sim_random(void)
#line 68
{
  uint32_t mlcg;
#line 69
  uint32_t p;
#line 69
  uint32_t q;
  uint64_t tmpseed;

#line 71
  tmpseed = (uint64_t )33614U * (uint64_t )sim_seed;
  q = tmpseed;
  q = q >> 1;
  p = tmpseed >> 32;
  mlcg = p + q;
  if (mlcg & 0x80000000) {
      mlcg = mlcg & 0x7FFFFFFF;
      mlcg++;
    }
  sim_seed = mlcg;
  return mlcg;
}

  void sim_random_seed(int seed)
#line 84
{
  sim_seed = seed;
}

  sim_time_t sim_time(void)
#line 88
{
  return sim_ticks;
}

#line 91
  void sim_set_time(sim_time_t t)
#line 91
{
  sim_ticks = t;
}

  sim_time_t sim_ticks_per_sec(void)
#line 95
{
  return 10000000000ULL;
}




  void sim_set_node(unsigned long node)
#line 102
{
  current_node = node;
  TOS_NODE_ID = node;
}

  bool sim_run_next_event(void)
#line 107
{
  bool result = FALSE;

#line 109
  if (!sim_queue_is_empty()) {
      sim_event_t *event = sim_queue_pop();

#line 111
      sim_set_time(event->time);
      sim_set_node(event->mote);



      sim_log_debug(5U, "Tossim", "CORE: popping event 0x%p for %i at %llu with handler %p... ", event, sim_node(), sim_time(), event->handle);
      if ((sim_mote_is_on(event->mote) || event->force) && 
      event->handle != (void *)0) {
          result = TRUE;
          sim_log_debug_clear(6U, "Tossim", " mote is on (or forced event), run it.\n");
          event->handle(event);
        }
      else {
          sim_log_debug_clear(7U, "Tossim", "\n");
        }
      if (event->cleanup != (void *)0) {
          event->cleanup(event);
        }
    }

  return result;
}

# 126 "/opt/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
  bool sim_mote_is_on(int mote)
#line 126
{
  bool result;
  int tmp = sim_node();

#line 129
  sim_set_node(mote);
  result = SimMoteP$SimMote$isOn();
  sim_set_node(tmp);
  return result;
}

# 268 "/opt/tinyos-2.x/tos/lib/tossim/sim_log.c"
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...)
#line 268
{
  va_list args;
  int i;

#line 271
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 276
      __builtin_va_start(args, format);
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 134 "/opt/tinyos-2.x/tos/lib/tossim/sim_tossim.c"
  int sim_print_time(char *buf, int len, sim_time_t ftime)
#line 134
{
  int hours;
  int minutes;
  int seconds;
  sim_time_t secondBillionths;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;
  buf[len - 1] = 0;
  return snprintf(buf, len - 1, "%i:%i:%i.%09llu", hours, minutes, seconds, secondBillionths);
}

  int sim_print_now(char *buf, int len)
#line 157
{
  return sim_print_time(buf, len, sim_time());
}


  char *sim_time_string(void)
#line 162
{
  sim_print_now(simTimeBuf, 128);
  return simTimeBuf;
}

  void sim_add_channel(char *channel, FILE *file)
#line 167
{
  sim_log_add_channel(channel, file);
}

  bool sim_remove_channel(char *channel, FILE *file)
#line 171
{
  return sim_log_remove_channel(channel, file);
}

# 49 "/opt/tinyos-2.x/tos/lib/tossim/sim_csma.c"
  int sim_csma_init_high(void)
#line 49
{
  return csmaInitHigh;
}

#line 52
  int sim_csma_init_low(void)
#line 52
{
  return csmaInitLow;
}

#line 55
  int sim_csma_high(void)
#line 55
{
  return csmaHigh;
}

#line 58
  int sim_csma_low(void)
#line 58
{
  return csmaLow;
}

#line 61
  int sim_csma_symbols_per_sec(void)
#line 61
{
  return csmaSymbolsPerSec;
}

#line 64
  int sim_csma_bits_per_symbol(void)
#line 64
{
  return csmaBitsPerSymbol;
}

#line 67
  int sim_csma_preamble_length(void)
#line 67
{
  return csmaPreambleLength;
}

#line 70
  int sim_csma_exponent_base(void)
#line 70
{
  return csmaExponentBase;
#line 71
  ;
}

#line 73
  int sim_csma_max_iterations(void)
#line 73
{
  return csmaMaxIterations;
}

#line 76
  int sim_csma_min_free_samples(void)
#line 76
{
  return csmaMinFreeSamples;
}

#line 79
  int sim_csma_rxtx_delay(void)
#line 79
{
  return csmaRxTxDelay;
}

#line 82
  int sim_csma_ack_time(void)
#line 82
{
  return csmaAckTime;
}



  void sim_csma_set_init_high(int val)
#line 88
{
  csmaInitHigh = val;
}

#line 91
  void sim_csma_set_init_low(int val)
#line 91
{
  csmaInitLow = val;
}

#line 94
  void sim_csma_set_high(int val)
#line 94
{
  csmaHigh = val;
}

#line 97
  void sim_csma_set_low(int val)
#line 97
{
  csmaLow = val;
}

#line 100
  void sim_csma_set_symbols_per_sec(int val)
#line 100
{
  csmaSymbolsPerSec = val;
}

#line 103
  void sim_csma_set_bits_per_symbol(int val)
#line 103
{
  csmaBitsPerSymbol = val;
}

#line 106
  void sim_csma_set_preamble_length(int val)
#line 106
{
  csmaPreambleLength = val;
}

#line 109
  void sim_csma_set_exponent_base(int val)
#line 109
{
  csmaExponentBase = val;
}

#line 112
  void sim_csma_set_max_iterations(int val)
#line 112
{
  csmaMaxIterations = val;
}

#line 115
  void sim_csma_set_min_free_samples(int val)
#line 115
{
  csmaMinFreeSamples = val;
}

#line 118
  void sim_csma_set_rxtx_delay(int val)
#line 118
{
  csmaRxTxDelay = val;
}

#line 121
  void sim_csma_set_ack_time(int val)
#line 121
{
  csmaAckTime = val;
}

# 16 "/opt/tinyos-2.x/tos/lib/tossim/sim_gain.c"
  gain_entry_t *sim_gain_first(int src)
#line 16
{
  if (src > 1000) {
      return connectivity[1000];
    }
  return connectivity[src];
}

  gain_entry_t *sim_gain_next(gain_entry_t *currentLink)
#line 23
{
  return currentLink->next;
}

  void sim_gain_add(int src, int dest, double gain)
#line 27
{
  gain_entry_t *current;
  int temp = sim_node();

#line 30
  if (src > 1000) {
      src = 1000;
    }
  sim_set_node(src);

  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          break;
        }
      current = current->next;
    }

  if (current == (void *)0) {
      current = sim_gain_allocate_link(dest);
      current->next = connectivity[src];
      connectivity[src] = current;
    }
  current->mote = dest;
  current->gain = gain;
  sim_log_debug(8U, "Gain", "Adding link from %i to %i with gain %f\n", src, dest, gain);
  sim_set_node(temp);
}

  double sim_gain_value(int src, int dest)
#line 55
{
  gain_entry_t *current;
  int temp = sim_node();

#line 58
  sim_set_node(src);
  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          sim_log_debug(9U, "Gain", "Getting link from %i to %i with gain %f\n", src, dest, current->gain);
          return current->gain;
        }
      current = current->next;
    }
  sim_set_node(temp);
  sim_log_debug(10U, "Gain", "Getting default link from %i to %i with gain %f\n", src, dest, 1.0);
  return 1.0;
}

  bool sim_gain_connected(int src, int dest)
#line 73
{
  gain_entry_t *current;
  int temp = sim_node();

#line 76
  sim_set_node(src);
  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          return TRUE;
        }
      current = current->next;
    }
  sim_set_node(temp);
  return FALSE;
}

  void sim_gain_remove(int src, int dest)
#line 89
{
  gain_entry_t *current;
  gain_entry_t *prevLink;
  int temp = sim_node();

  if (src > 1000) {
      src = 1000;
    }

  sim_set_node(src);

  current = sim_gain_first(src);
  prevLink = (void *)0;

  while (current != (void *)0) {
      if (current->mote == dest) {
          if (prevLink == (void *)0) {
              connectivity[src] = current->next;
            }
          else {
              prevLink->next = current->next;
            }
          sim_gain_deallocate_link(current);
          current = prevLink->next;
        }
      else {
          prevLink = current;
          current = current->next;
        }
    }
  sim_set_node(temp);
}

#line 167
  void sim_gain_deallocate_link(gain_entry_t *linkToDelete)
#line 167
{
  free(linkToDelete);
}

#line 122
  void sim_gain_set_noise_floor(int node, double mean, double range)
#line 122
{
  if (node > 1000) {
      node = 1000;
    }
  localNoise[node].mean = mean;
  localNoise[node].range = range;
}

#line 146
  double sim_gain_sample_noise(int node)
#line 146
{
  double val;
#line 147
  double adjust;

#line 148
  if (node > 1000) {
      node = 1000;
    }
  val = localNoise[node].mean;
  adjust = sim_random() % 2000000;
  adjust /= 1000000.0;
  adjust -= 1.0;
  adjust *= localNoise[node].range;
  return val + adjust;
}

#line 171
  void sim_gain_set_sensitivity(double s)
#line 171
{
  sensitivity = s;
}

  double sim_gain_sensitivity(void)
#line 175
{
  return sensitivity;
}

# 70 "/opt/tinyos-2.x/tos/lib/tossim/sim_noise.c"
  void sim_noise_create_model(uint16_t node_id)
#line 70
{
  makeNoiseModel(node_id);
  makePmfDistr(node_id);
}

#line 381
  void makeNoiseModel(uint16_t node_id)
#line 381
{
  int i;

#line 383
  for (i = 0; i < NOISE_HISTORY; i++) {
      noiseData[node_id].key[i] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }

  sim_noise_add(node_id, noiseData[node_id].noiseTrace[NOISE_HISTORY]);
  arrangeKey(node_id);

  for (i = NOISE_HISTORY; i < noiseData[node_id].noiseTraceIndex; i++) {
      noiseData[node_id].key[NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id].noiseTrace[i]);
      sim_noise_add(node_id, noiseData[node_id].noiseTrace[i + 1]);
      arrangeKey(node_id);
    }
  noiseData[node_id].generated = 1;
}

#line 98
  uint8_t search_bin_num(char noise)
{
  uint8_t bin;

#line 101
  if (noise > NOISE_MAX || noise < NOISE_MIN) {
      noise = NOISE_MIN;
    }
  bin = (noise - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1;
  return bin;
}

#line 129
  void sim_noise_add(uint16_t node_id, char noise)
{
  int i;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *key = noiseData[node_id].key;
  sim_noise_hash_t *noise_hash;

#line 135
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);
  sim_log_debug(12U, "Insert,HashZeroDebug", "Adding noise value %hhi\n", noise);
  if (noise_hash == (void *)0) {
      noise_hash = (sim_noise_hash_t *)malloc(sizeof(sim_noise_hash_t ));
      memcpy((void *)noise_hash->key, (void *)key, NOISE_HISTORY);

      noise_hash->numElements = 0;
      noise_hash->size = NOISE_DEFAULT_ELEMENT_SIZE;
      noise_hash->elements = (char *)malloc(sizeof(char ) * noise_hash->size);
      memset((void *)noise_hash->elements, 0, sizeof(char ) * noise_hash->size);

      noise_hash->flag = 0;
      for (i = 0; i < NOISE_BIN_SIZE; i++) {
          noise_hash->dist[i] = 0;
        }
      hashtable_insert(pnoiseTable, key, noise_hash);
      sim_log_debug(13U, "Insert", "Inserting %p into table %p with key ", noise_hash, pnoiseTable);
      {
        int ctr;

#line 154
        for (ctr = 0; ctr < NOISE_HISTORY; ctr++) 
          sim_log_debug_clear(14U, "Insert", "%0.3hhi ", key[ctr]);
      }
      sim_log_debug_clear(15U, "Insert", "\n");
    }

  if (noise_hash->numElements == noise_hash->size) 
    {
      char *newElements;
      int newSize = noise_hash->size * 2;

      newElements = (char *)malloc(sizeof(char ) * newSize);
      memcpy(newElements, noise_hash->elements, noise_hash->size);
      free(noise_hash->elements);
      noise_hash->elements = newElements;
      noise_hash->size = newSize;
    }

  noise_hash->elements[noise_hash->numElements] = noise;
  noise_hash->numElements++;
}

#line 225
  void arrangeKey(uint16_t node_id)
{
  char *pKey = noiseData[node_id].key;

#line 228
  memcpy(pKey, pKey + 1, NOISE_HISTORY - 1);
}





  void makePmfDistr(uint16_t node_id)
{
  int i;
  char *pKey = noiseData[node_id].key;
  char *fKey = noiseData[node_id].freqKey;

  FreqKeyNum = 0;
  for (i = 0; i < NOISE_HISTORY; i++) {
      pKey[i] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }
  sim_noise_dist(node_id);
  arrangeKey(node_id);
  for (i = NOISE_HISTORY; i < noiseData[node_id].noiseTraceIndex; i++) {
      if (i == NOISE_HISTORY) {
        }

      pKey[NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id].noiseTrace[i]);
      sim_noise_dist(node_id);
      arrangeKey(node_id);
    }

  sim_log_debug_clear(19U, "HASH", "FreqKey = ");
  for (i = 0; i < NOISE_HISTORY; i++) 
    {
      sim_log_debug_clear(20U, "HASH", "%d,", fKey[i]);
    }
  sim_log_debug_clear(21U, "HASH", "\n");
}

#line 176
  void sim_noise_dist(uint16_t node_id)
{
  int i;
  uint8_t bin;
  float cmf = 0;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *key = noiseData[node_id].key;
  char *freqKey = noiseData[node_id].freqKey;
  sim_noise_hash_t *noise_hash;

#line 185
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);

  if (noise_hash->flag == 1) {
    return;
    }
  for (i = 0; i < NOISE_BIN_SIZE; i++) {
      noise_hash->dist[i] = 0.0;
    }

  for (i = 0; i < noise_hash->numElements; i++) 
    {
      float val;

#line 197
      bin = search_bin_num(noise_hash->elements[i]) - 1;
      val = noise_hash->dist[bin];
      val += (float )1.0;
      noise_hash->dist[bin] = val;
    }

  for (i = 0; i < NOISE_BIN_SIZE; i++) 
    {
      noise_hash->dist[i] = noise_hash->dist[i] / noise_hash->numElements;
      cmf += noise_hash->dist[i];
      noise_hash->dist[i] = cmf;
    }
  noise_hash->flag = 1;


  if (noise_hash->numElements > FreqKeyNum) 
    {
      int j;

#line 215
      FreqKeyNum = noise_hash->numElements;
      memcpy((void *)freqKey, (void *)key, NOISE_HISTORY);
      sim_log_debug(16U, "HashZeroDebug", "Setting most frequent key (%i): ", (int )FreqKeyNum);
      for (j = 0; j < NOISE_HISTORY; j++) {
          sim_log_debug_clear(17U, "HashZeroDebug", "[%hhu] ", key[j]);
        }
      sim_log_debug_clear(18U, "HashZeroDebug", "\n");
    }
}

#line 83
  void sim_noise_trace_add(uint16_t node_id, char noiseVal)
#line 83
{

  if (noiseData[node_id].noiseTraceIndex == 
  noiseData[node_id].noiseTraceLen) {
      char *data = (char *)malloc(sizeof(char ) * noiseData[node_id].noiseTraceLen * 2);

#line 88
      memcpy(data, noiseData[node_id].noiseTrace, noiseData[node_id].noiseTraceLen);
      free(noiseData[node_id].noiseTrace);
      noiseData[node_id].noiseTraceLen *= 2;
      noiseData[node_id].noiseTrace = data;
    }
  noiseData[node_id].noiseTrace[noiseData[node_id].noiseTraceIndex] = noiseVal;
  noiseData[node_id].noiseTraceIndex++;
}

#line 108
  char search_noise_from_bin_num(int i)
{
  char noise;

#line 111
  noise = NOISE_MIN + (i - 1) * NOISE_QUANTIZE_INTERVAL;
  return noise;
}

#line 269
  char sim_noise_gen(uint16_t node_id)
{
  int i;
  int noiseIndex = 0;
  char noise;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *pKey = noiseData[node_id].key;
  char *fKey = noiseData[node_id].freqKey;
  double ranNum = RandomUniform();
  sim_noise_hash_t *noise_hash;

#line 279
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);

  if (noise_hash == (void *)0) {
      sim_noise_alarm();
      noise = 0;
      sim_log_debug_clear(22U, "HASH", "(N)Noise\n");
      sim_log_debug(23U, "HashZeroDebug", "Defaulting to common hash.\n");
      memcpy((void *)pKey, (void *)fKey, NOISE_HISTORY);
      noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);
    }

  sim_log_debug_clear(24U, "HASH", "Key = ");
  for (i = 0; i < NOISE_HISTORY; i++) {
      sim_log_debug_clear(25U, "HASH", "%d,", pKey[i]);
    }
  sim_log_debug_clear(26U, "HASH", "\n");

  sim_log_debug(27U, "HASH", "Printing Key\n");
  sim_log_debug(28U, "HASH", "noise_hash->numElements=%d\n", noise_hash->numElements);
  if (noise_hash->numElements == 1) {
      noise = noise_hash->elements[0];
      sim_log_debug_clear(29U, "HASH", "(E)Noise = %d\n", noise);
      return noise;
    }

  for (i = 0; i < NOISE_BIN_SIZE - 1; i++) {
      sim_log_debug(30U, "HASH", "IN:for i=%d\n", i);
      if (i == 0) {
          if (ranNum <= noise_hash->dist[i]) {
              noiseIndex = i;
              sim_log_debug_clear(31U, "HASH", "Selected Bin = %d -> ", i + 1);
              break;
            }
        }
      else {
#line 313
        if (noise_hash->dist[i - 1] < ranNum && 
        ranNum <= noise_hash->dist[i]) {
            noiseIndex = i;
            sim_log_debug_clear(32U, "HASH", "Selected Bin = %d -> ", i + 1);
            break;
          }
        }
    }
#line 320
  sim_log_debug(33U, "HASH", "OUT:for i=%d\n", i);

  noise = search_noise_from_bin_num(i + 1);
  sim_log_debug_clear(34U, "HASH", "(B)Noise = %d\n", noise);
  return noise;
}

  char sim_noise_generate(uint16_t node_id, uint32_t cur_t)
#line 327
{
  uint32_t i;
  uint32_t prev_t;
  uint32_t delta_t;
  char *noiseG;
  char noise;

  prev_t = noiseData[node_id].noiseGenTime;

  if (noiseData[node_id].generated == 0) {
      sim_log_error(35U, "TOSSIM", "Tried to generate noise from an uninitialized radio model of node %hu.\n", node_id);
      return 127;
    }

  if (0 <= cur_t && cur_t < NOISE_HISTORY) {
      noiseData[node_id].noiseGenTime = cur_t;
      noiseData[node_id].key[cur_t] = search_bin_num(noiseData[node_id].noiseTrace[cur_t]);
      noiseData[node_id].lastNoiseVal = noiseData[node_id].noiseTrace[cur_t];
      return noiseData[node_id].noiseTrace[cur_t];
    }

  if (prev_t == 0) {
    delta_t = cur_t - (NOISE_HISTORY - 1);
    }
  else {
#line 351
    delta_t = cur_t - prev_t;
    }
  sim_log_debug_clear(36U, "HASH", "delta_t = %d\n", delta_t);

  if (delta_t == 0) {
    noise = noiseData[node_id].lastNoiseVal;
    }
  else 
#line 357
    {
      noiseG = (char *)malloc(sizeof(char ) * delta_t);

      for (i = 0; i < delta_t; i++) {
          noiseG[i] = sim_noise_gen(node_id);
          arrangeKey(node_id);
          noiseData[node_id].key[NOISE_HISTORY - 1] = search_bin_num(noiseG[i]);
        }
      noise = noiseG[delta_t - 1];
      noiseData[node_id].lastNoiseVal = noise;

      free(noiseG);
    }
  noiseData[node_id].noiseGenTime = cur_t;
  if (noise == 0) {
      sim_log_debug(37U, "HashZeroDebug", "Generated noise of zero.\n");
    }
  return noise;
}

# 253 "/opt/tinyos-2.x/tos/lib/tossim/sim_log.c"
static void sim_log_error(uint16_t id, char *string, const char *format, ...)
#line 253
{
  va_list args;
  int i;

#line 256
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 261
      __builtin_va_start(args, format);
      fprintf(file, "ERROR (%i): ", (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 46 "/opt/tinyos-2.x/tos/lib/tossim/sim_packet.c"
  void sim_packet_set_source(sim_packet_t *msg, uint16_t src)
#line 46
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 48
  __nesc_hton_uint16((unsigned char *)&hdr->src, src);
}

  uint16_t sim_packet_source(sim_packet_t *msg)
#line 51
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 53
  return __nesc_ntoh_uint16((unsigned char *)&hdr->src);
}

  void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)
#line 56
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 58
  __nesc_hton_uint16((unsigned char *)&hdr->dest, dest);
}

  uint16_t sim_packet_destination(sim_packet_t *msg)
#line 61
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 63
  return __nesc_ntoh_uint16((unsigned char *)&hdr->dest);
}

  void sim_packet_set_length(sim_packet_t *msg, uint8_t length)
#line 66
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 68
  __nesc_hton_uint8((unsigned char *)&hdr->length, length);
}

#line 70
  uint16_t sim_packet_length(sim_packet_t *msg)
#line 70
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 72
  return __nesc_ntoh_uint8((unsigned char *)&hdr->length);
}

  void sim_packet_set_type(sim_packet_t *msg, uint8_t type)
#line 75
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 77
  __nesc_hton_uint8((unsigned char *)&hdr->type, type);
}

  uint8_t sim_packet_type(sim_packet_t *msg)
#line 80
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 82
  return __nesc_ntoh_uint8((unsigned char *)&hdr->type);
}

  uint8_t *sim_packet_data(sim_packet_t *p)
#line 85
{
  message_t *msg = (message_t *)p;

#line 87
  return (uint8_t *)& msg->data;
}

#line 89
  void sim_packet_set_strength(sim_packet_t *p, uint16_t str)
#line 89
{
  message_t *msg = (message_t *)p;
  tossim_metadata_t *md = (tossim_metadata_t *)& msg->metadata;

#line 92
  __nesc_hton_uint16((unsigned char *)&md->strength, str);
}

#line 94
  void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)
#line 94
{
  if (t < sim_time()) {
      t = sim_time();
    }
  sim_log_debug(38U, "Packet", "sim_packet.c: Delivering packet %p to %i at %llu\n", msg, node, t);
  active_message_deliver(node, (message_t *)msg, t);
}

# 250 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
  void active_message_deliver(int node, message_t *msg, sim_time_t t)
#line 250
{
  sim_event_t *evt = TossimActiveMessageP$allocate_deliver_event(node, msg, t);

#line 252
  sim_queue_insert(evt);
}

#line 138
static  am_addr_t TossimActiveMessageP$AMPacket$destination(message_t *amsg)
#line 138
{
  tossim_header_t *header = TossimActiveMessageP$getHeader(amsg);

#line 140
  return __nesc_ntoh_uint16((unsigned char *)&header->dest);
}

#line 163
static  am_id_t TossimActiveMessageP$AMPacket$type(message_t *amsg)
#line 163
{
  tossim_header_t *header = TossimActiveMessageP$getHeader(amsg);

#line 165
  return __nesc_ntoh_uint8((unsigned char *)&header->type);
}

# 102 "/opt/tinyos-2.x/tos/lib/tossim/sim_packet.c"
  uint8_t sim_packet_max_length(sim_packet_t *msg)
#line 102
{
  return 28;
}

  sim_packet_t *sim_packet_allocate(void)
#line 106
{
  return (sim_packet_t *)malloc(sizeof(message_t ));
}

  void sim_packet_free(sim_packet_t *p)
#line 110
{
  printf("sim_packet.c: Freeing packet %p\n", p);
  free(p);
}

# 43 "/opt/tinyos-2.x/tos/lib/tossim/SimMainP.nc"
  int sim_main_start_mote(void)
#line 43
{
  char timeBuf[128];

#line 45
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 45
    {






      SimMainP$Scheduler$init();





      SimMainP$PlatformInit$init();
      while (SimMainP$Scheduler$runNextTask()) ;





      SimMainP$SoftwareInit$init();
      while (SimMainP$Scheduler$runNextTask()) ;
    }
#line 67
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  sim_print_now(timeBuf, 128);
  sim_log_debug(87U, "SimMainP", "Mote %li signaling boot at time %s.\n", sim_node(), timeBuf);
  SimMainP$Boot$booted();





  return 0;
}

# 172 "/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
static  bool SimSchedulerBasicP$Scheduler$runNextTask(void)
{
  uint8_t nextTask;

#line 175
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      nextTask = SimSchedulerBasicP$popTask();
      if (nextTask == SimSchedulerBasicP$NO_TASK) 
        {
          sim_log_debug(89U, "Scheduler", "Told to run next task, but no task to run.\n");
          {
            unsigned char __nesc_temp = 
#line 181
            FALSE;

            {
#line 181
              __nesc_atomic_end(__nesc_atomic); 
#line 181
              return __nesc_temp;
            }
          }
        }
    }
#line 185
    __nesc_atomic_end(__nesc_atomic); }
#line 184
  sim_log_debug(90U, "Scheduler", "Running task %hhu.\n", nextTask);
  SimSchedulerBasicP$TaskBasic$runTask(nextTask);
  return TRUE;
}









static   error_t SimSchedulerBasicP$TaskBasic$postTask(uint8_t id)
{
  error_t result;

#line 200
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 200
    {
      result = SimSchedulerBasicP$pushTask(id) ? SUCCESS : EBUSY;
    }
#line 202
    __nesc_atomic_end(__nesc_atomic); }
  if (result == SUCCESS) {
      sim_log_debug(91U, "Scheduler", "Posting task %hhu.\n", id);
      SimSchedulerBasicP$sim_scheduler_submit_event();
    }
  else {
      sim_log_debug(92U, "Scheduler", "Posting task %hhu, but already posted.\n", id);
    }
  return result;
}

#line 69
static void SimSchedulerBasicP$sim_scheduler_submit_event(void)
#line 69
{
  if (SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] == FALSE) {
      SimSchedulerBasicP$sim_scheduler_event[sim_node()].time = sim_time() + SimSchedulerBasicP$sim_config_task_latency();
      sim_queue_insert(&SimSchedulerBasicP$sim_scheduler_event[sim_node()]);
      SimSchedulerBasicP$sim_scheduler_event_pending[sim_node()] = TRUE;
    }
}

# 117 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPathP.nc"
static  error_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildTreeTo(graph_vertex_id_t src, 
graph_vertex_id_t dest)
#line 118
{
  if (src >= 5 || dest > 5) {


    return ESIZE;
    }
#line 123
  if (/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree[sim_node()]) {
    return EBUSY;
    }
#line 125
  if (src == /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc[sim_node()] && dest == /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[sim_node()] && !/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded[sim_node()]) {
      sim_log_debug(180U, "SourceShortestPathP", "SSP: SPT for %u already built!\n", src);
      /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$postTask();
      return SUCCESS;
    }
  sim_log_debug(181U, "SourceShortestPathP", "SSP: Building SPT for %u\n", src);
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree[sim_node()] = TRUE;
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc[sim_node()] = src;
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[sim_node()] = dest;
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded[sim_node()] = FALSE;
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$initTree();

  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[sim_node()][src] = 0;
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$insert(src);
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[sim_node()][src] = src;

  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$postTask();
  return SUCCESS;
}

#line 316
static void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$initTree(void)
#line 316
{
  graph_vertex_id_t i;

#line 318
  for (i = 0; i < 5; i++) {
      /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[sim_node()][i] = 5;
      /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[sim_node()][i] = 5;
    }
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$clear();
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$foundDest[sim_node()] = FAIL;
}

# 312 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueueP.nc"
static void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$clearData(void)
#line 312
{
  priority_queue_id_t i;

#line 314
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()] = 0;
  for (i = 0; i < 5; i++) 
    /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[sim_node()][i] = 5;
}

#line 267
static void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTree(void)
#line 267
{

  sim_log_debug(172U, "PriorityQueueC", "Current Tree:\n");
  if (!/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()]) {
      sim_log_debug_clear(173U, "PriorityQueueC", "Empty!\n");
      return;
    }
  sim_log_debug_clear(174U, "PriorityQueueC", "%hhu\n", /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][0]);
  if (1 < /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()]) {
      /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTreeChild(1, "| ");
      sim_log_debug_clear(175U, "PriorityQueueC", "\n");
    }
  if (2 < /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()]) {
      /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTreeChild(2, "  ");
      sim_log_debug_clear(176U, "PriorityQueueC", "\n");
    }
}








static void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTreeChild(priority_queue_id_t n, char *pre)
#line 292
{

  char cPre[10];

#line 295
  sim_log_debug_clear(177U, "PriorityQueueC", "%s%hhu", "|_", /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][n]);
  if (2 * n + 1 < /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()]) {
      sim_log_debug_clear(178U, "PriorityQueueC", "\n%s", pre);
      sprintf(cPre, "%s%s", pre, "| ");
      /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTreeChild(2 * n + 1, cPre);
    }
  if (2 * n + 2 < /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()]) {
      sim_log_debug_clear(179U, "PriorityQueueC", "\n%s", pre);
      sprintf(cPre, "%s%s", pre, "  ");
      /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTreeChild(2 * n + 2, cPre);
    }
}

#line 118
static  error_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$insert(priority_queue_id_t m)
#line 118
{
  if (m >= 5) {
    return ESIZE;
    }
#line 121
  if (/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()] == 5) {
      sim_log_error(165U, "PriorityQueueC", "PQ: Can't insert index %hhu, already full!\n", m);
      return FAIL;
    }
  if (/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[sim_node()][m] != 5) {
    return EALREADY;
    }
#line 127
  sim_log_debug(166U, "PriorityQueueC", "PQ: Inserting index %hhu\n", m);
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()]] = m;
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[sim_node()][m] = /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()];
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$moveUpPos(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()]++);
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTree();
  return SUCCESS;
}

#line 218
static void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$moveUpPos(priority_queue_id_t a)
#line 218
{
  priority_queue_id_t p;

#line 220
  sim_log_debug(169U, "PriorityQueueC", "PQ: Moving heap position %hhu up if needed\n", a);
  while (a > 0 && /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$test(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][a], /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][p = (a - 1) / 2]) > 0) {
      /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$flip(a, p);
      a = p;
    }
}

#line 253
static void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$flip(priority_queue_id_t a, priority_queue_id_t b)
#line 253
{

  priority_queue_id_t temp = /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][a];

#line 256
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][a] = /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][b];
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][b] = temp;

  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[sim_node()][/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][a]] = a;
  /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[sim_node()][/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][b]] = b;
  sim_log_debug(171U, "PriorityQueueC", "PQ: Flipped heap positions %hhu and %hhu\n", a, b);
}

# 350 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPathP.nc"
static void /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$printPathLink(graph_vertex_id_t m, char *path, char *tmp)
#line 350
{

  strcpy(tmp, path);
  if (m == /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc[sim_node()]) {
    sprintf(path, "%u%s", m, tmp);
    }
  else 
#line 355
    {
      sprintf(path, "-%u%s", m, tmp);
      /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$printPathLink(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[sim_node()][m], path, tmp);
    }
}

#line 165
static  graph_edge_id_t /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$edgeCount(graph_vertex_id_t dest)
#line 165
{
  if (dest >= 5 || /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[sim_node()][dest] == 5) {
    return 0;
    }
  else 
#line 168
    {
      graph_edge_id_t cnt;

#line 170
      for (cnt = 0; !/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$end(dest); 
      dest = /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$next(dest)) 
        cnt++;
      return cnt;
    }
}

# 152 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphSparseP.nc"
static  graph_edge_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$insert(graph_vertex_id_t s, 
graph_vertex_id_t d)
#line 153
{
  graph_edge_id_t newEdge;

#line 155
  if (s >= 5 || d >= 5) {
      sim_log_error(155U, "GraphSparseP", "GS: At least one vertex too large!\n");
      return 7;
    }
  if (!0 && /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edge(s, d) != 7) {
    return 7;
    }
#line 161
  sim_log_debug(156U, "GraphSparseP", "GS: Inserting edge %u -> %u\n", s, d);
  newEdge = /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$IndexedAlloc$alloc();
  if (newEdge == 7) {
      sim_log_error(157U, "GraphSparseP", "GS: Can't hold any more edges!\n");
      return 7;
    }
  if (/*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[sim_node()][s] == 7) {
    /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$vSize[sim_node()]++;
    }
#line 169
  /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[sim_node()][newEdge].next = /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[sim_node()][s];
  /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[sim_node()][newEdge].dest = d;
  /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[sim_node()][s] = newEdge;
  /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$inserted(newEdge);
  /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$printGraph();
  return newEdge;
}

#line 231
static  graph_edge_id_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edge(graph_vertex_id_t s, graph_vertex_id_t d)
#line 231
{
  graph_edge_id_t curEdge;

#line 233
  for (curEdge = /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[sim_node()][s]; curEdge != 7; curEdge = /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[sim_node()][curEdge].next) {

      if (/*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[sim_node()][curEdge].dest == d) {

          return curEdge;
        }
    }
  return 7;
}

# 76 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static   bool /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$BitVector$get(uint16_t bitnum)
{
  return /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$m_bits[sim_node()][/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$getIndex(bitnum)] & /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$getMask(bitnum) ? TRUE : FALSE;
}

# 185 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphSparseP.nc"
static  error_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$remove(graph_vertex_id_t s, graph_vertex_id_t d)
#line 185
{
  graph_edge_id_t curEdge;
#line 186
  graph_edge_id_t nextEdge;

#line 187
  sim_log_debug(158U, "GraphSparseP", "GS: Removing edge %u -> %u\n", s, d);
  if (s >= 5 || d >= 5) {
      sim_log_error(159U, "GraphSparseP", "GS: At least one vertex too large!\n");
      return ESIZE;
    }

  curEdge = /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[sim_node()][s];
  if (curEdge != 7 && /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[sim_node()][curEdge].dest == d) {

      /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[sim_node()][s] = /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[sim_node()][curEdge].next;
      /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$IndexedAlloc$free(curEdge);
      if (/*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[sim_node()][s] == 7) {
        /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$vSize[sim_node()]--;
        }
#line 200
      /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$removed(curEdge);
      /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$printGraph();
      return SUCCESS;
    }

  while (curEdge != 7) {

      nextEdge = /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[sim_node()][curEdge].next;
      if (/*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[sim_node()][nextEdge].dest == d) {

          /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[sim_node()][curEdge].next = /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[sim_node()][nextEdge].next;
          /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$IndexedAlloc$free(nextEdge);
          /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$removed(nextEdge);
          /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$printGraph();
          return SUCCESS;
        }
      curEdge = nextEdge;
    }
  sim_log_error(160U, "GraphSparseP", "GS: Edge not found!\n");
  return EINVAL;
}

# 130 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/alloc/IndexedAllocBitsP.nc"
static  error_t /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$IndexedAlloc$free(indexed_alloc_id_t m)
#line 130
{
  if (m >= 7) {
    return ESIZE;
    }
#line 133
  if (!/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$get(m)) {
    return EALREADY;
    }
#line 135
  /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$clear(m);
  if (/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$get(/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free[sim_node()])) {
    /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free[sim_node()] = m;
    }
#line 138
  /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$size[sim_node()]--;
  return SUCCESS;
}

# 135 "TestGraphP.nc"
static  void TestGraphP$Graph$removed(graph_edge_id_t m)
#line 135
{
  sim_log_debug(112U, "TestGraphP", "Edge %u removed!\n", m);
  switch (TestGraphP$test[sim_node()]) {
      case 0: {
          TestGraphP$test[sim_node()] = 3;
          TestGraphP$b_e[sim_node()] = TestGraphP$Graph$insert(1, 4);
          break;
        }
#line 142
      case 1: {
          TestGraphP$test[sim_node()] = 8;
          sim_log_debug(113U, "TestGraphP", "remove(3, 0): %u Expected: 6\n", TestGraphP$Graph$remove(3, 0));
          TestGraphP$b_e[sim_node()] = TestGraphP$Graph$insert(1, 4);
          break;
        }
    }
}

# 305 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphSparseP.nc"
static void /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$printGraph(void)
#line 305
{

  graph_vertex_id_t s;

#line 308
  sim_log_debug(161U, "GraphSparseP", "GS: Current Graph:\n");
  for (s = 0; s < 5; s++) {
      graph_edge_id_t cur;

#line 311
      sim_log_debug_clear(162U, "GraphSparseP", "%u: ", s);
      for (cur = /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[sim_node()][s]; cur != 7; cur = /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[sim_node()][cur].next) 
        sim_log_debug_clear(163U, "GraphSparseP", "%u(%u)-", /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[sim_node()][cur].dest, cur);
      sim_log_debug_clear(164U, "GraphSparseP", "|\n");
    }
}

# 82 "/opt/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
  long long int sim_mote_euid(int mote)
#line 82
{
  long long int result;
  int tmp = sim_node();

#line 85
  sim_set_node(mote);
  result = SimMoteP$SimMote$getEuid();
  sim_set_node(tmp);
  return result;
}

  void sim_mote_set_euid(int mote, long long int id)
#line 91
{
  int tmp = sim_node();

#line 93
  sim_set_node(mote);
  SimMoteP$SimMote$setEuid(id);
  sim_set_node(tmp);
}

  long long int sim_mote_start_time(int mote)
#line 98
{
  long long int result;
  int tmp = sim_node();

#line 101
  sim_set_node(mote);
  result = SimMoteP$SimMote$getStartTime();
  sim_set_node(tmp);
  return result;
}

  int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)
#line 107
{
  int result;
  int tmpID = sim_node();

#line 110
  sim_set_node(mote);
  result = SimMoteP$SimMote$getVariableInfo(name, ptr, len);
  sim_log_debug(94U, "SimMoteP", "Fetched %s of %i to be %p with len %i (result %i)\n", name, mote, *ptr, *len, result);
  sim_set_node(tmpID);
  return result;
}

  void sim_mote_set_start_time(int mote, long long int t)
#line 117
{
  int tmpID = sim_node();

#line 119
  sim_set_node(mote);
  SimMoteP$startTime[sim_node()] = t;
  sim_log_debug(95U, "SimMoteP", "Setting start time to %llu\n", SimMoteP$startTime[sim_node()]);
  sim_set_node(tmpID);
  return;
}










  void sim_mote_turn_on(int mote)
#line 135
{
  int tmp = sim_node();

#line 137
  sim_set_node(mote);
  SimMoteP$SimMote$turnOn();
  sim_set_node(tmp);
}

#line 64
static  void SimMoteP$SimMote$turnOn(void)
#line 64
{
  if (!SimMoteP$isOn[sim_node()]) {
      if (SimMoteP$bootEvent[sim_node()] != (void *)0) {
          SimMoteP$bootEvent[sim_node()]->cancelled = TRUE;
        }
      __nesc_nido_initialise(sim_node());
      SimMoteP$startTime[sim_node()] = sim_time();
      sim_log_debug(93U, "SimMoteP", "Setting start time to %llu\n", SimMoteP$startTime[sim_node()]);
      SimMoteP$isOn[sim_node()] = TRUE;
      sim_main_start_mote();
    }
}

#line 142
  void sim_mote_turn_off(int mote)
#line 142
{
  int tmp = sim_node();

#line 144
  sim_set_node(mote);
  SimMoteP$SimMote$turnOff();
  sim_set_node(tmp);
}










  void sim_mote_enqueue_boot_event(int mote)
#line 158
{
  int tmp = sim_node();

#line 160
  sim_set_node(mote);

  if (SimMoteP$bootEvent[sim_node()] != (void *)0) {
      if (SimMoteP$bootEvent[sim_node()]->time == SimMoteP$startTime[sim_node()]) {

          SimMoteP$bootEvent[sim_node()]->cancelled = FALSE;
          return;
        }
      else {
          SimMoteP$bootEvent[sim_node()]->cancelled = TRUE;
        }
    }

  SimMoteP$bootEvent[sim_node()] = (sim_event_t *)malloc(sizeof(sim_event_t ));
  SimMoteP$bootEvent[sim_node()]->time = SimMoteP$startTime[sim_node()];
  SimMoteP$bootEvent[sim_node()]->mote = mote;
  SimMoteP$bootEvent[sim_node()]->force = TRUE;
  SimMoteP$bootEvent[sim_node()]->data = (void *)0;
  SimMoteP$bootEvent[sim_node()]->handle = SimMoteP$sim_mote_boot_handle;
  SimMoteP$bootEvent[sim_node()]->cleanup = sim_queue_cleanup_event;
  sim_queue_insert(SimMoteP$bootEvent[sim_node()]);

  sim_set_node(tmp);
}

/* Nido variable resolver function */

static int __nesc_nido_resolve(int __nesc_mote,
                               char* varname,
                               uintptr_t* addr, size_t* size)
{
  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP$0 */

  /* Module HplAtm128GeneralIOPinP$1 */

  /* Module HplAtm128GeneralIOPinP$2 */

  /* Module HplAtm128GeneralIOPinP$3 */

  /* Module HplAtm128GeneralIOPinP$4 */

  /* Module HplAtm128GeneralIOPinP$5 */

  /* Module HplAtm128GeneralIOPinP$6 */

  /* Module HplAtm128GeneralIOPinP$7 */

  /* Module HplAtm128GeneralIOPinP$8 */

  /* Module HplAtm128GeneralIOPinP$9 */

  /* Module HplAtm128GeneralIOPinP$10 */

  /* Module HplAtm128GeneralIOPinP$11 */

  /* Module HplAtm128GeneralIOPinP$12 */

  /* Module HplAtm128GeneralIOPinP$13 */

  /* Module HplAtm128GeneralIOPinP$14 */

  /* Module HplAtm128GeneralIOPinP$15 */

  /* Module HplAtm128GeneralIOPinP$16 */

  /* Module HplAtm128GeneralIOPinP$17 */

  /* Module HplAtm128GeneralIOPinP$18 */

  /* Module HplAtm128GeneralIOPinP$19 */

  /* Module HplAtm128GeneralIOPinP$20 */

  /* Module HplAtm128GeneralIOPinP$21 */

  /* Module HplAtm128GeneralIOPinP$22 */

  /* Module HplAtm128GeneralIOPinP$23 */

  /* Module HplAtm128GeneralIOPinP$24 */

  /* Module HplAtm128GeneralIOPinP$25 */

  /* Module HplAtm128GeneralIOPinP$26 */

  /* Module HplAtm128GeneralIOPinP$27 */

  /* Module HplAtm128GeneralIOPinP$28 */

  /* Module HplAtm128GeneralIOPinP$29 */

  /* Module HplAtm128GeneralIOPinP$30 */

  /* Module HplAtm128GeneralIOPinP$31 */

  /* Module HplAtm128GeneralIOPinP$32 */

  /* Module HplAtm128GeneralIOPinP$33 */

  /* Module HplAtm128GeneralIOPinP$34 */

  /* Module HplAtm128GeneralIOPinP$35 */

  /* Module HplAtm128GeneralIOPinP$36 */

  /* Module HplAtm128GeneralIOPinP$37 */

  /* Module HplAtm128GeneralIOPinP$38 */

  /* Module HplAtm128GeneralIOPinP$39 */

  /* Module HplAtm128GeneralIOPinP$40 */

  /* Module HplAtm128GeneralIOPinP$41 */

  /* Module HplAtm128GeneralIOPinP$42 */

  /* Module HplAtm128GeneralIOPinP$43 */

  /* Module HplAtm128GeneralIOPinP$44 */

  /* Module HplAtm128GeneralIOPinP$45 */

  /* Module HplAtm128GeneralIOPinP$46 */

  /* Module HplAtm128GeneralIOPinP$47 */

  /* Module HplAtm128GeneralIOSlowPinP$0 */

  /* Module HplAtm128GeneralIOSlowPinP$1 */

  /* Module HplAtm128GeneralIOSlowPinP$2 */

  /* Module HplAtm128GeneralIOSlowPinP$3 */

  /* Module HplAtm128GeneralIOSlowPinP$4 */

  /* Module HplAtm128GeneralIOSlowPinP$5 */

  /* Module HplAtm128GeneralIOSlowPinP$6 */

  /* Module HplAtm128GeneralIOSlowPinP$7 */

  /* Module HplAtm128GeneralIOSlowPinP$8 */

  /* Module HplAtm128GeneralIOSlowPinP$9 */

  /* Module HplAtm128GeneralIOSlowPinP$10 */

  /* Module HplAtm128GeneralIOSlowPinP$11 */

  /* Module HplAtm128GeneralIOSlowPinP$12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  if (!strcmp(varname, "SimSchedulerBasicP$m_head"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_head[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$m_tail"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_tail[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$m_next"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$m_next[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$m_next[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$sim_scheduler_event_pending"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP$sim_scheduler_event"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP$sim_scheduler_event[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP$sim_scheduler_event[__nesc_mote]);
    return 0;
  }

  /* Module SimMoteP */
  if (!strcmp(varname, "SimMoteP$euid"))
  {
    *addr = (uintptr_t)&SimMoteP$euid[__nesc_mote];
    *size = sizeof(SimMoteP$euid[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$startTime"))
  {
    *addr = (uintptr_t)&SimMoteP$startTime[__nesc_mote];
    *size = sizeof(SimMoteP$startTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$isOn"))
  {
    *addr = (uintptr_t)&SimMoteP$isOn[__nesc_mote];
    *size = sizeof(SimMoteP$isOn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP$bootEvent"))
  {
    *addr = (uintptr_t)&SimMoteP$bootEvent[__nesc_mote];
    *size = sizeof(SimMoteP$bootEvent[__nesc_mote]);
    return 0;
  }

  /* Module TossimActiveMessageP */
  if (!strcmp(varname, "TossimActiveMessageP$buffer"))
  {
    *addr = (uintptr_t)&TossimActiveMessageP$buffer[__nesc_mote];
    *size = sizeof(TossimActiveMessageP$buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimActiveMessageP$bufferPointer"))
  {
    *addr = (uintptr_t)&TossimActiveMessageP$bufferPointer[__nesc_mote];
    *size = sizeof(TossimActiveMessageP$bufferPointer[__nesc_mote]);
    return 0;
  }

  /* Module TestGraphP */
  if (!strcmp(varname, "TestGraphP$test"))
  {
    *addr = (uintptr_t)&TestGraphP$test[__nesc_mote];
    *size = sizeof(TestGraphP$test[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestGraphP$a_b"))
  {
    *addr = (uintptr_t)&TestGraphP$a_b[__nesc_mote];
    *size = sizeof(TestGraphP$a_b[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestGraphP$a_c"))
  {
    *addr = (uintptr_t)&TestGraphP$a_c[__nesc_mote];
    *size = sizeof(TestGraphP$a_c[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestGraphP$b_d"))
  {
    *addr = (uintptr_t)&TestGraphP$b_d[__nesc_mote];
    *size = sizeof(TestGraphP$b_d[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestGraphP$b_e"))
  {
    *addr = (uintptr_t)&TestGraphP$b_e[__nesc_mote];
    *size = sizeof(TestGraphP$b_e[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestGraphP$c_b"))
  {
    *addr = (uintptr_t)&TestGraphP$c_b[__nesc_mote];
    *size = sizeof(TestGraphP$c_b[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestGraphP$c_e"))
  {
    *addr = (uintptr_t)&TestGraphP$c_e[__nesc_mote];
    *size = sizeof(TestGraphP$c_e[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestGraphP$e_d"))
  {
    *addr = (uintptr_t)&TestGraphP$e_d[__nesc_mote];
    *size = sizeof(TestGraphP$e_d[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestGraphP$testEdge"))
  {
    *addr = (uintptr_t)&TestGraphP$testEdge[__nesc_mote];
    *size = sizeof(TestGraphP$testEdge[__nesc_mote]);
    return 0;
  }

  /* Module BitVectorC$0 */
  if (!strcmp(varname, "/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$m_bits"))
  {
    *addr = (uintptr_t)&/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$m_bits[__nesc_mote];
    *size = sizeof(/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$m_bits[__nesc_mote]);
    return 0;
  }

  /* Module IndexedAllocBitsP$0 */
  if (!strcmp(varname, "/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free"))
  {
    *addr = (uintptr_t)&/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free[__nesc_mote];
    *size = sizeof(/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$size"))
  {
    *addr = (uintptr_t)&/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$size[__nesc_mote];
    *size = sizeof(/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$size[__nesc_mote]);
    return 0;
  }

  /* Module GraphSparseP$0 */
  if (!strcmp(varname, "/*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$vSize"))
  {
    *addr = (uintptr_t)&/*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$vSize[__nesc_mote];
    *size = sizeof(/*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$vSize[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v"))
  {
    *addr = (uintptr_t)&/*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[__nesc_mote];
    *size = sizeof(/*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e"))
  {
    *addr = (uintptr_t)&/*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[__nesc_mote];
    *size = sizeof(/*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[__nesc_mote]);
    return 0;
  }

  /* Module PriorityQueueP$0 */
  if (!strcmp(varname, "/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size"))
  {
    *addr = (uintptr_t)&/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[__nesc_mote];
    *size = sizeof(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai"))
  {
    *addr = (uintptr_t)&/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[__nesc_mote];
    *size = sizeof(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp"))
  {
    *addr = (uintptr_t)&/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[__nesc_mote];
    *size = sizeof(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[__nesc_mote]);
    return 0;
  }

  /* Module SourceShortestPathP$0 */
  if (!strcmp(varname, "/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt"))
  {
    *addr = (uintptr_t)&/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[__nesc_mote];
    *size = sizeof(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe"))
  {
    *addr = (uintptr_t)&/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[__nesc_mote];
    *size = sizeof(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight"))
  {
    *addr = (uintptr_t)&/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[__nesc_mote];
    *size = sizeof(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc"))
  {
    *addr = (uintptr_t)&/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc[__nesc_mote];
    *size = sizeof(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded"))
  {
    *addr = (uintptr_t)&/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded[__nesc_mote];
    *size = sizeof(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest"))
  {
    *addr = (uintptr_t)&/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[__nesc_mote];
    *size = sizeof(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$foundDest"))
  {
    *addr = (uintptr_t)&/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$foundDest[__nesc_mote];
    *size = sizeof(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$foundDest[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree"))
  {
    *addr = (uintptr_t)&/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree[__nesc_mote];
    *size = sizeof(/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree[__nesc_mote]);
    return 0;
  }

  /* Module GraphEdgeWeightC$0 */
  if (!strcmp(varname, "/*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$weight"))
  {
    *addr = (uintptr_t)&/*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$weight[__nesc_mote];
    *size = sizeof(/*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$weight[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$changed"))
  {
    *addr = (uintptr_t)&/*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$changed[__nesc_mote];
    *size = sizeof(/*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$changed[__nesc_mote]);
    return 0;
  }

  return -1;
}
/* Invoke static initialisers for mote '__nesc_mote' */

static void __nesc_nido_initialise(int __nesc_mote)
{
  /* Module PlatformP */

  /* Module MotePlatformP */

  /* Module HplAtm128GeneralIOPinP$0 */

  /* Module HplAtm128GeneralIOPinP$1 */

  /* Module HplAtm128GeneralIOPinP$2 */

  /* Module HplAtm128GeneralIOPinP$3 */

  /* Module HplAtm128GeneralIOPinP$4 */

  /* Module HplAtm128GeneralIOPinP$5 */

  /* Module HplAtm128GeneralIOPinP$6 */

  /* Module HplAtm128GeneralIOPinP$7 */

  /* Module HplAtm128GeneralIOPinP$8 */

  /* Module HplAtm128GeneralIOPinP$9 */

  /* Module HplAtm128GeneralIOPinP$10 */

  /* Module HplAtm128GeneralIOPinP$11 */

  /* Module HplAtm128GeneralIOPinP$12 */

  /* Module HplAtm128GeneralIOPinP$13 */

  /* Module HplAtm128GeneralIOPinP$14 */

  /* Module HplAtm128GeneralIOPinP$15 */

  /* Module HplAtm128GeneralIOPinP$16 */

  /* Module HplAtm128GeneralIOPinP$17 */

  /* Module HplAtm128GeneralIOPinP$18 */

  /* Module HplAtm128GeneralIOPinP$19 */

  /* Module HplAtm128GeneralIOPinP$20 */

  /* Module HplAtm128GeneralIOPinP$21 */

  /* Module HplAtm128GeneralIOPinP$22 */

  /* Module HplAtm128GeneralIOPinP$23 */

  /* Module HplAtm128GeneralIOPinP$24 */

  /* Module HplAtm128GeneralIOPinP$25 */

  /* Module HplAtm128GeneralIOPinP$26 */

  /* Module HplAtm128GeneralIOPinP$27 */

  /* Module HplAtm128GeneralIOPinP$28 */

  /* Module HplAtm128GeneralIOPinP$29 */

  /* Module HplAtm128GeneralIOPinP$30 */

  /* Module HplAtm128GeneralIOPinP$31 */

  /* Module HplAtm128GeneralIOPinP$32 */

  /* Module HplAtm128GeneralIOPinP$33 */

  /* Module HplAtm128GeneralIOPinP$34 */

  /* Module HplAtm128GeneralIOPinP$35 */

  /* Module HplAtm128GeneralIOPinP$36 */

  /* Module HplAtm128GeneralIOPinP$37 */

  /* Module HplAtm128GeneralIOPinP$38 */

  /* Module HplAtm128GeneralIOPinP$39 */

  /* Module HplAtm128GeneralIOPinP$40 */

  /* Module HplAtm128GeneralIOPinP$41 */

  /* Module HplAtm128GeneralIOPinP$42 */

  /* Module HplAtm128GeneralIOPinP$43 */

  /* Module HplAtm128GeneralIOPinP$44 */

  /* Module HplAtm128GeneralIOPinP$45 */

  /* Module HplAtm128GeneralIOPinP$46 */

  /* Module HplAtm128GeneralIOPinP$47 */

  /* Module HplAtm128GeneralIOSlowPinP$0 */

  /* Module HplAtm128GeneralIOSlowPinP$1 */

  /* Module HplAtm128GeneralIOSlowPinP$2 */

  /* Module HplAtm128GeneralIOSlowPinP$3 */

  /* Module HplAtm128GeneralIOSlowPinP$4 */

  /* Module HplAtm128GeneralIOSlowPinP$5 */

  /* Module HplAtm128GeneralIOSlowPinP$6 */

  /* Module HplAtm128GeneralIOSlowPinP$7 */

  /* Module HplAtm128GeneralIOSlowPinP$8 */

  /* Module HplAtm128GeneralIOSlowPinP$9 */

  /* Module HplAtm128GeneralIOSlowPinP$10 */

  /* Module HplAtm128GeneralIOSlowPinP$11 */

  /* Module HplAtm128GeneralIOSlowPinP$12 */

  /* Module MeasureClockC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  memset(&SimSchedulerBasicP$m_head[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_head[__nesc_mote]);
  memset(&SimSchedulerBasicP$m_tail[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_tail[__nesc_mote]);
  memset(&SimSchedulerBasicP$m_next[__nesc_mote], 0, sizeof SimSchedulerBasicP$m_next[__nesc_mote]);
  SimSchedulerBasicP$sim_scheduler_event_pending[__nesc_mote] = FALSE;
  memset(&SimSchedulerBasicP$sim_scheduler_event[__nesc_mote], 0, sizeof SimSchedulerBasicP$sim_scheduler_event[__nesc_mote]);

  /* Module SimMoteP */
  memset(&SimMoteP$euid[__nesc_mote], 0, sizeof SimMoteP$euid[__nesc_mote]);
  memset(&SimMoteP$startTime[__nesc_mote], 0, sizeof SimMoteP$startTime[__nesc_mote]);
  memset(&SimMoteP$isOn[__nesc_mote], 0, sizeof SimMoteP$isOn[__nesc_mote]);
  memset(&SimMoteP$bootEvent[__nesc_mote], 0, sizeof SimMoteP$bootEvent[__nesc_mote]);

  /* Module TossimActiveMessageP */
  memset(&TossimActiveMessageP$buffer[__nesc_mote], 0, sizeof TossimActiveMessageP$buffer[__nesc_mote]);
  TossimActiveMessageP$bufferPointer[__nesc_mote] = &TossimActiveMessageP$buffer[__nesc_mote];

  /* Module TestGraphP */
  memset(&TestGraphP$test[__nesc_mote], 0, sizeof TestGraphP$test[__nesc_mote]);
  memset(&TestGraphP$a_b[__nesc_mote], 0, sizeof TestGraphP$a_b[__nesc_mote]);
  memset(&TestGraphP$a_c[__nesc_mote], 0, sizeof TestGraphP$a_c[__nesc_mote]);
  memset(&TestGraphP$b_d[__nesc_mote], 0, sizeof TestGraphP$b_d[__nesc_mote]);
  memset(&TestGraphP$b_e[__nesc_mote], 0, sizeof TestGraphP$b_e[__nesc_mote]);
  memset(&TestGraphP$c_b[__nesc_mote], 0, sizeof TestGraphP$c_b[__nesc_mote]);
  memset(&TestGraphP$c_e[__nesc_mote], 0, sizeof TestGraphP$c_e[__nesc_mote]);
  memset(&TestGraphP$e_d[__nesc_mote], 0, sizeof TestGraphP$e_d[__nesc_mote]);
  memset(&TestGraphP$testEdge[__nesc_mote], 0, sizeof TestGraphP$testEdge[__nesc_mote]);

  /* Module BitVectorC$0 */
  memset(&/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$m_bits[__nesc_mote], 0, sizeof /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$0$m_bits[__nesc_mote]);

  /* Module IndexedAllocBitsP$0 */
  memset(&/*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free[__nesc_mote], 0, sizeof /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free[__nesc_mote]);
  /*TestGraphAppC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$size[__nesc_mote] = 0;

  /* Module GraphSparseP$0 */
  memset(&/*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$vSize[__nesc_mote], 0, sizeof /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$vSize[__nesc_mote]);
  memset(&/*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[__nesc_mote], 0, sizeof /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[__nesc_mote]);
  memset(&/*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[__nesc_mote], 0, sizeof /*TestGraphAppC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[__nesc_mote]);

  /* Module PriorityQueueP$0 */
  memset(&/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[__nesc_mote], 0, sizeof /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[__nesc_mote]);
  memset(&/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[__nesc_mote], 0, sizeof /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[__nesc_mote]);
  memset(&/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[__nesc_mote], 0, sizeof /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[__nesc_mote]);

  /* Module SourceShortestPathP$0 */
  memset(&/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[__nesc_mote], 0, sizeof /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[__nesc_mote]);
  memset(&/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[__nesc_mote], 0, sizeof /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[__nesc_mote]);
  memset(&/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[__nesc_mote], 0, sizeof /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[__nesc_mote]);
  memset(&/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc[__nesc_mote], 0, sizeof /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc[__nesc_mote]);
  memset(&/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded[__nesc_mote], 0, sizeof /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded[__nesc_mote]);
  memset(&/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[__nesc_mote], 0, sizeof /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[__nesc_mote]);
  memset(&/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$foundDest[__nesc_mote], 0, sizeof /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$foundDest[__nesc_mote]);
  memset(&/*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree[__nesc_mote], 0, sizeof /*TestGraphAppC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree[__nesc_mote]);

  /* Module GraphEdgeWeightC$0 */
  memset(&/*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$weight[__nesc_mote], 0, sizeof /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$weight[__nesc_mote]);
  memset(&/*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$changed[__nesc_mote], 0, sizeof /*TestGraphAppC.GraphEdgeWeightC*/GraphEdgeWeightC$0$changed[__nesc_mote]);

}
#pragma pack(push,4)
#pragma pack(pop)
