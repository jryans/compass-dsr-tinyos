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
#line 258
static inline uint8_t __nesc_bf_decode8(const uint8_t *msg, unsigned offset, uint8_t length);
#line 258
static inline void __nesc_bf_encode8(uint8_t *msg, unsigned offset, uint8_t length, uint8_t x);
#line 258
static __inline uint8_t __nesc_ntohbf_uint8(const void *source, unsigned offset, uint8_t length);
#line 258
static __inline uint8_t __nesc_htonbf_uint8(void *target, unsigned offset, uint8_t length, uint8_t value);





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
void *__attribute((__cdecl__)) memmove(void *, const void *, size_t );
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
# 82 "/usr/include/math.h" 3
extern double fabs(double );
#line 97
extern double log(double );

extern double pow(double , double );
extern double sqrt(double );










typedef float float_t;
typedef double double_t;
#line 218
extern double erfc(double );
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

static sim_event_t *sim_queue_allocate_event(void);

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
  SIM_LOG_OUTPUT_COUNT = 358U
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






static sim_event_t *sim_queue_allocate_event(void);
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
static double RandomUniform(void );
# 46 "/opt/tinyos-2.x/tos/lib/tossim/randomlib.h"
static inline void RandomInitialise(int , int );
static double RandomUniform(void );
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
  nx_uint8_t data[30];
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
# 25 "/opt/tinyos-2.x/tos/chips/atm128/sim/atm128_sim.h"
enum __nesc_unnamed4265 {

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
enum __nesc_unnamed4266 {

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





enum __nesc_unnamed4267 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};
# 34 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4268 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4269 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4270 {
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
typedef struct __nesc_unnamed4271 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4272 {
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


enum __nesc_unnamed4273 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4274 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4275 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4276 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4277 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 141
typedef struct __nesc_unnamed4278 {

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
enum __nesc_unnamed4279 {
  CHANNEL_RSSI = ATM128_ADC_SNGL_ADC0, 
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1, 
  CHANNEL_BATTERY = ATM128_ADC_SNGL_ADC7, 
  CHANNEL_BANDGAP = 30, 
  CHANNEL_GND = 31, 

  ATM128_TIMER0_TICKSPPS = 32768
};
# 33 "/opt/tinyos-2.x/tos/lib/tossim/SimMainP.nc"
static void __nesc_nido_initialise(int node);
# 29 "/opt/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4280 {
#line 29
  int notUsed;
} 
#line 29
TMilli;
typedef struct __nesc_unnamed4281 {
#line 30
  int notUsed;
} 
#line 30
T32khz;
typedef struct __nesc_unnamed4282 {
#line 31
  int notUsed;
} 
#line 31
TMicro;
# 35 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.h"
typedef uint8_t packet_client_id_t;
typedef uint8_t packet_id_t  ;



enum __nesc_unnamed4283 {
  INVALID_PAYLOAD_LENGTH = 255, 
  INVALID_AM_TYPE = 255, 
  AM_NO_UPPER_DATA = 0
};
#line 61
enum __nesc_unnamed4284 {

  FORWARD_PACKET_TIME = 4
};




enum __nesc_unnamed4285 {
  SEND_RETRY_OFFSET = FORWARD_PACKET_TIME << 1, 
  SEND_DONE_OFFSET = FORWARD_PACKET_TIME << 2, 
  SEND_RETRY_WINDOW = SEND_RETRY_OFFSET - 1, 
  SEND_DONE_WINDOW = SEND_DONE_OFFSET - 1
};
# 35 "/home/jryans/tinyos-2.x-contrib-rice/tos/types/Iterator.h"
typedef bool iterator_end_t  ;





static inline iterator_end_t iteratorEndCombine(iterator_end_t a, iterator_end_t b);
# 43 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4286 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4287 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4288 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4289 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4290 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 99
#line 89
typedef union __nesc_unnamed4291 {

  uint8_t flat;
  struct __nesc_unnamed4292 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 121
#line 111
typedef union __nesc_unnamed4293 {

  uint8_t flat;
  struct __nesc_unnamed4294 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 137
#line 124
typedef union __nesc_unnamed4295 {

  uint8_t flat;
  struct __nesc_unnamed4296 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 154
#line 141
typedef union __nesc_unnamed4297 {

  uint8_t flat;
  struct __nesc_unnamed4298 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 169
#line 158
typedef union __nesc_unnamed4299 {

  uint8_t flat;
  struct __nesc_unnamed4300 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4301 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 193
#line 184
typedef union __nesc_unnamed4302 {

  uint8_t flat;
  struct __nesc_unnamed4303 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4304 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 232
#line 222
typedef union __nesc_unnamed4305 {

  uint8_t flat;
  struct __nesc_unnamed4306 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 250
#line 241
typedef union __nesc_unnamed4307 {

  uint8_t flat;
  struct __nesc_unnamed4308 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 300
#line 288
typedef union __nesc_unnamed4309 {

  uint8_t flat;
  struct __nesc_unnamed4310 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 315
#line 303
typedef union __nesc_unnamed4311 {

  uint8_t flat;
  struct __nesc_unnamed4312 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 35 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacket.h"
enum __nesc_unnamed4313 {
  AM_SINGLE = 4
};




#line 39
typedef nx_struct __nesc_unnamed4314 {
  nx_am_addr_t src;
  nx_am_addr_t dest;
} __attribute__((packed)) single_packet_header_t;
# 35 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/DsrControl.h"
enum __nesc_unnamed4315 {
  AM_DSR = 48, 
  DSR_ROUTE_CACHE_MAX_NODES = 4, 
  DSR_ROUTE_CACHE_MAX_LINKS = 8, 
  DSR_ROUTE_REQUEST_OUT_SIZE = 8, 
  DSR_ROUTE_REQUEST_IN_SIZE = 8, 
  DSR_ROUTE_REQUEST_IDS = 4, 
  DSR_HOP_LIMIT = 255, 
  DSR_MAX_REQUEST_ATTMEPTS = 16, 
  DSR_MAX_REQUEST_PERIOD = 10240, 
  DSR_INIT_REQUEST_PERIOD = 512
};





#line 48
typedef struct __nesc_unnamed4316 {
  am_addr_t node;
  uint8_t hopsLeft;
  uint8_t rreqsSinceRrep;
} dsr_route_request_out_t;






#line 54
typedef struct __nesc_unnamed4317 {
  am_addr_t node;
  uint8_t next;
  uint8_t ident[DSR_ROUTE_REQUEST_IDS];
  am_addr_t target[DSR_ROUTE_REQUEST_IDS];
} dsr_route_request_in_t;
# 59 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/DsrOptions.h"
enum dsr_option_types {
  DSR_ROUTE_REQUEST_TYPE = 1, 
  DSR_ROUTE_REPLY_TYPE = 2, 
  DSR_ROUTE_ERROR_TYPE = 3, 
  DSR_ACK_REQUEST_TYPE = 160, 
  DSR_ACK_TYPE = 32, 
  DSR_SOURCE_ROUTE_TYPE = 96
};
#line 85
#line 82
typedef nx_struct __nesc_unnamed4318 {
  nx_uint8_t ident;
  nx_am_addr_t addr[0];
} __attribute__((packed)) dsr_route_request_t;
#line 101
#line 99
typedef nx_struct __nesc_unnamed4319 {
  nx_am_addr_t addr[0];
} __attribute__((packed)) dsr_route_reply_t;
#line 125
#line 119
typedef nx_struct __nesc_unnamed4320 {
  unsigned char __nesc_filler0[1];

  nx_am_addr_t src;
  nx_am_addr_t dest;
  nx_uint8_t info[0];
} __attribute__((packed)) dsr_route_error_t;

enum dsr_route_error_types {
  DSR_NODE_UNREACHABLE_RET = 1, 
  DSR_FLOW_STATE_NOT_SUPPORTED_RET = 2, 
  DSR_OPTION_NOT_SUPPORTED_RET = 3
};



#line 133
typedef nx_struct __nesc_unnamed4321 {
  nx_am_addr_t addr;
} __attribute__((packed)) dsr_node_unreachable_rei_t;



#line 137
typedef nx_struct __nesc_unnamed4322 {
  nx_uint8_t type;
} __attribute__((packed)) dsr_option_not_supported_rei_t;
#line 153
#line 151
typedef nx_struct __nesc_unnamed4323 {
  nx_uint8_t ident;
} __attribute__((packed)) dsr_ack_request_t;
#line 171
#line 167
typedef nx_struct __nesc_unnamed4324 {
  nx_uint8_t ident;
  nx_am_addr_t src;
  nx_am_addr_t dest;
} __attribute__((packed)) dsr_ack_t;
#line 192
#line 187
typedef nx_struct __nesc_unnamed4325 {
  unsigned char __nesc_filler1[1];


  nx_am_addr_t addr[0];
} __attribute__((packed)) dsr_source_route_t;
# 35 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/Tlv.h"
typedef uint8_t tlv_key_t;






#line 38
typedef nx_struct __nesc_unnamed4326 {
  nx_uint8_t type;
  nx_uint8_t len;
  nx_uint8_t val[0];
} __attribute__((packed)) tlv_t;





#line 45
typedef nx_struct __nesc_unnamed4327 {
  nx_uint8_t len;
  tlv_t tlv[0];
} __attribute__((packed)) tlv_block_t;
# 35 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/RouteCache.h"
typedef uint8_t route_cache_link_id_t;
typedef uint8_t route_cache_node_id_t;
# 35 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/timer/DataTimer.h"
typedef uint16_t data_timer_time_t;
# 35 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/Graph.h"
typedef uint8_t graph_vertex_id_t;
typedef uint8_t graph_edge_id_t;
typedef uint8_t graph_edge_unit_weight_t;




#line 39
typedef struct __nesc_unnamed4328 {
  graph_vertex_id_t dest;
  graph_edge_id_t next;
} graph_edge_node_t;




#line 44
typedef struct __nesc_unnamed4329 {
  graph_vertex_id_t src;
  graph_edge_id_t current;
} graph_edge_list_t;

enum __nesc_unnamed4330 {
  GRAPH_PARALLEL_EDGES_ALLOWED = TRUE, 
  GRAPH_PARALLEL_EDGES_NOT_ALLOWED = FALSE
};
# 35 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/alloc/IndexedAlloc.h"
typedef uint8_t indexed_alloc_id_t;
# 35 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueue.h"
typedef uint8_t priority_queue_id_t;
enum TestDsrAppC$__nesc_unnamed4331 {
  TestDsrAppC$AM_TEST_A = 23, TestDsrAppC$AM_TEST_B = 25
};
typedef TMilli TestDsrP$Timer$precision_tag;
enum PacketEngineP$__nesc_unnamed4332 {
  PacketEngineP$SEND_SIZE = 3U, PacketEngineP$RECEIVE_SIZE = 5, PacketEngineP$BUFFER_SIZE = PacketEngineP$SEND_SIZE + PacketEngineP$RECEIVE_SIZE
};
typedef message_t PacketEngineP$ReceivePool$t;
typedef packet_id_t PacketEngineP$PacketWaitList$iterator_item_t;
typedef TMilli PacketEngineP$SendBackoff$precision_tag;
typedef message_t /*PacketEngineC.ReceivePoolC*/PoolC$0$pool_t;
typedef /*PacketEngineC.ReceivePoolC*/PoolC$0$pool_t /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool_t;
typedef /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool_t /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$t;
typedef uint16_t RandomMlcgP$SeedInit$parameter;
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size;
typedef uint8_t HplAtm128Timer0AsyncP$Timer0$timer_size;
typedef uint8_t HplAtm128Timer0AsyncP$Compare$size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$LocalTime$precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$size_type;
typedef dsr_route_request_out_t DsrControlP$RouteRequestOutCache$item_t;
typedef am_addr_t DsrControlP$RouteRequestOutTimer$data_t;
typedef dsr_route_request_in_t *DsrControlP$RouteRequestInEqual$equal_t;
typedef tlv_key_t DsrControlP$RouteErrorList$iterator_item_t;
typedef packet_id_t DsrControlP$SingleDsrPacketWaitList$iterator_item_t;
typedef dsr_route_request_in_t DsrControlP$RouteRequestInCache$item_t;
typedef packet_id_t DsrControlP$SinglePacketWaitList$iterator_item_t;
typedef route_cache_node_id_t DsrControlP$RouteNodeList$iterator_item_t;
typedef packet_id_t DsrControlP$DsrPacketWaitList$iterator_item_t;
typedef dsr_route_request_out_t *DsrControlP$RouteRequestOutEqual$equal_t;
typedef tlv_key_t TlvP$TlvList$iterator_item_t;
typedef graph_edge_unit_weight_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC*/GraphWeightedC$0$graph_edge_weight_t;
typedef graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$iterator_item_t;
typedef /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC*/GraphWeightedC$0$graph_edge_weight_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC*/SourceShortestPathC$0$graph_edge_weight_t;
typedef priority_queue_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$compare_t;
typedef /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC*/SourceShortestPathC$0$graph_edge_weight_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$graph_edge_weight_t;
typedef graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$iterator_item_t;
typedef graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$iterator_item_t;
typedef graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Compare$compare_t;
typedef /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$graph_edge_weight_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeWeight$weight_t;
typedef graph_edge_unit_weight_t GraphEdgeUnitWeightC$GraphEdgeWeight$weight_t;
typedef dsr_route_request_in_t /*DsrP.RouteRequestInCacheC*/LruDataCacheC$0$data_cache_item_t;
typedef /*DsrP.RouteRequestInCacheC*/LruDataCacheC$0$data_cache_item_t /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t;
typedef /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t */*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$Equal$equal_t;
typedef /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$DataCache$item_t;
typedef dsr_route_request_out_t /*DsrP.RouteRequestOutCacheC*/LruDataCacheC$1$data_cache_item_t;
typedef /*DsrP.RouteRequestOutCacheC*/LruDataCacheC$1$data_cache_item_t /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t;
typedef /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t */*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$Equal$equal_t;
typedef /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$item_t;
typedef am_addr_t /*DsrP.RouteRequestOutTimerC*/DataTimerC$0$data_timer_data_t;
typedef /*DsrP.RouteRequestOutTimerC*/DataTimerC$0$data_timer_data_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data_timer_data_t;
typedef /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data_timer_data_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$data_t;
typedef TMilli /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$precision_tag;
enum AMQueueP$__nesc_unnamed4333 {
  AMQueueP$NUM_CLIENTS = 2U
};
enum /*DsrC.SingleProcessorSenderC.PacketSenderC*/PacketSenderC$1$__nesc_unnamed4334 {
  PacketSenderC$1$PACKET_ENGINE_CLIENT_ID = 0U
};
enum /*TestDsrAppC.SendAC.PacketSenderC*/PacketSenderC$0$__nesc_unnamed4335 {
  PacketSenderC$0$PACKET_ENGINE_CLIENT_ID = 1U
};
enum /*TestDsrAppC.SendBC.PacketSenderC*/PacketSenderC$2$__nesc_unnamed4336 {
  PacketSenderC$2$PACKET_ENGINE_CLIENT_ID = 2U
};
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
static   void SimMoteP$SimMote$setEuid(long long int arg_0x7e5f0960);


static   int SimMoteP$SimMote$getVariableInfo(char *arg_0x7e5eb4b8, void **arg_0x7e5eb678, size_t *arg_0x7e5eb820);

static   void SimMoteP$SimMote$turnOff(void);
#line 40
static  void SimMoteP$SimMote$turnOn(void);
#line 35
static   long long int SimMoteP$SimMote$getEuid(void);


static   bool SimMoteP$SimMote$isOn(void);
#line 37
static   long long int SimMoteP$SimMote$getStartTime(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t TossimActiveMessageP$AMSend$send(
# 39 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
am_id_t arg_0x7e5b3c10, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x7e5b6610, message_t *arg_0x7e5b67c0, uint8_t arg_0x7e5b6948);
# 89 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  uint8_t TossimActiveMessageP$Snoop$payloadLength(
# 41 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
am_id_t arg_0x7e5a9d50, 
# 89 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7e5a9010);
#line 67
static  message_t *TossimActiveMessageP$Snoop$default$receive(
# 41 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
am_id_t arg_0x7e5a9d50, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7e5b09d8, void *arg_0x7e5b0b78, uint8_t arg_0x7e5b0d00);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t TossimActiveMessageP$Packet$payloadLength(message_t *arg_0x7e5a6c58);
#line 108
static  void *TossimActiveMessageP$Packet$getPayload(message_t *arg_0x7e5a30d0, uint8_t *arg_0x7e5a3278);
#line 95
static  uint8_t TossimActiveMessageP$Packet$maxPayloadLength(void);
#line 83
static  void TossimActiveMessageP$Packet$setPayloadLength(message_t *arg_0x7e5a5360, uint8_t arg_0x7e5a54e8);
# 89 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  uint8_t TossimActiveMessageP$Receive$payloadLength(
# 40 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
am_id_t arg_0x7e5a95b8, 
# 89 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7e5a9010);
#line 67
static  message_t *TossimActiveMessageP$Receive$default$receive(
# 40 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
am_id_t arg_0x7e5a95b8, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7e5b09d8, void *arg_0x7e5b0b78, uint8_t arg_0x7e5b0d00);
# 77 "/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
static  void TossimActiveMessageP$Model$receive(message_t *arg_0x7e592978);
#line 68
static  void TossimActiveMessageP$Model$sendDone(message_t *arg_0x7e592248, error_t arg_0x7e5923d0);










static  bool TossimActiveMessageP$Model$shouldAck(message_t *arg_0x7e592ef0);
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t TossimActiveMessageP$AMPacket$address(void);









static  am_addr_t TossimActiveMessageP$AMPacket$destination(message_t *arg_0x7e5a0a28);
#line 92
static  void TossimActiveMessageP$AMPacket$setDestination(message_t *arg_0x7e59c5f8, am_addr_t arg_0x7e59c788);
#line 136
static  am_id_t TossimActiveMessageP$AMPacket$type(message_t *arg_0x7e59af08);
#line 151
static  void TossimActiveMessageP$AMPacket$setType(message_t *arg_0x7e5994b8, am_id_t arg_0x7e599640);
#line 125
static  bool TossimActiveMessageP$AMPacket$isForMe(message_t *arg_0x7e59a7d8);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void TestDsrP$Timer$fired(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void TestDsrP$AMControl$startDone(error_t arg_0x7e541640);
#line 117
static  void TestDsrP$AMControl$stopDone(error_t arg_0x7e53c200);
# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static  void TestDsrP$Boot$booted(void);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void TestDsrP$SendB$sendDone(message_t *arg_0x7e5b4950, error_t arg_0x7e5b4ad8);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *TestDsrP$Receive$receive(message_t *arg_0x7e5b09d8, void *arg_0x7e5b0b78, uint8_t arg_0x7e5b0d00);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void TestDsrP$SendA$sendDone(message_t *arg_0x7e5b4950, error_t arg_0x7e5b4ad8);
# 89 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  uint8_t PacketEngineP$SubReceive$default$payloadLength(
# 94 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e2328, 
# 89 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7e5a9010);
#line 67
static  message_t *PacketEngineP$SubReceive$receive(
# 94 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e2328, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7e5b09d8, void *arg_0x7e5b0b78, uint8_t arg_0x7e5b0d00);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t PacketEngineP$SubSend$default$send(
# 93 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e49b0, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x7e5b6610, message_t *arg_0x7e5b67c0, uint8_t arg_0x7e5b6948);
#line 99
static  void PacketEngineP$SubSend$sendDone(
# 93 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e49b0, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7e5b4950, error_t arg_0x7e5b4ad8);
# 46 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineClient.nc"
static  am_id_t PacketEngineP$PacketEngineClient$default$upperType(
# 96 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
packet_client_id_t arg_0x7e4e14e0);
# 53 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineClient.nc"
static  am_id_t PacketEngineP$PacketEngineClient$default$defaultLowerType(
# 96 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
packet_client_id_t arg_0x7e4e14e0);
# 31 "/opt/tinyos-2.x/tos/interfaces/Intercept.nc"
static  bool PacketEngineP$Intercept$default$forward(
# 87 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e7e48, 
# 31 "/opt/tinyos-2.x/tos/interfaces/Intercept.nc"
message_t *arg_0x7e50b688, void *arg_0x7e50b828, uint16_t arg_0x7e50b9b8);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t PacketEngineP$Packet$payloadLength(message_t *arg_0x7e5a6c58);
#line 108
static  void *PacketEngineP$Packet$getPayload(message_t *arg_0x7e5a30d0, uint8_t *arg_0x7e5a3278);
#line 95
static  uint8_t PacketEngineP$Packet$maxPayloadLength(void);
#line 83
static  void PacketEngineP$Packet$setPayloadLength(message_t *arg_0x7e5a5360, uint8_t arg_0x7e5a54e8);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *PacketEngineP$Snoop$default$receive(
# 86 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e76d0, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7e5b09d8, void *arg_0x7e5b0b78, uint8_t arg_0x7e5b0d00);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t PacketEngineP$Send$send(
# 84 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
packet_client_id_t arg_0x7e4e95f0, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x7e5b6610, message_t *arg_0x7e5b67c0, uint8_t arg_0x7e5b6948);
#line 125
static  void *PacketEngineP$Send$getPayload(
# 84 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
packet_client_id_t arg_0x7e4e95f0, 
# 125 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7e5b35d0);
#line 99
static  void PacketEngineP$Send$default$sendDone(
# 84 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
packet_client_id_t arg_0x7e4e95f0, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7e5b4950, error_t arg_0x7e5b4ad8);
# 56 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/IndexedIterator.nc"
static  iterator_end_t PacketEngineP$PacketWaitList$end(
# 90 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e5bb8, 
# 56 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/IndexedIterator.nc"
PacketEngineP$PacketWaitList$iterator_item_t arg_0x7e4f6f00);
#line 48
static  PacketEngineP$PacketWaitList$iterator_item_t PacketEngineP$PacketWaitList$next(
# 90 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e5bb8, 
# 48 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/IndexedIterator.nc"
PacketEngineP$PacketWaitList$iterator_item_t arg_0x7e4f67c0);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t PacketEngineP$SubPacket$default$payloadLength(
# 95 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e2ac8, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
message_t *arg_0x7e5a6c58);
#line 108
static  void *PacketEngineP$SubPacket$default$getPayload(
# 95 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e2ac8, 
# 108 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
message_t *arg_0x7e5a30d0, uint8_t *arg_0x7e5a3278);
#line 83
static  void PacketEngineP$SubPacket$default$setPayloadLength(
# 95 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e2ac8, 
# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
message_t *arg_0x7e5a5360, uint8_t arg_0x7e5a54e8);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t PacketEngineP$Init$init(void);
# 165 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
static  am_id_t PacketEngineP$PacketEngine$upperType(
# 89 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e6b78, 
# 165 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7e4fd940);
#line 96
static  error_t PacketEngineP$PacketEngine$send(
# 89 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e6b78, 
# 96 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7e503288);
#line 133
static  error_t PacketEngineP$PacketEngine$receive(
# 89 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e6b78, 
# 133 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7e501100);
#line 55
static  void PacketEngineP$PacketEngine$default$sendAdded(
# 89 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e6b78, 
# 55 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7e507b20, message_t *arg_0x7e507cd0);










static  void PacketEngineP$PacketEngine$default$receiveAdded(
# 89 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e6b78, 
# 66 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7e506560, message_t *arg_0x7e506710);










static  void PacketEngineP$PacketEngine$default$snoopAdded(
# 89 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e6b78, 
# 77 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7e504010, message_t *arg_0x7e5041c0);







static  message_t *PacketEngineP$PacketEngine$packet(
# 89 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e6b78, 
# 85 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7e504a80);
#line 111
static  error_t PacketEngineP$PacketEngine$default$sendDone(
# 89 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e6b78, 
# 111 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7e503ad8, message_t *arg_0x7e503c88, error_t arg_0x7e503e10);
#line 144
static  error_t PacketEngineP$PacketEngine$drop(
# 89 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e6b78, 
# 144 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7e501948);
#line 157
static  packet_id_t PacketEngineP$PacketEngine$waitList(
# 89 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e6b78);
# 173 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
static  void PacketEngineP$PacketEngine$setUpperType(
# 89 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e6b78, 
# 173 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7e4fc100, am_id_t arg_0x7e4fc288);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *PacketEngineP$Receive$default$receive(
# 85 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e9f20, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7e5b09d8, void *arg_0x7e5b0b78, uint8_t arg_0x7e5b0d00);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void PacketEngineP$msgAdded$runTask(void);
#line 64
static  void PacketEngineP$msgAction$runTask(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void PacketEngineP$SendBackoff$fired(void);
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t PacketEngineP$StdControl$start(void);
# 96 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
static  /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$t */*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$get(void);
#line 61
static  bool /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$empty(void);
#line 88
static  error_t /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$put(/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$t *arg_0x7e4c8468);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Init$init(void);
#line 51
static  error_t StateImplP$Init$init(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static   void StateImplP$State$toIdle(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x7e330658);
# 66 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static   bool StateImplP$State$isState(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x7e330658, 
# 66 "/opt/tinyos-2.x/tos/interfaces/State.nc"
uint8_t arg_0x7e4c3bb0);
#line 61
static   bool StateImplP$State$isIdle(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x7e330658);
# 45 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static   error_t StateImplP$State$requestState(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x7e330658, 
# 45 "/opt/tinyos-2.x/tos/interfaces/State.nc"
uint8_t arg_0x7e4c5a38);





static   void StateImplP$State$forceState(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x7e330658, 
# 51 "/opt/tinyos-2.x/tos/interfaces/State.nc"
uint8_t arg_0x7e4c3010);
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t RandomMlcgP$Random$rand16(void);
#line 35
static   uint32_t RandomMlcgP$Random$rand32(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RandomMlcgP$Init$init(void);
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void);
#line 92
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type arg_0x7e2d6ac0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type arg_0x7e2d6c50);
#line 105
static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void);
#line 62
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void);
#line 52
static   HplAtm128Timer0AsyncP$Timer0$timer_size HplAtm128Timer0AsyncP$Timer0$get(void);
#line 101
static   uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void);
#line 58
static   void HplAtm128Timer0AsyncP$Timer0$set(HplAtm128Timer0AsyncP$Timer0$timer_size arg_0x7e29b270);
# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static   int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void);
#line 32
static   void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void);
# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static   Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void);
#line 37
static   void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t arg_0x7e293ba8);
# 39 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   HplAtm128Timer0AsyncP$Compare$size_type HplAtm128Timer0AsyncP$Compare$get(void);





static   void HplAtm128Timer0AsyncP$Compare$set(HplAtm128Timer0AsyncP$Compare$size_type arg_0x7e280ad8);










static   void HplAtm128Timer0AsyncP$Compare$start(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void);
# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void);
#line 118
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t arg_0x7e530120, uint32_t arg_0x7e5302b0);
#line 67
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void);
#line 125
static  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e0f48a8);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e0f48a8);
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e0f48a8, 
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t arg_0x7e5334d0);




static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e0f48a8);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void TossimPacketModelC$stopDoneTask$runTask(void);
# 49 "/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
static  error_t TossimPacketModelC$Packet$send(int arg_0x7e593190, message_t *arg_0x7e593340, uint8_t arg_0x7e5934c8);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void TossimPacketModelC$sendDoneTask$runTask(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t TossimPacketModelC$Init$init(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void TossimPacketModelC$startDoneTask$runTask(void);
# 83 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t TossimPacketModelC$Control$start(void);
# 48 "/opt/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
static   error_t TossimPacketModelC$PacketAcknowledgements$requestAck(message_t *arg_0x7e094f28);
#line 60
static   error_t TossimPacketModelC$PacketAcknowledgements$noAck(message_t *arg_0x7e090648);
# 51 "/opt/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
static  void TossimPacketModelC$GainRadioModel$receive(message_t *arg_0x7e077120);
#line 50
static  void TossimPacketModelC$GainRadioModel$acked(message_t *arg_0x7e078c60);

static  bool TossimPacketModelC$GainRadioModel$shouldAck(message_t *arg_0x7e0775d8);
#line 40
static  void CpmModelC$Model$putOnAirTo(int arg_0x7e079720, 
message_t *arg_0x7e0798e0, 
bool arg_0x7e079a78, 
sim_time_t arg_0x7e079c18, 
double arg_0x7e079da8, 
double arg_0x7e078010);


static  bool CpmModelC$Model$clearChannel(void);
# 46 "/opt/tinyos-2.x/tos/lib/tossim/ActiveMessageAddressC.nc"
static   am_addr_t ActiveMessageAddressC$amAddress(void);
# 68 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/timer/DataTimer.nc"
static  void DsrControlP$RouteRequestOutTimer$expired(DsrControlP$RouteRequestOutTimer$data_t arg_0x7deb8168);
# 48 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/Equal.nc"
static  bool DsrControlP$RouteRequestInEqual$test(DsrControlP$RouteRequestInEqual$equal_t arg_0x7df03010, DsrControlP$RouteRequestInEqual$equal_t arg_0x7df03198);
# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static  void DsrControlP$Boot$booted(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t DsrControlP$Packet$payloadLength(message_t *arg_0x7e5a6c58);
#line 108
static  void *DsrControlP$Packet$getPayload(message_t *arg_0x7e5a30d0, uint8_t *arg_0x7e5a3278);
#line 83
static  void DsrControlP$Packet$setPayloadLength(message_t *arg_0x7e5a5360, uint8_t arg_0x7e5a54e8);
# 55 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
static  void DsrControlP$SingleDsrPacketEngine$sendAdded(packet_id_t arg_0x7e507b20, message_t *arg_0x7e507cd0);










static  void DsrControlP$SingleDsrPacketEngine$receiveAdded(packet_id_t arg_0x7e506560, message_t *arg_0x7e506710);










static  void DsrControlP$SingleDsrPacketEngine$snoopAdded(packet_id_t arg_0x7e504010, message_t *arg_0x7e5041c0);
#line 111
static  error_t DsrControlP$SingleDsrPacketEngine$sendDone(packet_id_t arg_0x7e503ad8, message_t *arg_0x7e503c88, error_t arg_0x7e503e10);
#line 55
static  void DsrControlP$SinglePacketEngine$sendAdded(packet_id_t arg_0x7e507b20, message_t *arg_0x7e507cd0);










static  void DsrControlP$SinglePacketEngine$receiveAdded(packet_id_t arg_0x7e506560, message_t *arg_0x7e506710);










static  void DsrControlP$SinglePacketEngine$snoopAdded(packet_id_t arg_0x7e504010, message_t *arg_0x7e5041c0);
#line 111
static  error_t DsrControlP$SinglePacketEngine$sendDone(packet_id_t arg_0x7e503ad8, message_t *arg_0x7e503c88, error_t arg_0x7e503e10);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void DsrControlP$Send$sendDone(message_t *arg_0x7e5b4950, error_t arg_0x7e5b4ad8);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void DsrControlP$composePkt$runTask(void);
# 55 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
static  void DsrControlP$DsrPacketEngine$sendAdded(packet_id_t arg_0x7e507b20, message_t *arg_0x7e507cd0);










static  void DsrControlP$DsrPacketEngine$receiveAdded(packet_id_t arg_0x7e506560, message_t *arg_0x7e506710);










static  void DsrControlP$DsrPacketEngine$snoopAdded(packet_id_t arg_0x7e504010, message_t *arg_0x7e5041c0);
#line 111
static  error_t DsrControlP$DsrPacketEngine$sendDone(packet_id_t arg_0x7e503ad8, message_t *arg_0x7e503c88, error_t arg_0x7e503e10);
# 88 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/RouteCache.nc"
static  void DsrControlP$RouteCache$routeUpdate(route_cache_node_id_t arg_0x7ded2c48, route_cache_node_id_t arg_0x7ded2de0, 
route_cache_link_id_t arg_0x7ded1010);
# 48 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/Equal.nc"
static  bool DsrControlP$RouteRequestOutEqual$test(DsrControlP$RouteRequestOutEqual$equal_t arg_0x7df03010, DsrControlP$RouteRequestOutEqual$equal_t arg_0x7df03198);
# 82 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvMultiple.nc"
static  void *TlvP$TlvMultiple$value(
# 49 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7dd86308, 
# 82 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvMultiple.nc"
void *arg_0x7def18f8, tlv_key_t arg_0x7def1a88);
#line 120
static  tlv_key_t TlvP$TlvMultiple$list(
# 49 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7dd86308, 
# 120 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvMultiple.nc"
void *arg_0x7dee3ce0);
#line 110
static  error_t TlvP$TlvMultiple$remove(
# 49 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7dd86308, 
# 110 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvMultiple.nc"
void *arg_0x7dee31a0, tlv_key_t arg_0x7dee3330, uint8_t arg_0x7dee34b8);
#line 52
static  uint8_t TlvP$TlvMultiple$length(
# 49 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7dd86308, 
# 52 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvMultiple.nc"
void *arg_0x7def2010, tlv_key_t arg_0x7def21a0);
#line 72
static  error_t TlvP$TlvMultiple$setLength(
# 49 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7dd86308, 
# 72 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvMultiple.nc"
void *arg_0x7def29b0, tlv_key_t arg_0x7def2b40, uint8_t arg_0x7def2cc8, uint8_t arg_0x7def2e50);
#line 99
static  error_t TlvP$TlvMultiple$add(
# 49 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7dd86308, 
# 99 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvMultiple.nc"
void *arg_0x7def02e8, tlv_key_t *arg_0x7def0498, uint8_t arg_0x7def0620, uint8_t arg_0x7def07a8);
# 60 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/StaticIndexedIterator.nc"
static  iterator_end_t TlvP$TlvList$end(
# 50 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7dd86df0, 
# 60 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/StaticIndexedIterator.nc"
void *arg_0x7dede010, TlvP$TlvList$iterator_item_t arg_0x7dede1a0);
#line 51
static  TlvP$TlvList$iterator_item_t TlvP$TlvList$next(
# 50 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7dd86df0, 
# 51 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/StaticIndexedIterator.nc"
void *arg_0x7dedf650, TlvP$TlvList$iterator_item_t arg_0x7dedf7e0);
# 66 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvBlock.nc"
static  uint8_t TlvP$TlvBlock$length(void *arg_0x7defdbe0);
#line 48
static  void TlvP$TlvBlock$add(void *arg_0x7deff8b0, uint8_t arg_0x7deffa38);
# 75 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/Tlv.nc"
static  void *TlvP$Tlv$value(
# 48 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7dd909c0, 
# 75 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/Tlv.nc"
void *arg_0x7def8358);
#line 102
static  error_t TlvP$Tlv$remove(
# 48 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7dd909c0, 
# 102 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/Tlv.nc"
void *arg_0x7def7868, uint8_t arg_0x7def79f0);
#line 50
static  uint8_t TlvP$Tlv$length(
# 48 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7dd909c0, 
# 50 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/Tlv.nc"
void *arg_0x7defae58);
#line 66
static  error_t TlvP$Tlv$setLength(
# 48 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7dd909c0, 
# 66 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/Tlv.nc"
void *arg_0x7def9688, uint8_t arg_0x7def9810, uint8_t arg_0x7def9998);
#line 92
static  error_t TlvP$Tlv$add(
# 48 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7dd909c0, 
# 92 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/Tlv.nc"
void *arg_0x7def8b40, uint8_t arg_0x7def8cc8, uint8_t arg_0x7def8e50);
# 143 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/Graph.nc"
static  void SimpleLinkCacheP$Graph$inserted(graph_edge_id_t arg_0x7dcf9800);
# 54 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPath.nc"
static  void SimpleLinkCacheP$SourceShortestPath$builtTree(graph_vertex_id_t arg_0x7dcf42e8);
#line 72
static  void SimpleLinkCacheP$SourceShortestPath$builtTreeTo(graph_vertex_id_t arg_0x7dcf2450, graph_vertex_id_t arg_0x7dcf25e8, 
error_t arg_0x7dcf2788);
# 49 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/RouteCache.nc"
static  void SimpleLinkCacheP$RouteCache$addPath(route_cache_node_id_t arg_0x7ded4c98[], route_cache_link_id_t arg_0x7ded4e38, bool arg_0x7ded3010);
#line 69
static  void SimpleLinkCacheP$RouteCache$needRoute(route_cache_node_id_t arg_0x7ded22e0, route_cache_node_id_t arg_0x7ded2478);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$Init$init(void);
# 34 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
static   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$BitVector$clearAll(void);
#line 46
static   bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$BitVector$get(uint16_t arg_0x7deb2f08);





static   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$BitVector$set(uint16_t arg_0x7deb1448);
# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$Boot$booted(void);
# 79 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/alloc/IndexedAlloc.nc"
static  indexed_alloc_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$IndexedAlloc$alloc(void);
# 126 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/Graph.nc"
static  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edge(graph_vertex_id_t arg_0x7dcfa548, graph_vertex_id_t arg_0x7dcfa6e0);
#line 105
static  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$insert(graph_vertex_id_t arg_0x7dcfc128, graph_vertex_id_t arg_0x7dcfc2c0);
#line 136
static  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edgeList(graph_vertex_id_t arg_0x7dcf9010);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Init$init(void);
# 54 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdge.nc"
static  graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdge$dest(graph_edge_id_t arg_0x7dcd4c58);
# 56 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/IndexedIterator.nc"
static  iterator_end_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$end(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$iterator_item_t arg_0x7e4f6f00);
#line 48
static  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$iterator_item_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$next(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$iterator_item_t arg_0x7e4f67c0);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Init$init(void);
# 122 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueue.nc"
static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$clear(void);
#line 72
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$insert(priority_queue_id_t arg_0x7dc1dce8);
#line 87
static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$moveUp(priority_queue_id_t arg_0x7dc1bd10);
#line 47
static  bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$empty(void);
#line 117
static  priority_queue_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$removeBest(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$runTask(void);
# 143 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/Graph.nc"
static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$inserted(graph_edge_id_t arg_0x7dcf9800);
# 56 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/IndexedIterator.nc"
static  iterator_end_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$end(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$iterator_item_t arg_0x7e4f6f00);
#line 48
static  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$iterator_item_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$next(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$iterator_item_t arg_0x7e4f67c0);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Init$init(void);
# 47 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPath.nc"
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildTree(graph_vertex_id_t arg_0x7dcf5af8);
#line 93
static  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$edgeCount(graph_vertex_id_t arg_0x7dcf1848);
#line 64
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildTreeTo(graph_vertex_id_t arg_0x7dcf4a50, graph_vertex_id_t arg_0x7dcf4be8);
# 49 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/Compare.nc"
static  int16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Compare$test(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Compare$compare_t arg_0x7dc15628, /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Compare$compare_t arg_0x7dc157b8);
# 58 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
static   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$BitVector$clear(uint16_t arg_0x7deb1948);
#line 46
static   bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$BitVector$get(uint16_t arg_0x7deb2f08);





static   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$BitVector$set(uint16_t arg_0x7deb1448);
#line 77
static   uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$BitVector$size(void);
# 55 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdgeWeight.nc"
static  GraphEdgeUnitWeightC$GraphEdgeWeight$weight_t GraphEdgeUnitWeightC$GraphEdgeWeight$weight(graph_edge_id_t arg_0x7dcc5170);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$Init$init(void);
# 40 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/cache/DataCache.nc"
static  /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$DataCache$item_t */*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$DataCache$insert(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$DataCache$item_t *arg_0x7dec2998);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$Init$init(void);
# 40 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/cache/DataCache.nc"
static  /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$item_t */*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$insert(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$item_t *arg_0x7dec2998);








static  /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$item_t */*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$lookup(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$item_t *arg_0x7dec1010);
# 51 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/timer/DataTimer.nc"
static  error_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$start(/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$data_t arg_0x7deb9010, data_timer_time_t arg_0x7deb91a8);









static  error_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$stop(/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$data_t arg_0x7deb99a0);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Init$init(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$fired(void);
# 34 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
static   void /*DsrP.ComposeC*/BitVectorC$0$BitVector$clearAll(void);
#line 58
static   void /*DsrP.ComposeC*/BitVectorC$0$BitVector$clear(uint16_t arg_0x7deb1948);
#line 46
static   bool /*DsrP.ComposeC*/BitVectorC$0$BitVector$get(uint16_t arg_0x7deb2f08);





static   void /*DsrP.ComposeC*/BitVectorC$0$BitVector$set(uint16_t arg_0x7deb1448);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t arg_0x7e5b6610, message_t *arg_0x7e5b67c0, uint8_t arg_0x7e5b6948);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *arg_0x7dac8a28, error_t arg_0x7dac8bb0);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(
# 40 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x7dab6e88, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7e5b4950, error_t arg_0x7e5b4ad8);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7dab6528, 
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x7dac9920, uint8_t arg_0x7dac9aa8);
#line 89
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7dab6528, 
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x7dac8a28, error_t arg_0x7dac8bb0);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void);
#line 64
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t SinglePacketP$SubSend$default$send(
# 49 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
am_id_t arg_0x7da57440, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x7e5b6610, message_t *arg_0x7e5b67c0, uint8_t arg_0x7e5b6948);
#line 125
static  void *SinglePacketP$SubSend$default$getPayload(
# 49 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
am_id_t arg_0x7da57440, 
# 125 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7e5b35d0);
#line 99
static  void SinglePacketP$SubSend$sendDone(
# 49 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
am_id_t arg_0x7da57440, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7e5b4950, error_t arg_0x7e5b4ad8);
# 47 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacket.nc"
static  am_addr_t SinglePacketP$SinglePacket$source(message_t *arg_0x7df54918);
#line 67
static  am_addr_t SinglePacketP$SinglePacket$destination(message_t *arg_0x7df53b18);
#line 59
static  void SinglePacketP$SinglePacket$setSource(message_t *arg_0x7df530e0, am_addr_t arg_0x7df53270);
#line 79
static  void SinglePacketP$SinglePacket$setDestination(message_t *arg_0x7df52300, am_addr_t arg_0x7df52490);









static  bool SinglePacketP$SinglePacket$isForMe(message_t *arg_0x7df52d30);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *SinglePacketP$SubReceive$receive(
# 50 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
am_id_t arg_0x7da57da0, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7e5b09d8, void *arg_0x7e5b0b78, uint8_t arg_0x7e5b0d00);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t SinglePacketP$Packet$payloadLength(message_t *arg_0x7e5a6c58);
#line 108
static  void *SinglePacketP$Packet$getPayload(message_t *arg_0x7e5a30d0, uint8_t *arg_0x7e5a3278);
#line 83
static  void SinglePacketP$Packet$setPayloadLength(message_t *arg_0x7e5a5360, uint8_t arg_0x7e5a54e8);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t SinglePacketP$Send$send(
# 44 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
am_id_t arg_0x7da59c48, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x7e5b6610, message_t *arg_0x7e5b67c0, uint8_t arg_0x7e5b6948);
#line 125
static  void *SinglePacketP$Send$getPayload(
# 44 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
am_id_t arg_0x7da59c48, 
# 125 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7e5b35d0);
#line 99
static  void SinglePacketP$Send$default$sendDone(
# 44 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
am_id_t arg_0x7da59c48, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7e5b4950, error_t arg_0x7e5b4ad8);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *SinglePacketP$Receive$default$receive(
# 45 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
am_id_t arg_0x7da58598, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7e5b09d8, void *arg_0x7e5b0b78, uint8_t arg_0x7e5b0d00);
# 46 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineClient.nc"
static  am_id_t /*DsrC.SingleProcessorSenderC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$0$PacketEngineClient$upperType(void);






static  am_id_t /*DsrC.SingleProcessorSenderC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$0$PacketEngineClient$defaultLowerType(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t arg_0x7e5b6610, message_t *arg_0x7e5b67c0, uint8_t arg_0x7e5b6948);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *arg_0x7dac8a28, error_t arg_0x7dac8bb0);
# 46 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineClient.nc"
static  am_id_t /*TestDsrAppC.SendAC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$1$PacketEngineClient$upperType(void);






static  am_id_t /*TestDsrAppC.SendAC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$1$PacketEngineClient$defaultLowerType(void);
#line 46
static  am_id_t /*TestDsrAppC.SendBC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$2$PacketEngineClient$upperType(void);






static  am_id_t /*TestDsrAppC.SendBC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$2$PacketEngineClient$defaultLowerType(void);
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



enum SimSchedulerBasicP$__nesc_unnamed4337 {

  SimSchedulerBasicP$NUM_TASKS = 11U, 
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
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void TossimActiveMessageP$AMSend$sendDone(
# 39 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
am_id_t arg_0x7e5b3c10, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7e5b4950, error_t arg_0x7e5b4ad8);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *TossimActiveMessageP$Snoop$receive(
# 41 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
am_id_t arg_0x7e5a9d50, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7e5b09d8, void *arg_0x7e5b0b78, uint8_t arg_0x7e5b0d00);
#line 67
static  message_t *TossimActiveMessageP$Receive$receive(
# 40 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
am_id_t arg_0x7e5a95b8, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7e5b09d8, void *arg_0x7e5b0b78, uint8_t arg_0x7e5b0d00);
# 49 "/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
static  error_t TossimActiveMessageP$Model$send(int arg_0x7e593190, message_t *arg_0x7e593340, uint8_t arg_0x7e5934c8);
# 53 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
message_t TossimActiveMessageP$buffer[1000];
message_t *TossimActiveMessageP$bufferPointer[1000];

static inline tossim_header_t *TossimActiveMessageP$getHeader(message_t *amsg);



static  error_t TossimActiveMessageP$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len);
#line 90
static  uint8_t TossimActiveMessageP$Receive$payloadLength(am_id_t id, message_t *m);







static  uint8_t TossimActiveMessageP$Snoop$payloadLength(am_id_t id, message_t *m);



static inline  void TossimActiveMessageP$Model$sendDone(message_t *msg, error_t result);





static  void TossimActiveMessageP$Model$receive(message_t *msg);
#line 125
static inline  bool TossimActiveMessageP$Model$shouldAck(message_t *msg);








static inline  am_addr_t TossimActiveMessageP$AMPacket$address(void);



static  am_addr_t TossimActiveMessageP$AMPacket$destination(message_t *amsg);




static  void TossimActiveMessageP$AMPacket$setDestination(message_t *amsg, am_addr_t addr);
#line 158
static  bool TossimActiveMessageP$AMPacket$isForMe(message_t *amsg);




static  am_id_t TossimActiveMessageP$AMPacket$type(message_t *amsg);




static  void TossimActiveMessageP$AMPacket$setType(message_t *amsg, am_id_t t);






static inline  uint8_t TossimActiveMessageP$Packet$payloadLength(message_t *msg);



static inline  void TossimActiveMessageP$Packet$setPayloadLength(message_t *msg, uint8_t len);



static inline  uint8_t TossimActiveMessageP$Packet$maxPayloadLength(void);



static  void *TossimActiveMessageP$Packet$getPayload(message_t *msg, uint8_t *len);
#line 208
static inline   message_t *TossimActiveMessageP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline   message_t *TossimActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
#line 232
static inline void TossimActiveMessageP$active_message_deliver_handle(sim_event_t *evt);





static inline sim_event_t *TossimActiveMessageP$allocate_deliver_event(int node, message_t *msg, sim_time_t t);
#line 250
void active_message_deliver(int node, message_t *msg, sim_time_t t)   ;
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void TestDsrP$Timer$startOneShot(uint32_t arg_0x7e5334d0);
# 83 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t TestDsrP$AMControl$start(void);
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t TestDsrP$PEControl$start(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t TestDsrP$SendB$send(am_addr_t arg_0x7e5b6610, message_t *arg_0x7e5b67c0, uint8_t arg_0x7e5b6948);
#line 125
static  void *TestDsrP$SendB$getPayload(message_t *arg_0x7e5b35d0);
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t TestDsrP$AMPacket$address(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t TestDsrP$SendA$send(am_addr_t arg_0x7e5b6610, message_t *arg_0x7e5b67c0, uint8_t arg_0x7e5b6948);
#line 125
static  void *TestDsrP$SendA$getPayload(message_t *arg_0x7e5b35d0);
# 56 "TestDsrP.nc"
message_t TestDsrP$testPktBufA[1000];
message_t *TestDsrP$testPktA[1000];

message_t TestDsrP$testPktBufB[1000];
message_t *TestDsrP$testPktB[1000];



static inline  void TestDsrP$Boot$booted(void);





static inline  void TestDsrP$Timer$fired(void);
#line 93
static inline  void TestDsrP$AMControl$startDone(error_t error);
#line 109
static inline  void TestDsrP$AMControl$stopDone(error_t error);



static inline  void TestDsrP$SendA$sendDone(message_t *msg, error_t error);



static inline  void TestDsrP$SendB$sendDone(message_t *msg, error_t error);



static  message_t *TestDsrP$Receive$receive(message_t *msg, void *payload, uint8_t len);
# 89 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  uint8_t PacketEngineP$SubReceive$payloadLength(
# 94 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e2328, 
# 89 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7e5a9010);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t PacketEngineP$SubSend$send(
# 93 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e49b0, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x7e5b6610, message_t *arg_0x7e5b67c0, uint8_t arg_0x7e5b6948);
# 46 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineClient.nc"
static  am_id_t PacketEngineP$PacketEngineClient$upperType(
# 96 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
packet_client_id_t arg_0x7e4e14e0);
# 53 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineClient.nc"
static  am_id_t PacketEngineP$PacketEngineClient$defaultLowerType(
# 96 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
packet_client_id_t arg_0x7e4e14e0);
# 31 "/opt/tinyos-2.x/tos/interfaces/Intercept.nc"
static  bool PacketEngineP$Intercept$forward(
# 87 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e7e48, 
# 31 "/opt/tinyos-2.x/tos/interfaces/Intercept.nc"
message_t *arg_0x7e50b688, void *arg_0x7e50b828, uint16_t arg_0x7e50b9b8);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *PacketEngineP$Snoop$receive(
# 86 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e76d0, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7e5b09d8, void *arg_0x7e5b0b78, uint8_t arg_0x7e5b0d00);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void PacketEngineP$Send$sendDone(
# 84 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
packet_client_id_t arg_0x7e4e95f0, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7e5b4950, error_t arg_0x7e5b4ad8);
# 96 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
static  PacketEngineP$ReceivePool$t *PacketEngineP$ReceivePool$get(void);
#line 61
static  bool PacketEngineP$ReceivePool$empty(void);
#line 88
static  error_t PacketEngineP$ReceivePool$put(PacketEngineP$ReceivePool$t *arg_0x7e4c8468);
# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static   void PacketEngineP$SendState$toIdle(void);
#line 45
static   error_t PacketEngineP$SendState$requestState(uint8_t arg_0x7e4c5a38);





static   void PacketEngineP$SendState$forceState(uint8_t arg_0x7e4c3010);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t PacketEngineP$SubPacket$payloadLength(
# 95 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e2ac8, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
message_t *arg_0x7e5a6c58);
#line 108
static  void *PacketEngineP$SubPacket$getPayload(
# 95 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e2ac8, 
# 108 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
message_t *arg_0x7e5a30d0, uint8_t *arg_0x7e5a3278);
#line 83
static  void PacketEngineP$SubPacket$setPayloadLength(
# 95 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e2ac8, 
# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
message_t *arg_0x7e5a5360, uint8_t arg_0x7e5a54e8);
# 55 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
static  void PacketEngineP$PacketEngine$sendAdded(
# 89 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e6b78, 
# 55 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7e507b20, message_t *arg_0x7e507cd0);










static  void PacketEngineP$PacketEngine$receiveAdded(
# 89 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e6b78, 
# 66 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7e506560, message_t *arg_0x7e506710);










static  void PacketEngineP$PacketEngine$snoopAdded(
# 89 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e6b78, 
# 77 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7e504010, message_t *arg_0x7e5041c0);
#line 111
static  error_t PacketEngineP$PacketEngine$sendDone(
# 89 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e6b78, 
# 111 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7e503ad8, message_t *arg_0x7e503c88, error_t arg_0x7e503e10);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *PacketEngineP$Receive$receive(
# 85 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e4e9f20, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7e5b09d8, void *arg_0x7e5b0b78, uint8_t arg_0x7e5b0d00);
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t PacketEngineP$Random$rand16(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t PacketEngineP$msgAdded$postTask(void);
#line 56
static   error_t PacketEngineP$msgAction$postTask(void);
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void PacketEngineP$SendBackoff$startOneShot(uint32_t arg_0x7e5334d0);
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t PacketEngineP$AMPacket$destination(message_t *arg_0x7e5a0a28);
#line 136
static  am_id_t PacketEngineP$AMPacket$type(message_t *arg_0x7e59af08);
#line 151
static  void PacketEngineP$AMPacket$setType(message_t *arg_0x7e5994b8, am_id_t arg_0x7e599640);
#line 125
static  bool PacketEngineP$AMPacket$isForMe(message_t *arg_0x7e59a7d8);
# 189 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
enum PacketEngineP$__nesc_unnamed4338 {
#line 189
  PacketEngineP$msgAdded = 0U
};
#line 189
typedef int PacketEngineP$__nesc_sillytask_msgAdded[PacketEngineP$msgAdded];
enum PacketEngineP$__nesc_unnamed4339 {
#line 190
  PacketEngineP$msgAction = 1U
};
#line 190
typedef int PacketEngineP$__nesc_sillytask_msgAction[PacketEngineP$msgAction];
#line 121
#line 116
typedef struct PacketEngineP$__nesc_unnamed4340 {
  unsigned state : 6;
  unsigned srcLayer : 1;
  uint8_t clientId;
  message_t *msg;
} PacketEngineP$msg_entry_t;


enum PacketEngineP$__nesc_unnamed4341 {

  PacketEngineP$PKT_FREE = 1 << 0, 

  PacketEngineP$PKT_ADDED = 1 << 1, 

  PacketEngineP$PKT_WAIT = 1 << 2, 

  PacketEngineP$PKT_SEND = 1 << 3, 

  PacketEngineP$PKT_RECEIVE = 1 << 4, 

  PacketEngineP$PKT_SEND_INTERCEPT = 1 << 5
};


enum PacketEngineP$__nesc_unnamed4342 {

  PacketEngineP$PKT_UPPER_LAYER, 

  PacketEngineP$PKT_LOWER_LAYER
};


enum PacketEngineP$__nesc_unnamed4343 {
  PacketEngineP$S_IDLE, 
  PacketEngineP$S_SENDING, 
  PacketEngineP$S_BACKOFF
};


PacketEngineP$msg_entry_t PacketEngineP$msgBuffer[1000][PacketEngineP$BUFFER_SIZE];


packet_id_t PacketEngineP$nextFreePkt[1000];


packet_id_t PacketEngineP$nextAddedPkt[1000];


packet_id_t PacketEngineP$nextWaitPkt[1000];


packet_id_t PacketEngineP$nextActionPkt[1000];


bool PacketEngineP$running[1000];



static inline void PacketEngineP$moveFreeIndex(void);
static inline void PacketEngineP$moveAddedIndex(void);
static inline void PacketEngineP$moveWaitIndex(void);
static inline void PacketEngineP$moveActionIndex(void);
static void PacketEngineP$moveIndex(packet_id_t *idx, uint8_t state);
static inline void PacketEngineP$printIndices(void);
static void PacketEngineP$addPacket(message_t *msg);
static void PacketEngineP$markPacket(packet_id_t pid, uint8_t state);
static void PacketEngineP$removePacket(packet_id_t pid);
static void PacketEngineP$startSendBackoff(uint16_t mask, uint16_t offset);
static am_id_t PacketEngineP$uid(message_t *msg);
static void PacketEngineP$setUid(message_t *msg, am_id_t newUid);
static inline am_id_t PacketEngineP$lid(message_t *msg);
static inline void PacketEngineP$setLid(message_t *msg, am_id_t newLid);
static void PacketEngineP$setIds(message_t *msg, packet_client_id_t clientId);





static inline  error_t PacketEngineP$Init$init(void);
#line 215
static inline  error_t PacketEngineP$StdControl$start(void);
#line 256
static  error_t PacketEngineP$Send$send(packet_client_id_t clientId, am_addr_t addr, message_t *msg, uint8_t len);
#line 292
static inline   void PacketEngineP$Send$default$sendDone(packet_client_id_t clientId, message_t *msg, error_t error);
#line 335
static inline  void *PacketEngineP$Send$getPayload(packet_client_id_t clientId, message_t *msg);
#line 347
static inline   am_id_t PacketEngineP$PacketEngineClient$default$upperType(packet_client_id_t clientId);









static inline   am_id_t PacketEngineP$PacketEngineClient$default$defaultLowerType(packet_client_id_t clientId);
#line 402
static inline   message_t *PacketEngineP$Receive$default$receive(am_id_t upperId, message_t *msg, void *payload, uint8_t len);
#line 447
static inline   message_t *PacketEngineP$Snoop$default$receive(am_id_t upperId, message_t *msg, void *payload, uint8_t len);
#line 466
static  message_t *PacketEngineP$SubReceive$receive(am_id_t lowerId, message_t *msg, void *payload, uint8_t len);
#line 496
static inline   uint8_t PacketEngineP$SubReceive$default$payloadLength(am_id_t lowerId, message_t *msg);
#line 511
static inline   error_t PacketEngineP$SubSend$default$send(am_id_t lowerId, am_addr_t addr, message_t *msg, uint8_t len);
#line 525
static  void PacketEngineP$SubSend$sendDone(am_id_t lowerId, message_t *msg, error_t error);
#line 569
static  uint8_t PacketEngineP$Packet$payloadLength(message_t *msg);
#line 586
static  void PacketEngineP$Packet$setPayloadLength(message_t *msg, uint8_t len);
#line 600
static inline  uint8_t PacketEngineP$Packet$maxPayloadLength(void);
#line 617
static  void *PacketEngineP$Packet$getPayload(message_t *msg, uint8_t *len);
#line 632
static inline   uint8_t PacketEngineP$SubPacket$default$payloadLength(am_id_t lowerId, message_t *msg);










static inline   void PacketEngineP$SubPacket$default$setPayloadLength(am_id_t lowerId, message_t *msg, uint8_t len);










static inline   void *PacketEngineP$SubPacket$default$getPayload(am_id_t lowerId, message_t *msg, uint8_t *len);
#line 666
static inline  void PacketEngineP$SendBackoff$fired(void);
#line 680
static inline   void PacketEngineP$PacketEngine$default$sendAdded(am_id_t lowerId, packet_id_t pid, message_t *msg);










static inline   void PacketEngineP$PacketEngine$default$receiveAdded(am_id_t lowerId, packet_id_t pid, message_t *msg);










static inline   void PacketEngineP$PacketEngine$default$snoopAdded(am_id_t lowerId, packet_id_t pid, message_t *msg);










static  message_t *PacketEngineP$PacketEngine$packet(am_id_t lowerId, packet_id_t pid);
#line 729
static  error_t PacketEngineP$PacketEngine$send(am_id_t lowerId, packet_id_t pid);
#line 749
static inline   error_t PacketEngineP$PacketEngine$default$sendDone(am_id_t lowerId, packet_id_t pid, message_t *msg, 
error_t result);
#line 782
static inline  error_t PacketEngineP$PacketEngine$receive(am_id_t lowerId, packet_id_t pid);
#line 800
static  error_t PacketEngineP$PacketEngine$drop(am_id_t lowerId, packet_id_t pid);
#line 823
static  packet_id_t PacketEngineP$PacketEngine$waitList(am_id_t lowerId);
#line 838
static inline  am_id_t PacketEngineP$PacketEngine$upperType(am_id_t lowerId, packet_id_t pid);
#line 851
static inline  void PacketEngineP$PacketEngine$setUpperType(am_id_t lowerId, packet_id_t pid, am_id_t newUid);
#line 865
static  packet_id_t PacketEngineP$PacketWaitList$next(am_id_t lowerId, packet_id_t m);
#line 881
static inline  iterator_end_t PacketEngineP$PacketWaitList$end(am_id_t lowerId, packet_id_t m);
#line 894
static packet_id_t PacketEngineP$pidCombineInternal(packet_id_t a, packet_id_t b);








static inline packet_id_t pidCombine(packet_id_t a, packet_id_t b)  ;
#line 920
static inline   bool PacketEngineP$Intercept$default$forward(am_id_t upperId, message_t *msg, void *payload, uint16_t len);








static inline  void PacketEngineP$msgAdded$runTask(void);
#line 974
static inline  void PacketEngineP$msgAction$runTask(void);
#line 1065
static am_id_t PacketEngineP$uid(message_t *msg);








static void PacketEngineP$setUid(message_t *msg, am_id_t newUid);








static inline am_id_t PacketEngineP$lid(message_t *msg);








static inline void PacketEngineP$setLid(message_t *msg, am_id_t newLid);








static void PacketEngineP$setIds(message_t *msg, packet_client_id_t clientId);








static inline void PacketEngineP$moveFreeIndex(void);







static inline void PacketEngineP$moveAddedIndex(void);







static inline void PacketEngineP$moveWaitIndex(void);







static inline void PacketEngineP$moveActionIndex(void);
#line 1147
static void PacketEngineP$moveIndex(packet_id_t *idx, uint8_t state);
#line 1169
static inline void PacketEngineP$printIndices(void);









static void PacketEngineP$addPacket(message_t *msg);
#line 1200
static void PacketEngineP$markPacket(packet_id_t pid, uint8_t state);
#line 1220
static void PacketEngineP$removePacket(packet_id_t pid);
#line 1233
static void PacketEngineP$startSendBackoff(uint16_t mask, uint16_t offset);
# 60 "/opt/tinyos-2.x/tos/system/PoolP.nc"
uint8_t /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$free[1000];
uint8_t /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$index[1000];
/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool_t */*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$queue[1000][5];
/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool_t /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool[1000][5];

static inline  error_t /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Init$init(void);









static inline  bool /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$empty(void);










static inline  /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool_t */*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$get(void);
#line 100
static inline  error_t /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$put(/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool_t *newVal);
# 74 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t StateImplP$state[1000][2U];

enum StateImplP$__nesc_unnamed4344 {
  StateImplP$S_IDLE = 0
};


static inline  error_t StateImplP$Init$init(void);
#line 96
static   error_t StateImplP$State$requestState(uint8_t id, uint8_t reqState);
#line 111
static inline   void StateImplP$State$forceState(uint8_t id, uint8_t reqState);






static inline   void StateImplP$State$toIdle(uint8_t id);







static inline   bool StateImplP$State$isIdle(uint8_t id);






static inline   bool StateImplP$State$isState(uint8_t id, uint8_t myState);
# 41 "/opt/tinyos-2.x/tos/system/RandomMlcgP.nc"
uint32_t RandomMlcgP$seed[1000];


static inline  error_t RandomMlcgP$Init$init(void);
#line 58
static   uint32_t RandomMlcgP$Random$rand32(void);
#line 78
static inline   uint16_t RandomMlcgP$Random$rand16(void);
# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static   Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void);
#line 37
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t arg_0x7e293ba8);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void);
# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static   int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void);
#line 32
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void);
# 39 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void);





static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type arg_0x7e280ad8);










static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void);
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void);
# 38 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[1000];
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[1000];
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[1000];
 uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[1000];



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$__nesc_unnamed4345 {
  Atm128AlarmAsyncP$0$MINDT = 2, 
  Atm128AlarmAsyncP$0$MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void);


static inline  error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void);
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void);
#line 149
static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void);
#line 161
static   uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void);
#line 204
static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void);







static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt);









static inline   uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void);



static inline   uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void);



static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void HplAtm128Timer0AsyncP$Timer0$overflow(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer0AsyncP$Compare$fired(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
bool HplAtm128Timer0AsyncP$inOverflow[1000];




static inline void HplAtm128Timer0AsyncP$cancel_overflow(void);
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void);
static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *e);
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void);

static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void);




sim_time_t HplAtm128Timer0AsyncP$lastZero[1000];





uint8_t HplAtm128Timer0AsyncP$oldScale[1000];



static inline void HplAtm128Timer0AsyncP$cancel_compare(void);
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void);
static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *e);
static void HplAtm128Timer0AsyncP$schedule_new_compare(void);

static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void);


void INTERRUPT_15(void)   ;





void INTERRUPT_16(void)   ;







static sim_time_t HplAtm128Timer0AsyncP$last_zero(void);







static inline void HplAtm128Timer0AsyncP$notify_changed(void);










static inline sim_time_t HplAtm128Timer0AsyncP$notify_clockTicksPerSec(void);
#line 140
static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t);





static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t);





static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void);
#line 177
sim_event_t *HplAtm128Timer0AsyncP$compare[1000];

static inline void HplAtm128Timer0AsyncP$timer0_compare_handle(sim_event_t *evt);
#line 215
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void);







static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *evt);
#line 259
static void HplAtm128Timer0AsyncP$schedule_new_compare(void);
#line 274
static   uint8_t HplAtm128Timer0AsyncP$Timer0$get(void);
#line 289
static inline   void HplAtm128Timer0AsyncP$Timer0$set(uint8_t newVal);
#line 313
static   uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void);
#line 356
static inline   void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t x);
#line 375
static   Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void);
#line 439
static inline   void HplAtm128Timer0AsyncP$Compare$start(void);









static   uint8_t HplAtm128Timer0AsyncP$Compare$get(void);





static   void HplAtm128Timer0AsyncP$Compare$set(uint8_t t);
#line 472
sim_event_t *HplAtm128Timer0AsyncP$overflow[1000];
static inline void HplAtm128Timer0AsyncP$timer0_overflow_handle(sim_event_t *evt);
#line 492
static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void);







static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *evt);
#line 526
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void);










static inline void HplAtm128Timer0AsyncP$cancel_overflow(void);
#line 553
static inline   void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void);







static inline   int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void);







static inline void HplAtm128Timer0AsyncP$cancel_compare(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void);
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void);
#line 92
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7e2d6ac0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7e2d6c50);
#line 105
static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void);
#line 62
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void);
# 63 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4346 {
#line 63
  AlarmToTimerC$0$fired = 2U
};
#line 63
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired];
#line 44
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[1000];
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[1000];

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot);
#line 60
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void);


static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void);






static inline   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void);
#line 82
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt);


static inline  uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void);
# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void);
#line 118
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t arg_0x7e530120, uint32_t arg_0x7e5302b0);
#line 67
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void);




static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7e0f48a8);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4347 {
#line 60
  VirtualizeTimerC$0$updateFromTimer = 3U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4348 {

  VirtualizeTimerC$0$NUM_TIMERS = 3U, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4349 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[1000][/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now);
#line 88
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void);
#line 127
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);
#line 147
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt);




static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num);
#line 177
static inline  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(uint8_t num);
#line 192
static inline   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 47 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void);
# 77 "/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
static  void TossimPacketModelC$Packet$receive(message_t *arg_0x7e592978);
#line 68
static  void TossimPacketModelC$Packet$sendDone(message_t *arg_0x7e592248, error_t arg_0x7e5923d0);










static  bool TossimPacketModelC$Packet$shouldAck(message_t *arg_0x7e592ef0);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t TossimPacketModelC$startDoneTask$postTask(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void TossimPacketModelC$Control$startDone(error_t arg_0x7e541640);
#line 117
static  void TossimPacketModelC$Control$stopDone(error_t arg_0x7e53c200);
# 40 "/opt/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
static  void TossimPacketModelC$GainRadioModel$putOnAirTo(int arg_0x7e079720, 
message_t *arg_0x7e0798e0, 
bool arg_0x7e079a78, 
sim_time_t arg_0x7e079c18, 
double arg_0x7e079da8, 
double arg_0x7e078010);


static  bool TossimPacketModelC$GainRadioModel$clearChannel(void);
# 88 "/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
enum TossimPacketModelC$__nesc_unnamed4350 {
#line 88
  TossimPacketModelC$startDoneTask = 4U
};
#line 88
typedef int TossimPacketModelC$__nesc_sillytask_startDoneTask[TossimPacketModelC$startDoneTask];




enum TossimPacketModelC$__nesc_unnamed4351 {
#line 93
  TossimPacketModelC$stopDoneTask = 5U
};
#line 93
typedef int TossimPacketModelC$__nesc_sillytask_stopDoneTask[TossimPacketModelC$stopDoneTask];
#line 137
enum TossimPacketModelC$__nesc_unnamed4352 {
#line 137
  TossimPacketModelC$sendDoneTask = 6U
};
#line 137
typedef int TossimPacketModelC$__nesc_sillytask_sendDoneTask[TossimPacketModelC$sendDoneTask];
#line 62
bool TossimPacketModelC$initialized[1000];
bool TossimPacketModelC$running[1000];
uint8_t TossimPacketModelC$backoffCount[1000];
uint8_t TossimPacketModelC$neededFreeSamples[1000];
message_t *TossimPacketModelC$sending[1000];
bool TossimPacketModelC$transmitting[1000];
uint8_t TossimPacketModelC$sendingLength[1000];
int TossimPacketModelC$destNode[1000];
sim_event_t TossimPacketModelC$sendEvent[1000];



static inline tossim_metadata_t *TossimPacketModelC$getMetadata(message_t *msg);



static inline  error_t TossimPacketModelC$Init$init(void);









static inline  void TossimPacketModelC$startDoneTask$runTask(void);




static inline  void TossimPacketModelC$stopDoneTask$runTask(void);




static inline  error_t TossimPacketModelC$Control$start(void);
#line 120
static   error_t TossimPacketModelC$PacketAcknowledgements$requestAck(message_t *msg);





static   error_t TossimPacketModelC$PacketAcknowledgements$noAck(message_t *ack);










static inline  void TossimPacketModelC$sendDoneTask$runTask(void);
#line 151
static inline void TossimPacketModelC$start_csma(void);

static inline  error_t TossimPacketModelC$Packet$send(int dest, message_t *msg, uint8_t len);
#line 175
static inline void TossimPacketModelC$send_backoff(sim_event_t *evt);
static inline void TossimPacketModelC$send_transmit(sim_event_t *evt);
static inline void TossimPacketModelC$send_transmit_done(sim_event_t *evt);

static inline void TossimPacketModelC$start_csma(void);
#line 203
static inline void TossimPacketModelC$send_backoff(sim_event_t *evt);
#line 240
static inline int TossimPacketModelC$sim_packet_header_length(void);



static inline void TossimPacketModelC$send_transmit(sim_event_t *evt);
#line 271
static inline void TossimPacketModelC$send_transmit_done(sim_event_t *evt);







static inline  void TossimPacketModelC$GainRadioModel$receive(message_t *msg);





uint8_t TossimPacketModelC$error[1000];

static inline  void TossimPacketModelC$GainRadioModel$acked(message_t *msg);










static  bool TossimPacketModelC$GainRadioModel$shouldAck(message_t *msg);
# 51 "/opt/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
static  void CpmModelC$Model$receive(message_t *arg_0x7e077120);
#line 50
static  void CpmModelC$Model$acked(message_t *arg_0x7e078c60);

static  bool CpmModelC$Model$shouldAck(message_t *arg_0x7e0775d8);
# 51 "/opt/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
message_t *CpmModelC$outgoing[1000];
bool CpmModelC$requestAck[1000];
bool CpmModelC$receiving[1000];
struct CpmModelC$receive_message;
typedef struct CpmModelC$receive_message CpmModelC$receive_message_t;

struct CpmModelC$receive_message {
  int source;
  sim_time_t start;
  sim_time_t end;
  double power;
  double reversePower;
  bool lost;
  bool ack;
  message_t *msg;
  CpmModelC$receive_message_t *next;
};

CpmModelC$receive_message_t *CpmModelC$outstandingReceptionHead[1000];

static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void);
static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg);
static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t t, CpmModelC$receive_message_t *m);

static bool CpmModelC$shouldReceive(double SNR);
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg);
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg);


static inline double CpmModelC$timeInMs(void);
#line 116
static double CpmModelC$noise_hash_generation(void);
#line 141
static inline double CpmModelC$arr_estimate_from_snr(double SNR);
#line 157
static inline int CpmModelC$shouldAckReceive(double snr);
#line 169
static inline void CpmModelC$sim_gain_ack_handle(sim_event_t *evt);
#line 191
double CpmModelC$clearThreshold[1000];










static inline  bool CpmModelC$Model$clearChannel(void);




static void CpmModelC$sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC$receive_message_t *r);
#line 221
static inline double CpmModelC$prr_estimate_from_snr(double SNR);
#line 237
static bool CpmModelC$shouldReceive(double SNR);
#line 249
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg);
#line 263
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg);
#line 285
static inline void CpmModelC$sim_gain_receive_handle(sim_event_t *evt);
#line 352
static inline void CpmModelC$enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower);
#line 403
static inline void CpmModelC$sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower);







static inline  void CpmModelC$Model$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower);
#line 429
static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t endTime, CpmModelC$receive_message_t *msg);
#line 441
static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void);



static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg);
# 50 "/opt/tinyos-2.x/tos/lib/tossim/ActiveMessageAddressC.nc"
bool ActiveMessageAddressC$set[1000];
am_addr_t ActiveMessageAddressC$addr[1000];

static   am_addr_t ActiveMessageAddressC$amAddress(void);
# 40 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/cache/DataCache.nc"
static  DsrControlP$RouteRequestOutCache$item_t *DsrControlP$RouteRequestOutCache$insert(DsrControlP$RouteRequestOutCache$item_t *arg_0x7dec2998);








static  DsrControlP$RouteRequestOutCache$item_t *DsrControlP$RouteRequestOutCache$lookup(DsrControlP$RouteRequestOutCache$item_t *arg_0x7dec1010);
# 51 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/timer/DataTimer.nc"
static  error_t DsrControlP$RouteRequestOutTimer$start(DsrControlP$RouteRequestOutTimer$data_t arg_0x7deb9010, data_timer_time_t arg_0x7deb91a8);









static  error_t DsrControlP$RouteRequestOutTimer$stop(DsrControlP$RouteRequestOutTimer$data_t arg_0x7deb99a0);
# 60 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/StaticIndexedIterator.nc"
static  iterator_end_t DsrControlP$RouteErrorList$end(void *arg_0x7dede010, DsrControlP$RouteErrorList$iterator_item_t arg_0x7dede1a0);
#line 51
static  DsrControlP$RouteErrorList$iterator_item_t DsrControlP$RouteErrorList$next(void *arg_0x7dedf650, DsrControlP$RouteErrorList$iterator_item_t arg_0x7dedf7e0);
# 56 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/IndexedIterator.nc"
static  iterator_end_t DsrControlP$SingleDsrPacketWaitList$end(DsrControlP$SingleDsrPacketWaitList$iterator_item_t arg_0x7e4f6f00);
#line 48
static  DsrControlP$SingleDsrPacketWaitList$iterator_item_t DsrControlP$SingleDsrPacketWaitList$next(DsrControlP$SingleDsrPacketWaitList$iterator_item_t arg_0x7e4f67c0);
# 47 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacket.nc"
static  am_addr_t DsrControlP$SinglePacket$source(message_t *arg_0x7df54918);
#line 67
static  am_addr_t DsrControlP$SinglePacket$destination(message_t *arg_0x7df53b18);
#line 89
static  bool DsrControlP$SinglePacket$isForMe(message_t *arg_0x7df52d30);
# 144 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
static  error_t DsrControlP$SingleDsrPacketEngine$drop(packet_id_t arg_0x7e501948);
#line 157
static  packet_id_t DsrControlP$SingleDsrPacketEngine$waitList(void);
# 40 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/cache/DataCache.nc"
static  DsrControlP$RouteRequestInCache$item_t *DsrControlP$RouteRequestInCache$insert(DsrControlP$RouteRequestInCache$item_t *arg_0x7dec2998);
# 165 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
static  am_id_t DsrControlP$SinglePacketEngine$upperType(packet_id_t arg_0x7e4fd940);
#line 96
static  error_t DsrControlP$SinglePacketEngine$send(packet_id_t arg_0x7e503288);
#line 85
static  message_t *DsrControlP$SinglePacketEngine$packet(packet_id_t arg_0x7e504a80);
#line 144
static  error_t DsrControlP$SinglePacketEngine$drop(packet_id_t arg_0x7e501948);
#line 157
static  packet_id_t DsrControlP$SinglePacketEngine$waitList(void);
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t DsrControlP$Random$rand16(void);
# 75 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/Tlv.nc"
static  void *DsrControlP$RouteRequest$value(void *arg_0x7def8358);
#line 102
static  error_t DsrControlP$RouteRequest$remove(void *arg_0x7def7868, uint8_t arg_0x7def79f0);
#line 50
static  uint8_t DsrControlP$RouteRequest$length(void *arg_0x7defae58);
#line 66
static  error_t DsrControlP$RouteRequest$setLength(void *arg_0x7def9688, uint8_t arg_0x7def9810, uint8_t arg_0x7def9998);
#line 92
static  error_t DsrControlP$RouteRequest$add(void *arg_0x7def8b40, uint8_t arg_0x7def8cc8, uint8_t arg_0x7def8e50);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t DsrControlP$Send$send(am_addr_t arg_0x7e5b6610, message_t *arg_0x7e5b67c0, uint8_t arg_0x7e5b6948);
# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static   void DsrControlP$SendState$toIdle(void);




static   bool DsrControlP$SendState$isIdle(void);
#line 45
static   error_t DsrControlP$SendState$requestState(uint8_t arg_0x7e4c5a38);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t DsrControlP$composePkt$postTask(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t DsrControlP$ComposePacket$payloadLength(message_t *arg_0x7e5a6c58);
#line 83
static  void DsrControlP$ComposePacket$setPayloadLength(message_t *arg_0x7e5a5360, uint8_t arg_0x7e5a54e8);
#line 67
static  uint8_t DsrControlP$SubPacket$payloadLength(message_t *arg_0x7e5a6c58);
#line 108
static  void *DsrControlP$SubPacket$getPayload(message_t *arg_0x7e5a30d0, uint8_t *arg_0x7e5a3278);
#line 95
static  uint8_t DsrControlP$SubPacket$maxPayloadLength(void);
#line 83
static  void DsrControlP$SubPacket$setPayloadLength(message_t *arg_0x7e5a5360, uint8_t arg_0x7e5a54e8);
# 75 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/Tlv.nc"
static  void *DsrControlP$SourceRoute$value(void *arg_0x7def8358);
#line 102
static  error_t DsrControlP$SourceRoute$remove(void *arg_0x7def7868, uint8_t arg_0x7def79f0);
#line 50
static  uint8_t DsrControlP$SourceRoute$length(void *arg_0x7defae58);
#line 92
static  error_t DsrControlP$SourceRoute$add(void *arg_0x7def8b40, uint8_t arg_0x7def8cc8, uint8_t arg_0x7def8e50);
# 96 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
static  error_t DsrControlP$DsrPacketEngine$send(packet_id_t arg_0x7e503288);
#line 133
static  error_t DsrControlP$DsrPacketEngine$receive(packet_id_t arg_0x7e501100);
#line 85
static  message_t *DsrControlP$DsrPacketEngine$packet(packet_id_t arg_0x7e504a80);
#line 144
static  error_t DsrControlP$DsrPacketEngine$drop(packet_id_t arg_0x7e501948);
#line 173
static  void DsrControlP$DsrPacketEngine$setUpperType(packet_id_t arg_0x7e4fc100, am_id_t arg_0x7e4fc288);
# 56 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/IndexedIterator.nc"
static  iterator_end_t DsrControlP$SinglePacketWaitList$end(DsrControlP$SinglePacketWaitList$iterator_item_t arg_0x7e4f6f00);
#line 48
static  DsrControlP$SinglePacketWaitList$iterator_item_t DsrControlP$SinglePacketWaitList$next(DsrControlP$SinglePacketWaitList$iterator_item_t arg_0x7e4f67c0);
# 34 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
static   void DsrControlP$Compose$clearAll(void);
#line 58
static   void DsrControlP$Compose$clear(uint16_t arg_0x7deb1948);
#line 46
static   bool DsrControlP$Compose$get(uint16_t arg_0x7deb2f08);





static   void DsrControlP$Compose$set(uint16_t arg_0x7deb1448);
# 66 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvBlock.nc"
static  uint8_t DsrControlP$Header$length(void *arg_0x7defdbe0);
#line 48
static  void DsrControlP$Header$add(void *arg_0x7deff8b0, uint8_t arg_0x7deffa38);
# 82 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvMultiple.nc"
static  void *DsrControlP$RouteError$value(void *arg_0x7def18f8, tlv_key_t arg_0x7def1a88);
#line 120
static  tlv_key_t DsrControlP$RouteError$list(void *arg_0x7dee3ce0);
#line 52
static  uint8_t DsrControlP$RouteError$length(void *arg_0x7def2010, tlv_key_t arg_0x7def21a0);
# 48 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/IndexedIterator.nc"
static  DsrControlP$RouteNodeList$iterator_item_t DsrControlP$RouteNodeList$next(DsrControlP$RouteNodeList$iterator_item_t arg_0x7e4f67c0);
# 49 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/RouteCache.nc"
static  void DsrControlP$RouteCache$addPath(route_cache_node_id_t arg_0x7ded4c98[], route_cache_link_id_t arg_0x7ded4e38, bool arg_0x7ded3010);
#line 69
static  void DsrControlP$RouteCache$needRoute(route_cache_node_id_t arg_0x7ded22e0, route_cache_node_id_t arg_0x7ded2478);
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t DsrControlP$AMPacket$address(void);









static  am_addr_t DsrControlP$AMPacket$destination(message_t *arg_0x7e5a0a28);
#line 92
static  void DsrControlP$AMPacket$setDestination(message_t *arg_0x7e59c5f8, am_addr_t arg_0x7e59c788);
#line 136
static  am_id_t DsrControlP$AMPacket$type(message_t *arg_0x7e59af08);
#line 151
static  void DsrControlP$AMPacket$setType(message_t *arg_0x7e5994b8, am_id_t arg_0x7e599640);
#line 125
static  bool DsrControlP$AMPacket$isForMe(message_t *arg_0x7e59a7d8);
# 48 "/opt/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
static   error_t DsrControlP$Acks$requestAck(message_t *arg_0x7e094f28);
#line 60
static   error_t DsrControlP$Acks$noAck(message_t *arg_0x7e090648);
# 147 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/DsrControlP.nc"
enum DsrControlP$__nesc_unnamed4353 {
#line 147
  DsrControlP$composePkt = 7U
};
#line 147
typedef int DsrControlP$__nesc_sillytask_composePkt[DsrControlP$composePkt];
#line 130
enum DsrControlP$__nesc_unnamed4354 {
  DsrControlP$NULL_ADDR = AM_BROADCAST_ADDR
};


enum DsrControlP$__nesc_unnamed4355 {
  DsrControlP$S_IDLE, 
  DsrControlP$S_SENDING
};

uint8_t DsrControlP$nextIdent[1000];

message_t DsrControlP$sendPktBuf[1000];
message_t *DsrControlP$sendPkt[1000];




static packet_id_t DsrControlP$findSinglePktTo(am_addr_t dest);
static void DsrControlP$addPath(am_addr_t src, nx_am_addr_t addr[], uint8_t numAddr, am_addr_t dest);
static inline error_t DsrControlP$addRouteRequest(packet_id_t pid, message_t *msg, void *data, am_addr_t dest);
static error_t DsrControlP$addDsrHeader(packet_id_t pid, message_t *msg, void *data);

static inline void DsrControlP$updateRouteRequestOutTimer(am_addr_t dest, uint8_t attempts);
static inline void DsrControlP$resetRouteRequestOutCache(am_addr_t dest);
static void DsrControlP$preLengthChange(message_t *msg, void *data);
static void DsrControlP$postLengthChange(message_t *msg, void *data);



static inline  void DsrControlP$Boot$booted(void);
#line 176
static inline  void DsrControlP$SinglePacketEngine$sendAdded(packet_id_t pid, message_t *msg);
#line 193
static inline  void DsrControlP$SinglePacketEngine$receiveAdded(packet_id_t pid, message_t *msg);
#line 207
static inline  void DsrControlP$SinglePacketEngine$snoopAdded(packet_id_t pid, message_t *msg);
#line 225
static inline  error_t DsrControlP$SinglePacketEngine$sendDone(packet_id_t pid, message_t *msg, error_t result);
#line 240
static inline  void DsrControlP$DsrPacketEngine$sendAdded(packet_id_t pid, message_t *msg);
#line 267
static  void DsrControlP$DsrPacketEngine$receiveAdded(packet_id_t pid, message_t *msg);
#line 447
static inline  void DsrControlP$DsrPacketEngine$snoopAdded(packet_id_t pid, message_t *msg);
#line 465
static inline  error_t DsrControlP$DsrPacketEngine$sendDone(packet_id_t pid, message_t *msg, error_t result);
#line 480
static inline  void DsrControlP$SingleDsrPacketEngine$sendAdded(packet_id_t pid, message_t *msg);










static inline  void DsrControlP$SingleDsrPacketEngine$receiveAdded(packet_id_t pid, message_t *msg);










static inline  void DsrControlP$SingleDsrPacketEngine$snoopAdded(packet_id_t pid, message_t *msg);
#line 517
static inline  error_t DsrControlP$SingleDsrPacketEngine$sendDone(packet_id_t pid, message_t *msg, error_t result);
#line 540
static  void DsrControlP$RouteCache$routeUpdate(route_cache_node_id_t src, route_cache_node_id_t dest, 
route_cache_link_id_t numLinks);
#line 637
static inline  bool DsrControlP$RouteRequestInEqual$test(dsr_route_request_in_t *a, dsr_route_request_in_t *b);
#line 651
static inline  bool DsrControlP$RouteRequestOutEqual$test(dsr_route_request_out_t *a, dsr_route_request_out_t *b);
#line 664
static  void DsrControlP$RouteRequestOutTimer$expired(am_addr_t dest);
#line 711
static inline  void DsrControlP$Send$sendDone(message_t *msg, error_t error);
#line 741
static inline  uint8_t DsrControlP$Packet$payloadLength(message_t *msg);
#line 760
static inline  void DsrControlP$Packet$setPayloadLength(message_t *msg, uint8_t len);
#line 793
static  void *DsrControlP$Packet$getPayload(message_t *msg, uint8_t *len);
#line 806
static inline  void DsrControlP$composePkt$runTask(void);
#line 975
static packet_id_t DsrControlP$findSinglePktTo(am_addr_t dest);
#line 995
static void DsrControlP$addPath(am_addr_t src, nx_am_addr_t addr[], uint8_t numAddr, am_addr_t dest);
#line 1024
static inline error_t DsrControlP$addRouteRequest(packet_id_t pid, message_t *msg, void *data, am_addr_t dest);
#line 1056
static error_t DsrControlP$addDsrHeader(packet_id_t pid, message_t *msg, void *data);
#line 1092
static inline void DsrControlP$updateRouteRequestOutTimer(am_addr_t dest, uint8_t attempts);
#line 1108
static inline void DsrControlP$resetRouteRequestOutCache(am_addr_t dest);
#line 1126
static void DsrControlP$preLengthChange(message_t *msg, void *data);
#line 1138
static void DsrControlP$postLengthChange(message_t *msg, void *data);
# 58 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvP.nc"
enum TlvP$__nesc_unnamed4356 {
  TlvP$TLV_FIRST_KEY = 0
};



static inline tlv_t *TlvP$tlvAt(void *block, tlv_key_t key);
#line 76
static inline  void TlvP$TlvBlock$add(void *block, uint8_t maxLen);
#line 103
static inline  uint8_t TlvP$TlvBlock$length(void *block);
#line 117
static  uint8_t TlvP$Tlv$length(uint8_t type, void *block);
#line 138
static inline  error_t TlvP$Tlv$setLength(uint8_t type, void *block, uint8_t len, uint8_t maxLen);
#line 152
static  void *TlvP$Tlv$value(uint8_t type, void *block);
#line 174
static  error_t TlvP$Tlv$add(uint8_t type, void *block, uint8_t len, uint8_t maxLen);
#line 188
static inline  error_t TlvP$Tlv$remove(uint8_t type, void *block, uint8_t maxLen);
#line 203
static  uint8_t TlvP$TlvMultiple$length(uint8_t type, void *block, tlv_key_t key);
#line 230
static  error_t TlvP$TlvMultiple$setLength(uint8_t type, void *block, tlv_key_t key, 
uint8_t len, uint8_t maxLen);
#line 268
static  void *TlvP$TlvMultiple$value(uint8_t type, void *block, tlv_key_t key);
#line 292
static inline  error_t TlvP$TlvMultiple$add(uint8_t type, void *block, tlv_key_t *key, 
uint8_t len, uint8_t maxLen);
#line 327
static inline  error_t TlvP$TlvMultiple$remove(uint8_t type, void *block, tlv_key_t key, 
uint8_t maxLen);
#line 340
static inline  tlv_key_t TlvP$TlvMultiple$list(uint8_t type, void *block);
#line 353
static  tlv_key_t TlvP$TlvList$next(uint8_t type, void *block, tlv_key_t key);
#line 374
static inline  iterator_end_t TlvP$TlvList$end(uint8_t type, void *block, tlv_key_t key);
#line 388
static inline tlv_t *TlvP$tlvAt(void *block, tlv_key_t key);
# 105 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/Graph.nc"
static  graph_edge_id_t SimpleLinkCacheP$Graph$insert(graph_vertex_id_t arg_0x7dcfc128, graph_vertex_id_t arg_0x7dcfc2c0);
# 58 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
static   void SimpleLinkCacheP$NeedRouteTo$clear(uint16_t arg_0x7deb1948);
#line 46
static   bool SimpleLinkCacheP$NeedRouteTo$get(uint16_t arg_0x7deb2f08);





static   void SimpleLinkCacheP$NeedRouteTo$set(uint16_t arg_0x7deb1448);
#line 77
static   uint16_t SimpleLinkCacheP$NeedRouteTo$size(void);
# 47 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPath.nc"
static  error_t SimpleLinkCacheP$SourceShortestPath$buildTree(graph_vertex_id_t arg_0x7dcf5af8);
#line 93
static  graph_edge_id_t SimpleLinkCacheP$SourceShortestPath$edgeCount(graph_vertex_id_t arg_0x7dcf1848);
# 88 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/RouteCache.nc"
static  void SimpleLinkCacheP$RouteCache$routeUpdate(route_cache_node_id_t arg_0x7ded2c48, route_cache_node_id_t arg_0x7ded2de0, 
route_cache_link_id_t arg_0x7ded1010);
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t SimpleLinkCacheP$AMPacket$address(void);
# 70 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/SimpleLinkCacheP.nc"
static inline  void SimpleLinkCacheP$RouteCache$addPath(route_cache_node_id_t nodes[], route_cache_link_id_t numLinks, 
bool reverse);
#line 103
static inline  void SimpleLinkCacheP$RouteCache$needRoute(route_cache_node_id_t src, route_cache_node_id_t dest);
#line 123
static inline  void SimpleLinkCacheP$Graph$inserted(graph_edge_id_t m);
#line 139
static inline  void SimpleLinkCacheP$SourceShortestPath$builtTree(graph_vertex_id_t src);
#line 158
static inline  void SimpleLinkCacheP$SourceShortestPath$builtTreeTo(graph_vertex_id_t src, graph_vertex_id_t dest, 
error_t pathResult);
# 40 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
typedef uint8_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$int_type;

enum /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$__nesc_unnamed4357 {

  BitVectorC$2$ELEMENT_SIZE = 8 * sizeof(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$int_type ), 
  BitVectorC$2$ARRAY_SIZE = (8 + /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$ELEMENT_SIZE - 1) / /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$ELEMENT_SIZE
};

/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$int_type /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$m_bits[1000][/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$ARRAY_SIZE];

static inline uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$getIndex(uint16_t bitnum);




static inline uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$getMask(uint16_t bitnum);




static inline  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$Init$init(void);





static inline   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$BitVector$clearAll(void);









static inline   bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$BitVector$get(uint16_t bitnum);




static inline   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$BitVector$set(uint16_t bitnum);
# 34 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
static   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$clearAll(void);
#line 46
static   bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$get(uint16_t arg_0x7deb2f08);





static   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$set(uint16_t arg_0x7deb1448);
# 54 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/alloc/IndexedAllocBitsP.nc"
indexed_alloc_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free[1000];
indexed_alloc_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$size[1000];



static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$findFree(void);



static inline  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$Boot$booted(void);
#line 112
static inline  indexed_alloc_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$IndexedAlloc$alloc(void);
#line 157
static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$findFree(void);
# 143 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/Graph.nc"
static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$inserted(graph_edge_id_t arg_0x7dcf9800);
# 79 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/alloc/IndexedAlloc.nc"
static  indexed_alloc_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$IndexedAlloc$alloc(void);
# 57 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphSparseP.nc"
graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$vSize[1000];
graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[1000][4];
graph_edge_node_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[1000][8];



static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$printGraph(void);



static inline  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Init$init(void);
#line 152
static  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$insert(graph_vertex_id_t s, 
graph_vertex_id_t d);
#line 231
static inline  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edge(graph_vertex_id_t s, graph_vertex_id_t d);
#line 251
static inline  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edgeList(graph_vertex_id_t s);
#line 274
static inline  graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdge$dest(graph_edge_id_t m);
#line 286
static inline  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$next(graph_edge_id_t m);









static inline  iterator_end_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$end(graph_edge_id_t m);








static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$printGraph(void);
# 49 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/Compare.nc"
static  int16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$test(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$compare_t arg_0x7dc15628, /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$compare_t arg_0x7dc157b8);
# 56 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueueP.nc"
priority_queue_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[1000];


priority_queue_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[1000][4];

priority_queue_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[1000][4];




static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$clearData(void);
static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$moveUpPos(priority_queue_id_t a);
static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$moveDownPos(priority_queue_id_t a, priority_queue_id_t curSize);
static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$flip(priority_queue_id_t a, priority_queue_id_t b);
static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTree(void);
static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTreeChild(priority_queue_id_t n, char *pre);



static inline  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Init$init(void);
#line 87
static inline  bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$empty(void);
#line 118
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$insert(priority_queue_id_t m);
#line 150
static inline  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$moveUp(priority_queue_id_t m);
#line 194
static inline  priority_queue_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$removeBest(void);
#line 206
static inline  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$clear(void);
#line 218
static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$moveUpPos(priority_queue_id_t a);
#line 234
static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$moveDownPos(priority_queue_id_t a, priority_queue_id_t curSize);
#line 253
static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$flip(priority_queue_id_t a, priority_queue_id_t b);
#line 267
static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTree(void);
#line 292
static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTreeChild(priority_queue_id_t n, char *pre);
#line 312
static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$clearData(void);
# 56 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/IndexedIterator.nc"
static  iterator_end_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$end(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$iterator_item_t arg_0x7e4f6f00);
#line 48
static  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$iterator_item_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$next(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$iterator_item_t arg_0x7e4f67c0);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$postTask(void);
# 136 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/Graph.nc"
static  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$edgeList(graph_vertex_id_t arg_0x7dcf9010);
# 54 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPath.nc"
static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$builtTree(graph_vertex_id_t arg_0x7dcf42e8);
#line 72
static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$builtTreeTo(graph_vertex_id_t arg_0x7dcf2450, graph_vertex_id_t arg_0x7dcf25e8, 
error_t arg_0x7dcf2788);
# 54 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdge.nc"
static  graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdge$dest(graph_edge_id_t arg_0x7dcd4c58);
# 122 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueue.nc"
static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$clear(void);
#line 72
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$insert(priority_queue_id_t arg_0x7dc1dce8);
#line 87
static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$moveUp(priority_queue_id_t arg_0x7dc1bd10);
#line 47
static  bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$empty(void);
#line 117
static  priority_queue_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$removeBest(void);
# 55 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdgeWeight.nc"
static  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeWeight$weight_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeWeight$weight(graph_edge_id_t arg_0x7dcc5170);
# 84 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPathP.nc"
enum /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$__nesc_unnamed4358 {
#line 84
  SourceShortestPathP$0$buildTreeTask = 8U
};
#line 84
typedef int /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$__nesc_sillytask_buildTreeTask[/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask];
#line 61
graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[1000][4];

graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[1000][4];

/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$graph_edge_weight_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[1000][4];

graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc[1000];


bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded[1000];


graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[1000];

error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$foundDest[1000];

bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree[1000];



static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$initTree(void);
static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$printPaths(void);
static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$printPathLink(graph_vertex_id_t m, char *path, char *tmp);




static inline  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Init$init(void);
#line 105
static inline  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildTree(graph_vertex_id_t src);
#line 117
static inline  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildTreeTo(graph_vertex_id_t src, 
graph_vertex_id_t dest);
#line 165
static  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$edgeCount(graph_vertex_id_t dest);
#line 194
static inline  graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$next(graph_vertex_id_t dest);
#line 207
static inline  iterator_end_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$end(graph_vertex_id_t dest);









static inline  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$runTask(void);
#line 276
static inline  int16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Compare$test(graph_vertex_id_t a, graph_vertex_id_t b);










static inline  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$inserted(graph_edge_id_t m);
#line 316
static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$initTree(void);
#line 329
static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$printPaths(void);
#line 350
static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$printPathLink(graph_vertex_id_t m, char *path, char *tmp);
# 40 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
typedef uint8_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$int_type;

enum /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$__nesc_unnamed4359 {

  BitVectorC$1$ELEMENT_SIZE = 8 * sizeof(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$int_type ), 
  BitVectorC$1$ARRAY_SIZE = (4 + /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$ELEMENT_SIZE - 1) / /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$ELEMENT_SIZE
};

/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$int_type /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$m_bits[1000][/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$ARRAY_SIZE];

static inline uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$getIndex(uint16_t bitnum);




static inline uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$getMask(uint16_t bitnum);
#line 76
static   bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$BitVector$get(uint16_t bitnum);




static inline   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$BitVector$set(uint16_t bitnum);




static inline   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$BitVector$clear(uint16_t bitnum);
#line 104
static inline   uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$BitVector$size(void);
# 65 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdgeUnitWeightC.nc"
static inline  graph_edge_unit_weight_t GraphEdgeUnitWeightC$GraphEdgeWeight$weight(graph_edge_id_t m);
# 48 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/Equal.nc"
static  bool /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$Equal$test(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$Equal$equal_t arg_0x7df03010, /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$Equal$equal_t arg_0x7df03198);
# 79 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/cache/LruDataCacheP.nc"
/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$cache[1000][8];
uint8_t /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first[1000];
uint8_t /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count[1000];



static inline  error_t /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$Init$init(void);







static inline void /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$printCache(void);
#line 107
static inline uint8_t /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$lookup(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t *item);
#line 119
static inline void /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$remove(uint8_t i);
#line 160
static inline  /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t */*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$DataCache$insert(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t *item);
# 48 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/Equal.nc"
static  bool /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$Equal$test(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$Equal$equal_t arg_0x7df03010, /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$Equal$equal_t arg_0x7df03198);
# 79 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/cache/LruDataCacheP.nc"
/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$cache[1000][8];
uint8_t /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first[1000];
uint8_t /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count[1000];



static inline  error_t /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$Init$init(void);







static void /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$printCache(void);
#line 107
static uint8_t /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$lookup(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t *item);
#line 119
static inline void /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$remove(uint8_t i);
#line 145
static  /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t */*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$lookup(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t *item);
#line 160
static inline  /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t */*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$insert(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t *item);
# 68 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/timer/DataTimer.nc"
static  void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$expired(/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$data_t arg_0x7deb8168);
# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  uint32_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$getNow(void);
#line 62
static  void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$startOneShot(uint32_t arg_0x7e5334d0);




static  void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$stop(void);
# 58 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/timer/DataTimerP.nc"
/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data_timer_data_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data[1000][8];
data_timer_time_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$delay[1000][8];
uint8_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size[1000];
uint32_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$startTime[1000];



static inline void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$startTimer(void);
static void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$removeTimer(uint8_t i);
static void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$adjustTimer(void);



static inline  error_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Init$init(void);
#line 86
static inline  error_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$start(/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data_timer_data_t newData, data_timer_time_t newDelay);
#line 114
static inline  error_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$stop(/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data_timer_data_t stopData);
#line 134
static inline  void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$fired(void);
#line 150
static inline void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$startTimer(void);








static void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$removeTimer(uint8_t i);
#line 172
static void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$adjustTimer(void);
# 40 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
typedef uint8_t /*DsrP.ComposeC*/BitVectorC$0$int_type;

enum /*DsrP.ComposeC*/BitVectorC$0$__nesc_unnamed4360 {

  BitVectorC$0$ELEMENT_SIZE = 8 * sizeof(/*DsrP.ComposeC*/BitVectorC$0$int_type ), 
  BitVectorC$0$ARRAY_SIZE = (8 + /*DsrP.ComposeC*/BitVectorC$0$ELEMENT_SIZE - 1) / /*DsrP.ComposeC*/BitVectorC$0$ELEMENT_SIZE
};

/*DsrP.ComposeC*/BitVectorC$0$int_type /*DsrP.ComposeC*/BitVectorC$0$m_bits[1000][/*DsrP.ComposeC*/BitVectorC$0$ARRAY_SIZE];

static inline uint16_t /*DsrP.ComposeC*/BitVectorC$0$getIndex(uint16_t bitnum);




static inline uint16_t /*DsrP.ComposeC*/BitVectorC$0$getMask(uint16_t bitnum);










static inline   void /*DsrP.ComposeC*/BitVectorC$0$BitVector$clearAll(void);









static inline   bool /*DsrP.ComposeC*/BitVectorC$0$BitVector$get(uint16_t bitnum);




static inline   void /*DsrP.ComposeC*/BitVectorC$0$BitVector$set(uint16_t bitnum);




static   void /*DsrP.ComposeC*/BitVectorC$0$BitVector$clear(uint16_t bitnum);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t *arg_0x7e5b4950, error_t arg_0x7e5b4ad8);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t *arg_0x7dac9920, uint8_t arg_0x7dac9aa8);
# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  void /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t *arg_0x7e59c5f8, am_addr_t arg_0x7e59c788);
#line 151
static  void /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t *arg_0x7e5994b8, am_id_t arg_0x7e599640);
# 45 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline  error_t /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline  void /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(
# 40 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x7dab6e88, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x7e5b6610, message_t *arg_0x7e5b67c0, uint8_t arg_0x7e5b6948);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7dab6528, 
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x7dac8a28, error_t arg_0x7dac8bb0);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t *arg_0x7e5a6c58);
#line 83
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t *arg_0x7e5a5360, uint8_t arg_0x7e5a54e8);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t *arg_0x7e5a0a28);
#line 136
static  am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t *arg_0x7e59af08);
# 118 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4361 {
#line 118
  AMQueueImplP$0$CancelTask = 9U
};
#line 118
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask];
#line 161
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4362 {
#line 161
  AMQueueImplP$0$errorTask = 10U
};
#line 161
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask];
#line 49
#line 47
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4363 {
  message_t *msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[1000];
/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[1000][2];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[1000][2 / 8 + 1];

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void);

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void);
#line 82
static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 118
static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void);
#line 155
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t *msg, error_t err);





static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void);




static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void);
#line 181
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err);
#line 207
static inline   void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t SinglePacketP$SubSend$send(
# 49 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
am_id_t arg_0x7da57440, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x7e5b6610, message_t *arg_0x7e5b67c0, uint8_t arg_0x7e5b6948);
#line 125
static  void *SinglePacketP$SubSend$getPayload(
# 49 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
am_id_t arg_0x7da57440, 
# 125 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7e5b35d0);
#line 99
static  void SinglePacketP$Send$sendDone(
# 44 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
am_id_t arg_0x7da59c48, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7e5b4950, error_t arg_0x7e5b4ad8);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t SinglePacketP$SubPacket$payloadLength(message_t *arg_0x7e5a6c58);
#line 108
static  void *SinglePacketP$SubPacket$getPayload(message_t *arg_0x7e5a30d0, uint8_t *arg_0x7e5a3278);
#line 83
static  void SinglePacketP$SubPacket$setPayloadLength(message_t *arg_0x7e5a5360, uint8_t arg_0x7e5a54e8);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *SinglePacketP$Receive$receive(
# 45 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
am_id_t arg_0x7da58598, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7e5b09d8, void *arg_0x7e5b0b78, uint8_t arg_0x7e5b0d00);
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t SinglePacketP$AMPacket$address(void);
# 66 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
static inline  am_addr_t SinglePacketP$SinglePacket$source(message_t *msg);
#line 80
static inline  void SinglePacketP$SinglePacket$setSource(message_t *msg, am_addr_t src);









static inline  am_addr_t SinglePacketP$SinglePacket$destination(message_t *msg);
#line 104
static inline  void SinglePacketP$SinglePacket$setDestination(message_t *msg, am_addr_t dest);
#line 116
static  bool SinglePacketP$SinglePacket$isForMe(message_t *msg);
#line 140
static  error_t SinglePacketP$Send$send(am_id_t upperId, am_addr_t addr, message_t *msg, uint8_t len);
#line 156
static   void SinglePacketP$Send$default$sendDone(am_id_t upperId, message_t *msg, error_t error);
#line 200
static inline  void *SinglePacketP$Send$getPayload(am_id_t upperId, message_t *msg);
#line 214
static inline   error_t SinglePacketP$SubSend$default$send(am_id_t upperId, am_addr_t addr, message_t *msg, uint8_t len);
#line 230
static inline  void SinglePacketP$SubSend$sendDone(am_id_t upperId, message_t *msg, error_t error);









static inline   void *SinglePacketP$SubSend$default$getPayload(am_id_t upperId, message_t *msg);
#line 285
static inline   message_t *SinglePacketP$Receive$default$receive(am_id_t upperId, message_t *msg, void *payload, uint8_t len);
#line 311
static  message_t *SinglePacketP$SubReceive$receive(am_id_t upperId, message_t *msg, void *payload, uint8_t len);
#line 339
static inline  uint8_t SinglePacketP$Packet$payloadLength(message_t *msg);
#line 356
static inline  void SinglePacketP$Packet$setPayloadLength(message_t *msg, uint8_t len);
#line 385
static inline  void *SinglePacketP$Packet$getPayload(message_t *msg, uint8_t *len);
# 53 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineClientP.nc"
static inline  am_id_t /*DsrC.SingleProcessorSenderC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$0$PacketEngineClient$upperType(void);








static inline  am_id_t /*DsrC.SingleProcessorSenderC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$0$PacketEngineClient$defaultLowerType(void);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(message_t *arg_0x7e5b4950, error_t arg_0x7e5b4ad8);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(message_t *arg_0x7dac9920, uint8_t arg_0x7dac9aa8);
# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  void /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(message_t *arg_0x7e59c5f8, am_addr_t arg_0x7e59c788);
#line 151
static  void /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(message_t *arg_0x7e5994b8, am_id_t arg_0x7e599640);
# 45 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline  error_t /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline  void /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *m, error_t err);
# 53 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineClientP.nc"
static inline  am_id_t /*TestDsrAppC.SendAC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$1$PacketEngineClient$upperType(void);








static inline  am_id_t /*TestDsrAppC.SendAC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$1$PacketEngineClient$defaultLowerType(void);
#line 53
static inline  am_id_t /*TestDsrAppC.SendBC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$2$PacketEngineClient$upperType(void);








static inline  am_id_t /*TestDsrAppC.SendBC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$2$PacketEngineClient$defaultLowerType(void);
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

# 232 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
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

#line 208
static inline   message_t *TossimActiveMessageP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 208
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *TossimActiveMessageP$Receive$receive(am_id_t arg_0x7e5a95b8, message_t *arg_0x7e5b09d8, void *arg_0x7e5b0b78, uint8_t arg_0x7e5b0d00){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x7e5a95b8) {
#line 67
    case 4:
#line 67
      result = PacketEngineP$SubReceive$receive(4, arg_0x7e5b09d8, arg_0x7e5b0b78, arg_0x7e5b0d00);
#line 67
      break;
#line 67
    case 48:
#line 67
      result = PacketEngineP$SubReceive$receive(48, arg_0x7e5b09d8, arg_0x7e5b0b78, arg_0x7e5b0d00);
#line 67
      break;
#line 67
    default:
#line 67
      result = TossimActiveMessageP$Receive$default$receive(arg_0x7e5a95b8, arg_0x7e5b09d8, arg_0x7e5b0b78, arg_0x7e5b0d00);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 75 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static inline  bool /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$empty(void)
#line 75
{
  return /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$free[sim_node()] == 0;
}

# 61 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
inline static  bool PacketEngineP$ReceivePool$empty(void){
#line 61
  unsigned char result;
#line 61

#line 61
  result = /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$empty();
#line 61

#line 61
  return result;
#line 61
}
#line 61
# 1110 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline void PacketEngineP$moveFreeIndex(void)
#line 1110
{
  PacketEngineP$moveIndex(&PacketEngineP$nextFreePkt[sim_node()], PacketEngineP$PKT_FREE);
}

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

# 86 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static inline  /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool_t */*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$get(void)
#line 86
{
  if (/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$free[sim_node()]) {
      /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool_t *rval = /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$queue[sim_node()][/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$index[sim_node()]];

#line 89
      /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$queue[sim_node()][/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$index[sim_node()]] = (void *)0;
      /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$free[sim_node()]--;
      /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$index[sim_node()]++;
      if (/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$index[sim_node()] == 5) {
          /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$index[sim_node()] = 0;
        }
      return rval;
    }
  return (void *)0;
}

# 96 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
inline static  PacketEngineP$ReceivePool$t *PacketEngineP$ReceivePool$get(void){
#line 96
  nx_struct message_t *result;
#line 96

#line 96
  result = /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$get();
#line 96

#line 96
  return result;
#line 96
}
#line 96
# 212 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
static inline   message_t *TossimActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 212
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *TossimActiveMessageP$Snoop$receive(am_id_t arg_0x7e5a9d50, message_t *arg_0x7e5b09d8, void *arg_0x7e5b0b78, uint8_t arg_0x7e5b0d00){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x7e5a9d50) {
#line 67
    case 4:
#line 67
      result = PacketEngineP$SubReceive$receive(4, arg_0x7e5b09d8, arg_0x7e5b0b78, arg_0x7e5b0d00);
#line 67
      break;
#line 67
    case 48:
#line 67
      result = PacketEngineP$SubReceive$receive(48, arg_0x7e5b09d8, arg_0x7e5b0b78, arg_0x7e5b0d00);
#line 67
      break;
#line 67
    default:
#line 67
      result = TossimActiveMessageP$Snoop$default$receive(arg_0x7e5a9d50, arg_0x7e5b09d8, arg_0x7e5b0b78, arg_0x7e5b0d00);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return result;
#line 67
}
#line 67
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
inline static   error_t PacketEngineP$msgAdded$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SimSchedulerBasicP$TaskBasic$postTask(PacketEngineP$msgAdded);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 1118 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline void PacketEngineP$moveAddedIndex(void)
#line 1118
{
  PacketEngineP$moveIndex(&PacketEngineP$nextAddedPkt[sim_node()], PacketEngineP$PKT_ADDED);
}

# 136 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_id_t PacketEngineP$AMPacket$type(message_t *arg_0x7e59af08){
#line 136
  unsigned char result;
#line 136

#line 136
  result = TossimActiveMessageP$AMPacket$type(arg_0x7e59af08);
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 1083 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline am_id_t PacketEngineP$lid(message_t *msg)
#line 1083
{
  return PacketEngineP$AMPacket$type(msg);
}

# 193 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/DsrControlP.nc"
static inline  void DsrControlP$SinglePacketEngine$receiveAdded(packet_id_t pid, message_t *msg)
#line 193
{
  sim_log_debug(228U, "DsrControlP", "DSR: Pkt %u: Single receive/snoop packet added!\n", pid);
  sim_log_error(229U, "DsrControlP", "DSR: Pkt %u: No action defined!\n", pid);
}










static inline  void DsrControlP$SinglePacketEngine$snoopAdded(packet_id_t pid, message_t *msg)
#line 207
{
  sim_log_debug(230U, "DsrControlP", "DSR: Pkt %u: Single snooped!\n", pid);
  DsrControlP$SinglePacketEngine$receiveAdded(pid, msg);
}

#line 502
static inline  void DsrControlP$SingleDsrPacketEngine$snoopAdded(packet_id_t pid, message_t *msg)
#line 502
{
}

#line 447
static inline  void DsrControlP$DsrPacketEngine$snoopAdded(packet_id_t pid, message_t *msg)
#line 447
{
  sim_log_debug(254U, "DsrControlP", "DSR: Pkt %u: DSR snooped!\n", pid);
  DsrControlP$DsrPacketEngine$receiveAdded(pid, msg);
}

# 702 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   void PacketEngineP$PacketEngine$default$snoopAdded(am_id_t lowerId, packet_id_t pid, message_t *msg)
#line 702
{
  sim_log_error(125U, "PacketEngineP", "PE: Trying to use invalid lower AM type %hhu!\n", lowerId);
  PacketEngineP$PacketEngine$drop(lowerId, pid);
}

# 77 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
inline static  void PacketEngineP$PacketEngine$snoopAdded(am_id_t arg_0x7e4e6b78, packet_id_t arg_0x7e504010, message_t *arg_0x7e5041c0){
#line 77
  switch (arg_0x7e4e6b78) {
#line 77
    case 4:
#line 77
      DsrControlP$SingleDsrPacketEngine$snoopAdded(arg_0x7e504010, arg_0x7e5041c0);
#line 77
      DsrControlP$SinglePacketEngine$snoopAdded(arg_0x7e504010, arg_0x7e5041c0);
#line 77
      break;
#line 77
    case 48:
#line 77
      DsrControlP$SingleDsrPacketEngine$snoopAdded(arg_0x7e504010, arg_0x7e5041c0);
#line 77
      DsrControlP$DsrPacketEngine$snoopAdded(arg_0x7e504010, arg_0x7e5041c0);
#line 77
      break;
#line 77
    default:
#line 77
      PacketEngineP$PacketEngine$default$snoopAdded(arg_0x7e4e6b78, arg_0x7e504010, arg_0x7e5041c0);
#line 77
      break;
#line 77
    }
#line 77
}
#line 77
# 491 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/DsrControlP.nc"
static inline  void DsrControlP$SingleDsrPacketEngine$receiveAdded(packet_id_t pid, message_t *msg)
#line 491
{
}

# 691 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   void PacketEngineP$PacketEngine$default$receiveAdded(am_id_t lowerId, packet_id_t pid, message_t *msg)
#line 691
{
  sim_log_error(124U, "PacketEngineP", "PE: Trying to use invalid lower AM type %hhu!\n", lowerId);
  PacketEngineP$PacketEngine$drop(lowerId, pid);
}

# 66 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
inline static  void PacketEngineP$PacketEngine$receiveAdded(am_id_t arg_0x7e4e6b78, packet_id_t arg_0x7e506560, message_t *arg_0x7e506710){
#line 66
  switch (arg_0x7e4e6b78) {
#line 66
    case 4:
#line 66
      DsrControlP$SingleDsrPacketEngine$receiveAdded(arg_0x7e506560, arg_0x7e506710);
#line 66
      DsrControlP$SinglePacketEngine$receiveAdded(arg_0x7e506560, arg_0x7e506710);
#line 66
      break;
#line 66
    case 48:
#line 66
      DsrControlP$SingleDsrPacketEngine$receiveAdded(arg_0x7e506560, arg_0x7e506710);
#line 66
      DsrControlP$DsrPacketEngine$receiveAdded(arg_0x7e506560, arg_0x7e506710);
#line 66
      break;
#line 66
    default:
#line 66
      PacketEngineP$PacketEngine$default$receiveAdded(arg_0x7e4e6b78, arg_0x7e506560, arg_0x7e506710);
#line 66
      break;
#line 66
    }
#line 66
}
#line 66
# 125 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  bool PacketEngineP$AMPacket$isForMe(message_t *arg_0x7e59a7d8){
#line 125
  unsigned char result;
#line 125

#line 125
  result = TossimActiveMessageP$AMPacket$isForMe(arg_0x7e59a7d8);
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 264 "/usr/lib/ncc/nesc_nx.h"
static __inline uint16_t __nesc_ntoh_uint16(const void *source)
#line 264
{
  const uint8_t *base = source;

#line 266
  return ((uint16_t )base[0] << 8) | base[1];
}

# 108 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void *SinglePacketP$SubPacket$getPayload(message_t *arg_0x7e5a30d0, uint8_t *arg_0x7e5a3278){
#line 108
  void *result;
#line 108

#line 108
  result = PacketEngineP$Packet$getPayload(arg_0x7e5a30d0, arg_0x7e5a3278);
#line 108

#line 108
  return result;
#line 108
}
#line 108
# 90 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
static inline  am_addr_t SinglePacketP$SinglePacket$destination(message_t *msg)
#line 90
{
  return __nesc_ntoh_uint16((unsigned char *)&((single_packet_header_t *)SinglePacketP$SubPacket$getPayload(msg, (void *)0))->dest);
}

# 67 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacket.nc"
inline static  am_addr_t DsrControlP$SinglePacket$destination(message_t *arg_0x7df53b18){
#line 67
  unsigned short result;
#line 67

#line 67
  result = SinglePacketP$SinglePacket$destination(arg_0x7df53b18);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 48 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
inline static  am_addr_t TossimActiveMessageP$amAddress(void){
#line 48
  unsigned short result;
#line 48

#line 48
  result = ActiveMessageAddressC$amAddress();
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

# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t DsrControlP$AMPacket$address(void){
#line 57
  unsigned short result;
#line 57

#line 57
  result = TossimActiveMessageP$AMPacket$address();
#line 57

#line 57
  return result;
#line 57
}
#line 57
# 88 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/RouteCache.nc"
inline static  void SimpleLinkCacheP$RouteCache$routeUpdate(route_cache_node_id_t arg_0x7ded2c48, route_cache_node_id_t arg_0x7ded2de0, route_cache_link_id_t arg_0x7ded1010){
#line 88
  DsrControlP$RouteCache$routeUpdate(arg_0x7ded2c48, arg_0x7ded2de0, arg_0x7ded1010);
#line 88
}
#line 88
# 55 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$getMask(uint16_t bitnum)
{
  return 1 << bitnum % /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$ELEMENT_SIZE;
}

#line 50
static inline uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$getIndex(uint16_t bitnum)
{
  return bitnum / /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$ELEMENT_SIZE;
}

#line 81
static inline   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$BitVector$set(uint16_t bitnum)
{
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$m_bits[sim_node()][/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$getIndex(bitnum)] |= /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$getMask(bitnum);
}

# 52 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   void SimpleLinkCacheP$NeedRouteTo$set(uint16_t arg_0x7deb1448){
#line 52
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$BitVector$set(arg_0x7deb1448);
#line 52
}
#line 52
# 93 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPath.nc"
inline static  graph_edge_id_t SimpleLinkCacheP$SourceShortestPath$edgeCount(graph_vertex_id_t arg_0x7dcf1848){
#line 93
  unsigned char result;
#line 93

#line 93
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$edgeCount(arg_0x7dcf1848);
#line 93

#line 93
  return result;
#line 93
}
#line 93
# 46 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   bool SimpleLinkCacheP$NeedRouteTo$get(uint16_t arg_0x7deb2f08){
#line 46
  unsigned char result;
#line 46

#line 46
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$BitVector$get(arg_0x7deb2f08);
#line 46

#line 46
  return result;
#line 46
}
#line 46
# 103 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/SimpleLinkCacheP.nc"
static inline  void SimpleLinkCacheP$RouteCache$needRoute(route_cache_node_id_t src, route_cache_node_id_t dest)
#line 103
{
  route_cache_link_id_t numLinks;

  if (SimpleLinkCacheP$NeedRouteTo$get(dest)) {
    return;
    }
  numLinks = SimpleLinkCacheP$SourceShortestPath$edgeCount(dest);
  if (numLinks == 0) {
    SimpleLinkCacheP$NeedRouteTo$set(dest);
    }
  SimpleLinkCacheP$RouteCache$routeUpdate(src, dest, numLinks);
}

# 69 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/RouteCache.nc"
inline static  void DsrControlP$RouteCache$needRoute(route_cache_node_id_t arg_0x7ded22e0, route_cache_node_id_t arg_0x7ded2478){
#line 69
  SimpleLinkCacheP$RouteCache$needRoute(arg_0x7ded22e0, arg_0x7ded2478);
#line 69
}
#line 69
# 176 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/DsrControlP.nc"
static inline  void DsrControlP$SinglePacketEngine$sendAdded(packet_id_t pid, message_t *msg)
#line 176
{
  sim_log_debug(226U, "DsrControlP", "DSR: Pkt %u: Single send packet added!\n", pid);

  sim_log_debug(227U, "DsrControlP", "DSR: Pkt %u: Looking for route to %u\n", pid, DsrControlP$SinglePacket$destination(msg));

  DsrControlP$RouteCache$needRoute(DsrControlP$AMPacket$address(), DsrControlP$SinglePacket$destination(msg));
}

#line 480
static inline  void DsrControlP$SingleDsrPacketEngine$sendAdded(packet_id_t pid, message_t *msg)
#line 480
{
}

# 96 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
inline static  error_t DsrControlP$DsrPacketEngine$send(packet_id_t arg_0x7e503288){
#line 96
  unsigned char result;
#line 96

#line 96
  result = PacketEngineP$PacketEngine$send(48, arg_0x7e503288);
#line 96

#line 96
  return result;
#line 96
}
#line 96
# 838 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline  am_id_t PacketEngineP$PacketEngine$upperType(am_id_t lowerId, packet_id_t pid)
#line 838
{
  if (PacketEngineP$lid(PacketEngineP$msgBuffer[sim_node()][pid].msg) != lowerId) {
    return INVALID_AM_TYPE;
    }
#line 841
  return PacketEngineP$uid(PacketEngineP$msgBuffer[sim_node()][pid].msg);
}

# 165 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
inline static  am_id_t DsrControlP$SinglePacketEngine$upperType(packet_id_t arg_0x7e4fd940){
#line 165
  unsigned char result;
#line 165

#line 165
  result = PacketEngineP$PacketEngine$upperType(4, arg_0x7e4fd940);
#line 165

#line 165
  return result;
#line 165
}
#line 165
# 851 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline  void PacketEngineP$PacketEngine$setUpperType(am_id_t lowerId, packet_id_t pid, am_id_t newUid)
#line 851
{
  if (PacketEngineP$lid(PacketEngineP$msgBuffer[sim_node()][pid].msg) != lowerId) {
    return;
    }
#line 854
  PacketEngineP$setUid(PacketEngineP$msgBuffer[sim_node()][pid].msg, newUid);
}

# 173 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
inline static  void DsrControlP$DsrPacketEngine$setUpperType(packet_id_t arg_0x7e4fc100, am_id_t arg_0x7e4fc288){
#line 173
  PacketEngineP$PacketEngine$setUpperType(48, arg_0x7e4fc100, arg_0x7e4fc288);
#line 173
}
#line 173
# 881 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline  iterator_end_t PacketEngineP$PacketWaitList$end(am_id_t lowerId, packet_id_t m)
#line 881
{
  return m == PacketEngineP$BUFFER_SIZE;
}

# 56 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/IndexedIterator.nc"
inline static  iterator_end_t DsrControlP$SinglePacketWaitList$end(DsrControlP$SinglePacketWaitList$iterator_item_t arg_0x7e4f6f00){
#line 56
  unsigned char result;
#line 56

#line 56
  result = PacketEngineP$PacketWaitList$end(4, arg_0x7e4f6f00);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 50 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/Tlv.nc"
inline static  uint8_t DsrControlP$RouteRequest$length(void *arg_0x7defae58){
#line 50
  unsigned char result;
#line 50

#line 50
  result = TlvP$Tlv$length(1, arg_0x7defae58);
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 108 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void *DsrControlP$SubPacket$getPayload(message_t *arg_0x7e5a30d0, uint8_t *arg_0x7e5a3278){
#line 108
  void *result;
#line 108

#line 108
  result = TossimActiveMessageP$Packet$getPayload(arg_0x7e5a30d0, arg_0x7e5a3278);
#line 108

#line 108
  return result;
#line 108
}
#line 108
# 240 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/DsrControlP.nc"
static inline  void DsrControlP$DsrPacketEngine$sendAdded(packet_id_t pid, message_t *msg)
#line 240
{
  am_addr_t singleDest = DsrControlP$SinglePacket$destination(msg);
  void *data = DsrControlP$SubPacket$getPayload(msg, (void *)0);

#line 243
  sim_log_debug(231U, "DsrControlP", "DSR: Pkt %u: DSR send packet added, sending!\n", pid);
  if (DsrControlP$RouteRequest$length(data) != 0) {

      packet_id_t rreqPid = DsrControlP$findSinglePktTo(singleDest);

#line 247
      if (!DsrControlP$SinglePacketWaitList$end(rreqPid)) {
          DsrControlP$DsrPacketEngine$setUpperType(pid, DsrControlP$SinglePacketEngine$upperType(rreqPid));
          sim_log_debug(232U, "DsrControlP", "DSR: Pkt %u: Recovered upper layer AM type from pkt %u\n", pid, rreqPid);
        }
      else {
#line 251
        sim_log_error(233U, "DsrControlP", "DSR: Pkt %u: Looking for pkt that originated route request to %u, but no packets are waiting!\n", pid, singleDest);
        }
    }

  DsrControlP$DsrPacketEngine$send(pid);
}

# 680 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   void PacketEngineP$PacketEngine$default$sendAdded(am_id_t lowerId, packet_id_t pid, message_t *msg)
#line 680
{
  sim_log_error(123U, "PacketEngineP", "PE: Trying to use invalid lower AM type %hhu!\n", lowerId);
  PacketEngineP$PacketEngine$drop(lowerId, pid);
}

# 55 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
inline static  void PacketEngineP$PacketEngine$sendAdded(am_id_t arg_0x7e4e6b78, packet_id_t arg_0x7e507b20, message_t *arg_0x7e507cd0){
#line 55
  switch (arg_0x7e4e6b78) {
#line 55
    case 4:
#line 55
      DsrControlP$SingleDsrPacketEngine$sendAdded(arg_0x7e507b20, arg_0x7e507cd0);
#line 55
      DsrControlP$SinglePacketEngine$sendAdded(arg_0x7e507b20, arg_0x7e507cd0);
#line 55
      break;
#line 55
    case 48:
#line 55
      DsrControlP$SingleDsrPacketEngine$sendAdded(arg_0x7e507b20, arg_0x7e507cd0);
#line 55
      DsrControlP$DsrPacketEngine$sendAdded(arg_0x7e507b20, arg_0x7e507cd0);
#line 55
      break;
#line 55
    default:
#line 55
      PacketEngineP$PacketEngine$default$sendAdded(arg_0x7e4e6b78, arg_0x7e507b20, arg_0x7e507cd0);
#line 55
      break;
#line 55
    }
#line 55
}
#line 55
# 1169 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline void PacketEngineP$printIndices(void)
#line 1169
{
  sim_log_debug(155U, "PacketEngineP", "PE: Free: %u, Added: %u, Wait: %u, Action: %u\n", PacketEngineP$nextFreePkt[sim_node()], PacketEngineP$nextAddedPkt[sim_node()], PacketEngineP$nextWaitPkt[sim_node()], PacketEngineP$nextActionPkt[sim_node()]);
}

#line 929
static inline  void PacketEngineP$msgAdded$runTask(void)
#line 929
{
  if (!PacketEngineP$running[sim_node()]) {
    return;
    }
#line 932
  if (PacketEngineP$nextAddedPkt[sim_node()] == PacketEngineP$BUFFER_SIZE) {
      sim_log_error(131U, "PacketEngineP", "PE: msgAdded posted, but nextAddedPkt is invalid!\n");
      return;
    }
  if (PacketEngineP$msgBuffer[sim_node()][PacketEngineP$nextAddedPkt[sim_node()]].state == PacketEngineP$PKT_ADDED) {
      message_t *msg = PacketEngineP$msgBuffer[sim_node()][PacketEngineP$nextAddedPkt[sim_node()]].msg;

#line 938
      sim_log_debug(132U, "PacketEngineP", "PE: Processing added pkt %u\n", PacketEngineP$nextAddedPkt[sim_node()]);
      PacketEngineP$msgBuffer[sim_node()][PacketEngineP$nextAddedPkt[sim_node()]].state = PacketEngineP$PKT_WAIT;
      if (PacketEngineP$nextWaitPkt[sim_node()] == PacketEngineP$BUFFER_SIZE) {

          sim_log_debug(133U, "PacketEngineP", "PE: Moved nextWaitPkt from %u", PacketEngineP$nextWaitPkt[sim_node()]);
          PacketEngineP$nextWaitPkt[sim_node()] = PacketEngineP$nextAddedPkt[sim_node()];
          sim_log_debug_clear(134U, "PacketEngineP", " to %u\n", PacketEngineP$nextWaitPkt[sim_node()]);
          PacketEngineP$printIndices();
        }

      if (PacketEngineP$msgBuffer[sim_node()][PacketEngineP$nextAddedPkt[sim_node()]].srcLayer == PacketEngineP$PKT_UPPER_LAYER) {
          sim_log_debug(135U, "PacketEngineP", "PE: Notify about send added at index %u\n", PacketEngineP$nextAddedPkt[sim_node()]);
          PacketEngineP$PacketEngine$sendAdded(PacketEngineP$lid(msg), PacketEngineP$nextAddedPkt[sim_node()], msg);
        }
      else 
#line 951
        {
          if (PacketEngineP$AMPacket$isForMe(msg)) {
              sim_log_debug(136U, "PacketEngineP", "PE: Notify about receive added at index %u\n", PacketEngineP$nextAddedPkt[sim_node()]);
              PacketEngineP$PacketEngine$receiveAdded(PacketEngineP$lid(msg), PacketEngineP$nextAddedPkt[sim_node()], msg);
            }
          else 
#line 955
            {
              sim_log_debug(137U, "PacketEngineP", "PE: Notify about snoop added at index %u\n", PacketEngineP$nextAddedPkt[sim_node()]);
              PacketEngineP$PacketEngine$snoopAdded(PacketEngineP$lid(msg), PacketEngineP$nextAddedPkt[sim_node()], msg);
            }
        }
    }
  else {
#line 961
    sim_log_error(138U, "PacketEngineP", "PE: msgAdded posted, but nextAddedPkt is in state %hhu!\n", PacketEngineP$msgBuffer[sim_node()][PacketEngineP$nextAddedPkt[sim_node()]].state);
    }
  PacketEngineP$moveAddedIndex();
  if (PacketEngineP$nextAddedPkt[sim_node()] < PacketEngineP$BUFFER_SIZE) {
    PacketEngineP$msgAdded$postTask();
    }
  else {
#line 967
    sim_log_debug(139U, "PacketEngineP", "PE: No more added packets\n");
    }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t PacketEngineP$msgAction$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SimSchedulerBasicP$TaskBasic$postTask(PacketEngineP$msgAction);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 1134 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline void PacketEngineP$moveActionIndex(void)
#line 1134
{
  PacketEngineP$moveIndex(&PacketEngineP$nextActionPkt[sim_node()], (PacketEngineP$PKT_SEND | PacketEngineP$PKT_SEND_INTERCEPT) | PacketEngineP$PKT_RECEIVE);
}

#line 447
static inline   message_t *PacketEngineP$Snoop$default$receive(am_id_t upperId, message_t *msg, void *payload, uint8_t len)
#line 447
{
  sim_log_error(111U, "PacketEngineP", "PE: Trying to use invalid upper AM type %hhu!\n", upperId);
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *PacketEngineP$Snoop$receive(am_id_t arg_0x7e4e76d0, message_t *arg_0x7e5b09d8, void *arg_0x7e5b0b78, uint8_t arg_0x7e5b0d00){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
    result = PacketEngineP$Snoop$default$receive(arg_0x7e4e76d0, arg_0x7e5b09d8, arg_0x7e5b0b78, arg_0x7e5b0d00);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 402 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   message_t *PacketEngineP$Receive$default$receive(am_id_t upperId, message_t *msg, void *payload, uint8_t len)
#line 402
{
  sim_log_error(110U, "PacketEngineP", "PE: Trying to use invalid upper AM type %hhu!\n", upperId);
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *PacketEngineP$Receive$receive(am_id_t arg_0x7e4e9f20, message_t *arg_0x7e5b09d8, void *arg_0x7e5b0b78, uint8_t arg_0x7e5b0d00){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x7e4e9f20) {
#line 67
    case 23:
#line 67
      result = SinglePacketP$SubReceive$receive(23, arg_0x7e5b09d8, arg_0x7e5b0b78, arg_0x7e5b0d00);
#line 67
      break;
#line 67
    case 25:
#line 67
      result = SinglePacketP$SubReceive$receive(25, arg_0x7e5b09d8, arg_0x7e5b0b78, arg_0x7e5b0d00);
#line 67
      break;
#line 67
    default:
#line 67
      result = PacketEngineP$Receive$default$receive(arg_0x7e4e9f20, arg_0x7e5b09d8, arg_0x7e5b0b78, arg_0x7e5b0d00);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 600 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline  uint8_t PacketEngineP$Packet$maxPayloadLength(void)
#line 600
{


  return 30;
}

# 118 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline   void StateImplP$State$toIdle(uint8_t id)
#line 118
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 119
    StateImplP$state[sim_node()][id] = StateImplP$S_IDLE;
#line 119
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static   void PacketEngineP$SendState$toIdle(void){
#line 56
  StateImplP$State$toIdle(0U);
#line 56
}
#line 56
# 496 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   uint8_t PacketEngineP$SubReceive$default$payloadLength(am_id_t lowerId, message_t *msg)
#line 496
{
  sim_log_error(116U, "PacketEngineP", "PE: Trying to use invalid lower AM type %hhu!\n", lowerId);
  return INVALID_PAYLOAD_LENGTH;
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  uint8_t PacketEngineP$SubReceive$payloadLength(am_id_t arg_0x7e4e2328, message_t *arg_0x7e5a9010){
#line 89
  unsigned char result;
#line 89

#line 89
  switch (arg_0x7e4e2328) {
#line 89
    case 4:
#line 89
      result = TossimActiveMessageP$Receive$payloadLength(4, arg_0x7e5a9010);
#line 89
      result = TossimActiveMessageP$Snoop$payloadLength(4, arg_0x7e5a9010);
#line 89
      break;
#line 89
    case 48:
#line 89
      result = TossimActiveMessageP$Receive$payloadLength(48, arg_0x7e5a9010);
#line 89
      result = TossimActiveMessageP$Snoop$payloadLength(48, arg_0x7e5a9010);
#line 89
      break;
#line 89
    default:
#line 89
      result = PacketEngineP$SubReceive$default$payloadLength(arg_0x7e4e2328, arg_0x7e5a9010);
#line 89
      break;
#line 89
    }
#line 89

#line 89
  return result;
#line 89
}
#line 89
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t PacketEngineP$AMPacket$destination(message_t *arg_0x7e5a0a28){
#line 67
  unsigned short result;
#line 67

#line 67
  result = TossimActiveMessageP$AMPacket$destination(arg_0x7e5a0a28);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t *arg_0x7dac9920, uint8_t arg_0x7dac9aa8){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(0U, arg_0x7dac9920, arg_0x7dac9aa8);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 151 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t *arg_0x7e5994b8, am_id_t arg_0x7e599640){
#line 151
  TossimActiveMessageP$AMPacket$setType(arg_0x7e5994b8, arg_0x7e599640);
#line 151
}
#line 151
#line 92
inline static  void /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t *arg_0x7e59c5f8, am_addr_t arg_0x7e59c788){
#line 92
  TossimActiveMessageP$AMPacket$setDestination(arg_0x7e59c5f8, arg_0x7e59c788);
#line 92
}
#line 92
# 45 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline  error_t /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(msg, dest);
  /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(msg, 48);
  return /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(msg, len);
}

# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(message_t *arg_0x7dac9920, uint8_t arg_0x7dac9aa8){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(1U, arg_0x7dac9920, arg_0x7dac9aa8);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 151 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(message_t *arg_0x7e5994b8, am_id_t arg_0x7e599640){
#line 151
  TossimActiveMessageP$AMPacket$setType(arg_0x7e5994b8, arg_0x7e599640);
#line 151
}
#line 151
#line 92
inline static  void /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(message_t *arg_0x7e59c5f8, am_addr_t arg_0x7e59c788){
#line 92
  TossimActiveMessageP$AMPacket$setDestination(arg_0x7e59c5f8, arg_0x7e59c788);
#line 92
}
#line 92
# 45 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline  error_t /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 47
{
  /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(msg, dest);
  /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(msg, 4);
  return /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(msg, len);
}

# 511 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   error_t PacketEngineP$SubSend$default$send(am_id_t lowerId, am_addr_t addr, message_t *msg, uint8_t len)
#line 511
{
  return FAIL;
}

# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t PacketEngineP$SubSend$send(am_id_t arg_0x7e4e49b0, am_addr_t arg_0x7e5b6610, message_t *arg_0x7e5b67c0, uint8_t arg_0x7e5b6948){
#line 69
  unsigned char result;
#line 69

#line 69
  switch (arg_0x7e4e49b0) {
#line 69
    case 4:
#line 69
      result = /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(arg_0x7e5b6610, arg_0x7e5b67c0, arg_0x7e5b6948);
#line 69
      break;
#line 69
    case 48:
#line 69
      result = /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(arg_0x7e5b6610, arg_0x7e5b67c0, arg_0x7e5b6948);
#line 69
      break;
#line 69
    default:
#line 69
      result = PacketEngineP$SubSend$default$send(arg_0x7e4e49b0, arg_0x7e5b6610, arg_0x7e5b67c0, arg_0x7e5b6948);
#line 69
      break;
#line 69
    }
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 45 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static   error_t PacketEngineP$SendState$requestState(uint8_t arg_0x7e4c5a38){
#line 45
  unsigned char result;
#line 45

#line 45
  result = StateImplP$State$requestState(0U, arg_0x7e4c5a38);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 920 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   bool PacketEngineP$Intercept$default$forward(am_id_t upperId, message_t *msg, void *payload, uint16_t len)
#line 920
{
  return TRUE;
}

# 31 "/opt/tinyos-2.x/tos/interfaces/Intercept.nc"
inline static  bool PacketEngineP$Intercept$forward(am_id_t arg_0x7e4e7e48, message_t *arg_0x7e50b688, void *arg_0x7e50b828, uint16_t arg_0x7e50b9b8){
#line 31
  unsigned char result;
#line 31

#line 31
    result = PacketEngineP$Intercept$default$forward(arg_0x7e4e7e48, arg_0x7e50b688, arg_0x7e50b828, arg_0x7e50b9b8);
#line 31

#line 31
  return result;
#line 31
}
#line 31
# 974 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline  void PacketEngineP$msgAction$runTask(void)
#line 974
{
  if (!PacketEngineP$running[sim_node()]) {
    return;
    }
#line 977
  if (PacketEngineP$nextActionPkt[sim_node()] == PacketEngineP$BUFFER_SIZE) {
      sim_log_error(140U, "PacketEngineP", "PE: msgAction posted, but nextActionPkt is invalid!\n");
      return;
    }
  if (PacketEngineP$msgBuffer[sim_node()][PacketEngineP$nextActionPkt[sim_node()]].state & ((PacketEngineP$PKT_SEND | PacketEngineP$PKT_SEND_INTERCEPT) | PacketEngineP$PKT_RECEIVE)) {
      message_t *msg = PacketEngineP$msgBuffer[sim_node()][PacketEngineP$nextActionPkt[sim_node()]].msg;
      uint8_t len;
      void *payload = PacketEngineP$Packet$getPayload(msg, &len);

#line 985
      sim_log_debug(141U, "PacketEngineP", "PE: Processing action pkt %u\n", PacketEngineP$nextActionPkt[sim_node()]);

      switch (PacketEngineP$msgBuffer[sim_node()][PacketEngineP$nextActionPkt[sim_node()]].state) {
          case PacketEngineP$PKT_SEND_INTERCEPT: {
              if (!PacketEngineP$Intercept$forward(PacketEngineP$uid(msg), msg, payload, len)) {

                  sim_log_debug(142U, "PacketEngineP", "PE: Upper layer intercepted, dropping pkt %u\n", PacketEngineP$nextActionPkt[sim_node()]);

                  break;
                }
            }
          case PacketEngineP$PKT_SEND: {
              if (PacketEngineP$SendState$requestState(PacketEngineP$S_SENDING) == FAIL) {

                  sim_log_debug(143U, "PacketEngineP", "PE: Already sending or during backoff, waiting\n");
                  return;
                }
              switch (PacketEngineP$SubSend$send(PacketEngineP$lid(msg), PacketEngineP$AMPacket$destination(msg), msg, 
              PacketEngineP$SubReceive$payloadLength(PacketEngineP$lid(msg), msg))) {
                  case SUCCESS: {
                      sim_log_debug(144U, "PacketEngineP", "PE: SubSend successful, waiting for result\n");
                      return;
                    }
#line 1007
                  case FAIL: {

                      sim_log_debug(145U, "PacketEngineP", "PE: Unsupported lower AM type %hhu!\n", PacketEngineP$lid(msg));
                      PacketEngineP$SendState$toIdle();
                      break;
                    }
#line 1012
                  case EINVAL: {

                      sim_log_debug(146U, "PacketEngineP", "PE: No hops left, dropping packet!\n");
                      PacketEngineP$SendState$toIdle();
                      break;
                    }
#line 1017
                  case EBUSY: {

                      sim_log_error(147U, "PacketEngineP", "PE: SubSend busy! Waiting for result\n");
                      PacketEngineP$SendState$toIdle();
                      return;
                    }
#line 1022
                  case EOFF: {

                      sim_log_error(148U, "PacketEngineP", "PE: Radio is off, currently unhandled!\n");
                      PacketEngineP$SendState$toIdle();
                      return;
                    }
#line 1027
                  case ESIZE: {

                      sim_log_error(149U, "PacketEngineP", "PE: Length of pkt %u too long! Forcing max length\n");
                      PacketEngineP$SendState$toIdle();
                      PacketEngineP$Packet$setPayloadLength(msg, PacketEngineP$Packet$maxPayloadLength());
                      PacketEngineP$msgAction$postTask();
                      return;
                    }
                }
#line 1035
              break;
            }
#line 1036
          case PacketEngineP$PKT_RECEIVE: {
              if (PacketEngineP$uid(msg) == AM_NO_UPPER_DATA) {
                break;
                }
#line 1039
              sim_log_debug(150U, "PacketEngineP", "PE: Receiving pkt %u to upper layer\n");
              if (PacketEngineP$AMPacket$isForMe(msg)) {
                PacketEngineP$msgBuffer[sim_node()][PacketEngineP$nextActionPkt[sim_node()]].msg = PacketEngineP$Receive$receive(PacketEngineP$uid(msg), msg, payload, len);
                }
              else {
#line 1043
                PacketEngineP$msgBuffer[sim_node()][PacketEngineP$nextActionPkt[sim_node()]].msg = PacketEngineP$Snoop$receive(PacketEngineP$uid(msg), msg, payload, len);
                }
#line 1044
              break;
            }
        }
    }
  else {
#line 1047
    sim_log_error(151U, "PacketEngineP", "PE: msgAction posted, but nextActionPkt is in state %hhu!\n", PacketEngineP$msgBuffer[sim_node()][PacketEngineP$nextActionPkt[sim_node()]].state);
    }

  PacketEngineP$removePacket(PacketEngineP$nextActionPkt[sim_node()]);
  PacketEngineP$moveActionIndex();
  if (PacketEngineP$nextActionPkt[sim_node()] < PacketEngineP$BUFFER_SIZE) {
    PacketEngineP$msgAction$postTask();
    }
  else {
#line 1055
    sim_log_debug(152U, "PacketEngineP", "PE: No more action packets\n");
    }
}

# 222 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline   uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void)
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();
}

# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void){
#line 98
  unsigned long result;
#line 98

#line 98
  result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow();
#line 98

#line 98
  return result;
#line 98
}
#line 98
# 85 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline  uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void)
{
#line 86
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow();
}

# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(void){
#line 125
  unsigned long result;
#line 125

#line 125
  result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow();
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 127 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow());
}

# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void){
#line 72
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired();
#line 72
}
#line 72
# 226 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline   uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm(void)
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned long __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()];

      {
#line 227
        __nesc_atomic_end(__nesc_atomic); 
#line 227
        return __nesc_temp;
      }
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 105 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void){
#line 105
  unsigned long result;
#line 105

#line 105
  result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getAlarm();
#line 105

#line 105
  return result;
#line 105
}
#line 105
#line 92
inline static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7e2d6ac0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7e2d6c50){
#line 92
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(arg_0x7e2d6ac0, arg_0x7e2d6c50);
#line 92
}
#line 92
# 47 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[sim_node()] = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[sim_node()] = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(t0, dt);
}










static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void)
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[sim_node()] == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[sim_node()], FALSE);
    }
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired();
}

#line 82
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 83
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(t0, dt, TRUE);
}

# 118 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t arg_0x7e530120, uint32_t arg_0x7e5302b0){
#line 118
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(arg_0x7e530120, arg_0x7e5302b0);
#line 118
}
#line 118
# 204 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void)
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void){
#line 62
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop();
#line 62
}
#line 62
# 60 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void)
{
#line 61
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop();
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop();
#line 67
}
#line 67
# 88 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void)
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint8_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(now);
        }
      else {
#line 123
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(now, min_remaining);
        }
    }
}

# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t TestDsrP$AMPacket$address(void){
#line 57
  unsigned short result;
#line 57

#line 57
  result = TossimActiveMessageP$AMPacket$address();
#line 57

#line 57
  return result;
#line 57
}
#line 57
# 215 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline  error_t PacketEngineP$StdControl$start(void)
#line 215
{
  PacketEngineP$running[sim_node()] = TRUE;

  if (PacketEngineP$nextAddedPkt[sim_node()] < PacketEngineP$BUFFER_SIZE) {
    PacketEngineP$msgAdded$postTask();
    }
#line 220
  if (PacketEngineP$nextActionPkt[sim_node()] < PacketEngineP$BUFFER_SIZE) {
    PacketEngineP$msgAction$postTask();
    }
#line 222
  return SUCCESS;
}

# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t TestDsrP$PEControl$start(void){
#line 74
  unsigned char result;
#line 74

#line 74
  result = PacketEngineP$StdControl$start();
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 93 "TestDsrP.nc"
static inline  void TestDsrP$AMControl$startDone(error_t error)
#line 93
{
  if (error) {
    return;
    }
  TestDsrP$PEControl$start();

  if (TestDsrP$AMPacket$address() == 1) {
    TestDsrP$Timer$startOneShot(1024);
    }
}

# 92 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void TossimPacketModelC$Control$startDone(error_t arg_0x7e541640){
#line 92
  TestDsrP$AMControl$startDone(arg_0x7e541640);
#line 92
}
#line 92
# 88 "/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline  void TossimPacketModelC$startDoneTask$runTask(void)
#line 88
{
  TossimPacketModelC$running[sim_node()] = TRUE;
  TossimPacketModelC$Control$startDone(SUCCESS);
}

# 109 "TestDsrP.nc"
static inline  void TestDsrP$AMControl$stopDone(error_t error)
#line 109
{
}

# 117 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void TossimPacketModelC$Control$stopDone(error_t arg_0x7e53c200){
#line 117
  TestDsrP$AMControl$stopDone(arg_0x7e53c200);
#line 117
}
#line 117
# 93 "/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline  void TossimPacketModelC$stopDoneTask$runTask(void)
#line 93
{
  TossimPacketModelC$running[sim_node()] = FALSE;
  TossimPacketModelC$Control$stopDone(SUCCESS);
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

#line 240
static __inline uint8_t __nesc_hton_uint8(void *target, uint8_t value)
#line 240
{
  uint8_t *base = target;

#line 242
  base[0] = value;
  return value;
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void TossimActiveMessageP$AMSend$sendDone(am_id_t arg_0x7e5b3c10, message_t *arg_0x7e5b4950, error_t arg_0x7e5b4ad8){
#line 99
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(arg_0x7e5b3c10, arg_0x7e5b4950, arg_0x7e5b4ad8);
#line 99
}
#line 99
# 102 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
static inline  void TossimActiveMessageP$Model$sendDone(message_t *msg, error_t result)
#line 102
{
  TossimActiveMessageP$AMSend$sendDone(TossimActiveMessageP$AMPacket$type(msg), msg, result);
}

# 68 "/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
inline static  void TossimPacketModelC$Packet$sendDone(message_t *arg_0x7e592248, error_t arg_0x7e5923d0){
#line 68
  TossimActiveMessageP$Model$sendDone(arg_0x7e592248, arg_0x7e5923d0);
#line 68
}
#line 68
# 74 "/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline tossim_metadata_t *TossimPacketModelC$getMetadata(message_t *msg)
#line 74
{
  return (tossim_metadata_t *)& msg->metadata;
}

#line 137
static inline  void TossimPacketModelC$sendDoneTask$runTask(void)
#line 137
{
  message_t *msg = TossimPacketModelC$sending[sim_node()];
  tossim_metadata_t *meta = TossimPacketModelC$getMetadata(msg);

#line 140
  __nesc_hton_uint8((unsigned char *)&meta->ack, 0);
  __nesc_hton_uint16((unsigned char *)&meta->strength, 0);
  __nesc_hton_uint16((unsigned char *)&meta->time, 0);
  TossimPacketModelC$sending[sim_node()] = FALSE;
  TossimPacketModelC$Packet$sendDone(msg, SUCCESS);
}

# 258 "/usr/lib/ncc/nesc_nx.h"
static inline void __nesc_bf_encode8(uint8_t *msg, unsigned offset, uint8_t length, uint8_t x)
#line 258
{
#line 258
  unsigned byte_offset = offset >> 3;
#line 258
  unsigned bit_offset = offset & 7;

#line 258
  x = x & ((1 << length) - 1);
#line 258
  if (length + bit_offset <= 8) {
#line 258
      unsigned mask = ((1 << length) - 1) << (8 - bit_offset - length);

#line 258
      msg[byte_offset] = (msg[byte_offset] & ~mask) | (x << (8 - bit_offset - length));
#line 258
      return;
    }
#line 258
  if (bit_offset > 0) {
#line 258
      unsigned mask = (1 << (8 - bit_offset)) - 1;

#line 258
      length -= 8 - bit_offset;
#line 258
      msg[byte_offset] = (msg[byte_offset] & ~mask) | (x >> length);
#line 258
      byte_offset++;
    }
#line 258
  while (length >= 8) {
#line 258
      length -= 8;
#line 258
      msg[byte_offset++] = x >> length;
    }
#line 258
  if (length > 0) {
#line 258
      unsigned mask = (1 << (8 - length)) - 1;

#line 258
      msg[byte_offset] = (msg[byte_offset] & mask) | (x << (8 - length));
    }
}

#line 258
static __inline uint8_t __nesc_htonbf_uint8(void *target, unsigned offset, uint8_t length, uint8_t value)
#line 258
{
#line 258
  __nesc_bf_encode8(target, offset, length, value);
#line 258
  return value;
}

# 183 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
static inline  uint8_t TossimActiveMessageP$Packet$maxPayloadLength(void)
#line 183
{
  return 30;
}

# 95 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t DsrControlP$SubPacket$maxPayloadLength(void){
#line 95
  unsigned char result;
#line 95

#line 95
  result = TossimActiveMessageP$Packet$maxPayloadLength();
#line 95

#line 95
  return result;
#line 95
}
#line 95
# 327 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvP.nc"
static inline  error_t TlvP$TlvMultiple$remove(uint8_t type, void *block, tlv_key_t key, 
uint8_t maxLen)
#line 328
{
  return TlvP$TlvMultiple$setLength(type, block, key, 0, maxLen);
}

#line 188
static inline  error_t TlvP$Tlv$remove(uint8_t type, void *block, uint8_t maxLen)
#line 188
{
  return TlvP$TlvMultiple$remove(type, block, TlvP$TlvList$next(type, block, TlvP$TLV_FIRST_KEY), 
  maxLen);
}

# 102 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/Tlv.nc"
inline static  error_t DsrControlP$RouteRequest$remove(void *arg_0x7def7868, uint8_t arg_0x7def79f0){
#line 102
  unsigned char result;
#line 102

#line 102
  result = TlvP$Tlv$remove(1, arg_0x7def7868, arg_0x7def79f0);
#line 102

#line 102
  return result;
#line 102
}
#line 102
# 89 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacket.nc"
inline static  bool DsrControlP$SinglePacket$isForMe(message_t *arg_0x7df52d30){
#line 89
  unsigned char result;
#line 89

#line 89
  result = SinglePacketP$SinglePacket$isForMe(arg_0x7df52d30);
#line 89

#line 89
  return result;
#line 89
}
#line 89
# 136 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_id_t DsrControlP$AMPacket$type(message_t *arg_0x7e59af08){
#line 136
  unsigned char result;
#line 136

#line 136
  result = TossimActiveMessageP$AMPacket$type(arg_0x7e59af08);
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t DsrControlP$composePkt$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SimSchedulerBasicP$TaskBasic$postTask(DsrControlP$composePkt);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 49 "/opt/tinyos-2.x/tos/types/TinyError.h"
static inline error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 144 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
inline static  error_t DsrControlP$SingleDsrPacketEngine$drop(packet_id_t arg_0x7e501948){
#line 144
  unsigned char result;
#line 144

#line 144
  result = PacketEngineP$PacketEngine$drop(4, arg_0x7e501948);
#line 144
  result = ecombine(result, PacketEngineP$PacketEngine$drop(48, arg_0x7e501948));
#line 144

#line 144
  return result;
#line 144
}
#line 144
# 58 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   void DsrControlP$Compose$clear(uint16_t arg_0x7deb1948){
#line 58
  /*DsrP.ComposeC*/BitVectorC$0$BitVector$clear(arg_0x7deb1948);
#line 58
}
#line 58
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t SinglePacketP$SubPacket$payloadLength(message_t *arg_0x7e5a6c58){
#line 67
  unsigned char result;
#line 67

#line 67
  result = PacketEngineP$Packet$payloadLength(arg_0x7e5a6c58);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 339 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
static inline  uint8_t SinglePacketP$Packet$payloadLength(message_t *msg)
#line 339
{
  return SinglePacketP$SubPacket$payloadLength(msg) - sizeof(single_packet_header_t );
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t DsrControlP$ComposePacket$payloadLength(message_t *arg_0x7e5a6c58){
#line 67
  unsigned char result;
#line 67

#line 67
  result = SinglePacketP$Packet$payloadLength(arg_0x7e5a6c58);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t DsrControlP$Send$send(am_addr_t arg_0x7e5b6610, message_t *arg_0x7e5b67c0, uint8_t arg_0x7e5b6948){
#line 69
  unsigned char result;
#line 69

#line 69
  result = SinglePacketP$Send$send(AM_NO_UPPER_DATA, arg_0x7e5b6610, arg_0x7e5b67c0, arg_0x7e5b6948);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 45 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static   error_t DsrControlP$SendState$requestState(uint8_t arg_0x7e4c5a38){
#line 45
  unsigned char result;
#line 45

#line 45
  result = StateImplP$State$requestState(1U, arg_0x7e4c5a38);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 144 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
inline static  error_t DsrControlP$SinglePacketEngine$drop(packet_id_t arg_0x7e501948){
#line 144
  unsigned char result;
#line 144

#line 144
  result = PacketEngineP$PacketEngine$drop(4, arg_0x7e501948);
#line 144

#line 144
  return result;
#line 144
}
#line 144
# 60 "/opt/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
inline static   error_t DsrControlP$Acks$noAck(message_t *arg_0x7e090648){
#line 60
  unsigned char result;
#line 60

#line 60
  result = TossimPacketModelC$PacketAcknowledgements$noAck(arg_0x7e090648);
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void DsrControlP$AMPacket$setDestination(message_t *arg_0x7e59c5f8, am_addr_t arg_0x7e59c788){
#line 92
  TossimActiveMessageP$AMPacket$setDestination(arg_0x7e59c5f8, arg_0x7e59c788);
#line 92
}
#line 92
# 144 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
inline static  error_t DsrControlP$DsrPacketEngine$drop(packet_id_t arg_0x7e501948){
#line 144
  unsigned char result;
#line 144

#line 144
  result = PacketEngineP$PacketEngine$drop(48, arg_0x7e501948);
#line 144

#line 144
  return result;
#line 144
}
#line 144
# 75 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/Tlv.nc"
inline static  void *DsrControlP$RouteRequest$value(void *arg_0x7def8358){
#line 75
  void *result;
#line 75

#line 75
  result = TlvP$Tlv$value(1, arg_0x7def8358);
#line 75

#line 75
  return result;
#line 75
}
#line 75
#line 92
inline static  error_t DsrControlP$RouteRequest$add(void *arg_0x7def8b40, uint8_t arg_0x7def8cc8, uint8_t arg_0x7def8e50){
#line 92
  unsigned char result;
#line 92

#line 92
  result = TlvP$Tlv$add(1, arg_0x7def8b40, arg_0x7def8cc8, arg_0x7def8e50);
#line 92

#line 92
  return result;
#line 92
}
#line 92
# 1024 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/DsrControlP.nc"
static inline error_t DsrControlP$addRouteRequest(packet_id_t pid, message_t *msg, void *data, am_addr_t dest)
#line 1024
{
  dsr_route_request_t *rreq;

#line 1026
  if (DsrControlP$addDsrHeader(pid, msg, data) == FAIL) {
    return FAIL;
    }
#line 1028
  DsrControlP$preLengthChange(msg, data);

  if (
#line 1029
  DsrControlP$RouteRequest$add(data, sizeof(dsr_route_request_t ), 
  DsrControlP$SubPacket$maxPayloadLength()) != SUCCESS) {
      sim_log_error(285U, "DsrControlP", "DSR: Pkt %u: Already has route request or not enough room!\n");
      DsrControlP$DsrPacketEngine$drop(pid);
      return FAIL;
    }
  DsrControlP$postLengthChange(msg, data);
  rreq = (dsr_route_request_t *)DsrControlP$RouteRequest$value(data);
  if (rreq == (void *)0) {
      sim_log_error(286U, "DsrControlP", "DSR: Pkt %u: Can't find the route request option just added!\n");
      DsrControlP$DsrPacketEngine$drop(pid);
      return FAIL;
    }

  __nesc_hton_uint8((unsigned char *)&rreq->ident, DsrControlP$nextIdent[sim_node()]++);
  DsrControlP$AMPacket$setDestination(msg, AM_BROADCAST_ADDR);
  DsrControlP$Acks$noAck(msg);
  return SUCCESS;
}

# 56 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
static inline tossim_header_t *TossimActiveMessageP$getHeader(message_t *amsg)
#line 56
{
  return (tossim_header_t *)(amsg->data - sizeof(tossim_header_t ));
}

#line 179
static inline  void TossimActiveMessageP$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 179
{
  __nesc_hton_uint8((unsigned char *)&TossimActiveMessageP$getHeader(msg)->length, len);
}

# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void DsrControlP$SubPacket$setPayloadLength(message_t *arg_0x7e5a5360, uint8_t arg_0x7e5a54e8){
#line 83
  TossimActiveMessageP$Packet$setPayloadLength(arg_0x7e5a5360, arg_0x7e5a54e8);
#line 83
}
#line 83
# 85 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
inline static  message_t *DsrControlP$SinglePacketEngine$packet(packet_id_t arg_0x7e504a80){
#line 85
  nx_struct message_t *result;
#line 85

#line 85
  result = PacketEngineP$PacketEngine$packet(4, arg_0x7e504a80);
#line 85

#line 85
  return result;
#line 85
}
#line 85
# 48 "/opt/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
inline static   error_t DsrControlP$Acks$requestAck(message_t *arg_0x7e094f28){
#line 48
  unsigned char result;
#line 48

#line 48
  result = TossimPacketModelC$PacketAcknowledgements$requestAck(arg_0x7e094f28);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t DsrControlP$AMPacket$destination(message_t *arg_0x7e5a0a28){
#line 67
  unsigned short result;
#line 67

#line 67
  result = TossimActiveMessageP$AMPacket$destination(arg_0x7e5a0a28);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 75 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/Tlv.nc"
inline static  void *DsrControlP$SourceRoute$value(void *arg_0x7def8358){
#line 75
  void *result;
#line 75

#line 75
  result = TlvP$Tlv$value(96, arg_0x7def8358);
#line 75

#line 75
  return result;
#line 75
}
#line 75
#line 92
inline static  error_t DsrControlP$SourceRoute$add(void *arg_0x7def8b40, uint8_t arg_0x7def8cc8, uint8_t arg_0x7def8e50){
#line 92
  unsigned char result;
#line 92

#line 92
  result = TlvP$Tlv$add(96, arg_0x7def8b40, arg_0x7def8cc8, arg_0x7def8e50);
#line 92

#line 92
  return result;
#line 92
}
#line 92
# 66 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
static inline  am_addr_t SinglePacketP$SinglePacket$source(message_t *msg)
#line 66
{
  return __nesc_ntoh_uint16((unsigned char *)&((single_packet_header_t *)SinglePacketP$SubPacket$getPayload(msg, (void *)0))->src);
}

# 47 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacket.nc"
inline static  am_addr_t DsrControlP$SinglePacket$source(message_t *arg_0x7df54918){
#line 47
  unsigned short result;
#line 47

#line 47
  result = SinglePacketP$SinglePacket$source(arg_0x7df54918);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 85 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
inline static  message_t *DsrControlP$DsrPacketEngine$packet(packet_id_t arg_0x7e504a80){
#line 85
  nx_struct message_t *result;
#line 85

#line 85
  result = PacketEngineP$PacketEngine$packet(48, arg_0x7e504a80);
#line 85

#line 85
  return result;
#line 85
}
#line 85
# 55 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline uint16_t /*DsrP.ComposeC*/BitVectorC$0$getMask(uint16_t bitnum)
{
  return 1 << bitnum % /*DsrP.ComposeC*/BitVectorC$0$ELEMENT_SIZE;
}

#line 50
static inline uint16_t /*DsrP.ComposeC*/BitVectorC$0$getIndex(uint16_t bitnum)
{
  return bitnum / /*DsrP.ComposeC*/BitVectorC$0$ELEMENT_SIZE;
}

#line 76
static inline   bool /*DsrP.ComposeC*/BitVectorC$0$BitVector$get(uint16_t bitnum)
{
  return /*DsrP.ComposeC*/BitVectorC$0$m_bits[sim_node()][/*DsrP.ComposeC*/BitVectorC$0$getIndex(bitnum)] & /*DsrP.ComposeC*/BitVectorC$0$getMask(bitnum) ? TRUE : FALSE;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   bool DsrControlP$Compose$get(uint16_t arg_0x7deb2f08){
#line 46
  unsigned char result;
#line 46

#line 46
  result = /*DsrP.ComposeC*/BitVectorC$0$BitVector$get(arg_0x7deb2f08);
#line 46

#line 46
  return result;
#line 46
}
#line 46
# 903 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline  packet_id_t pidCombine(packet_id_t a, packet_id_t b)
#line 903
{
  return PacketEngineP$pidCombineInternal(a, b);
}

# 48 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/IndexedIterator.nc"
inline static  DsrControlP$SingleDsrPacketWaitList$iterator_item_t DsrControlP$SingleDsrPacketWaitList$next(DsrControlP$SingleDsrPacketWaitList$iterator_item_t arg_0x7e4f67c0){
#line 48
  unsigned char result;
#line 48

#line 48
  result = PacketEngineP$PacketWaitList$next(4, arg_0x7e4f67c0);
#line 48
  result = pidCombine(result, PacketEngineP$PacketWaitList$next(48, arg_0x7e4f67c0));
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 41 "/home/jryans/tinyos-2.x-contrib-rice/tos/types/Iterator.h"
static inline iterator_end_t iteratorEndCombine(iterator_end_t a, iterator_end_t b)
#line 41
{
  return a && b;
}

# 56 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/IndexedIterator.nc"
inline static  iterator_end_t DsrControlP$SingleDsrPacketWaitList$end(DsrControlP$SingleDsrPacketWaitList$iterator_item_t arg_0x7e4f6f00){
#line 56
  unsigned char result;
#line 56

#line 56
  result = PacketEngineP$PacketWaitList$end(4, arg_0x7e4f6f00);
#line 56
  result = iteratorEndCombine(result, PacketEngineP$PacketWaitList$end(48, arg_0x7e4f6f00));
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 157 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
inline static  packet_id_t DsrControlP$SingleDsrPacketEngine$waitList(void){
#line 157
  unsigned char result;
#line 157

#line 157
  result = PacketEngineP$PacketEngine$waitList(4);
#line 157
  result = pidCombine(result, PacketEngineP$PacketEngine$waitList(48));
#line 157

#line 157
  return result;
#line 157
}
#line 157
# 133 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline   bool StateImplP$State$isState(uint8_t id, uint8_t myState)
#line 133
{
  bool isState;

#line 135
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 135
    isState = StateImplP$state[sim_node()][id] == myState;
#line 135
    __nesc_atomic_end(__nesc_atomic); }
  return isState;
}

#line 126
static inline   bool StateImplP$State$isIdle(uint8_t id)
#line 126
{
  return StateImplP$State$isState(id, StateImplP$S_IDLE);
}

# 61 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static   bool DsrControlP$SendState$isIdle(void){
#line 61
  unsigned char result;
#line 61

#line 61
  result = StateImplP$State$isIdle(1U);
#line 61

#line 61
  return result;
#line 61
}
#line 61
# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void SinglePacketP$SubPacket$setPayloadLength(message_t *arg_0x7e5a5360, uint8_t arg_0x7e5a54e8){
#line 83
  PacketEngineP$Packet$setPayloadLength(arg_0x7e5a5360, arg_0x7e5a54e8);
#line 83
}
#line 83
# 356 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
static inline  void SinglePacketP$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 356
{
  SinglePacketP$SubPacket$setPayloadLength(msg, len + sizeof(single_packet_header_t ));
}

# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void DsrControlP$ComposePacket$setPayloadLength(message_t *arg_0x7e5a5360, uint8_t arg_0x7e5a54e8){
#line 83
  SinglePacketP$Packet$setPayloadLength(arg_0x7e5a5360, arg_0x7e5a54e8);
#line 83
}
#line 83
# 806 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/DsrControlP.nc"
static inline  void DsrControlP$composePkt$runTask(void)
#line 806
{
  packet_id_t pid;
  message_t *inPkt;
  void *inData;
  uint8_t optLen;
  message_t outPktBuf;
  message_t *outPkt = &outPktBuf;
  am_addr_t outSingleDest;
  void *outData = DsrControlP$SubPacket$getPayload(outPkt, (void *)0);
  bool outReady = FALSE;

#line 816
  DsrControlP$ComposePacket$setPayloadLength(outPkt, 0);
  if (!DsrControlP$SendState$isIdle()) {
      sim_log_debug(267U, "DsrControlP", "DSR: Already sending, wait for repost\n");
      return;
    }

  for (pid = DsrControlP$SingleDsrPacketEngine$waitList(); !DsrControlP$SingleDsrPacketWaitList$end(pid); 
  pid = DsrControlP$SingleDsrPacketWaitList$next(pid)) {

      if (!DsrControlP$Compose$get(pid)) {
        continue;
        }
#line 827
      if ((inPkt = DsrControlP$DsrPacketEngine$packet(pid)) != (void *)0) {

          inData = DsrControlP$SubPacket$getPayload(inPkt, (void *)0);
          if ((optLen = DsrControlP$RouteRequest$length(inData)) == 0) {
              sim_log_error(268U, "DsrControlP", "DSR: Pkt %u: No route request, can't compose route reply!\n", pid);

              DsrControlP$DsrPacketEngine$drop(pid);
              DsrControlP$Compose$clear(pid);
              continue;
            }
          if (!DsrControlP$SinglePacket$isForMe(inPkt)) {
              sim_log_error(269U, "DsrControlP", "DSR: Pkt %u: Not destined for this node, can't compose route reply!\n", pid);

              DsrControlP$DsrPacketEngine$drop(pid);
              DsrControlP$Compose$clear(pid);
              continue;
            }
          else 
#line 843
            {
              dsr_route_request_t *inRreq = (dsr_route_request_t *)DsrControlP$RouteRequest$value(inData);
              uint8_t numAddrRreq = (optLen - sizeof(dsr_route_request_t )) / sizeof(nx_am_addr_t );
              dsr_source_route_t *outSr;
              uint8_t curAddr;

#line 848
              sim_log_debug(270U, "DsrControlP", "DSR: Pkt %u: Target node composing route reply\n", pid);
              outSingleDest = DsrControlP$SinglePacket$source(inPkt);

              sim_log_debug(271U, "DsrControlP", "DSR: Pkt %u: Outgoing route reply to %u\n", pid, outSingleDest);
              if (DsrControlP$addDsrHeader(pid, outPkt, outData) == FAIL) {
                  DsrControlP$Compose$clear(pid);
                  continue;
                }
              DsrControlP$preLengthChange(outPkt, outData);


              if (
#line 857
              DsrControlP$SourceRoute$add(outData, sizeof(dsr_source_route_t ) + 
              numAddrRreq * sizeof(nx_am_addr_t ), 
              DsrControlP$SubPacket$maxPayloadLength()) != SUCCESS) {
                  sim_log_error(272U, "DsrControlP", "DSR: Pkt %u: Already has source route or not enough room!\n", pid);

                  DsrControlP$DsrPacketEngine$drop(pid);
                  DsrControlP$Compose$clear(pid);
                  continue;
                }
              DsrControlP$postLengthChange(outPkt, outData);
              outSr = (dsr_source_route_t *)DsrControlP$SourceRoute$value(outData);
              if (outSr == (void *)0) {
                  sim_log_error(273U, "DsrControlP", "DSR: Pkt %u: Can't find the source route option just added!\n", pid);

                  DsrControlP$DsrPacketEngine$drop(pid);
                  DsrControlP$Compose$clear(pid);
                  continue;
                }

              __nesc_htonbf_uint8((unsigned char *)&(*outSr), 0, 1, TRUE);
              __nesc_htonbf_uint8((unsigned char *)&(*outSr), 1, 3, 0);
              __nesc_htonbf_uint8((unsigned char *)&(*outSr), 4, 4, numAddrRreq);

              for (curAddr = 0; curAddr < numAddrRreq; curAddr++) 
                __nesc_hton_uint16((unsigned char *)&outSr->addr[curAddr], __nesc_ntoh_uint16((unsigned char *)&inRreq->addr[numAddrRreq - curAddr - 1]));

              if (numAddrRreq > 0) {
                DsrControlP$AMPacket$setDestination(outPkt, __nesc_ntoh_uint16((unsigned char *)&outSr->addr[0]));
                }
              else {
#line 886
                DsrControlP$AMPacket$setDestination(outPkt, outSingleDest);
                }
#line 887
              sim_log_debug(274U, "DsrControlP", "DSR: Pkt %u: Sending route reply to %u along the way to %u\n", pid, DsrControlP$AMPacket$destination(outPkt), outSingleDest);

              DsrControlP$Acks$requestAck(outPkt);
              outReady = TRUE;
              break;
            }
        }
      else {
#line 893
        if ((inPkt = DsrControlP$SinglePacketEngine$packet(pid)) != (void *)0) {

            uint8_t inLen;

#line 896
            outSingleDest = DsrControlP$SinglePacket$destination(inPkt);
            inData = DsrControlP$SubPacket$getPayload(inPkt, &inLen);
            sim_log_debug(275U, "DsrControlP", "DSR: Pkt %u: Composing route request to %u\n", pid, outSingleDest);

            memcpy(outData, inData, inLen);
            DsrControlP$SubPacket$setPayloadLength(outPkt, inLen);
            if (DsrControlP$addRouteRequest(pid, outPkt, outData, outSingleDest) == FAIL) {
                sim_log_error(276U, "DsrControlP", "DSR: Pkt %u: Unable to compose extra route request!\n", pid);
                DsrControlP$SinglePacketEngine$drop(pid);
                DsrControlP$Compose$clear(pid);
                continue;
              }
            sim_log_debug(277U, "DsrControlP", "DSR: Pkt %u: Sending route request to %u\n", pid, outSingleDest);
            outReady = TRUE;
            break;
          }
        else 
#line 911
          {
            sim_log_error(278U, "DsrControlP", "DSR: Pkt %u: Unknown type waiting for compose!\n", pid);
            DsrControlP$Compose$clear(pid);
            continue;
          }
        }
    }
#line 917
  if (outReady) {

      if (DsrControlP$SendState$requestState(DsrControlP$S_SENDING) == FAIL) {
          sim_log_error(279U, "DsrControlP", "DSR: Already sending, even though we just checked!\n");
          return;
        }

      DsrControlP$sendPktBuf[sim_node()] = outPktBuf;

      switch (DsrControlP$Send$send(outSingleDest, DsrControlP$sendPkt[sim_node()], DsrControlP$ComposePacket$payloadLength(DsrControlP$sendPkt[sim_node()]))) {
          case SUCCESS: {
              sim_log_debug(280U, "DsrControlP", "DSR: Pkt %u: Outgoing send successful, waiting for result\n", pid);
              DsrControlP$Compose$clear(pid);
              break;
            }
#line 931
          case EBUSY: {

              sim_log_error(281U, "DsrControlP", "DSR: Pkt %u: Outgoing send busy! Waiting for result\n", pid);
              DsrControlP$SendState$toIdle();
              return;
            }
#line 936
          case EOFF: {

              sim_log_error(282U, "DsrControlP", "DSR: Pkt %u: Packet engine is off, currently unhandled!\n", pid);

              DsrControlP$SendState$toIdle();
              return;
            }
#line 942
          case ESIZE: {

              sim_log_error(283U, "DsrControlP", "DSR: Pkt %u: Length of msg %u too long, dropping!\n", pid);
              DsrControlP$SendState$toIdle();
              DsrControlP$Compose$clear(pid);
              DsrControlP$SingleDsrPacketEngine$drop(pid);
              DsrControlP$composePkt$postTask();
              return;
            }
        }
      if (DsrControlP$AMPacket$type(inPkt) == AM_DSR) {

          if ((optLen = DsrControlP$RouteRequest$length(inData)) != 0) {
              if (DsrControlP$SinglePacket$isForMe(inPkt)) {
                  DsrControlP$preLengthChange(inPkt, inData);
                  DsrControlP$RouteRequest$remove(inData, DsrControlP$SubPacket$maxPayloadLength());
                  DsrControlP$postLengthChange(inPkt, inData);

                  DsrControlP$DsrPacketEngine$receiveAdded(pid, inPkt);
                }
            }
        }
    }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SimSchedulerBasicP$TaskBasic$postTask(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 150 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueueP.nc"
static inline  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$moveUp(priority_queue_id_t m)
#line 150
{
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$moveUpPos(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[sim_node()][m]);
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTree();
}

# 87 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueue.nc"
inline static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$moveUp(priority_queue_id_t arg_0x7dc1bd10){
#line 87
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$moveUp(arg_0x7dc1bd10);
#line 87
}
#line 87
#line 72
inline static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$insert(priority_queue_id_t arg_0x7dc1dce8){
#line 72
  unsigned char result;
#line 72

#line 72
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$insert(arg_0x7dc1dce8);
#line 72

#line 72
  return result;
#line 72
}
#line 72
# 65 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdgeUnitWeightC.nc"
static inline  graph_edge_unit_weight_t GraphEdgeUnitWeightC$GraphEdgeWeight$weight(graph_edge_id_t m)
#line 65
{
  return 1;
}

# 55 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdgeWeight.nc"
inline static  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeWeight$weight_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeWeight$weight(graph_edge_id_t arg_0x7dcc5170){
#line 55
  unsigned char result;
#line 55

#line 55
  result = GraphEdgeUnitWeightC$GraphEdgeWeight$weight(arg_0x7dcc5170);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 274 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphSparseP.nc"
static inline  graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdge$dest(graph_edge_id_t m)
#line 274
{
  return /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[sim_node()][m].dest;
}

# 54 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphEdge.nc"
inline static  graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdge$dest(graph_edge_id_t arg_0x7dcd4c58){
#line 54
  unsigned char result;
#line 54

#line 54
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdge$dest(arg_0x7dcd4c58);
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 286 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphSparseP.nc"
static inline  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$next(graph_edge_id_t m)
#line 286
{
  return /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[sim_node()][m].next;
}

# 48 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/IndexedIterator.nc"
inline static  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$iterator_item_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$next(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$iterator_item_t arg_0x7e4f67c0){
#line 48
  unsigned char result;
#line 48

#line 48
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$next(arg_0x7e4f67c0);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 296 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphSparseP.nc"
static inline  iterator_end_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$end(graph_edge_id_t m)
#line 296
{
  return m == 8;
}

# 56 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/IndexedIterator.nc"
inline static  iterator_end_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$end(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$iterator_item_t arg_0x7e4f6f00){
#line 56
  unsigned char result;
#line 56

#line 56
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$end(arg_0x7e4f6f00);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 251 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphSparseP.nc"
static inline  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edgeList(graph_vertex_id_t s)
#line 251
{
  return /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[sim_node()][s];
}

# 136 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/Graph.nc"
inline static  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$edgeList(graph_vertex_id_t arg_0x7dcf9010){
#line 136
  unsigned char result;
#line 136

#line 136
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edgeList(arg_0x7dcf9010);
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 206 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueueP.nc"
static inline  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$clear(void)
#line 206
{
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$clearData();
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTree();
}

# 122 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueue.nc"
inline static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$clear(void){
#line 122
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$clear();
#line 122
}
#line 122
# 276 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPathP.nc"
static inline  int16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Compare$test(graph_vertex_id_t a, graph_vertex_id_t b)
#line 276
{
  return /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[sim_node()][b] - /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[sim_node()][a];
}

# 49 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/Compare.nc"
inline static  int16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$test(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$compare_t arg_0x7dc15628, /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$compare_t arg_0x7dc157b8){
#line 49
  short result;
#line 49

#line 49
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Compare$test(arg_0x7dc15628, arg_0x7dc157b8);
#line 49

#line 49
  return result;
#line 49
}
#line 49
# 234 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueueP.nc"
static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$moveDownPos(priority_queue_id_t a, priority_queue_id_t curSize)
#line 234
{
  priority_queue_id_t c;

#line 236
  sim_log_debug(315U, "PriorityQueueC", "PQ: Moving heap position %hhu down if needed\n", a);
  while ((c = 2 * a + 1) < curSize) {
      if (c + 1 < curSize && /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$test(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][c + 1], /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][c]) > 0) {
        c++;
        }
#line 240
      if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$test(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][a], /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][c]) > 0) {
        break;
        }
#line 242
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$flip(a, c);
      a = c;
    }
}

#line 194
static inline  priority_queue_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$removeBest(void)
#line 194
{
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$flip(0, --/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()]);
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$moveDownPos(0, /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()]);
  sim_log_debug(313U, "PriorityQueueC", "PQ: Removing best, index %hhu\n", /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()]]);
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTree();
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[sim_node()][/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()]]] = 4;
  return /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()]];
}

# 117 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueue.nc"
inline static  priority_queue_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$removeBest(void){
#line 117
  unsigned char result;
#line 117

#line 117
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$removeBest();
#line 117

#line 117
  return result;
#line 117
}
#line 117
# 86 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$BitVector$clear(uint16_t bitnum)
{
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$m_bits[sim_node()][/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$getIndex(bitnum)] &= ~/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$getMask(bitnum);
}

# 58 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   void SimpleLinkCacheP$NeedRouteTo$clear(uint16_t arg_0x7deb1948){
#line 58
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$BitVector$clear(arg_0x7deb1948);
#line 58
}
#line 58
# 104 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline   uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$BitVector$size(void)
{
  return 4;
}

# 77 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   uint16_t SimpleLinkCacheP$NeedRouteTo$size(void){
#line 77
  unsigned short result;
#line 77

#line 77
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$BitVector$size();
#line 77

#line 77
  return result;
#line 77
}
#line 77
# 139 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/SimpleLinkCacheP.nc"
static inline  void SimpleLinkCacheP$SourceShortestPath$builtTree(graph_vertex_id_t src)
#line 139
{
  route_cache_node_id_t dest;
  route_cache_link_id_t numLinks;

  for (dest = 0; dest < SimpleLinkCacheP$NeedRouteTo$size(); dest++) {
      if (SimpleLinkCacheP$NeedRouteTo$get(dest) && (
      numLinks = SimpleLinkCacheP$SourceShortestPath$edgeCount(dest)) > 0) {
          SimpleLinkCacheP$NeedRouteTo$clear(dest);
          SimpleLinkCacheP$RouteCache$routeUpdate(src, dest, numLinks);
        }
    }
}

# 54 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPath.nc"
inline static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$builtTree(graph_vertex_id_t arg_0x7dcf42e8){
#line 54
  SimpleLinkCacheP$SourceShortestPath$builtTree(arg_0x7dcf42e8);
#line 54
}
#line 54
# 158 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/SimpleLinkCacheP.nc"
static inline  void SimpleLinkCacheP$SourceShortestPath$builtTreeTo(graph_vertex_id_t src, graph_vertex_id_t dest, 
error_t pathResult)
#line 159
{
}

# 72 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPath.nc"
inline static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$builtTreeTo(graph_vertex_id_t arg_0x7dcf2450, graph_vertex_id_t arg_0x7dcf25e8, error_t arg_0x7dcf2788){
#line 72
  SimpleLinkCacheP$SourceShortestPath$builtTreeTo(arg_0x7dcf2450, arg_0x7dcf25e8, arg_0x7dcf2788);
#line 72
}
#line 72
# 329 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPathP.nc"
static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$printPaths(void)
#line 329
{

  graph_vertex_id_t d;

#line 332
  sim_log_debug(332U, "SourceShortestPathP", "SSP: Current SPT:\n");
  for (d = 0; d < 4; d++) {
      sim_log_debug_clear(333U, "SourceShortestPathP", "Dest %u: ", d);
      if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[sim_node()][d] == 4) {
        sim_log_debug_clear(334U, "SourceShortestPathP", "X\n");
        }
      else 
#line 337
        {
          char path[4 * 2] = "";
          char tmp[4 * 2] = "";

#line 340
          /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$printPathLink(d, path, tmp);
          sim_log_debug_clear(335U, "SourceShortestPathP", "%s, Cost: %u\n", path, /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[sim_node()][d]);
        }
    }
}

# 87 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueueP.nc"
static inline  bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$empty(void)
#line 87
{
  return !/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()];
}

# 47 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueue.nc"
inline static  bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$empty(void){
#line 47
  unsigned char result;
#line 47

#line 47
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$empty();
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 217 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPathP.nc"
static inline  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$runTask(void)
#line 217
{
  if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$empty()) {
      if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[sim_node()] != 4) {
          if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$foundDest[sim_node()] == SUCCESS) {
            sim_log_debug(327U, "SourceShortestPathP", "SSP: Destination vertex %u added to SPT, stopping build early.\n", /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[sim_node()]);
            }
          else {
            sim_log_debug(328U, "SourceShortestPathP", "SSP: No path was found to destination %u!\n", /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[sim_node()]);
            }
        }
#line 226
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree[sim_node()] = FALSE;
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$printPaths();
      if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[sim_node()] != 4) {
        /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$builtTreeTo(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc[sim_node()], /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[sim_node()], /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$foundDest[sim_node()]);
        }
      else {
#line 231
        /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$builtTree(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc[sim_node()]);
        }
    }
  else 
#line 232
    {

      graph_edge_id_t e;
      graph_vertex_id_t s = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$removeBest();

#line 236
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[sim_node()][s] = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[sim_node()][s];
      if (s == /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[sim_node()]) {
          /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$foundDest[sim_node()] = SUCCESS;
          /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$clear();
          /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$postTask();
        }
      sim_log_debug(329U, "SourceShortestPathP", "SSP: Added edge %u -> %u to SPT\n", /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[sim_node()][s], s);
      for (e = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$edgeList(s); !/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$end(e); 
      e = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$next(e)) {
          graph_vertex_id_t d = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdge$dest(e);
          /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$graph_edge_weight_t eWeight = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[sim_node()][s] + /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeWeight$weight(e);

#line 247
          if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[sim_node()][d] == 4) {

              sim_log_debug(330U, "SourceShortestPathP", "SSP: Adding edge %u -> %u (%u) to PQ\n", s, d, eWeight);

              /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[sim_node()][d] = eWeight;
              /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$insert(d);
              /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[sim_node()][d] = s;
            }
          else {
#line 254
            if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[sim_node()][d] == 4 && eWeight < /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[sim_node()][d]) {

                sim_log_debug(331U, "SourceShortestPathP", "SSP: Edge %u -> %u (%u) replacing %u -> %u (%u) in PQ\n", s, d, eWeight, /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[sim_node()][d], d, /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[sim_node()][d]);

                /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[sim_node()][d] = eWeight;
                /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$moveUp(d);
                /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[sim_node()][d] = s;
              }
            }
        }
#line 263
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$postTask();
    }
}

# 161 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void)
#line 161
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()], /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg, FAIL);
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t *arg_0x7e5b4950, error_t arg_0x7e5b4ad8){
#line 99
  PacketEngineP$SubSend$sendDone(48, arg_0x7e5b4950, arg_0x7e5b4ad8);
#line 99
}
#line 99
# 57 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline  void /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(m, err);
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(message_t *arg_0x7e5b4950, error_t arg_0x7e5b4ad8){
#line 99
  PacketEngineP$SubSend$sendDone(4, arg_0x7e5b4950, arg_0x7e5b4ad8);
#line 99
}
#line 99
# 57 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline  void /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *m, error_t err)
#line 57
{
  /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(m, err);
}

# 207 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline   void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err)
#line 207
{
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(uint8_t arg_0x7dab6528, message_t *arg_0x7dac8a28, error_t arg_0x7dac8bb0){
#line 89
  switch (arg_0x7dab6528) {
#line 89
    case 0U:
#line 89
      /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(arg_0x7dac8a28, arg_0x7dac8bb0);
#line 89
      break;
#line 89
    case 1U:
#line 89
      /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(arg_0x7dac8a28, arg_0x7dac8bb0);
#line 89
      break;
#line 89
    default:
#line 89
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(arg_0x7dab6528, arg_0x7dac8a28, arg_0x7dac8bb0);
#line 89
      break;
#line 89
    }
#line 89
}
#line 89
# 118 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void)
#line 118
{
  uint8_t i;
#line 119
  uint8_t j;
#line 119
  uint8_t mask;
#line 119
  uint8_t last;
  message_t *msg;

#line 121
  for (i = 0; i < 2 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
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
    case PacketEngineP$msgAdded:
#line 64
      PacketEngineP$msgAdded$runTask();
#line 64
      break;
#line 64
    case PacketEngineP$msgAction:
#line 64
      PacketEngineP$msgAction$runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired:
#line 64
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask();
#line 64
      break;
#line 64
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer:
#line 64
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask();
#line 64
      break;
#line 64
    case TossimPacketModelC$startDoneTask:
#line 64
      TossimPacketModelC$startDoneTask$runTask();
#line 64
      break;
#line 64
    case TossimPacketModelC$stopDoneTask:
#line 64
      TossimPacketModelC$stopDoneTask$runTask();
#line 64
      break;
#line 64
    case TossimPacketModelC$sendDoneTask:
#line 64
      TossimPacketModelC$sendDoneTask$runTask();
#line 64
      break;
#line 64
    case DsrControlP$composePkt:
#line 64
      DsrControlP$composePkt$runTask();
#line 64
      break;
#line 64
    case /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask:
#line 64
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask();
#line 64
      break;
#line 64
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask:
#line 64
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask();
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
# 225 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/DsrControlP.nc"
static inline  error_t DsrControlP$SinglePacketEngine$sendDone(packet_id_t pid, message_t *msg, error_t result)
#line 225
{
  return SUCCESS;
}

#line 517
static inline  error_t DsrControlP$SingleDsrPacketEngine$sendDone(packet_id_t pid, message_t *msg, error_t result)
#line 517
{
  return SUCCESS;
}

#line 465
static inline  error_t DsrControlP$DsrPacketEngine$sendDone(packet_id_t pid, message_t *msg, error_t result)
#line 465
{
  return SUCCESS;
}

# 749 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   error_t PacketEngineP$PacketEngine$default$sendDone(am_id_t lowerId, packet_id_t pid, message_t *msg, 
error_t result)
#line 750
{
  sim_log_error(127U, "PacketEngineP", "PE: Trying to use invalid lower AM type %hhu!\n", lowerId);
  return SUCCESS;
}

# 111 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
inline static  error_t PacketEngineP$PacketEngine$sendDone(am_id_t arg_0x7e4e6b78, packet_id_t arg_0x7e503ad8, message_t *arg_0x7e503c88, error_t arg_0x7e503e10){
#line 111
  unsigned char result;
#line 111

#line 111
  switch (arg_0x7e4e6b78) {
#line 111
    case 4:
#line 111
      result = DsrControlP$SingleDsrPacketEngine$sendDone(arg_0x7e503ad8, arg_0x7e503c88, arg_0x7e503e10);
#line 111
      result = ecombine(result, DsrControlP$SinglePacketEngine$sendDone(arg_0x7e503ad8, arg_0x7e503c88, arg_0x7e503e10));
#line 111
      break;
#line 111
    case 48:
#line 111
      result = DsrControlP$SingleDsrPacketEngine$sendDone(arg_0x7e503ad8, arg_0x7e503c88, arg_0x7e503e10);
#line 111
      result = ecombine(result, DsrControlP$DsrPacketEngine$sendDone(arg_0x7e503ad8, arg_0x7e503c88, arg_0x7e503e10));
#line 111
      break;
#line 111
    default:
#line 111
      result = PacketEngineP$PacketEngine$default$sendDone(arg_0x7e4e6b78, arg_0x7e503ad8, arg_0x7e503c88, arg_0x7e503e10);
#line 111
      break;
#line 111
    }
#line 111

#line 111
  return result;
#line 111
}
#line 111
# 78 "/opt/tinyos-2.x/tos/system/RandomMlcgP.nc"
static inline   uint16_t RandomMlcgP$Random$rand16(void)
#line 78
{
  return (uint16_t )RandomMlcgP$Random$rand32();
}

# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static   uint16_t PacketEngineP$Random$rand16(void){
#line 41
  unsigned short result;
#line 41

#line 41
  result = RandomMlcgP$Random$rand16();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 147 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, TRUE);
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void PacketEngineP$SendBackoff$startOneShot(uint32_t arg_0x7e5334d0){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(0U, arg_0x7e5334d0);
#line 62
}
#line 62
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SimSchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 53 "/opt/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
static inline   long long int SimMoteP$SimMote$getStartTime(void)
#line 53
{
  return SimMoteP$startTime[sim_node()];
}

# 119 "/opt/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline sim_time_t HplAtm128Timer0AsyncP$notify_clockTicksPerSec(void)
#line 119
{
  return ATM128_TIMER0_TICKSPPS;
}

#line 146
static inline sim_time_t HplAtm128Timer0AsyncP$sim_to_clock(sim_time_t t)
#line 146
{
  t *= HplAtm128Timer0AsyncP$notify_clockTicksPerSec();
  t /= sim_ticks_per_sec();
  return t;
}

# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static   Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void){
#line 44
  union __nesc_unnamed4297 result;
#line 44

#line 44
  result = HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag();
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 111 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline   void StateImplP$State$forceState(uint8_t id, uint8_t reqState)
#line 111
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 112
    StateImplP$state[sim_node()][id] = reqState;
#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

# 51 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static   void PacketEngineP$SendState$forceState(uint8_t arg_0x7e4c3010){
#line 51
  StateImplP$State$forceState(0U, arg_0x7e4c3010);
#line 51
}
#line 51
# 230 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
static inline  void SinglePacketP$SubSend$sendDone(am_id_t upperId, message_t *msg, error_t error)
#line 230
{
  SinglePacketP$Send$sendDone(upperId, msg, error);
}

# 292 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   void PacketEngineP$Send$default$sendDone(packet_client_id_t clientId, message_t *msg, error_t error)
#line 292
{
  sim_log_error(107U, "PacketEngineP", "PE: Trying to use invalid client id %hhu!\n", clientId);
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void PacketEngineP$Send$sendDone(packet_client_id_t arg_0x7e4e95f0, message_t *arg_0x7e5b4950, error_t arg_0x7e5b4ad8){
#line 99
  switch (arg_0x7e4e95f0) {
#line 99
    case /*DsrC.SingleProcessorSenderC.PacketSenderC*/PacketSenderC$1$PACKET_ENGINE_CLIENT_ID:
#line 99
      SinglePacketP$SubSend$sendDone(AM_NO_UPPER_DATA, arg_0x7e5b4950, arg_0x7e5b4ad8);
#line 99
      break;
#line 99
    case /*TestDsrAppC.SendAC.PacketSenderC*/PacketSenderC$0$PACKET_ENGINE_CLIENT_ID:
#line 99
      SinglePacketP$SubSend$sendDone(23, arg_0x7e5b4950, arg_0x7e5b4ad8);
#line 99
      break;
#line 99
    case /*TestDsrAppC.SendBC.PacketSenderC*/PacketSenderC$2$PACKET_ENGINE_CLIENT_ID:
#line 99
      SinglePacketP$SubSend$sendDone(25, arg_0x7e5b4950, arg_0x7e5b4ad8);
#line 99
      break;
#line 99
    default:
#line 99
      PacketEngineP$Send$default$sendDone(arg_0x7e4e95f0, arg_0x7e5b4950, arg_0x7e5b4ad8);
#line 99
      break;
#line 99
    }
#line 99
}
#line 99
# 117 "TestDsrP.nc"
static inline  void TestDsrP$SendB$sendDone(message_t *msg, error_t error)
#line 117
{
}

# 711 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/DsrControlP.nc"
static inline  void DsrControlP$Send$sendDone(message_t *msg, error_t error)
#line 711
{
  sim_log_debug(265U, "DsrControlP", "DSR: Sending response got a result of %hhu\n", error);

  DsrControlP$SendState$toIdle();
  sim_log_debug(266U, "DsrControlP", "DSR: Checking for another response to send\n");
  DsrControlP$composePkt$postTask();
}

# 113 "TestDsrP.nc"
static inline  void TestDsrP$SendA$sendDone(message_t *msg, error_t error)
#line 113
{
}

# 100 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static inline  error_t /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$put(/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool_t *newVal)
#line 100
{
  if (/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$free[sim_node()] >= 5) {
      return FAIL;
    }
  else {
      uint8_t emptyIndex = /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$index[sim_node()] + /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$free[sim_node()];

#line 106
      if (emptyIndex >= 5) {
          emptyIndex -= 5;
        }
      /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$queue[sim_node()][emptyIndex] = newVal;
      /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$free[sim_node()]++;
      return SUCCESS;
    }
}

# 88 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
inline static  error_t PacketEngineP$ReceivePool$put(PacketEngineP$ReceivePool$t *arg_0x7e4c8468){
#line 88
  unsigned char result;
#line 88

#line 88
  result = /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$put(arg_0x7e4c8468);
#line 88

#line 88
  return result;
#line 88
}
#line 88
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SimSchedulerBasicP$TaskBasic$postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(am_id_t arg_0x7dab6e88, am_addr_t arg_0x7e5b6610, message_t *arg_0x7e5b67c0, uint8_t arg_0x7e5b6948){
#line 69
  unsigned char result;
#line 69

#line 69
  result = TossimActiveMessageP$AMSend$send(arg_0x7dab6e88, arg_0x7e5b6610, arg_0x7e5b67c0, arg_0x7e5b6948);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void *source)
#line 235
{
  const uint8_t *base = source;

#line 237
  return base[0];
}

# 175 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
static inline  uint8_t TossimActiveMessageP$Packet$payloadLength(message_t *msg)
#line 175
{
  return __nesc_ntoh_uint8((unsigned char *)&TossimActiveMessageP$getHeader(msg)->length);
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t *arg_0x7e5a6c58){
#line 67
  unsigned char result;
#line 67

#line 67
  result = TossimActiveMessageP$Packet$payloadLength(arg_0x7e5a6c58);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t *arg_0x7e5a0a28){
#line 67
  unsigned short result;
#line 67

#line 67
  result = TossimActiveMessageP$AMPacket$destination(arg_0x7e5a0a28);
#line 67

#line 67
  return result;
#line 67
}
#line 67
#line 136
inline static  am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t *arg_0x7e59af08){
#line 136
  unsigned char result;
#line 136

#line 136
  result = TossimActiveMessageP$AMPacket$type(arg_0x7e59af08);
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 57 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket(void)
#line 57
{
  uint8_t i;

#line 59
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] + 1) % 2;
  for (i = 0; i < 2; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] + 1) % 2;
        }
      else {
          break;
        }
    }
  if (i >= 2) {
#line 70
    /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = 2;
    }
}

#line 166
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void)
#line 166
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] < 2) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(nextMsg);

#line 174
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask();
        }
    }
}

# 445 "/opt/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC$free_receive_message(CpmModelC$receive_message_t *msg)
#line 445
{
  free(msg);
}

# 52 "/opt/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
inline static  bool CpmModelC$Model$shouldAck(message_t *arg_0x7e0775d8){
#line 52
  unsigned char result;
#line 52

#line 52
  result = TossimPacketModelC$GainRadioModel$shouldAck(arg_0x7e0775d8);
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 77 "/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
inline static  void TossimPacketModelC$Packet$receive(message_t *arg_0x7e592978){
#line 77
  TossimActiveMessageP$Model$receive(arg_0x7e592978);
#line 77
}
#line 77
# 279 "/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline  void TossimPacketModelC$GainRadioModel$receive(message_t *msg)
#line 279
{
  if (TossimPacketModelC$running[sim_node()] && !TossimPacketModelC$transmitting[sim_node()]) {
      TossimPacketModelC$Packet$receive(msg);
    }
}

# 51 "/opt/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
inline static  void CpmModelC$Model$receive(message_t *arg_0x7e077120){
#line 51
  TossimPacketModelC$GainRadioModel$receive(arg_0x7e077120);
#line 51
}
#line 51
# 249 "/opt/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static inline bool CpmModelC$checkReceive(CpmModelC$receive_message_t *msg)
#line 249
{
  double noise = CpmModelC$noise_hash_generation();
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

#line 252
  noise = pow(10.0, noise / 10.0);
  while (list != (void *)0) {
      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  return CpmModelC$shouldReceive(msg->power - noise);
}

#line 285
static inline void CpmModelC$sim_gain_receive_handle(sim_event_t *evt)
#line 285
{
  CpmModelC$receive_message_t *mine = (CpmModelC$receive_message_t *)evt->data;
  CpmModelC$receive_message_t *predecessor = (void *)0;
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

  sim_log_debug(209U, "CpmModelC", "Handling reception event @ %s.\n", sim_time_string());
  while (list != (void *)0) {
      if (list->next == mine) {
          predecessor = list;
        }
      list = list->next;
    }
  if (predecessor) {
      predecessor->next = mine->next;
    }
  else {
#line 300
    if (mine == CpmModelC$outstandingReceptionHead[sim_node()]) {
        CpmModelC$outstandingReceptionHead[sim_node()] = mine->next;
      }
    else {
        sim_log_error(210U, "CpmModelC", "Incoming packet list structure is corrupted: entry is not the head and no entry points to it.\n");
      }
    }
#line 306
  sim_log_debug(211U, "CpmModelC,SNRLoss", "Packet from %i to %i\n", (int )mine->source, (int )sim_node());
  if (!CpmModelC$checkReceive(mine)) {
      sim_log_debug(212U, "CpmModelC,SNRLoss", " - lost packet from %i as SNR was too low.\n", (int )mine->source);
      mine->lost = 1;
    }
  if (! mine->lost) {
      sim_log_debug_clear(213U, "CpmModelC,SNRLoss", "  -signaling reception\n");
      CpmModelC$Model$receive(mine->msg);
      if (mine->ack) {
          sim_log_debug_clear(214U, "CpmModelC", " acknowledgment requested, ");
        }
      else {
          sim_log_debug_clear(215U, "CpmModelC", " no acknowledgment requested.\n");
        }

      if (mine->ack && CpmModelC$Model$shouldAck(mine->msg)) {
          sim_log_debug_clear(216U, "CpmModelC", " scheduling ack.\n");
          CpmModelC$sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
        }
      else {
          CpmModelC$free_receive_message(mine);
        }

      CpmModelC$receiving[sim_node()] = 0;
    }
  else {
      if (RandomUniform() < 0.001) {
          sim_log_debug(217U, "CpmModelC,SNRLoss", "Packet was technically lost, but TOSSIM introduces an ack false positive rate.\n");
          if (mine->ack && CpmModelC$Model$shouldAck(mine->msg)) {
              sim_log_debug_clear(218U, "CpmModelC", " scheduling ack.\n");
              CpmModelC$sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
            }
          else {
              CpmModelC$free_receive_message(mine);
            }
        }
      else {
          CpmModelC$free_receive_message(mine);
        }
      CpmModelC$receiving[sim_node()] = 0;
      sim_log_debug_clear(219U, "CpmModelC,SNRLoss", "  -packet was lost.\n");
    }
}

#line 429
static inline sim_event_t *CpmModelC$allocate_receive_event(sim_time_t endTime, CpmModelC$receive_message_t *msg)
#line 429
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 431
  evt->mote = sim_node();
  evt->time = endTime;
  evt->handle = CpmModelC$sim_gain_receive_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 1;
  evt->data = msg;
  return evt;
}

static inline CpmModelC$receive_message_t *CpmModelC$allocate_receive_message(void)
#line 441
{
  return (CpmModelC$receive_message_t *)malloc(sizeof(CpmModelC$receive_message_t ));
}

#line 352
static inline void CpmModelC$enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower)
#line 352
{
  sim_event_t *evt;
  CpmModelC$receive_message_t *list;
  CpmModelC$receive_message_t *rcv = CpmModelC$allocate_receive_message();
  double noiseStr = CpmModelC$packetNoise(rcv);

#line 357
  rcv->source = source;
  rcv->start = sim_time();
  rcv->end = endTime;
  rcv->power = power;
  rcv->reversePower = reversePower;
  rcv->msg = msg;
  rcv->lost = 0;
  rcv->ack = receive;






  if (!sim_mote_is_on(sim_node())) {
      sim_log_debug(220U, "CpmModelC", "Lost packet from %i due to %i being off\n", source, sim_node());
      rcv->lost = 1;
    }
  else {
#line 375
    if (!CpmModelC$shouldReceive(power - noiseStr)) {
        sim_log_debug(221U, "CpmModelC,SNRLoss", "Lost packet from %i to %i due to SNR being too low (%i)\n", source, sim_node(), (int )(power - noiseStr));
        rcv->lost = 1;
      }
    else {
#line 379
      if (CpmModelC$receiving[sim_node()]) {
          sim_log_debug(222U, "CpmModelC,SNRLoss", "Lost packet from %i due to %i being mid-reception\n", source, sim_node());
          rcv->lost = 1;
        }
      else {
          CpmModelC$receiving[sim_node()] = 1;
        }
      }
    }
#line 387
  list = CpmModelC$outstandingReceptionHead[sim_node()];
  while (list != (void *)0) {
      if (!CpmModelC$shouldReceive(list->power - rcv->power)) {
          sim_log_debug(223U, "Gain,SNRLoss", "Going to lose packet from %i with signal %lf as am receiving a packet from %i with signal %lf\n", list->source, list->power, source, rcv->power);
          list->lost = 1;
        }
      list = list->next;
    }

  rcv->next = CpmModelC$outstandingReceptionHead[sim_node()];
  CpmModelC$outstandingReceptionHead[sim_node()] = rcv;
  evt = CpmModelC$allocate_receive_event(endTime, rcv);
  sim_queue_insert(evt);
}


static inline void CpmModelC$sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower)
#line 403
{
  int prevNode = sim_node();

#line 405
  sim_log_debug(224U, "CpmModelC", "Enqueing reception event for %i at %llu with power %lf.\n", dest, endTime, power);
  sim_set_node(dest);
  CpmModelC$enqueue_receive_event(prevNode, endTime, msg, receive, power, reversePower);
  sim_set_node(prevNode);
}

static inline  void CpmModelC$Model$putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower)
#line 411
{
  gain_entry_t *neighborEntry = sim_gain_first(sim_node());

#line 413
  CpmModelC$requestAck[sim_node()] = ack;
  CpmModelC$outgoing[sim_node()] = msg;
  sim_log_debug(225U, "CpmModelC", "Node %i transmitting to %i, finishes at %llu.\n", sim_node(), dest, endTime);

  while (neighborEntry != (void *)0) {
      int other = neighborEntry->mote;

#line 419
      CpmModelC$sim_gain_put(other, msg, endTime, ack && other == dest, power + sim_gain_value(sim_node(), other), reversePower + sim_gain_value(other, sim_node()));
      neighborEntry = sim_gain_next(neighborEntry);
    }
}

# 40 "/opt/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
inline static  void TossimPacketModelC$GainRadioModel$putOnAirTo(int arg_0x7e079720, message_t *arg_0x7e0798e0, bool arg_0x7e079a78, sim_time_t arg_0x7e079c18, double arg_0x7e079da8, double arg_0x7e078010){
#line 40
  CpmModelC$Model$putOnAirTo(arg_0x7e079720, arg_0x7e0798e0, arg_0x7e079a78, arg_0x7e079c18, arg_0x7e079da8, arg_0x7e078010);
#line 40
}
#line 40
# 271 "/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$send_transmit_done(sim_event_t *evt)
#line 271
{
  message_t *rval = TossimPacketModelC$sending[sim_node()];

#line 273
  TossimPacketModelC$sending[sim_node()] = (void *)0;
  TossimPacketModelC$transmitting[sim_node()] = FALSE;
  sim_log_debug(201U, "TossimPacketModelC", "PACKET: Signaling send done at %llu.\n", sim_time());
  TossimPacketModelC$Packet$sendDone(rval, SUCCESS);
}

#line 240
static inline int TossimPacketModelC$sim_packet_header_length(void)
#line 240
{
  return sizeof(tossim_header_t );
}

static inline void TossimPacketModelC$send_transmit(sim_event_t *evt)
#line 244
{
  sim_time_t duration;
  tossim_metadata_t *metadata = TossimPacketModelC$getMetadata(TossimPacketModelC$sending[sim_node()]);

  duration = 8 * (TossimPacketModelC$sendingLength[sim_node()] + TossimPacketModelC$sim_packet_header_length());
  duration /= sim_csma_bits_per_symbol();
  duration += sim_csma_preamble_length();

  if (__nesc_ntoh_uint8((unsigned char *)&metadata->ack)) {
      duration += sim_csma_ack_time();
    }
  duration *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();

  evt->time += duration;
  evt->handle = TossimPacketModelC$send_transmit_done;

  sim_log_debug(199U, "TossimPacketModelC", "PACKET: Broadcasting packet to everyone.\n");
  TossimPacketModelC$GainRadioModel$putOnAirTo(TossimPacketModelC$destNode[sim_node()], TossimPacketModelC$sending[sim_node()], __nesc_ntoh_uint8((unsigned char *)&metadata->ack), evt->time, 0.0, 0.0);
  __nesc_hton_uint8((unsigned char *)&metadata->ack, 0);

  evt->time += sim_csma_rxtx_delay() * (sim_ticks_per_sec() / sim_csma_symbols_per_sec());

  sim_log_debug(200U, "TossimPacketModelC", "PACKET: Send done at %llu.\n", evt->time);

  sim_queue_insert(evt);
}

# 202 "/opt/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static inline  bool CpmModelC$Model$clearChannel(void)
#line 202
{
  sim_log_debug(207U, "CpmModelC", "Checking clear channel @ %s: %f <= %f \n", sim_time_string(), (double )CpmModelC$packetNoise((void *)0), CpmModelC$clearThreshold[sim_node()]);
  return CpmModelC$packetNoise((void *)0) < CpmModelC$clearThreshold[sim_node()];
}

# 48 "/opt/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
inline static  bool TossimPacketModelC$GainRadioModel$clearChannel(void){
#line 48
  unsigned char result;
#line 48

#line 48
  result = CpmModelC$Model$clearChannel();
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 203 "/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC$send_backoff(sim_event_t *evt)
#line 203
{
  TossimPacketModelC$backoffCount[sim_node()]++;
  if (TossimPacketModelC$GainRadioModel$clearChannel()) {
      TossimPacketModelC$neededFreeSamples[sim_node()]--;
    }
  else {
      TossimPacketModelC$neededFreeSamples[sim_node()] = sim_csma_min_free_samples();
    }
  if (TossimPacketModelC$neededFreeSamples[sim_node()] == 0) {
      sim_time_t delay;

#line 213
      delay = sim_csma_rxtx_delay();
      delay *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
      evt->time += delay;
      TossimPacketModelC$transmitting[sim_node()] = TRUE;
      evt->handle = TossimPacketModelC$send_transmit;
      sim_queue_insert(evt);
    }
  else {
#line 220
    if (sim_csma_max_iterations() == 0 || 
    TossimPacketModelC$backoffCount[sim_node()] <= sim_csma_max_iterations()) {
        sim_time_t backoff = sim_random();
        sim_time_t modulo = sim_csma_high() - sim_csma_low();

#line 224
        modulo *= pow(sim_csma_exponent_base(), TossimPacketModelC$backoffCount[sim_node()]);
        backoff %= modulo;

        backoff += sim_csma_init_low();
        backoff *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
        evt->time += backoff;
        sim_queue_insert(evt);
      }
    else {
        message_t *rval = TossimPacketModelC$sending[sim_node()];

#line 234
        TossimPacketModelC$sending[sim_node()] = (void *)0;
        sim_log_debug(198U, "TossimPacketModelC", "PACKET: Failed to send packet due to busy channel.\n");
        TossimPacketModelC$Packet$sendDone(rval, EBUSY);
      }
    }
}

#line 179
static inline void TossimPacketModelC$start_csma(void)
#line 179
{
  sim_time_t first_sample;




  sim_time_t backoff = sim_random();

#line 186
  backoff %= sim_csma_init_high() - sim_csma_init_low();
  backoff += sim_csma_init_low();
  backoff *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
  sim_log_debug(197U, "TossimPacketModelC", "Starting CMSA with %lli.\n", backoff);
  first_sample = sim_time() + backoff;

  TossimPacketModelC$sendEvent[sim_node()].mote = sim_node();
  TossimPacketModelC$sendEvent[sim_node()].time = first_sample;
  TossimPacketModelC$sendEvent[sim_node()].force = 0;
  TossimPacketModelC$sendEvent[sim_node()].cancelled = 0;

  TossimPacketModelC$sendEvent[sim_node()].handle = TossimPacketModelC$send_backoff;
  TossimPacketModelC$sendEvent[sim_node()].cleanup = sim_queue_cleanup_none;
  sim_queue_insert(&TossimPacketModelC$sendEvent[sim_node()]);
}

#line 153
static inline  error_t TossimPacketModelC$Packet$send(int dest, message_t *msg, uint8_t len)
#line 153
{
  if (!TossimPacketModelC$initialized[sim_node()]) {
      sim_log_error(195U, "TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not initialized!\n");
      return EOFF;
    }
  if (!TossimPacketModelC$running[sim_node()]) {
      sim_log_error(196U, "TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not running!\n");
      return EOFF;
    }

  if (TossimPacketModelC$sending[sim_node()] != (void *)0) {
      return EBUSY;
    }
  TossimPacketModelC$sendingLength[sim_node()] = len;
  TossimPacketModelC$sending[sim_node()] = msg;
  TossimPacketModelC$destNode[sim_node()] = dest;
  TossimPacketModelC$backoffCount[sim_node()] = 0;
  TossimPacketModelC$neededFreeSamples[sim_node()] = sim_csma_min_free_samples();
  TossimPacketModelC$start_csma();
  return SUCCESS;
}

# 49 "/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
inline static  error_t TossimActiveMessageP$Model$send(int arg_0x7e593190, message_t *arg_0x7e593340, uint8_t arg_0x7e5934c8){
#line 49
  unsigned char result;
#line 49

#line 49
  result = TossimPacketModelC$Packet$send(arg_0x7e593190, arg_0x7e593340, arg_0x7e5934c8);
#line 49

#line 49
  return result;
#line 49
}
#line 49
# 80 "/opt/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC$timeInMs(void)
#line 80
{
  sim_time_t ftime = sim_time();
  int hours;
#line 82
  int minutes;
#line 82
  int seconds;
  sim_time_t secondBillionths;
  int temp_time;
  double ms_time;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }
  temp_time = (int )(secondBillionths / 10000);

  if (temp_time % 10 >= 5) {
      temp_time += 10 - temp_time % 10;
    }
  else {
      temp_time -= temp_time % 10;
    }
  ms_time = (float )(temp_time / 100.0);

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;

  ms_time += (hours * 3600 + minutes * 60 + seconds) * 1000;

  return ms_time;
}

#line 221
static inline double CpmModelC$prr_estimate_from_snr(double SNR)
#line 221
{
  double beta1 = 1.3687;
  double beta2 = 0.9187;
  double SNR_lin = pow(10.0, SNR / 10.0);
  double X = fabs(SNR_lin - beta2);
  double PSE = 0.5 * erfc(beta1 * sqrt(X / 2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 228
  sim_log_debug(208U, "CpmModelC,SNR", "SNR is %lf, PRR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1;
    }
  else {
#line 231
    if (prr_hat < 0) {
      prr_hat = 0;
      }
    }
#line 234
  return prr_hat;
}

# 125 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
static inline  bool TossimActiveMessageP$Model$shouldAck(message_t *msg)
#line 125
{
  tossim_header_t *header = TossimActiveMessageP$getHeader(msg);

#line 127
  if (__nesc_ntoh_uint16((unsigned char *)&header->dest) == TossimActiveMessageP$amAddress()) {
      sim_log_debug(100U, "Acks", "Received packet addressed to me so ack it\n");
      return TRUE;
    }
  return FALSE;
}

# 79 "/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModel.nc"
inline static  bool TossimPacketModelC$Packet$shouldAck(message_t *arg_0x7e592ef0){
#line 79
  unsigned char result;
#line 79

#line 79
  result = TossimActiveMessageP$Model$shouldAck(arg_0x7e592ef0);
#line 79

#line 79
  return result;
#line 79
}
#line 79
# 287 "/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline  void TossimPacketModelC$GainRadioModel$acked(message_t *msg)
#line 287
{
  if (TossimPacketModelC$running[sim_node()]) {
      tossim_metadata_t *metadata = TossimPacketModelC$getMetadata(TossimPacketModelC$sending[sim_node()]);

#line 290
      __nesc_hton_uint8((unsigned char *)&metadata->ack, 1);
      if (msg != TossimPacketModelC$sending[sim_node()]) {
          TossimPacketModelC$error[sim_node()] = 1;
          sim_log_debug(202U, "TossimPacketModelC", "Requested ack for 0x%x, but outgoing packet is 0x%x.\n", msg, TossimPacketModelC$sending[sim_node()]);
        }
    }
}

# 50 "/opt/tinyos-2.x/tos/lib/tossim/GainRadioModel.nc"
inline static  void CpmModelC$Model$acked(message_t *arg_0x7e078c60){
#line 50
  TossimPacketModelC$GainRadioModel$acked(arg_0x7e078c60);
#line 50
}
#line 50
# 141 "/opt/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC$arr_estimate_from_snr(double SNR)
#line 141
{
  double beta1 = 1.3687;
  double beta2 = 0.9187;
  double SNR_lin = pow(10.0, SNR / 10.0);
  double X = fabs(SNR_lin - beta2);
  double PSE = 0.5 * erfc(beta1 * sqrt(X / 2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 148
  sim_log_debug(205U, "CpmModelC,SNRLoss", "SNR is %lf, ARR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1;
    }
  else {
#line 151
    if (prr_hat < 0) {
      prr_hat = 0;
      }
    }
#line 154
  return prr_hat;
}

static inline int CpmModelC$shouldAckReceive(double snr)
#line 157
{
  double prr = CpmModelC$arr_estimate_from_snr(snr);
  double coin = RandomUniform();

#line 160
  if (prr != 0 && prr != 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 164
        prr = 0.0;
        }
    }
#line 166
  return (int )prr;
}

static inline void CpmModelC$sim_gain_ack_handle(sim_event_t *evt)
#line 169
{






  if (
#line 175
  CpmModelC$requestAck[sim_node()] && 
  CpmModelC$outgoing[sim_node()] != (void *)0 && 
  sim_mote_is_on(sim_node())) {
      CpmModelC$receive_message_t *rcv = (CpmModelC$receive_message_t *)evt->data;
      double power = rcv->reversePower;
      double noise = CpmModelC$packetNoise(rcv);
      double snr = power - noise;

#line 182
      if (CpmModelC$shouldAckReceive(snr)) {
          CpmModelC$Model$acked(CpmModelC$outgoing[sim_node()]);
        }
    }
  CpmModelC$free_receive_message((CpmModelC$receive_message_t *)evt->data);
}

# 207 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPathP.nc"
static inline  iterator_end_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$end(graph_vertex_id_t dest)
#line 207
{
  return /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[sim_node()][dest] == 4 || /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[sim_node()][dest] == dest;
}

# 150 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/timer/DataTimerP.nc"
static inline void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$startTimer(void)
#line 150
{
  /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$startOneShot(/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$delay[sim_node()][0]);
}

#line 114
static inline  error_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$stop(/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data_timer_data_t stopData)
#line 114
{
  uint8_t i;

#line 116
  for (i = 0; i < /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size[sim_node()]; i++) {
      if (/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data[sim_node()][i] == stopData) {
          /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$removeTimer(i);
          if (i == 0 && /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size[sim_node()] > 0) {
              /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$adjustTimer();
              /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$startTimer();
            }
          return SUCCESS;
        }
    }
  return EINVAL;
}

# 61 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/timer/DataTimer.nc"
inline static  error_t DsrControlP$RouteRequestOutTimer$stop(DsrControlP$RouteRequestOutTimer$data_t arg_0x7deb99a0){
#line 61
  unsigned char result;
#line 61

#line 61
  result = /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$stop(arg_0x7deb99a0);
#line 61

#line 61
  return result;
#line 61
}
#line 61
# 49 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/cache/DataCache.nc"
inline static  DsrControlP$RouteRequestOutCache$item_t *DsrControlP$RouteRequestOutCache$lookup(DsrControlP$RouteRequestOutCache$item_t *arg_0x7dec1010){
#line 49
  struct __nesc_unnamed4316 *result;
#line 49

#line 49
  result = /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$lookup(arg_0x7dec1010);
#line 49

#line 49
  return result;
#line 49
}
#line 49
# 1108 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/DsrControlP.nc"
static inline void DsrControlP$resetRouteRequestOutCache(am_addr_t dest)
#line 1108
{
  dsr_route_request_out_t outEntry = { dest, DSR_HOP_LIMIT, 0 };
  dsr_route_request_out_t *outCache;

#line 1111
  outCache = DsrControlP$RouteRequestOutCache$lookup(&outEntry);
  if (outCache != (void *)0 && outCache->rreqsSinceRrep > 0) {
      outCache->rreqsSinceRrep = 0;
      DsrControlP$RouteRequestOutTimer$stop(dest);
      sim_log_debug(290U, "DsrControlP", "DSR: Route request out timer for %u reset\n", dest);
    }
}

#line 651
static inline  bool DsrControlP$RouteRequestOutEqual$test(dsr_route_request_out_t *a, dsr_route_request_out_t *b)
#line 651
{
  return a->node == b->node;
}

# 48 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/Equal.nc"
inline static  bool /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$Equal$test(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$Equal$equal_t arg_0x7df03010, /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$Equal$equal_t arg_0x7df03198){
#line 48
  unsigned char result;
#line 48

#line 48
  result = DsrControlP$RouteRequestOutEqual$test(arg_0x7df03010, arg_0x7df03198);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 177 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(uint8_t num)
{
  return /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow();
}

# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  uint32_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$getNow(void){
#line 125
  unsigned long result;
#line 125

#line 125
  result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(1U);
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 152 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num].isrunning = FALSE;
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$stop(void){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(1U);
#line 67
}
#line 67
# 157 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
inline static  packet_id_t DsrControlP$SinglePacketEngine$waitList(void){
#line 157
  unsigned char result;
#line 157

#line 157
  result = PacketEngineP$PacketEngine$waitList(4);
#line 157

#line 157
  return result;
#line 157
}
#line 157
# 48 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/IndexedIterator.nc"
inline static  DsrControlP$SinglePacketWaitList$iterator_item_t DsrControlP$SinglePacketWaitList$next(DsrControlP$SinglePacketWaitList$iterator_item_t arg_0x7e4f67c0){
#line 48
  unsigned char result;
#line 48

#line 48
  result = PacketEngineP$PacketWaitList$next(4, arg_0x7e4f67c0);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 654 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   void *PacketEngineP$SubPacket$default$getPayload(am_id_t lowerId, message_t *msg, uint8_t *len)
#line 654
{
  sim_log_error(122U, "PacketEngineP", "PE: Trying to use invalid lower AM type %hhu!\n", lowerId);
  if (len != (void *)0) {
    *len = INVALID_PAYLOAD_LENGTH;
    }
#line 658
  return (void *)0;
}

# 108 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void *PacketEngineP$SubPacket$getPayload(am_id_t arg_0x7e4e2ac8, message_t *arg_0x7e5a30d0, uint8_t *arg_0x7e5a3278){
#line 108
  void *result;
#line 108

#line 108
  switch (arg_0x7e4e2ac8) {
#line 108
    case 4:
#line 108
      result = TossimActiveMessageP$Packet$getPayload(arg_0x7e5a30d0, arg_0x7e5a3278);
#line 108
      break;
#line 108
    case 48:
#line 108
      result = DsrControlP$Packet$getPayload(arg_0x7e5a30d0, arg_0x7e5a3278);
#line 108
      break;
#line 108
    default:
#line 108
      result = PacketEngineP$SubPacket$default$getPayload(arg_0x7e4e2ac8, arg_0x7e5a30d0, arg_0x7e5a3278);
#line 108
      break;
#line 108
    }
#line 108

#line 108
  return result;
#line 108
}
#line 108
# 119 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/cache/LruDataCacheP.nc"
static inline void /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$remove(uint8_t i)
#line 119
{
  uint8_t j;

#line 121
  if (i >= /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count[sim_node()]) {
    return;
    }
#line 123
  if (i == 0) {

      /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first[sim_node()] = (/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first[sim_node()] + 1) % 8;
    }
  else 
#line 126
    {

      for (j = i; j < /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count[sim_node()]; j++) 
        memcpy(&/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$cache[sim_node()][(j + /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first[sim_node()]) % 8], 
        &/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$cache[sim_node()][(j + /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first[sim_node()] + 1) % 8], 
        sizeof(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t ));
    }
  /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count[sim_node()]--;
}

#line 160
static inline  /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t */*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$insert(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t *item)
#line 160
{
  uint8_t i;

#line 162
  if (/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count[sim_node()] == 8) {





      i = /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$lookup(item);
      /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$remove(i % /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count[sim_node()]);
    }

  memcpy(&/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$cache[sim_node()][(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first[sim_node()] + /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count[sim_node()]) % 8], item, sizeof(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t ));
  item = &/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$cache[sim_node()][(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first[sim_node()] + /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count[sim_node()]++) % 8];
  /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$printCache();
  return item;
}

# 40 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/cache/DataCache.nc"
inline static  DsrControlP$RouteRequestOutCache$item_t *DsrControlP$RouteRequestOutCache$insert(DsrControlP$RouteRequestOutCache$item_t *arg_0x7dec2998){
#line 40
  struct __nesc_unnamed4316 *result;
#line 40

#line 40
  result = /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$insert(arg_0x7dec2998);
#line 40

#line 40
  return result;
#line 40
}
#line 40
# 86 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/timer/DataTimerP.nc"
static inline  error_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$start(/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data_timer_data_t newData, data_timer_time_t newDelay)
#line 86
{
  uint8_t i;

#line 88
  if (/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size[sim_node()] == 8) {
    return FAIL;
    }
#line 90
  /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$adjustTimer();
  for (i = /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size[sim_node()]; i > 0; i--) {
      if (/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$delay[sim_node()][i - 1] > newDelay) {
          /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data[sim_node()][i] = /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data[sim_node()][i - 1];
          /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$delay[sim_node()][i] = /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$delay[sim_node()][i - 1];
        }
      else {
#line 96
        break;
        }
    }
#line 98
  /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data[sim_node()][i] = newData;
  /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$delay[sim_node()][i] = newDelay;
  /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size[sim_node()]++;
  sim_log_debug(344U, "DataTimerP", "DT: Added new delay of %u at position %u\n", newDelay, i);
  /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$startTimer();
  return SUCCESS;
}

# 51 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/timer/DataTimer.nc"
inline static  error_t DsrControlP$RouteRequestOutTimer$start(DsrControlP$RouteRequestOutTimer$data_t arg_0x7deb9010, data_timer_time_t arg_0x7deb91a8){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$start(arg_0x7deb9010, arg_0x7deb91a8);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 1092 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/DsrControlP.nc"
static inline void DsrControlP$updateRouteRequestOutTimer(am_addr_t dest, uint8_t attempts)
#line 1092
{
  data_timer_time_t newTime;

#line 1094
  if (DSR_INIT_REQUEST_PERIOD << attempts > DSR_MAX_REQUEST_PERIOD) {
    newTime = DSR_MAX_REQUEST_PERIOD;
    }
  else {
#line 1097
    newTime = DSR_INIT_REQUEST_PERIOD << attempts;
    }
#line 1098
  DsrControlP$RouteRequestOutTimer$start(dest, newTime);
  sim_log_debug(289U, "DsrControlP", "DSR: Route request out timer for %u set to %u ms\n", dest, newTime);
}

# 81 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline   void /*DsrP.ComposeC*/BitVectorC$0$BitVector$set(uint16_t bitnum)
{
  /*DsrP.ComposeC*/BitVectorC$0$m_bits[sim_node()][/*DsrP.ComposeC*/BitVectorC$0$getIndex(bitnum)] |= /*DsrP.ComposeC*/BitVectorC$0$getMask(bitnum);
}

# 52 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   void DsrControlP$Compose$set(uint16_t arg_0x7deb1448){
#line 52
  /*DsrP.ComposeC*/BitVectorC$0$BitVector$set(arg_0x7deb1448);
#line 52
}
#line 52
# 1126 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline void PacketEngineP$moveWaitIndex(void)
#line 1126
{
  PacketEngineP$moveIndex(&PacketEngineP$nextWaitPkt[sim_node()], PacketEngineP$PKT_WAIT);
}

# 96 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
inline static  error_t DsrControlP$SinglePacketEngine$send(packet_id_t arg_0x7e503288){
#line 96
  unsigned char result;
#line 96

#line 96
  result = PacketEngineP$PacketEngine$send(4, arg_0x7e503288);
#line 96

#line 96
  return result;
#line 96
}
#line 96
# 76 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvP.nc"
static inline  void TlvP$TlvBlock$add(void *block, uint8_t maxLen)
#line 76
{
  tlv_block_t *blk = (tlv_block_t *)block;
  uint8_t diff = sizeof(tlv_block_t );

#line 79
  memmove(block + diff, block, maxLen - diff);
  __nesc_hton_uint8((unsigned char *)&blk->len, 0);
}

# 48 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvBlock.nc"
inline static  void DsrControlP$Header$add(void *arg_0x7deff8b0, uint8_t arg_0x7deffa38){
#line 48
  TlvP$TlvBlock$add(arg_0x7deff8b0, arg_0x7deffa38);
#line 48
}
#line 48
# 151 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void DsrControlP$AMPacket$setType(message_t *arg_0x7e5994b8, am_id_t arg_0x7e599640){
#line 151
  TossimActiveMessageP$AMPacket$setType(arg_0x7e5994b8, arg_0x7e599640);
#line 151
}
#line 151
# 388 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvP.nc"
static inline tlv_t *TlvP$tlvAt(void *block, tlv_key_t key)
#line 388
{
  return (tlv_t *)(block + sizeof(tlv_block_t ) + key);
}

#line 292
static inline  error_t TlvP$TlvMultiple$add(uint8_t type, void *block, tlv_key_t *key, 
uint8_t len, uint8_t maxLen)
#line 293
{
  unsigned char *__nesc_temp45;
#line 294
  tlv_block_t *blk = (tlv_block_t *)block;
  tlv_t *cur;
  uint8_t diff;
#line 296
  uint8_t trailLen;

#line 297
  if (sizeof(tlv_block_t ) + __nesc_ntoh_uint8((unsigned char *)&blk->len) + sizeof(tlv_t ) + len > maxLen) {
      sim_log_debug(296U, "TlvP", "TLV: Not enough room to add type %hhu!\n", type);
      return ESIZE;
    }
  sim_log_debug(297U, "TlvP", "TLV: Adding type %hhu with length %hhu\n", type, len);
  if (!len) {
    return SUCCESS;
    }
#line 304
  cur = (tlv_t *)((void *)blk->tlv + __nesc_ntoh_uint8((unsigned char *)&blk->len));

  diff = sizeof(tlv_t ) + len;
  trailLen = maxLen - (uint8_t )((void *)cur - block) - diff;
  memmove((void *)cur + diff, cur, trailLen);

  if (key != (void *)0 && len) {
    *key = __nesc_ntoh_uint8((unsigned char *)&blk->len);
    }
#line 312
  (__nesc_temp45 = (unsigned char *)&blk->len, __nesc_hton_uint8(__nesc_temp45, __nesc_ntoh_uint8(__nesc_temp45) + diff));
  __nesc_hton_uint8((unsigned char *)&cur->type, type);
  __nesc_hton_uint8((unsigned char *)&cur->len, len);
  return SUCCESS;
}

# 194 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPathP.nc"
static inline  graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$next(graph_vertex_id_t dest)
#line 194
{
  if (dest >= 4) {
    return 4;
    }
#line 197
  return /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[sim_node()][dest];
}

# 48 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/IndexedIterator.nc"
inline static  DsrControlP$RouteNodeList$iterator_item_t DsrControlP$RouteNodeList$next(DsrControlP$RouteNodeList$iterator_item_t arg_0x7e4f67c0){
#line 48
  unsigned char result;
#line 48

#line 48
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$next(arg_0x7e4f67c0);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 103 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvP.nc"
static inline  uint8_t TlvP$TlvBlock$length(void *block)
#line 103
{
  tlv_block_t *blk = (tlv_block_t *)block;

#line 105
  return sizeof(tlv_block_t ) + __nesc_ntoh_uint8((unsigned char *)&blk->len);
}

# 66 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvBlock.nc"
inline static  uint8_t DsrControlP$Header$length(void *arg_0x7defdbe0){
#line 66
  unsigned char result;
#line 66

#line 66
  result = TlvP$TlvBlock$length(arg_0x7defdbe0);
#line 66

#line 66
  return result;
#line 66
}
#line 66
# 760 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/DsrControlP.nc"
static inline  void DsrControlP$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 760
{
  void *data = DsrControlP$SubPacket$getPayload(msg, (void *)0);

#line 762
  DsrControlP$SubPacket$setPayloadLength(msg, len + DsrControlP$Header$length(data));
}

# 643 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   void PacketEngineP$SubPacket$default$setPayloadLength(am_id_t lowerId, message_t *msg, uint8_t len)
#line 643
{
  sim_log_error(121U, "PacketEngineP", "PE: Trying to use invalid lower AM type %hhu!\n", lowerId);
}

# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void PacketEngineP$SubPacket$setPayloadLength(am_id_t arg_0x7e4e2ac8, message_t *arg_0x7e5a5360, uint8_t arg_0x7e5a54e8){
#line 83
  switch (arg_0x7e4e2ac8) {
#line 83
    case 4:
#line 83
      TossimActiveMessageP$Packet$setPayloadLength(arg_0x7e5a5360, arg_0x7e5a54e8);
#line 83
      break;
#line 83
    case 48:
#line 83
      DsrControlP$Packet$setPayloadLength(arg_0x7e5a5360, arg_0x7e5a54e8);
#line 83
      break;
#line 83
    default:
#line 83
      PacketEngineP$SubPacket$default$setPayloadLength(arg_0x7e4e2ac8, arg_0x7e5a5360, arg_0x7e5a54e8);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t SinglePacketP$AMPacket$address(void){
#line 57
  unsigned short result;
#line 57

#line 57
  result = TossimActiveMessageP$AMPacket$address();
#line 57

#line 57
  return result;
#line 57
}
#line 57
# 80 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
static inline  void SinglePacketP$SinglePacket$setSource(message_t *msg, am_addr_t src)
#line 80
{
  __nesc_hton_uint16((unsigned char *)&((single_packet_header_t *)SinglePacketP$SubPacket$getPayload(msg, (void *)0))->src, src);
}

#line 104
static inline  void SinglePacketP$SinglePacket$setDestination(message_t *msg, am_addr_t dest)
#line 104
{
  __nesc_hton_uint16((unsigned char *)&((single_packet_header_t *)SinglePacketP$SubPacket$getPayload(msg, (void *)0))->dest, dest);
}

#line 214
static inline   error_t SinglePacketP$SubSend$default$send(am_id_t upperId, am_addr_t addr, message_t *msg, uint8_t len)
#line 214
{
  sim_log_error(354U, "SinglePacketP", "SP: Trying to use invalid upper id %hhu!\n", upperId);
  return FAIL;
}

# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t SinglePacketP$SubSend$send(am_id_t arg_0x7da57440, am_addr_t arg_0x7e5b6610, message_t *arg_0x7e5b67c0, uint8_t arg_0x7e5b6948){
#line 69
  unsigned char result;
#line 69

#line 69
  switch (arg_0x7da57440) {
#line 69
    case AM_NO_UPPER_DATA:
#line 69
      result = PacketEngineP$Send$send(/*DsrC.SingleProcessorSenderC.PacketSenderC*/PacketSenderC$1$PACKET_ENGINE_CLIENT_ID, arg_0x7e5b6610, arg_0x7e5b67c0, arg_0x7e5b6948);
#line 69
      break;
#line 69
    case 23:
#line 69
      result = PacketEngineP$Send$send(/*TestDsrAppC.SendAC.PacketSenderC*/PacketSenderC$0$PACKET_ENGINE_CLIENT_ID, arg_0x7e5b6610, arg_0x7e5b67c0, arg_0x7e5b6948);
#line 69
      break;
#line 69
    case 25:
#line 69
      result = PacketEngineP$Send$send(/*TestDsrAppC.SendBC.PacketSenderC*/PacketSenderC$2$PACKET_ENGINE_CLIENT_ID, arg_0x7e5b6610, arg_0x7e5b67c0, arg_0x7e5b6948);
#line 69
      break;
#line 69
    default:
#line 69
      result = SinglePacketP$SubSend$default$send(arg_0x7da57440, arg_0x7e5b6610, arg_0x7e5b67c0, arg_0x7e5b6948);
#line 69
      break;
#line 69
    }
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 151 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void PacketEngineP$AMPacket$setType(message_t *arg_0x7e5994b8, am_id_t arg_0x7e599640){
#line 151
  TossimActiveMessageP$AMPacket$setType(arg_0x7e5994b8, arg_0x7e599640);
#line 151
}
#line 151
# 1092 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline void PacketEngineP$setLid(message_t *msg, am_id_t newLid)
#line 1092
{
  PacketEngineP$AMPacket$setType(msg, newLid);
}

# 62 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineClientP.nc"
static inline  am_id_t /*DsrC.SingleProcessorSenderC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$0$PacketEngineClient$defaultLowerType(void)
#line 62
{
  return 48;
}

#line 62
static inline  am_id_t /*TestDsrAppC.SendAC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$1$PacketEngineClient$defaultLowerType(void)
#line 62
{
  return 4;
}

#line 62
static inline  am_id_t /*TestDsrAppC.SendBC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$2$PacketEngineClient$defaultLowerType(void)
#line 62
{
  return 4;
}

# 357 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   am_id_t PacketEngineP$PacketEngineClient$default$defaultLowerType(packet_client_id_t clientId)
#line 357
{
  sim_log_error(109U, "PacketEngineP", "PE: Trying to use invalid client id %hhu!\n", clientId);
  return INVALID_AM_TYPE;
}

# 53 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineClient.nc"
inline static  am_id_t PacketEngineP$PacketEngineClient$defaultLowerType(packet_client_id_t arg_0x7e4e14e0){
#line 53
  unsigned char result;
#line 53

#line 53
  switch (arg_0x7e4e14e0) {
#line 53
    case /*DsrC.SingleProcessorSenderC.PacketSenderC*/PacketSenderC$1$PACKET_ENGINE_CLIENT_ID:
#line 53
      result = /*DsrC.SingleProcessorSenderC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$0$PacketEngineClient$defaultLowerType();
#line 53
      break;
#line 53
    case /*TestDsrAppC.SendAC.PacketSenderC*/PacketSenderC$0$PACKET_ENGINE_CLIENT_ID:
#line 53
      result = /*TestDsrAppC.SendAC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$1$PacketEngineClient$defaultLowerType();
#line 53
      break;
#line 53
    case /*TestDsrAppC.SendBC.PacketSenderC*/PacketSenderC$2$PACKET_ENGINE_CLIENT_ID:
#line 53
      result = /*TestDsrAppC.SendBC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$2$PacketEngineClient$defaultLowerType();
#line 53
      break;
#line 53
    default:
#line 53
      result = PacketEngineP$PacketEngineClient$default$defaultLowerType(arg_0x7e4e14e0);
#line 53
      break;
#line 53
    }
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 53 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineClientP.nc"
static inline  am_id_t /*DsrC.SingleProcessorSenderC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$0$PacketEngineClient$upperType(void)
#line 53
{
  return 0;
}

#line 53
static inline  am_id_t /*TestDsrAppC.SendAC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$1$PacketEngineClient$upperType(void)
#line 53
{
  return 23;
}

#line 53
static inline  am_id_t /*TestDsrAppC.SendBC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$2$PacketEngineClient$upperType(void)
#line 53
{
  return 25;
}

# 347 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   am_id_t PacketEngineP$PacketEngineClient$default$upperType(packet_client_id_t clientId)
#line 347
{
  sim_log_error(108U, "PacketEngineP", "PE: Trying to use invalid client id %hhu!\n", clientId);
  return INVALID_AM_TYPE;
}

# 46 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineClient.nc"
inline static  am_id_t PacketEngineP$PacketEngineClient$upperType(packet_client_id_t arg_0x7e4e14e0){
#line 46
  unsigned char result;
#line 46

#line 46
  switch (arg_0x7e4e14e0) {
#line 46
    case /*DsrC.SingleProcessorSenderC.PacketSenderC*/PacketSenderC$1$PACKET_ENGINE_CLIENT_ID:
#line 46
      result = /*DsrC.SingleProcessorSenderC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$0$PacketEngineClient$upperType();
#line 46
      break;
#line 46
    case /*TestDsrAppC.SendAC.PacketSenderC*/PacketSenderC$0$PACKET_ENGINE_CLIENT_ID:
#line 46
      result = /*TestDsrAppC.SendAC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$1$PacketEngineClient$upperType();
#line 46
      break;
#line 46
    case /*TestDsrAppC.SendBC.PacketSenderC*/PacketSenderC$2$PACKET_ENGINE_CLIENT_ID:
#line 46
      result = /*TestDsrAppC.SendBC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$2$PacketEngineClient$upperType();
#line 46
      break;
#line 46
    default:
#line 46
      result = PacketEngineP$PacketEngineClient$default$upperType(arg_0x7e4e14e0);
#line 46
      break;
#line 46
    }
#line 46

#line 46
  return result;
#line 46
}
#line 46
# 741 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/DsrControlP.nc"
static inline  uint8_t DsrControlP$Packet$payloadLength(message_t *msg)
#line 741
{
  uint8_t len;
  void *data = DsrControlP$SubPacket$getPayload(msg, &len);

#line 744
  return len - DsrControlP$Header$length(data);
}

# 632 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   uint8_t PacketEngineP$SubPacket$default$payloadLength(am_id_t lowerId, message_t *msg)
#line 632
{
  sim_log_error(120U, "PacketEngineP", "PE: Trying to use invalid lower AM type %hhu!\n", lowerId);
  return INVALID_PAYLOAD_LENGTH;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t PacketEngineP$SubPacket$payloadLength(am_id_t arg_0x7e4e2ac8, message_t *arg_0x7e5a6c58){
#line 67
  unsigned char result;
#line 67

#line 67
  switch (arg_0x7e4e2ac8) {
#line 67
    case 4:
#line 67
      result = TossimActiveMessageP$Packet$payloadLength(arg_0x7e5a6c58);
#line 67
      break;
#line 67
    case 48:
#line 67
      result = DsrControlP$Packet$payloadLength(arg_0x7e5a6c58);
#line 67
      break;
#line 67
    default:
#line 67
      result = PacketEngineP$SubPacket$default$payloadLength(arg_0x7e4e2ac8, arg_0x7e5a6c58);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t SimpleLinkCacheP$AMPacket$address(void){
#line 57
  unsigned short result;
#line 57

#line 57
  result = TossimActiveMessageP$AMPacket$address();
#line 57

#line 57
  return result;
#line 57
}
#line 57
# 117 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPathP.nc"
static inline  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildTreeTo(graph_vertex_id_t src, 
graph_vertex_id_t dest)
#line 118
{
  if (src >= 4 || dest > 4) {


    return ESIZE;
    }
#line 123
  if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree[sim_node()]) {
    return EBUSY;
    }
#line 125
  if (src == /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc[sim_node()] && dest == /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[sim_node()] && !/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded[sim_node()]) {
      sim_log_debug(325U, "SourceShortestPathP", "SSP: SPT for %u already built!\n", src);
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$postTask();
      return SUCCESS;
    }
  sim_log_debug(326U, "SourceShortestPathP", "SSP: Building SPT for %u\n", src);
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree[sim_node()] = TRUE;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc[sim_node()] = src;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[sim_node()] = dest;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded[sim_node()] = FALSE;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$initTree();

  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[sim_node()][src] = 0;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$insert(src);
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[sim_node()][src] = src;

  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$postTask();
  return SUCCESS;
}

#line 105
static inline  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildTree(graph_vertex_id_t src)
#line 105
{
  return /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildTreeTo(src, 4);
}

# 47 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPath.nc"
inline static  error_t SimpleLinkCacheP$SourceShortestPath$buildTree(graph_vertex_id_t arg_0x7dcf5af8){
#line 47
  unsigned char result;
#line 47

#line 47
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildTree(arg_0x7dcf5af8);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 105 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/Graph.nc"
inline static  graph_edge_id_t SimpleLinkCacheP$Graph$insert(graph_vertex_id_t arg_0x7dcfc128, graph_vertex_id_t arg_0x7dcfc2c0){
#line 105
  unsigned char result;
#line 105

#line 105
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$insert(arg_0x7dcfc128, arg_0x7dcfc2c0);
#line 105

#line 105
  return result;
#line 105
}
#line 105
# 70 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/SimpleLinkCacheP.nc"
static inline  void SimpleLinkCacheP$RouteCache$addPath(route_cache_node_id_t nodes[], route_cache_link_id_t numLinks, 
bool reverse)
#line 71
{
  route_cache_node_id_t i;

  for (i = 0; i < numLinks; i++) {
      SimpleLinkCacheP$Graph$insert(nodes[i], nodes[i + 1]);
      if (reverse) {
        SimpleLinkCacheP$Graph$insert(nodes[numLinks - i], nodes[numLinks - i - 1]);
        }
    }
  SimpleLinkCacheP$SourceShortestPath$buildTree(SimpleLinkCacheP$AMPacket$address());
}

# 49 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/RouteCache.nc"
inline static  void DsrControlP$RouteCache$addPath(route_cache_node_id_t arg_0x7ded4c98[], route_cache_link_id_t arg_0x7ded4e38, bool arg_0x7ded3010){
#line 49
  SimpleLinkCacheP$RouteCache$addPath(arg_0x7ded4c98, arg_0x7ded4e38, arg_0x7ded3010);
#line 49
}
#line 49
# 231 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphSparseP.nc"
static inline  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edge(graph_vertex_id_t s, graph_vertex_id_t d)
#line 231
{
  graph_edge_id_t curEdge;

#line 233
  for (curEdge = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[sim_node()][s]; curEdge != 8; curEdge = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[sim_node()][curEdge].next) {

      if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[sim_node()][curEdge].dest == d) {

          return curEdge;
        }
    }
  return 8;
}

# 55 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$getMask(uint16_t bitnum)
{
  return 1 << bitnum % /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$ELEMENT_SIZE;
}

#line 50
static inline uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$getIndex(uint16_t bitnum)
{
  return bitnum / /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$ELEMENT_SIZE;
}

#line 76
static inline   bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$BitVector$get(uint16_t bitnum)
{
  return /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$m_bits[sim_node()][/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$getIndex(bitnum)] & /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$getMask(bitnum) ? TRUE : FALSE;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$get(uint16_t arg_0x7deb2f08){
#line 46
  unsigned char result;
#line 46

#line 46
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$BitVector$get(arg_0x7deb2f08);
#line 46

#line 46
  return result;
#line 46
}
#line 46
# 157 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/alloc/IndexedAllocBitsP.nc"
static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$findFree(void)
#line 157
{
  if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$size[sim_node()] == 8) {
    return;
    }
#line 160
  while (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$get(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free[sim_node()])) {
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free[sim_node()]++;
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free[sim_node()] %= 8;
    }
}

# 81 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$BitVector$set(uint16_t bitnum)
{
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$m_bits[sim_node()][/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$getIndex(bitnum)] |= /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$getMask(bitnum);
}

# 52 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$set(uint16_t arg_0x7deb1448){
#line 52
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$BitVector$set(arg_0x7deb1448);
#line 52
}
#line 52
# 112 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/alloc/IndexedAllocBitsP.nc"
static inline  indexed_alloc_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$IndexedAlloc$alloc(void)
#line 112
{
  indexed_alloc_id_t m;

#line 114
  if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$size[sim_node()] == 8) {
    return 8;
    }
#line 116
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$set(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free[sim_node()]);
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$size[sim_node()]++;
  m = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free[sim_node()];
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$findFree();
  return m;
}

# 79 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/alloc/IndexedAlloc.nc"
inline static  indexed_alloc_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$IndexedAlloc$alloc(void){
#line 79
  unsigned char result;
#line 79

#line 79
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$IndexedAlloc$alloc();
#line 79

#line 79
  return result;
#line 79
}
#line 79
# 123 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/SimpleLinkCacheP.nc"
static inline  void SimpleLinkCacheP$Graph$inserted(graph_edge_id_t m)
#line 123
{
}

# 287 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPathP.nc"
static inline  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$inserted(graph_edge_id_t m)
#line 287
{
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded[sim_node()] = TRUE;
}

# 143 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/Graph.nc"
inline static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$inserted(graph_edge_id_t arg_0x7dcf9800){
#line 143
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$inserted(arg_0x7dcf9800);
#line 143
  SimpleLinkCacheP$Graph$inserted(arg_0x7dcf9800);
#line 143
}
#line 143
# 305 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphSparseP.nc"
static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$printGraph(void)
#line 305
{

  graph_vertex_id_t s;

#line 308
  sim_log_debug(306U, "GraphSparseP", "GS: Current Graph:\n");
  for (s = 0; s < 4; s++) {
      graph_edge_id_t cur;

#line 311
      sim_log_debug_clear(307U, "GraphSparseP", "%u: ", s);
      for (cur = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[sim_node()][s]; cur != 8; cur = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[sim_node()][cur].next) 
        sim_log_debug_clear(308U, "GraphSparseP", "%u(%u)-", /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[sim_node()][cur].dest, cur);
      sim_log_debug_clear(309U, "GraphSparseP", "|\n");
    }
}

# 93 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/cache/LruDataCacheP.nc"
static inline void /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$printCache(void)
#line 93
{

  uint8_t i;

#line 96
  sim_log_debug(336U, "LruDataCacheP", "LRUDC:");
  for (i = 0; i < /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count[sim_node()]; i++) {
      sim_log_debug_clear(337U, "LruDataCacheP", " %08x", /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$cache[sim_node()][i]);
      if (i == /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first[sim_node()]) {
        sim_log_debug_clear(338U, "LruDataCacheP", "*");
        }
    }
#line 102
  sim_log_debug_clear(339U, "LruDataCacheP", "\n");
}

#line 119
static inline void /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$remove(uint8_t i)
#line 119
{
  uint8_t j;

#line 121
  if (i >= /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count[sim_node()]) {
    return;
    }
#line 123
  if (i == 0) {

      /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first[sim_node()] = (/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first[sim_node()] + 1) % 8;
    }
  else 
#line 126
    {

      for (j = i; j < /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count[sim_node()]; j++) 
        memcpy(&/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$cache[sim_node()][(j + /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first[sim_node()]) % 8], 
        &/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$cache[sim_node()][(j + /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first[sim_node()] + 1) % 8], 
        sizeof(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t ));
    }
  /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count[sim_node()]--;
}

# 637 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/DsrControlP.nc"
static inline  bool DsrControlP$RouteRequestInEqual$test(dsr_route_request_in_t *a, dsr_route_request_in_t *b)
#line 637
{
  return a->node == b->node;
}

# 48 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/Equal.nc"
inline static  bool /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$Equal$test(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$Equal$equal_t arg_0x7df03010, /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$Equal$equal_t arg_0x7df03198){
#line 48
  unsigned char result;
#line 48

#line 48
  result = DsrControlP$RouteRequestInEqual$test(arg_0x7df03010, arg_0x7df03198);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 107 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/cache/LruDataCacheP.nc"
static inline uint8_t /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$lookup(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t *item)
#line 107
{
  uint8_t i;
  /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t *cachedItem;

#line 110
  for (i = 0; i < /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count[sim_node()]; i++) {
      cachedItem = &/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$cache[sim_node()][(i + /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first[sim_node()]) % 8];
      if (/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$Equal$test(cachedItem, item)) {
        break;
        }
    }
#line 115
  return i;
}

#line 160
static inline  /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t */*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$DataCache$insert(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t *item)
#line 160
{
  uint8_t i;

#line 162
  if (/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count[sim_node()] == 8) {





      i = /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$lookup(item);
      /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$remove(i % /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count[sim_node()]);
    }

  memcpy(&/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$cache[sim_node()][(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first[sim_node()] + /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count[sim_node()]) % 8], item, sizeof(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t ));
  item = &/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$cache[sim_node()][(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first[sim_node()] + /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count[sim_node()]++) % 8];
  /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$printCache();
  return item;
}

# 40 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/cache/DataCache.nc"
inline static  DsrControlP$RouteRequestInCache$item_t *DsrControlP$RouteRequestInCache$insert(DsrControlP$RouteRequestInCache$item_t *arg_0x7dec2998){
#line 40
  struct __nesc_unnamed4317 *result;
#line 40

#line 40
  result = /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$DataCache$insert(arg_0x7dec2998);
#line 40

#line 40
  return result;
#line 40
}
#line 40
# 374 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvP.nc"
static inline  iterator_end_t TlvP$TlvList$end(uint8_t type, void *block, tlv_key_t key)
#line 374
{
  tlv_block_t *blk = (tlv_block_t *)block;

#line 376
  return key >= __nesc_ntoh_uint8((unsigned char *)&blk->len);
}

#line 138
static inline  error_t TlvP$Tlv$setLength(uint8_t type, void *block, uint8_t len, uint8_t maxLen)
#line 138
{
  tlv_key_t key = TlvP$TlvList$next(type, block, TlvP$TLV_FIRST_KEY);

#line 140
  if (TlvP$TlvList$end(type, block, key)) {
    return EINVAL;
    }
#line 142
  return TlvP$TlvMultiple$setLength(type, block, key, len, maxLen);
}

# 66 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/Tlv.nc"
inline static  error_t DsrControlP$RouteRequest$setLength(void *arg_0x7def9688, uint8_t arg_0x7def9810, uint8_t arg_0x7def9998){
#line 66
  unsigned char result;
#line 66

#line 66
  result = TlvP$Tlv$setLength(1, arg_0x7def9688, arg_0x7def9810, arg_0x7def9998);
#line 66

#line 66
  return result;
#line 66
}
#line 66
# 340 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvP.nc"
static inline  tlv_key_t TlvP$TlvMultiple$list(uint8_t type, void *block)
#line 340
{
  return TlvP$TlvList$next(type, block, TlvP$TLV_FIRST_KEY);
}

# 120 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvMultiple.nc"
inline static  tlv_key_t DsrControlP$RouteError$list(void *arg_0x7dee3ce0){
#line 120
  unsigned char result;
#line 120

#line 120
  result = TlvP$TlvMultiple$list(3, arg_0x7dee3ce0);
#line 120

#line 120
  return result;
#line 120
}
#line 120
# 60 "/home/jryans/tinyos-2.x-contrib-rice/tos/interfaces/StaticIndexedIterator.nc"
inline static  iterator_end_t DsrControlP$RouteErrorList$end(void *arg_0x7dede010, DsrControlP$RouteErrorList$iterator_item_t arg_0x7dede1a0){
#line 60
  unsigned char result;
#line 60

#line 60
  result = TlvP$TlvList$end(3, arg_0x7dede010, arg_0x7dede1a0);
#line 60

#line 60
  return result;
#line 60
}
#line 60
#line 51
inline static  DsrControlP$RouteErrorList$iterator_item_t DsrControlP$RouteErrorList$next(void *arg_0x7dedf650, DsrControlP$RouteErrorList$iterator_item_t arg_0x7dedf7e0){
#line 51
  unsigned char result;
#line 51

#line 51
  result = TlvP$TlvList$next(3, arg_0x7dedf650, arg_0x7dedf7e0);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 52 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvMultiple.nc"
inline static  uint8_t DsrControlP$RouteError$length(void *arg_0x7def2010, tlv_key_t arg_0x7def21a0){
#line 52
  unsigned char result;
#line 52

#line 52
  result = TlvP$TlvMultiple$length(3, arg_0x7def2010, arg_0x7def21a0);
#line 52

#line 52
  return result;
#line 52
}
#line 52
#line 82
inline static  void *DsrControlP$RouteError$value(void *arg_0x7def18f8, tlv_key_t arg_0x7def1a88){
#line 82
  void *result;
#line 82

#line 82
  result = TlvP$TlvMultiple$value(3, arg_0x7def18f8, arg_0x7def1a88);
#line 82

#line 82
  return result;
#line 82
}
#line 82
# 50 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/Tlv.nc"
inline static  uint8_t DsrControlP$SourceRoute$length(void *arg_0x7defae58){
#line 50
  unsigned char result;
#line 50

#line 50
  result = TlvP$Tlv$length(96, arg_0x7defae58);
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 125 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  bool DsrControlP$AMPacket$isForMe(message_t *arg_0x7e59a7d8){
#line 125
  unsigned char result;
#line 125

#line 125
  result = TossimActiveMessageP$AMPacket$isForMe(arg_0x7e59a7d8);
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 102 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/Tlv.nc"
inline static  error_t DsrControlP$SourceRoute$remove(void *arg_0x7def7868, uint8_t arg_0x7def79f0){
#line 102
  unsigned char result;
#line 102

#line 102
  result = TlvP$Tlv$remove(96, arg_0x7def7868, arg_0x7def79f0);
#line 102

#line 102
  return result;
#line 102
}
#line 102
# 782 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline  error_t PacketEngineP$PacketEngine$receive(am_id_t lowerId, packet_id_t pid)
#line 782
{
  if ((pid >= PacketEngineP$BUFFER_SIZE || PacketEngineP$msgBuffer[sim_node()][pid].state != PacketEngineP$PKT_WAIT) || 
  PacketEngineP$lid(PacketEngineP$msgBuffer[sim_node()][pid].msg) != lowerId) {
    return EINVAL;
    }
#line 786
  sim_log_debug(129U, "PacketEngineP", "PE: Marking pkt %u to be received or snooped\n", pid);
  PacketEngineP$markPacket(pid, PacketEngineP$PKT_RECEIVE);
  return SUCCESS;
}

# 133 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngine.nc"
inline static  error_t DsrControlP$DsrPacketEngine$receive(packet_id_t arg_0x7e501100){
#line 133
  unsigned char result;
#line 133

#line 133
  result = PacketEngineP$PacketEngine$receive(48, arg_0x7e501100);
#line 133

#line 133
  return result;
#line 133
}
#line 133
# 258 "/usr/lib/ncc/nesc_nx.h"
static inline uint8_t __nesc_bf_decode8(const uint8_t *msg, unsigned offset, uint8_t length)
#line 258
{
#line 258
  uint8_t x = 0;
#line 258
  unsigned byte_offset = offset >> 3;
#line 258
  unsigned bit_offset = offset & 7;

#line 258
  if (length + bit_offset <= 8) {
#line 258
    return (msg[byte_offset] >> (8 - bit_offset - length)) & ((1 << length) - 1);
    }
#line 258
  if (bit_offset > 0) {
#line 258
      length -= 8 - bit_offset;
#line 258
      x = (uint8_t )(msg[byte_offset] & ((1 << (8 - bit_offset)) - 1)) << length;
#line 258
      byte_offset++;
    }
#line 258
  while (length >= 8) {
#line 258
      length -= 8;
#line 258
      x |= (uint8_t )msg[byte_offset++] << length;
    }
#line 258
  if (length > 0) {
#line 258
    x |= msg[byte_offset] >> (8 - length);
    }
#line 258
  return x;
}

#line 258
static __inline uint8_t __nesc_ntohbf_uint8(const void *source, unsigned offset, uint8_t length)
#line 258
{
#line 258
  return __nesc_bf_decode8(source, offset, length);
}

# 666 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline  void PacketEngineP$SendBackoff$fired(void)
#line 666
{
  PacketEngineP$SendState$toIdle();
  if (PacketEngineP$nextActionPkt[sim_node()] < PacketEngineP$BUFFER_SIZE) {
    PacketEngineP$msgAction$postTask();
    }
}

# 68 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/timer/DataTimer.nc"
inline static  void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$expired(/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$data_t arg_0x7deb8168){
#line 68
  DsrControlP$RouteRequestOutTimer$expired(arg_0x7deb8168);
#line 68
}
#line 68
# 134 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/timer/DataTimerP.nc"
static inline  void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$fired(void)
#line 134
{
  /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$adjustTimer();
  while (/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$delay[sim_node()][0] == 0 && /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size[sim_node()] > 0) {
      /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$expired(/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data[sim_node()][0]);
      sim_log_debug(345U, "DataTimerP", "DT: Timer expired!\n");
      /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$removeTimer(0);
    }
  if (/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size[sim_node()] > 0) {
    /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$startTimer();
    }
}

# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t TestDsrP$SendB$send(am_addr_t arg_0x7e5b6610, message_t *arg_0x7e5b67c0, uint8_t arg_0x7e5b6948){
#line 69
  unsigned char result;
#line 69

#line 69
  result = SinglePacketP$Send$send(25, arg_0x7e5b6610, arg_0x7e5b67c0, arg_0x7e5b6948);
#line 69

#line 69
  return result;
#line 69
}
#line 69
inline static  error_t TestDsrP$SendA$send(am_addr_t arg_0x7e5b6610, message_t *arg_0x7e5b67c0, uint8_t arg_0x7e5b6948){
#line 69
  unsigned char result;
#line 69

#line 69
  result = SinglePacketP$Send$send(23, arg_0x7e5b6610, arg_0x7e5b67c0, arg_0x7e5b6948);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 335 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline  void *PacketEngineP$Send$getPayload(packet_client_id_t clientId, message_t *msg)
#line 335
{
  PacketEngineP$setIds(msg, clientId);
  return PacketEngineP$Packet$getPayload(msg, (void *)0);
}

# 240 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
static inline   void *SinglePacketP$SubSend$default$getPayload(am_id_t upperId, message_t *msg)
#line 240
{
  sim_log_error(355U, "SinglePacketP", "SP: Trying to use invalid upper id %hhu!\n", upperId);
  return (void *)0;
}

# 125 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void *SinglePacketP$SubSend$getPayload(am_id_t arg_0x7da57440, message_t *arg_0x7e5b35d0){
#line 125
  void *result;
#line 125

#line 125
  switch (arg_0x7da57440) {
#line 125
    case AM_NO_UPPER_DATA:
#line 125
      result = PacketEngineP$Send$getPayload(/*DsrC.SingleProcessorSenderC.PacketSenderC*/PacketSenderC$1$PACKET_ENGINE_CLIENT_ID, arg_0x7e5b35d0);
#line 125
      break;
#line 125
    case 23:
#line 125
      result = PacketEngineP$Send$getPayload(/*TestDsrAppC.SendAC.PacketSenderC*/PacketSenderC$0$PACKET_ENGINE_CLIENT_ID, arg_0x7e5b35d0);
#line 125
      break;
#line 125
    case 25:
#line 125
      result = PacketEngineP$Send$getPayload(/*TestDsrAppC.SendBC.PacketSenderC*/PacketSenderC$2$PACKET_ENGINE_CLIENT_ID, arg_0x7e5b35d0);
#line 125
      break;
#line 125
    default:
#line 125
      result = SinglePacketP$SubSend$default$getPayload(arg_0x7da57440, arg_0x7e5b35d0);
#line 125
      break;
#line 125
    }
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 200 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
static inline  void *SinglePacketP$Send$getPayload(am_id_t upperId, message_t *msg)
#line 200
{
  return SinglePacketP$SubSend$getPayload(upperId, msg) + sizeof(single_packet_header_t );
}

# 125 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void *TestDsrP$SendA$getPayload(message_t *arg_0x7e5b35d0){
#line 125
  void *result;
#line 125

#line 125
  result = SinglePacketP$Send$getPayload(23, arg_0x7e5b35d0);
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 70 "TestDsrP.nc"
static inline  void TestDsrP$Timer$fired(void)
#line 70
{
  if (TestDsrP$AMPacket$address() == 1) {
      memcpy(TestDsrP$SendA$getPayload(TestDsrP$testPktA[sim_node()]), "Hello mote 0!", 14);
      TestDsrP$SendA$send(0, TestDsrP$testPktA[sim_node()], 14);
      memcpy(TestDsrP$SendB$getPayload(TestDsrP$testPktB[sim_node()]), "Hello mote 2!", 14);
      TestDsrP$SendB$send(2, TestDsrP$testPktB[sim_node()], 14);
    }
  else 
#line 76
    {
      memcpy(TestDsrP$SendA$getPayload(TestDsrP$testPktA[sim_node()]), "Hello mote 3!", 14);
      TestDsrP$SendA$send(3, TestDsrP$testPktA[sim_node()], 14);
      memcpy(TestDsrP$SendB$getPayload(TestDsrP$testPktB[sim_node()]), "Goodbye mote 3!", 16);
      TestDsrP$SendB$send(3, TestDsrP$testPktB[sim_node()], 16);
    }
}

# 192 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x7e0f48a8){
#line 72
  switch (arg_0x7e0f48a8) {
#line 72
    case 0U:
#line 72
      PacketEngineP$SendBackoff$fired();
#line 72
      break;
#line 72
    case 1U:
#line 72
      /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$fired();
#line 72
      break;
#line 72
    case 2U:
#line 72
      TestDsrP$Timer$fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x7e0f48a8);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 45 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type arg_0x7e280ad8){
#line 45
  HplAtm128Timer0AsyncP$Compare$set(arg_0x7e280ad8);
#line 45
}
#line 45
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void){
#line 52
  unsigned char result;
#line 52

#line 52
  result = HplAtm128Timer0AsyncP$Timer0$get();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 561 "/opt/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline   int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void)
#line 561
{
  return (* (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] & (1 << OCR0UB)) != 0;
}

# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static   int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy(void){
#line 44
  int result;
#line 44

#line 44
  result = HplAtm128Timer0AsyncP$TimerAsync$compareBusy();
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 74 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()]) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(n);
}

# 569 "/opt/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP$cancel_compare(void)
#line 569
{
  sim_log_debug(189U, "HplAtm128CompareC", "Cancelling compare at 0x%p\n", HplAtm128Timer0AsyncP$compare[sim_node()]);
  if (HplAtm128Timer0AsyncP$compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$compare[sim_node()]->cancelled = 1;
      HplAtm128Timer0AsyncP$compare[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 108
static inline void HplAtm128Timer0AsyncP$notify_changed(void)
#line 108
{
  uint8_t newScale = HplAtm128Timer0AsyncP$Timer0$getScale();

#line 110
  if (newScale != AVR_CLOCK_OFF && 
  HplAtm128Timer0AsyncP$oldScale[sim_node()] == AVR_CLOCK_OFF) {
      HplAtm128Timer0AsyncP$lastZero[sim_node()] = sim_time();
    }
  HplAtm128Timer0AsyncP$oldScale[sim_node()] = newScale;

  HplAtm128Timer0AsyncP$schedule_new_compare();
}

#line 537
static inline void HplAtm128Timer0AsyncP$cancel_overflow(void)
#line 537
{
  if (HplAtm128Timer0AsyncP$overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$overflow[sim_node()]->cancelled = 1;
      sim_log_debug(188U, "HplAtm128Timer0AsyncP", "Cancelling overflow %p.\n", HplAtm128Timer0AsyncP$overflow[sim_node()]);
      HplAtm128Timer0AsyncP$overflow[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 473
static inline void HplAtm128Timer0AsyncP$timer0_overflow_handle(sim_event_t *evt)
#line 473
{
  if (evt->cancelled) {
      return;
    }
  else {
      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << TOIE0)) != 0) {
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << TOV0);
          sim_log_debug(185U, "HplAtm128Timer0AsyncP", "Overflow interrupt at %s\n", sim_time_string());
          INTERRUPT_16();
        }
      else {
          sim_log_debug(186U, "HplAtm128Timer0AsyncP", "Setting overflow bit at %s\n", sim_time_string());
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << TOV0;
        }
      HplAtm128Timer0AsyncP$configure_overflow(evt);
      sim_queue_insert(evt);
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_overflow(void)
#line 492
{
  sim_event_t *newEvent = sim_queue_allocate_event();

  newEvent->handle = HplAtm128Timer0AsyncP$timer0_overflow_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

#line 526
static inline void HplAtm128Timer0AsyncP$schedule_new_overflow(void)
#line 526
{
  sim_event_t *newEvent = HplAtm128Timer0AsyncP$allocate_overflow();

#line 528
  HplAtm128Timer0AsyncP$configure_overflow(newEvent);

  if (HplAtm128Timer0AsyncP$overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$cancel_overflow();
    }
  HplAtm128Timer0AsyncP$overflow[sim_node()] = newEvent;
  sim_queue_insert(newEvent);
}

#line 140
static inline sim_time_t HplAtm128Timer0AsyncP$clock_to_sim(sim_time_t t)
#line 140
{
  t *= sim_ticks_per_sec();
  t /= HplAtm128Timer0AsyncP$notify_clockTicksPerSec();
  return t;
}

#line 289
static inline   void HplAtm128Timer0AsyncP$Timer0$set(uint8_t newVal)
#line 289
{
  uint8_t curVal = HplAtm128Timer0AsyncP$Timer0$get();

#line 291
  sim_log_debug(178U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting timer: %hhu\n", newVal);
  if (newVal == curVal) {
      return;
    }
  else {
      sim_time_t adjustment = curVal - newVal;

#line 297
      adjustment = adjustment << HplAtm128Timer0AsyncP$shiftFromScale();
      adjustment = HplAtm128Timer0AsyncP$clock_to_sim(adjustment);

      if (newVal < curVal) {
          HplAtm128Timer0AsyncP$lastZero[sim_node()] += adjustment;
        }
      else {
          HplAtm128Timer0AsyncP$lastZero[sim_node()] -= adjustment;
        }

      HplAtm128Timer0AsyncP$schedule_new_overflow();
      HplAtm128Timer0AsyncP$notify_changed();
    }
}

#line 179
static inline void HplAtm128Timer0AsyncP$timer0_compare_handle(sim_event_t *evt)
#line 179
{
  sim_log_debug(168U, "HplAtm128Timer0AsyncP", "Beginning compare 0x%p at %s\n", evt, sim_time_string());
  if (evt->cancelled) {
      return;
    }
  else {
      char timeStr[128];

#line 186
      sim_print_now(timeStr, 128);
      sim_log_debug(169U, "HplAtm128Timer0AsyncP", "Handling compare at 0x%p @ %s\n", evt, sim_time_string());

      if ((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0 && !((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0)) {
          sim_log_debug(170U, "HplAtm128Timer0AsyncP", "%s: CTC is set, clear timer.\n", __FUNCTION__);
          HplAtm128Timer0AsyncP$Timer0$set(0);
        }
      else {
          sim_log_debug(171U, "HplAtm128Timer0AsyncP", "%s: TCCR is 0x%hhx, %i, %i\n", __FUNCTION__, * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33], (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0), (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0));
        }

      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << OCIE0)) != 0) {
          sim_log_debug(172U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << OCF0);
          sim_log_debug(173U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          sim_log_debug(174U, "HplAtm128Timer0AsyncP", "Compare interrupt @ %s\n", timeStr);
          INTERRUPT_15();
        }
      else {
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << OCF0;
        }

      if (! evt->cancelled) {
          HplAtm128Timer0AsyncP$configure_compare(evt);
          sim_queue_insert(evt);
        }
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP$allocate_compare(void)
#line 215
{
  sim_event_t *newEvent = sim_queue_allocate_event();

#line 217
  sim_log_debug(175U, "HplAtm128Timer0AsyncP", "Allocated compare at 0x%p\n", newEvent);
  newEvent->handle = HplAtm128Timer0AsyncP$timer0_compare_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

# 230 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void)
#line 230
{
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void HplAtm128Timer0AsyncP$Timer0$overflow(void){
#line 61
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow();
#line 61
}
#line 61
# 47 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void)
{
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow(void){
#line 71
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow();
#line 71
}
#line 71
# 79 "/opt/tinyos-2.x/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_enable_interrupt(void)
#line 79
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] |= 1 << 7;
}

# 39 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get(void){
#line 39
  unsigned char result;
#line 39

#line 39
  result = HplAtm128Timer0AsyncP$Compare$get();
#line 39

#line 39
  return result;
#line 39
}
#line 39
# 149 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired(void)
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()];
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$overflow();
    }
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm128Timer0AsyncP$Compare$fired(void){
#line 49
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$fired();
#line 49
}
#line 49
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SimSchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 70 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void)
{
#line 71
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask();
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired(void){
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired();
#line 67
}
#line 67
# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t *arg_0x7e5a5360, uint8_t arg_0x7e5a54e8){
#line 83
  TossimActiveMessageP$Packet$setPayloadLength(arg_0x7e5a5360, arg_0x7e5a54e8);
#line 83
}
#line 83
# 285 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
static inline   message_t *SinglePacketP$Receive$default$receive(am_id_t upperId, message_t *msg, void *payload, uint8_t len)
#line 285
{
  sim_log_error(356U, "SinglePacketP", "SP: Trying to use invalid upper id %hhu!\n", upperId);
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *SinglePacketP$Receive$receive(am_id_t arg_0x7da58598, message_t *arg_0x7e5b09d8, void *arg_0x7e5b0b78, uint8_t arg_0x7e5b0d00){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x7da58598) {
#line 67
    case 23:
#line 67
      result = TestDsrP$Receive$receive(arg_0x7e5b09d8, arg_0x7e5b0b78, arg_0x7e5b0d00);
#line 67
      break;
#line 67
    case 25:
#line 67
      result = TestDsrP$Receive$receive(arg_0x7e5b09d8, arg_0x7e5b0b78, arg_0x7e5b0d00);
#line 67
      break;
#line 67
    default:
#line 67
      result = SinglePacketP$Receive$default$receive(arg_0x7da58598, arg_0x7e5b09d8, arg_0x7e5b0b78, arg_0x7e5b0d00);
#line 67
      break;
#line 67
    }
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 385 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
static inline  void *SinglePacketP$Packet$getPayload(message_t *msg, uint8_t *len)
#line 385
{
  uint8_t *payload = SinglePacketP$SubPacket$getPayload(msg, len);

#line 387
  if (len != (void *)0) {
    *len -= sizeof(single_packet_header_t );
    }
#line 389
  return payload + sizeof(single_packet_header_t );
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
# 194 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static inline  error_t PacketEngineP$Init$init(void)
#line 194
{
  packet_id_t i;

#line 196
  for (i = 0; i < PacketEngineP$BUFFER_SIZE; i++) 
    PacketEngineP$msgBuffer[sim_node()][i].state = PacketEngineP$PKT_FREE;
  PacketEngineP$nextFreePkt[sim_node()] = 0;
  PacketEngineP$nextAddedPkt[sim_node()] = PacketEngineP$BUFFER_SIZE;
  PacketEngineP$nextWaitPkt[sim_node()] = PacketEngineP$BUFFER_SIZE;
  PacketEngineP$nextActionPkt[sim_node()] = PacketEngineP$BUFFER_SIZE;
  PacketEngineP$running[sim_node()] = FALSE;
  return SUCCESS;
}

# 65 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static inline  error_t /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Init$init(void)
#line 65
{
  int i;

#line 67
  for (i = 0; i < 5; i++) {
      /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$queue[sim_node()][i] = &/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool[sim_node()][i];
    }
  /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$free[sim_node()] = 5;
  /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$index[sim_node()] = 0;
  return SUCCESS;
}

# 81 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline  error_t StateImplP$Init$init(void)
#line 81
{
  int i;

#line 83
  for (i = 0; i < 2U; i++) {
      StateImplP$state[sim_node()][i] = StateImplP$S_IDLE;
    }
  return SUCCESS;
}

# 44 "/opt/tinyos-2.x/tos/system/RandomMlcgP.nc"
static inline  error_t RandomMlcgP$Init$init(void)
#line 44
{
  /* atomic removed: atomic calls only */
#line 45
  RandomMlcgP$seed[sim_node()] = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 439 "/opt/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline   void HplAtm128Timer0AsyncP$Compare$start(void)
#line 439
{
#line 439
  atm128RegFile[sim_node()][ATM128_TIMSK] |= 1 << OCIE0;
}

# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void){
#line 56
  HplAtm128Timer0AsyncP$Compare$start();
#line 56
}
#line 56
# 356 "/opt/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline   void HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(Atm128TimerControl_t x)
#line 356
{
  sim_log_debug(180U, "HplAtm128Timer0AsyncP", "Setting control to be 0x%hhx\n", x.flat);
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] = x.flat;
}

# 37 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t arg_0x7e293ba8){
#line 37
  HplAtm128Timer0AsyncP$Timer0Ctrl$setControl(arg_0x7e293ba8);
#line 37
}
#line 37
# 553 "/opt/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline   void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void)
#line 553
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] |= 1 << AS0;
}

# 32 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous(void){
#line 32
  HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline  error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init(void)
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerAsync$setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
  return SUCCESS;
}

# 78 "/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline  error_t TossimPacketModelC$Init$init(void)
#line 78
{
  sim_log_debug(190U, "TossimPacketModelC", "TossimPacketModelC: Init.init() called\n");
  TossimPacketModelC$initialized[sim_node()] = TRUE;



  TossimPacketModelC$sendEvent[sim_node()].cancelled = 1;
  return SUCCESS;
}

# 67 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphSparseP.nc"
static inline  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Init$init(void)
#line 67
{
  graph_vertex_id_t i;

#line 69
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$vSize[sim_node()] = 0;
  for (i = 0; i < 4; i++) 
    /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[sim_node()][i] = 8;
  return SUCCESS;
}

# 66 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$BitVector$clearAll(void)
{
  memset(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$m_bits[sim_node()], 0, sizeof /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$m_bits[sim_node()]);
}

#line 60
static inline  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$Init$init(void)
{
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$BitVector$clearAll();
  return SUCCESS;
}

# 88 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPathP.nc"
static inline  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Init$init(void)
#line 88
{
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree[sim_node()] = FALSE;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc[sim_node()] = 4;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded[sim_node()] = TRUE;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$initTree();
  return SUCCESS;
}

# 75 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueueP.nc"
static inline  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Init$init(void)
#line 75
{
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$clearData();
  return SUCCESS;
}

# 85 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/cache/LruDataCacheP.nc"
static inline  error_t /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$Init$init(void)
#line 85
{
  /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first[sim_node()] = 0;
  /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count[sim_node()] = 0;
  return SUCCESS;
}

#line 85
static inline  error_t /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$Init$init(void)
#line 85
{
  /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first[sim_node()] = 0;
  /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count[sim_node()] = 0;
  return SUCCESS;
}

# 71 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/timer/DataTimerP.nc"
static inline  error_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Init$init(void)
#line 71
{
  /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size[sim_node()] = 0;
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t SimMainP$SoftwareInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Init$init();
#line 51
  result = ecombine(result, /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$Init$init());
#line 51
  result = ecombine(result, /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$Init$init());
#line 51
  result = ecombine(result, /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Init$init());
#line 51
  result = ecombine(result, /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Init$init());
#line 51
  result = ecombine(result, /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$Init$init());
#line 51
  result = ecombine(result, /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Init$init());
#line 51
  result = ecombine(result, TossimPacketModelC$Init$init());
#line 51
  result = ecombine(result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init());
#line 51
  result = ecombine(result, RandomMlcgP$Init$init());
#line 51
  result = ecombine(result, StateImplP$Init$init());
#line 51
  result = ecombine(result, /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Init$init());
#line 51
  result = ecombine(result, PacketEngineP$Init$init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t TossimPacketModelC$startDoneTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SimSchedulerBasicP$TaskBasic$postTask(TossimPacketModelC$startDoneTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 98 "/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static inline  error_t TossimPacketModelC$Control$start(void)
#line 98
{
  if (!TossimPacketModelC$initialized[sim_node()]) {
      sim_log_error(191U, "TossimPacketModelC", "TossimPacketModelC: Control.start() called before initialization!\n");
      return FAIL;
    }
  sim_log_debug(192U, "TossimPacketModelC", "TossimPacketModelC: Control.start() called.\n");
  TossimPacketModelC$startDoneTask$postTask();
  return SUCCESS;
}

# 83 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  error_t TestDsrP$AMControl$start(void){
#line 83
  unsigned char result;
#line 83

#line 83
  result = TossimPacketModelC$Control$start();
#line 83

#line 83
  return result;
#line 83
}
#line 83
# 64 "TestDsrP.nc"
static inline  void TestDsrP$Boot$booted(void)
#line 64
{
  TestDsrP$AMControl$start();
}

# 66 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline   void /*DsrP.ComposeC*/BitVectorC$0$BitVector$clearAll(void)
{
  memset(/*DsrP.ComposeC*/BitVectorC$0$m_bits[sim_node()], 0, sizeof /*DsrP.ComposeC*/BitVectorC$0$m_bits[sim_node()]);
}

# 34 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   void DsrControlP$Compose$clearAll(void){
#line 34
  /*DsrP.ComposeC*/BitVectorC$0$BitVector$clearAll();
#line 34
}
#line 34
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static   uint16_t DsrControlP$Random$rand16(void){
#line 41
  unsigned short result;
#line 41

#line 41
  result = RandomMlcgP$Random$rand16();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 160 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/DsrControlP.nc"
static inline  void DsrControlP$Boot$booted(void)
#line 160
{
  DsrControlP$nextIdent[sim_node()] = DsrControlP$Random$rand16();
  DsrControlP$Compose$clearAll();
}

# 34 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$clearAll(void){
#line 34
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$BitVector$clearAll();
#line 34
}
#line 34
# 63 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/alloc/IndexedAllocBitsP.nc"
static inline  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$Boot$booted(void)
#line 63
{
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$clearAll();
}

# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
inline static  void SimMainP$Boot$booted(void){
#line 49
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$Boot$booted();
#line 49
  DsrControlP$Boot$booted();
#line 49
  TestDsrP$Boot$booted();
#line 49
}
#line 49
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

# 103 "/opt/tinyos-2.x/tos/lib/tossim/randomlib.c"
static double RandomUniform(void )
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

# 327 "/opt/tinyos-2.x/tos/lib/tossim/sim_noise.c"
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

#line 108
static  void TossimActiveMessageP$Model$receive(message_t *msg)
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

#line 187
static  void *TossimActiveMessageP$Packet$getPayload(message_t *msg, uint8_t *len)
#line 187
{
  if (len != (void *)0) {
      *len = TossimActiveMessageP$Packet$payloadLength(msg);
    }
  return msg->data;
}

#line 158
static  bool TossimActiveMessageP$AMPacket$isForMe(message_t *amsg)
#line 158
{
  return TossimActiveMessageP$AMPacket$destination(amsg) == TossimActiveMessageP$AMPacket$address() || 
  TossimActiveMessageP$AMPacket$destination(amsg) == AM_BROADCAST_ADDR;
}

#line 138
static  am_addr_t TossimActiveMessageP$AMPacket$destination(message_t *amsg)
#line 138
{
  tossim_header_t *header = TossimActiveMessageP$getHeader(amsg);

#line 140
  return __nesc_ntoh_uint16((unsigned char *)&header->dest);
}

# 53 "/opt/tinyos-2.x/tos/lib/tossim/ActiveMessageAddressC.nc"
static   am_addr_t ActiveMessageAddressC$amAddress(void)
#line 53
{
  if (!ActiveMessageAddressC$set[sim_node()]) {
      ActiveMessageAddressC$addr[sim_node()] = TOS_NODE_ID;
      ActiveMessageAddressC$set[sim_node()] = TRUE;
    }
  return ActiveMessageAddressC$addr[sim_node()];
}

# 163 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
static  am_id_t TossimActiveMessageP$AMPacket$type(message_t *amsg)
#line 163
{
  tossim_header_t *header = TossimActiveMessageP$getHeader(amsg);

#line 165
  return __nesc_ntoh_uint8((unsigned char *)&header->type);
}

# 466 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static  message_t *PacketEngineP$SubReceive$receive(am_id_t lowerId, message_t *msg, void *payload, uint8_t len)
#line 466
{
  if (!PacketEngineP$running[sim_node()]) {
    return msg;
    }
#line 469
  if (PacketEngineP$nextFreePkt[sim_node()] == PacketEngineP$BUFFER_SIZE) {
      sim_log_error(112U, "PacketEngineP", "PE: Can't add receive/snoop packet, buffer is full!\n");
      return msg;
    }
  if (PacketEngineP$ReceivePool$empty()) {
      sim_log_error(113U, "PacketEngineP", "PE: Can't add receive/snoop packet, pool is empty!\n");
      return msg;
    }
  if (PacketEngineP$msgBuffer[sim_node()][PacketEngineP$nextFreePkt[sim_node()]].state == PacketEngineP$PKT_FREE) {

      sim_log_debug(114U, "PacketEngineP", "PE: Adding receive/snoop packet at index %u\n", PacketEngineP$nextFreePkt[sim_node()]);
      PacketEngineP$msgBuffer[sim_node()][PacketEngineP$nextFreePkt[sim_node()]].srcLayer = PacketEngineP$PKT_LOWER_LAYER;
      PacketEngineP$addPacket(msg);
      return PacketEngineP$ReceivePool$get();
    }
  else 
#line 483
    {

      sim_log_error(115U, "PacketEngineP", "PE: Free packet at %u wasn't free!\n", PacketEngineP$nextFreePkt[sim_node()]);
      return msg;
    }
}

#line 1179
static void PacketEngineP$addPacket(message_t *msg)
#line 1179
{
  PacketEngineP$msgBuffer[sim_node()][PacketEngineP$nextFreePkt[sim_node()]].msg = msg;
  PacketEngineP$msgBuffer[sim_node()][PacketEngineP$nextFreePkt[sim_node()]].state = PacketEngineP$PKT_ADDED;
  if (PacketEngineP$nextAddedPkt[sim_node()] == PacketEngineP$BUFFER_SIZE) {

      sim_log_debug(156U, "PacketEngineP", "PE: Moved nextAddedPkt from %u", PacketEngineP$nextAddedPkt[sim_node()]);
      PacketEngineP$nextAddedPkt[sim_node()] = PacketEngineP$nextFreePkt[sim_node()];
      sim_log_debug_clear(157U, "PacketEngineP", " to %u\n", PacketEngineP$nextAddedPkt[sim_node()]);
      PacketEngineP$printIndices();
    }
  PacketEngineP$moveFreeIndex();
  PacketEngineP$msgAdded$postTask();
}

#line 1147
static void PacketEngineP$moveIndex(packet_id_t *idx, uint8_t state)
#line 1147
{
  packet_id_t count;
  packet_id_t tmpIndex = *idx;

#line 1150
  for (count = 0; count < PacketEngineP$BUFFER_SIZE; count++) {
      tmpIndex++;
      tmpIndex %= PacketEngineP$BUFFER_SIZE;
      if (PacketEngineP$msgBuffer[sim_node()][tmpIndex].state & state) {
          sim_log_debug(153U, "PacketEngineP", "PE: Index updated\n");
          *idx = tmpIndex;
          PacketEngineP$printIndices();
          return;
        }
    }

  sim_log_debug(154U, "PacketEngineP", "PE: No packets with state %hhu found\n", state);
  *idx = PacketEngineP$BUFFER_SIZE;
  PacketEngineP$printIndices();
}

# 197 "/opt/tinyos-2.x/tos/lib/tossim/SimSchedulerBasicP.nc"
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

# 102 "/opt/tinyos-2.x/tos/lib/tossim/sim_packet.c"
  uint8_t sim_packet_max_length(sim_packet_t *msg)
#line 102
{
  return 30;
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

# 525 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static  void PacketEngineP$SubSend$sendDone(am_id_t lowerId, message_t *msg, error_t error)
#line 525
{
  sim_log_debug(117U, "PacketEngineP", "PE: Sending pkt %u got a result of %hhu\n", PacketEngineP$nextActionPkt[sim_node()], error);
  PacketEngineP$SendState$toIdle();
  if (PacketEngineP$PacketEngine$sendDone(lowerId, PacketEngineP$nextActionPkt[sim_node()], msg, error) == FAIL) {

      sim_log_debug(118U, "PacketEngineP", "PE: Retrying send for pkt %u\n", PacketEngineP$nextActionPkt[sim_node()]);
      PacketEngineP$startSendBackoff(SEND_RETRY_WINDOW, SEND_RETRY_OFFSET);
    }
  else 
#line 532
    {

      if (PacketEngineP$msgBuffer[sim_node()][PacketEngineP$nextActionPkt[sim_node()]].srcLayer == PacketEngineP$PKT_UPPER_LAYER) {
        PacketEngineP$Send$sendDone(PacketEngineP$msgBuffer[sim_node()][PacketEngineP$nextActionPkt[sim_node()]].clientId, msg, error);
        }
      PacketEngineP$startSendBackoff(SEND_DONE_WINDOW, SEND_DONE_OFFSET);
      PacketEngineP$removePacket(PacketEngineP$nextActionPkt[sim_node()]);
      PacketEngineP$moveActionIndex();
      if (PacketEngineP$nextActionPkt[sim_node()] < PacketEngineP$BUFFER_SIZE) {
        PacketEngineP$msgAction$postTask();
        }
      else {
#line 543
        sim_log_debug(119U, "PacketEngineP", "PE: No more action packets\n");
        }
    }
}

#line 1233
static void PacketEngineP$startSendBackoff(uint16_t mask, uint16_t offset)
#line 1233
{
  uint16_t r = PacketEngineP$Random$rand16();

#line 1235
  r &= mask;
  r += offset;
  PacketEngineP$SendBackoff$startOneShot(r);
  PacketEngineP$SendState$forceState(PacketEngineP$S_BACKOFF);
  sim_log_debug(162U, "PacketEngineP", "PE: Send backoff for %hu ms\n", r);
}

# 58 "/opt/tinyos-2.x/tos/system/RandomMlcgP.nc"
static   uint32_t RandomMlcgP$Random$rand32(void)
#line 58
{
  uint32_t mlcg;
#line 59
  uint32_t p;
#line 59
  uint32_t q;
  uint64_t tmpseed;

#line 61
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgP$seed[sim_node()];
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgP$seed[sim_node()] = mlcg;
    }
#line 73
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 132 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

#line 135
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 161 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static   uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get(void)
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()] + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 274 "/opt/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static   uint8_t HplAtm128Timer0AsyncP$Timer0$get(void)
#line 274
{
  uint8_t rval;
  sim_time_t elapsed = sim_time() - HplAtm128Timer0AsyncP$last_zero();

#line 277
  elapsed = HplAtm128Timer0AsyncP$sim_to_clock(elapsed);
  elapsed = elapsed >> HplAtm128Timer0AsyncP$shiftFromScale();
  rval = (uint8_t )(elapsed & 0xff);
  sim_log_debug(177U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting timer: %hhu\n", rval);
  return rval;
}

#line 100
static sim_time_t HplAtm128Timer0AsyncP$last_zero(void)
#line 100
{
  if (HplAtm128Timer0AsyncP$lastZero[sim_node()] == 0) {
      HplAtm128Timer0AsyncP$lastZero[sim_node()] = sim_mote_start_time(sim_node());
    }
  return HplAtm128Timer0AsyncP$lastZero[sim_node()];
}

# 98 "/opt/tinyos-2.x/tos/lib/tossim/SimMoteP.nc"
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

# 152 "/opt/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static uint16_t HplAtm128Timer0AsyncP$shiftFromScale(void)
#line 152
{
  uint8_t scale = HplAtm128Timer0AsyncP$Timer0$getScale();

#line 154
  switch (scale) {
      case 0: 
        return 0;
      case 1: 
        return 0;
      case 2: 
        return 3;
      case 3: 
        return 5;
      case 4: 
        return 6;
      case 5: 
        return 7;
      case 6: 
        return 8;
      case 7: 
        return 10;
      default: 
        return 255;
    }
}

#line 313
static   uint8_t HplAtm128Timer0AsyncP$Timer0$getScale(void)
#line 313
{
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] & 0x7;
}

#line 375
static   Atm128_TIFR_t HplAtm128Timer0AsyncP$Timer0Ctrl$getInterruptFlag(void)
#line 375
{
  Atm128_TIFR_t at;

#line 377
  at.flat = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36];
  return at;
}

#line 449
static   uint8_t HplAtm128Timer0AsyncP$Compare$get(void)
#line 449
{
  sim_log_debug(183U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting compare: %hhu\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]);
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31];
}

# 156 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
static   void SinglePacketP$Send$default$sendDone(am_id_t upperId, message_t *msg, error_t error)
#line 156
{
  sim_log_error(353U, "SinglePacketP", "SP: Trying to use invalid upper id %hhu!\n", upperId);
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void SinglePacketP$Send$sendDone(am_id_t arg_0x7da59c48, message_t *arg_0x7e5b4950, error_t arg_0x7e5b4ad8){
#line 99
  switch (arg_0x7da59c48) {
#line 99
    case AM_NO_UPPER_DATA:
#line 99
      DsrControlP$Send$sendDone(arg_0x7e5b4950, arg_0x7e5b4ad8);
#line 99
      break;
#line 99
    case 23:
#line 99
      TestDsrP$SendA$sendDone(arg_0x7e5b4950, arg_0x7e5b4ad8);
#line 99
      break;
#line 99
    case 25:
#line 99
      TestDsrP$SendB$sendDone(arg_0x7e5b4950, arg_0x7e5b4ad8);
#line 99
      break;
#line 99
    default:
#line 99
      SinglePacketP$Send$default$sendDone(arg_0x7da59c48, arg_0x7e5b4950, arg_0x7e5b4ad8);
#line 99
      break;
#line 99
    }
#line 99
}
#line 99
# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static   void DsrControlP$SendState$toIdle(void){
#line 56
  StateImplP$State$toIdle(1U);
#line 56
}
#line 56
# 1220 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static void PacketEngineP$removePacket(packet_id_t pid)
#line 1220
{
  sim_log_debug(160U, "PacketEngineP", "PE: Removing pkt %u from the buffer\n", pid);
  if (PacketEngineP$msgBuffer[sim_node()][pid].srcLayer == PacketEngineP$PKT_LOWER_LAYER) {

      if (PacketEngineP$ReceivePool$put(PacketEngineP$msgBuffer[sim_node()][pid].msg) == FAIL) {
        sim_log_error(161U, "PacketEngineP", "PE: Pool already full, leaking packet!\n");
        }
    }
#line 1227
  PacketEngineP$msgBuffer[sim_node()][pid].state = PacketEngineP$PKT_FREE;
}

# 155 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t *msg, error_t err)
#line 155
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, err);
}

# 60 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
static  error_t TossimActiveMessageP$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len)
#line 62
{
  error_t err;
  tossim_header_t *header = TossimActiveMessageP$getHeader(amsg);

#line 65
  sim_log_debug(97U, "AM", "AM: Sending packet (id=%hhu, len=%hhu) to %hu\n", id, len, addr);
  __nesc_hton_uint8((unsigned char *)&header->type, id);
  __nesc_hton_uint16((unsigned char *)&header->dest, addr);
  __nesc_hton_uint16((unsigned char *)&header->src, TossimActiveMessageP$AMPacket$address());
  __nesc_hton_uint8((unsigned char *)&header->length, len);
  err = TossimActiveMessageP$Model$send((int )addr, amsg, len + sizeof(tossim_header_t ));
  return err;
}

# 263 "/opt/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static double CpmModelC$packetNoise(CpmModelC$receive_message_t *msg)
#line 263
{
  double noise = CpmModelC$noise_hash_generation();
  CpmModelC$receive_message_t *list = CpmModelC$outstandingReceptionHead[sim_node()];

#line 266
  noise = pow(10.0, noise / 10.0);
  while (list != (void *)0) {
      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  return noise;
}

#line 116
static double CpmModelC$noise_hash_generation(void)
#line 116
{
  double CT = CpmModelC$timeInMs();
  uint32_t quotient = (sim_time_t )(CT * 10) / 10;
  uint8_t remain = (uint8_t )((sim_time_t )(CT * 10) % 10);
  double noise_val;
  uint16_t node_id = sim_node();

  sim_log_debug(203U, "CpmModelC", "IN: noise_hash_generation()\n");
  if (5 <= remain && remain < 10) {
      noise_val = (double )sim_noise_generate(node_id, quotient + 1);
    }
  else {
      noise_val = (double )sim_noise_generate(node_id, quotient);
    }
  sim_log_debug(204U, "CpmModelC", "OUT: noise_hash_generation()\n");

  return noise_val;
}

# 181 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err)
#line 181
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] >= 2) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()], msg, err);
    }
  else {
      sim_log_debug(351U, "PointerBug", "%s received send done for %p, signaling for %p.\n", __FUNCTION__, msg, /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()]].msg);
    }
}

# 237 "/opt/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static bool CpmModelC$shouldReceive(double SNR)
#line 237
{
  double prr = CpmModelC$prr_estimate_from_snr(SNR);
  double coin = RandomUniform();

#line 240
  if (prr != 0 && prr != 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 244
        prr = 0.0;
        }
    }
#line 246
  return prr;
}

# 298 "/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static  bool TossimPacketModelC$GainRadioModel$shouldAck(message_t *msg)
#line 298
{
  if (TossimPacketModelC$running[sim_node()] && !TossimPacketModelC$transmitting[sim_node()]) {
      return TossimPacketModelC$Packet$shouldAck(msg);
    }
  else {
      return FALSE;
    }
}

# 207 "/opt/tinyos-2.x/tos/lib/tossim/CpmModelC.nc"
static void CpmModelC$sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC$receive_message_t *r)
#line 207
{
  sim_event_t *ackEvent = (sim_event_t *)malloc(sizeof(sim_event_t ));

  ackEvent->mote = source;
  ackEvent->force = 1;
  ackEvent->cancelled = 0;
  ackEvent->time = t;
  ackEvent->handle = CpmModelC$sim_gain_ack_handle;
  ackEvent->cleanup = sim_queue_cleanup_event;
  ackEvent->data = r;

  sim_queue_insert(ackEvent);
}

# 350 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPathP.nc"
static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$printPathLink(graph_vertex_id_t m, char *path, char *tmp)
#line 350
{

  strcpy(tmp, path);
  if (m == /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc[sim_node()]) {
    sprintf(path, "%u%s", m, tmp);
    }
  else 
#line 355
    {
      sprintf(path, "-%u%s", m, tmp);
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$printPathLink(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[sim_node()][m], path, tmp);
    }
}

# 76 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static   bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$BitVector$get(uint16_t bitnum)
{
  return /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$m_bits[sim_node()][/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$getIndex(bitnum)] & /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$getMask(bitnum) ? TRUE : FALSE;
}

# 165 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPathP.nc"
static  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$edgeCount(graph_vertex_id_t dest)
#line 165
{
  if (dest >= 4 || /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[sim_node()][dest] == 4) {
    return 0;
    }
  else 
#line 168
    {
      graph_edge_id_t cnt;

#line 170
      for (cnt = 0; !/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$end(dest); 
      dest = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$next(dest)) 
        cnt++;
      return cnt;
    }
}

# 540 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/DsrControlP.nc"
static  void DsrControlP$RouteCache$routeUpdate(route_cache_node_id_t src, route_cache_node_id_t dest, 
route_cache_link_id_t numLinks)
#line 541
{
  packet_id_t pid;
  message_t *msg;
  void *data;
  dsr_route_request_out_t outEntry = { dest, DSR_HOP_LIMIT, 0 };
  dsr_route_request_out_t *outCache;
  bool foundPkts = FALSE;

  if (numLinks > 0) {
    DsrControlP$resetRouteRequestOutCache(dest);
    }
  for (pid = DsrControlP$findSinglePktTo(dest); !DsrControlP$SinglePacketWaitList$end(pid); 
  pid = DsrControlP$findSinglePktTo(dest)) {
      foundPkts = TRUE;
      msg = DsrControlP$SinglePacketEngine$packet(pid);
      data = DsrControlP$SubPacket$getPayload(msg, (void *)0);
      if (numLinks == 0) {

          outCache = DsrControlP$RouteRequestOutCache$insert(&outEntry);
          if (outCache->rreqsSinceRrep != 0) {
              sim_log_debug(255U, "DsrControlP", "DSR: Pkt %u: Dest %u already in route request out cache\n", pid, dest);
              return;
            }

          DsrControlP$RouteRequestOutTimer$expired(dest);










          return;
        }
      else {
#line 577
        if (numLinks == 1) {

            sim_log_debug(256U, "DsrControlP", "DSR: Pkt %u: Sending without header to %u\n", pid, dest);
            DsrControlP$Acks$requestAck(msg);
            DsrControlP$SinglePacketEngine$send(pid);
          }
        else 
#line 582
          {
            dsr_source_route_t *sr;
            uint8_t numAddr = numLinks - 1;

            sim_log_debug(257U, "DsrControlP", "DSR: Pkt %u: Adding source route to %u\n", pid, dest);
            if (DsrControlP$addDsrHeader(pid, msg, data) == FAIL) {
              continue;
              }
#line 589
            DsrControlP$preLengthChange(msg, data);


            if (
#line 590
            DsrControlP$SourceRoute$add(data, sizeof(dsr_source_route_t ) + 
            numAddr * sizeof(nx_am_addr_t ), 
            DsrControlP$SubPacket$maxPayloadLength()) != SUCCESS) {
                sim_log_error(258U, "DsrControlP", "DSR: Pkt %u: Already has source route or not enough room!\n", pid);

                DsrControlP$DsrPacketEngine$drop(pid);
                continue;
              }
            DsrControlP$postLengthChange(msg, data);
            sr = (dsr_source_route_t *)DsrControlP$SourceRoute$value(data);
            if (sr == (void *)0) {
                sim_log_error(259U, "DsrControlP", "DSR: Pkt %u: Can't find the source route option just added!\n", pid);

                DsrControlP$DsrPacketEngine$drop(pid);
                continue;
              }

            __nesc_htonbf_uint8((unsigned char *)&(*sr), 0, 1, FALSE);
            __nesc_htonbf_uint8((unsigned char *)&(*sr), 1, 3, 0);
            __nesc_htonbf_uint8((unsigned char *)&(*sr), 4, 4, numAddr);

            __nesc_hton_uint16((unsigned char *)&sr->addr[--numAddr], DsrControlP$RouteNodeList$next(dest));

            while (numAddr > 0) {
                __nesc_hton_uint16((unsigned char *)&sr->addr[numAddr - 1], DsrControlP$RouteNodeList$next(__nesc_ntoh_uint16((unsigned char *)&sr->addr[numAddr])));
                numAddr--;
              }

            DsrControlP$AMPacket$setDestination(msg, __nesc_ntoh_uint16((unsigned char *)&sr->addr[0]));
            sim_log_debug(260U, "DsrControlP", "DSR: Pkt %u: Sending to %u along the way to %u\n", pid, __nesc_ntoh_uint16((unsigned char *)&sr->addr[0]), dest);

            DsrControlP$Acks$requestAck(msg);
            DsrControlP$DsrPacketEngine$send(pid);
          }
        }
    }
}

# 145 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/cache/LruDataCacheP.nc"
static  /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t */*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$lookup(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t *item)
#line 145
{
  uint8_t i = /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$lookup(item);

#line 147
  /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$printCache();
  if (i == /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count[sim_node()]) {
    return (void *)0;
    }
#line 150
  return &/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$cache[sim_node()][(i + /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first[sim_node()]) % 8];
}

#line 107
static uint8_t /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$lookup(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t *item)
#line 107
{
  uint8_t i;
  /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t *cachedItem;

#line 110
  for (i = 0; i < /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count[sim_node()]; i++) {
      cachedItem = &/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$cache[sim_node()][(i + /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first[sim_node()]) % 8];
      if (/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$Equal$test(cachedItem, item)) {
        break;
        }
    }
#line 115
  return i;
}

#line 93
static void /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$printCache(void)
#line 93
{

  uint8_t i;

#line 96
  sim_log_debug(340U, "LruDataCacheP", "LRUDC:");
  for (i = 0; i < /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count[sim_node()]; i++) {
      sim_log_debug_clear(341U, "LruDataCacheP", " %08x", /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$cache[sim_node()][i]);
      if (i == /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first[sim_node()]) {
        sim_log_debug_clear(342U, "LruDataCacheP", "*");
        }
    }
#line 102
  sim_log_debug_clear(343U, "LruDataCacheP", "\n");
}

# 159 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/timer/DataTimerP.nc"
static void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$removeTimer(uint8_t i)
#line 159
{
  if (i >= /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size[sim_node()]) {
    return;
    }
#line 162
  sim_log_debug(346U, "DataTimerP", "DT: Removed position %u\n", i);
  for (/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size[sim_node()]--; i < /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size[sim_node()]; i++) {
      /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data[sim_node()][i] = /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data[sim_node()][i + 1];
      /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$delay[sim_node()][i] = /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$delay[sim_node()][i + 1];
    }
}




static void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$adjustTimer(void)
#line 172
{
  uint32_t stopTime = /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$getNow();
  uint8_t i;
  uint32_t elapsed = stopTime - /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$startTime[sim_node()];

#line 176
  /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$stop();
  for (i = 0; i < /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size[sim_node()]; i++) 
    /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$delay[sim_node()][i] -= elapsed;
  /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$startTime[sim_node()] = stopTime;
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$startOneShot(uint32_t arg_0x7e5334d0){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(1U, arg_0x7e5334d0);
#line 62
}
#line 62
# 975 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/DsrControlP.nc"
static packet_id_t DsrControlP$findSinglePktTo(am_addr_t dest)
#line 975
{
  packet_id_t pid;

#line 977
  for (pid = DsrControlP$SinglePacketEngine$waitList(); !DsrControlP$SinglePacketWaitList$end(pid); 
  pid = DsrControlP$SinglePacketWaitList$next(pid)) {
      if (DsrControlP$SinglePacket$destination(DsrControlP$SinglePacketEngine$packet(pid)) == dest) {
        return pid;
        }
    }
#line 982
  return pid;
}

# 823 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static  packet_id_t PacketEngineP$PacketEngine$waitList(am_id_t lowerId)
#line 823
{
  packet_id_t pid = PacketEngineP$nextWaitPkt[sim_node()];

  if (pid < PacketEngineP$BUFFER_SIZE && PacketEngineP$lid(PacketEngineP$msgBuffer[sim_node()][pid].msg) != lowerId) {
    pid = PacketEngineP$PacketWaitList$next(lowerId, pid);
    }
#line 828
  return pid;
}

#line 865
static  packet_id_t PacketEngineP$PacketWaitList$next(am_id_t lowerId, packet_id_t m)
#line 865
{
  if (m < PacketEngineP$BUFFER_SIZE) {
      for (m = ++m % PacketEngineP$BUFFER_SIZE; m != PacketEngineP$nextWaitPkt[sim_node()]; m = ++m % PacketEngineP$BUFFER_SIZE) {
          if (PacketEngineP$msgBuffer[sim_node()][m].state == PacketEngineP$PKT_WAIT && PacketEngineP$lid(PacketEngineP$msgBuffer[sim_node()][m].msg) == lowerId) {
            return m;
            }
        }
    }
#line 872
  return PacketEngineP$BUFFER_SIZE;
}

#line 617
static  void *PacketEngineP$Packet$getPayload(message_t *msg, uint8_t *len)
#line 617
{
  uint8_t *payload = PacketEngineP$SubPacket$getPayload(PacketEngineP$lid(msg), msg, len);

#line 619
  if (len != (void *)0) {
    *len -= sizeof(am_id_t );
    }
#line 621
  return payload + sizeof(am_id_t );
}

# 793 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/DsrControlP.nc"
static  void *DsrControlP$Packet$getPayload(message_t *msg, uint8_t *len)
#line 793
{
  uint8_t *payload = DsrControlP$SubPacket$getPayload(msg, len);

#line 795
  if (len != (void *)0) {
    *len -= DsrControlP$Header$length(payload);
    }
#line 797
  return payload + DsrControlP$Header$length(payload);
}

# 713 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static  message_t *PacketEngineP$PacketEngine$packet(am_id_t lowerId, packet_id_t pid)
#line 713
{
  if ((pid >= PacketEngineP$BUFFER_SIZE || PacketEngineP$msgBuffer[sim_node()][pid].state == PacketEngineP$PKT_FREE) || 
  PacketEngineP$lid(PacketEngineP$msgBuffer[sim_node()][pid].msg) != lowerId) {
    return (void *)0;
    }
#line 717
  return PacketEngineP$msgBuffer[sim_node()][pid].msg;
}

# 664 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/DsrControlP.nc"
static  void DsrControlP$RouteRequestOutTimer$expired(am_addr_t dest)
#line 664
{
  packet_id_t pid = DsrControlP$findSinglePktTo(dest);
  dsr_route_request_out_t outEntry = { dest, DSR_HOP_LIMIT, 0 };
  dsr_route_request_out_t *outCache;

#line 668
  outCache = DsrControlP$RouteRequestOutCache$lookup(&outEntry);
  if (outCache == (void *)0) {
      sim_log_error(261U, "DsrControlP", "DSR: Pkt %u: Route request out cache for %u already gone!\n", pid, dest);

      return;
    }
  if (DsrControlP$SinglePacketWaitList$end(pid)) {

      sim_log_error(262U, "DsrControlP", "DSR: Route request out timer fired for %u, but no packets are waiting!\n", dest);

      return;
    }
  if (outCache->rreqsSinceRrep < DSR_MAX_REQUEST_ATTMEPTS) {

      DsrControlP$updateRouteRequestOutTimer(dest, outCache->rreqsSinceRrep);

      outCache->rreqsSinceRrep++;

      sim_log_debug(263U, "DsrControlP", "DSR: Pkt %u: Sending route request #%hhu to %u\n", pid, outCache->rreqsSinceRrep, dest);

      DsrControlP$Compose$set(pid);
      DsrControlP$composePkt$postTask();
    }
  else 
#line 690
    {
      sim_log_error(264U, "DsrControlP", "DSR: Sent max route requests for %u, dropping all packets!\n", dest);

      while (!DsrControlP$SinglePacketWaitList$end(pid)) {
          DsrControlP$SinglePacketEngine$drop(pid);
          pid = DsrControlP$findSinglePktTo(dest);
        }
    }
}

# 800 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static  error_t PacketEngineP$PacketEngine$drop(am_id_t lowerId, packet_id_t pid)
#line 800
{
  if ((pid >= PacketEngineP$BUFFER_SIZE || PacketEngineP$msgBuffer[sim_node()][pid].state != PacketEngineP$PKT_WAIT) || 
  PacketEngineP$lid(PacketEngineP$msgBuffer[sim_node()][pid].msg) != lowerId) {
    return EINVAL;
    }
#line 804
  sim_log_debug(130U, "PacketEngineP", "PE: Dropping pkt %u from the buffer\n", pid);
  PacketEngineP$removePacket(pid);
  if (PacketEngineP$nextWaitPkt[sim_node()] == pid) {

    PacketEngineP$moveWaitIndex();
    }
#line 809
  return SUCCESS;
}

# 120 "/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static   error_t TossimPacketModelC$PacketAcknowledgements$requestAck(message_t *msg)
#line 120
{
  tossim_metadata_t *meta = TossimPacketModelC$getMetadata(msg);

#line 122
  __nesc_hton_uint8((unsigned char *)&meta->ack, TRUE);
  return SUCCESS;
}

# 729 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static  error_t PacketEngineP$PacketEngine$send(am_id_t lowerId, packet_id_t pid)
#line 729
{
  if ((pid >= PacketEngineP$BUFFER_SIZE || PacketEngineP$msgBuffer[sim_node()][pid].state != PacketEngineP$PKT_WAIT) || 
  PacketEngineP$lid(PacketEngineP$msgBuffer[sim_node()][pid].msg) != lowerId) {
    return EINVAL;
    }
#line 733
  sim_log_debug(126U, "PacketEngineP", "PE: Marking pkt %u to be sent\n", pid);
  PacketEngineP$markPacket(pid, PacketEngineP$PKT_SEND);
  return SUCCESS;
}

#line 1200
static void PacketEngineP$markPacket(packet_id_t pid, uint8_t state)
#line 1200
{
  PacketEngineP$msgBuffer[sim_node()][pid].state = state;
  if (PacketEngineP$nextActionPkt[sim_node()] == PacketEngineP$BUFFER_SIZE) {

      sim_log_debug(158U, "PacketEngineP", "PE: Moved nextActionPkt from %u", PacketEngineP$nextActionPkt[sim_node()]);
      PacketEngineP$nextActionPkt[sim_node()] = pid;
      sim_log_debug_clear(159U, "PacketEngineP", " to %u\n", PacketEngineP$nextActionPkt[sim_node()]);
      PacketEngineP$printIndices();
    }
  if (PacketEngineP$nextWaitPkt[sim_node()] == pid) {

    PacketEngineP$moveWaitIndex();
    }
#line 1212
  PacketEngineP$msgAction$postTask();
}

# 1056 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/DsrControlP.nc"
static error_t DsrControlP$addDsrHeader(packet_id_t pid, message_t *msg, void *data)
#line 1056
{
  if (DsrControlP$AMPacket$type(msg) == AM_DSR) {
      sim_log_error(287U, "DsrControlP", "DSR: Pkt %u: DSR header already present!\n", pid);
      DsrControlP$DsrPacketEngine$drop(pid);
      return FAIL;
    }
  DsrControlP$Header$add(data, DsrControlP$SubPacket$maxPayloadLength());
  DsrControlP$postLengthChange(msg, data);
  DsrControlP$AMPacket$setType(msg, AM_DSR);
  return SUCCESS;
}

#line 1138
static void DsrControlP$postLengthChange(message_t *msg, void *data)
#line 1138
{
  DsrControlP$SubPacket$setPayloadLength(msg, DsrControlP$SubPacket$payloadLength(msg) + 
  DsrControlP$Header$length(data));
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t DsrControlP$SubPacket$payloadLength(message_t *arg_0x7e5a6c58){
#line 67
  unsigned char result;
#line 67

#line 67
  result = TossimActiveMessageP$Packet$payloadLength(arg_0x7e5a6c58);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 168 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
static  void TossimActiveMessageP$AMPacket$setType(message_t *amsg, am_id_t t)
#line 168
{
  tossim_header_t *header = TossimActiveMessageP$getHeader(amsg);

#line 170
  __nesc_hton_uint8((unsigned char *)&header->type, t);
}

# 1126 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/DsrControlP.nc"
static void DsrControlP$preLengthChange(message_t *msg, void *data)
#line 1126
{
  DsrControlP$SubPacket$setPayloadLength(msg, DsrControlP$SubPacket$payloadLength(msg) - 
  DsrControlP$Header$length(data));
}

# 174 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvP.nc"
static  error_t TlvP$Tlv$add(uint8_t type, void *block, uint8_t len, uint8_t maxLen)
#line 174
{
  if (!TlvP$TlvList$end(type, block, TlvP$TlvList$next(type, block, TlvP$TLV_FIRST_KEY))) {
    return EALREADY;
    }
#line 177
  return TlvP$TlvMultiple$add(type, block, (void *)0, len, maxLen);
}

#line 353
static  tlv_key_t TlvP$TlvList$next(uint8_t type, void *block, tlv_key_t key)
#line 353
{
  tlv_t *cur;

#line 355
  while (!TlvP$TlvList$end(type, block, key)) {
      cur = TlvP$tlvAt(block, key);
      if (__nesc_ntoh_uint8((unsigned char *)&cur->type) == type) {
          sim_log_debug(298U, "TlvP", "TLV: Type %hhu found at byte %hhu\n", type, key);
          return key;
        }
      key += sizeof(tlv_t ) + __nesc_ntoh_uint8((unsigned char *)&cur->len);
    }
  sim_log_debug(299U, "TlvP", "TLV: Type %hhu not found\n", type);
  return key;
}

#line 152
static  void *TlvP$Tlv$value(uint8_t type, void *block)
#line 152
{
  tlv_key_t key = TlvP$TlvList$next(type, block, TlvP$TLV_FIRST_KEY);

#line 154
  if (TlvP$TlvList$end(type, block, key)) {
    return (void *)0;
    }
#line 156
  return TlvP$TlvMultiple$value(type, block, key);
}

#line 268
static  void *TlvP$TlvMultiple$value(uint8_t type, void *block, tlv_key_t key)
#line 268
{
  tlv_t *cur = TlvP$tlvAt(block, key);

#line 270
  if (TlvP$TlvList$end(type, block, key) || __nesc_ntoh_uint8((unsigned char *)&cur->type) != type) {
      sim_log_error(295U, "TlvP", "TLV: Key too large or type doesn't match!\n");
      return (void *)0;
    }
  return (void *)cur->val;
}

# 143 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
static  void TossimActiveMessageP$AMPacket$setDestination(message_t *amsg, am_addr_t addr)
#line 143
{
  tossim_header_t *header = TossimActiveMessageP$getHeader(amsg);

#line 145
  __nesc_hton_uint16((unsigned char *)&header->dest, addr);
}

# 253 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/queue/PriorityQueueP.nc"
static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$flip(priority_queue_id_t a, priority_queue_id_t b)
#line 253
{

  priority_queue_id_t temp = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][a];

#line 256
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][a] = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][b];
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][b] = temp;

  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[sim_node()][/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][a]] = a;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[sim_node()][/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][b]] = b;
  sim_log_debug(316U, "PriorityQueueC", "PQ: Flipped heap positions %hhu and %hhu\n", a, b);
}




static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTree(void)
#line 267
{

  sim_log_debug(317U, "PriorityQueueC", "Current Tree:\n");
  if (!/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()]) {
      sim_log_debug_clear(318U, "PriorityQueueC", "Empty!\n");
      return;
    }
  sim_log_debug_clear(319U, "PriorityQueueC", "%hhu\n", /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][0]);
  if (1 < /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()]) {
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTreeChild(1, "| ");
      sim_log_debug_clear(320U, "PriorityQueueC", "\n");
    }
  if (2 < /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()]) {
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTreeChild(2, "  ");
      sim_log_debug_clear(321U, "PriorityQueueC", "\n");
    }
}








static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTreeChild(priority_queue_id_t n, char *pre)
#line 292
{

  char cPre[10];

#line 295
  sim_log_debug_clear(322U, "PriorityQueueC", "%s%hhu", "|_", /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][n]);
  if (2 * n + 1 < /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()]) {
      sim_log_debug_clear(323U, "PriorityQueueC", "\n%s", pre);
      sprintf(cPre, "%s%s", pre, "| ");
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTreeChild(2 * n + 1, cPre);
    }
  if (2 * n + 2 < /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()]) {
      sim_log_debug_clear(324U, "PriorityQueueC", "\n%s", pre);
      sprintf(cPre, "%s%s", pre, "  ");
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTreeChild(2 * n + 2, cPre);
    }
}





static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$clearData(void)
#line 312
{
  priority_queue_id_t i;

#line 314
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()] = 0;
  for (i = 0; i < 4; i++) 
    /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[sim_node()][i] = 4;
}

#line 118
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$insert(priority_queue_id_t m)
#line 118
{
  if (m >= 4) {
    return ESIZE;
    }
#line 121
  if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()] == 4) {
      sim_log_error(310U, "PriorityQueueC", "PQ: Can't insert index %hhu, already full!\n", m);
      return FAIL;
    }
  if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[sim_node()][m] != 4) {
    return EALREADY;
    }
#line 127
  sim_log_debug(311U, "PriorityQueueC", "PQ: Inserting index %hhu\n", m);
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()]] = m;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[sim_node()][m] = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()];
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$moveUpPos(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[sim_node()]++);
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTree();
  return SUCCESS;
}

#line 218
static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$moveUpPos(priority_queue_id_t a)
#line 218
{
  priority_queue_id_t p;

#line 220
  sim_log_debug(314U, "PriorityQueueC", "PQ: Moving heap position %hhu up if needed\n", a);
  while (a > 0 && /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$test(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][a], /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[sim_node()][p = (a - 1) / 2]) > 0) {
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$flip(a, p);
      a = p;
    }
}

# 586 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static  void PacketEngineP$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 586
{
  PacketEngineP$SubPacket$setPayloadLength(PacketEngineP$lid(msg), msg, len + sizeof(am_id_t ));
}

#line 894
static packet_id_t PacketEngineP$pidCombineInternal(packet_id_t a, packet_id_t b)
#line 894
{
  packet_id_t unwrappedA = a < PacketEngineP$nextWaitPkt[sim_node()] ? a + PacketEngineP$BUFFER_SIZE : a;
  packet_id_t unwrappedB = b < PacketEngineP$nextWaitPkt[sim_node()] ? b + PacketEngineP$BUFFER_SIZE : b;

#line 897
  return unwrappedA < unwrappedB ? a : b;
}

# 117 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvP.nc"
static  uint8_t TlvP$Tlv$length(uint8_t type, void *block)
#line 117
{
  tlv_key_t key = TlvP$TlvList$next(type, block, TlvP$TLV_FIRST_KEY);

#line 119
  if (TlvP$TlvList$end(type, block, key)) {
    return 0;
    }
#line 121
  return TlvP$TlvMultiple$length(type, block, key);
}

#line 203
static  uint8_t TlvP$TlvMultiple$length(uint8_t type, void *block, tlv_key_t key)
#line 203
{
  tlv_t *cur = TlvP$tlvAt(block, key);

#line 205
  if (TlvP$TlvList$end(type, block, key) || __nesc_ntoh_uint8((unsigned char *)&cur->type) != type) {
      sim_log_error(291U, "TlvP", "TLV: Key too large or type doesn't match!\n");
      return 0;
    }
  return __nesc_ntoh_uint8((unsigned char *)&cur->len);
}

# 86 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static   void /*DsrP.ComposeC*/BitVectorC$0$BitVector$clear(uint16_t bitnum)
{
  /*DsrP.ComposeC*/BitVectorC$0$m_bits[sim_node()][/*DsrP.ComposeC*/BitVectorC$0$getIndex(bitnum)] &= ~/*DsrP.ComposeC*/BitVectorC$0$getMask(bitnum);
}

# 116 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
static  bool SinglePacketP$SinglePacket$isForMe(message_t *msg)
#line 116
{
  return SinglePacketP$SinglePacket$destination(msg) == SinglePacketP$AMPacket$address();
}

# 126 "/opt/tinyos-2.x/tos/lib/tossim/TossimPacketModelC.nc"
static   error_t TossimPacketModelC$PacketAcknowledgements$noAck(message_t *ack)
#line 126
{
  tossim_metadata_t *meta = TossimPacketModelC$getMetadata(ack);

#line 128
  __nesc_hton_uint8((unsigned char *)&meta->ack, FALSE);
  return SUCCESS;
}

# 96 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static   error_t StateImplP$State$requestState(uint8_t id, uint8_t reqState)
#line 96
{
  error_t returnVal = FAIL;

#line 98
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 98
    {
      if (reqState == StateImplP$S_IDLE || StateImplP$state[sim_node()][id] == StateImplP$S_IDLE) {
          StateImplP$state[sim_node()][id] = reqState;
          returnVal = SUCCESS;
        }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return returnVal;
}

# 140 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
static  error_t SinglePacketP$Send$send(am_id_t upperId, am_addr_t addr, message_t *msg, uint8_t len)
#line 140
{
  sim_log_debug(352U, "SinglePacketP", "SP: Sending pkt from %u to %u\n", SinglePacketP$AMPacket$address(), addr);

  SinglePacketP$SinglePacket$setSource(msg, SinglePacketP$AMPacket$address());
  SinglePacketP$SinglePacket$setDestination(msg, addr);
  SinglePacketP$Packet$setPayloadLength(msg, len);
  return SinglePacketP$SubSend$send(upperId, addr, msg, SinglePacketP$SubPacket$payloadLength(msg));
}

# 256 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static  error_t PacketEngineP$Send$send(packet_client_id_t clientId, am_addr_t addr, message_t *msg, uint8_t len)
#line 256
{
  if (!PacketEngineP$running[sim_node()]) {
    return EOFF;
    }
#line 259
  if (PacketEngineP$nextFreePkt[sim_node()] == PacketEngineP$BUFFER_SIZE) {
      sim_log_error(103U, "PacketEngineP", "PE: Can't add send packet, buffer is full!\n");
      return EBUSY;
    }
  if (len > PacketEngineP$Packet$maxPayloadLength()) {
      sim_log_error(104U, "PacketEngineP", "PE: Can't add send packet, length too long!\n");
      return ESIZE;
    }
  if (PacketEngineP$msgBuffer[sim_node()][PacketEngineP$nextFreePkt[sim_node()]].state == PacketEngineP$PKT_FREE) {

      PacketEngineP$Packet$setPayloadLength(msg, len);

      PacketEngineP$setIds(msg, clientId);

      sim_log_debug(105U, "PacketEngineP", "PE: Adding send packet at index %u\n", PacketEngineP$nextFreePkt[sim_node()]);
      PacketEngineP$msgBuffer[sim_node()][PacketEngineP$nextFreePkt[sim_node()]].srcLayer = PacketEngineP$PKT_UPPER_LAYER;
      PacketEngineP$msgBuffer[sim_node()][PacketEngineP$nextFreePkt[sim_node()]].clientId = clientId;
      PacketEngineP$addPacket(msg);
      return SUCCESS;
    }
  else 
#line 278
    {

      sim_log_error(106U, "PacketEngineP", "PE: Free packet at %u wasn't free!\n", PacketEngineP$nextFreePkt[sim_node()]);
      return EBUSY;
    }
}

#line 1101
static void PacketEngineP$setIds(message_t *msg, packet_client_id_t clientId)
#line 1101
{
  PacketEngineP$setLid(msg, PacketEngineP$PacketEngineClient$defaultLowerType(clientId));
  PacketEngineP$setUid(msg, PacketEngineP$PacketEngineClient$upperType(clientId));
}

#line 1074
static void PacketEngineP$setUid(message_t *msg, am_id_t newUid)
#line 1074
{
  * (am_id_t *)PacketEngineP$SubPacket$getPayload(PacketEngineP$lid(msg), msg, (void *)0) = newUid;
}

#line 569
static  uint8_t PacketEngineP$Packet$payloadLength(message_t *msg)
#line 569
{
  return PacketEngineP$SubPacket$payloadLength(PacketEngineP$lid(msg), msg) - sizeof(am_id_t );
}

# 230 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/tlv/TlvP.nc"
static  error_t TlvP$TlvMultiple$setLength(uint8_t type, void *block, tlv_key_t key, 
uint8_t len, uint8_t maxLen)
#line 231
{
  unsigned char *__nesc_temp44;
#line 232
  tlv_block_t *blk = (tlv_block_t *)block;
  tlv_t *cur = TlvP$tlvAt(block, key);
  void *trail;
  int16_t diff;
#line 235
  int16_t trailLen;

#line 236
  if (TlvP$TlvList$end(type, block, key) || __nesc_ntoh_uint8((unsigned char *)&cur->type) != type) {
      sim_log_error(292U, "TlvP", "TLV: Key too large or type doesn't match!\n");
      return EINVAL;
    }

  diff = len - __nesc_ntoh_uint8((unsigned char *)&cur->len);
  trail = (void *)cur + sizeof(tlv_t ) + __nesc_ntoh_uint8((unsigned char *)&cur->len);
  trailLen = maxLen - (uint8_t )(trail - block);
  if (!len) {
    diff -= sizeof(tlv_t );
    }
#line 246
  if (diff > 0) {
    trailLen -= diff;
    }
#line 248
  if (sizeof(tlv_block_t ) + __nesc_ntoh_uint8((unsigned char *)&blk->len) + diff > maxLen) {
      sim_log_debug(293U, "TlvP", "TLV: Not enough room to set length of type %hhu to %hhu!\n", type, len);
      return ESIZE;
    }
  sim_log_debug(294U, "TlvP", "TLV: Setting length of type %hhu to %hhu\n", type, len);
  (__nesc_temp44 = (unsigned char *)&blk->len, __nesc_hton_uint8(__nesc_temp44, __nesc_ntoh_uint8(__nesc_temp44) + diff));
  memmove(trail + diff, trail, trailLen);
  if (len) {
    __nesc_hton_uint8((unsigned char *)&cur->len, len);
    }
#line 257
  return SUCCESS;
}

# 267 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/dsr/DsrControlP.nc"
static  void DsrControlP$DsrPacketEngine$receiveAdded(packet_id_t pid, message_t *msg)
#line 267
{
  unsigned char __nesc_temp43;
  unsigned char *__nesc_temp42;
#line 268
  uint8_t optLen;
  tlv_key_t key;
  am_addr_t singleSrc = DsrControlP$SinglePacket$source(msg);
  am_addr_t singleDest = DsrControlP$SinglePacket$destination(msg);
  void *data = DsrControlP$SubPacket$getPayload(msg, (void *)0);

#line 273
  sim_log_debug(234U, "DsrControlP", "DSR: Pkt %u: DSR receive/snoop packet added!\n", pid);
  if ((optLen = DsrControlP$RouteRequest$length(data)) != 0) {

      dsr_route_request_t *rreq = (dsr_route_request_t *)DsrControlP$RouteRequest$value(data);
      uint8_t numAddr = (optLen - sizeof(dsr_route_request_t )) / sizeof(nx_am_addr_t );

#line 278
      sim_log_debug(235U, "DsrControlP", "DSR: Pkt %u: Found route request option\n", pid);
      if (DsrControlP$SinglePacket$isForMe(msg)) {
          sim_log_debug(236U, "DsrControlP", "DSR: Pkt %u: Route request reached target node\n", pid);

          DsrControlP$addPath(singleSrc, rreq->addr, numAddr, DsrControlP$AMPacket$address());
          DsrControlP$Compose$set(pid);
          DsrControlP$composePkt$postTask();
          return;
        }
      else 
#line 286
        {
          uint8_t i;
          dsr_route_request_in_t inEntry = { .node = singleSrc, .next = 0 };
          dsr_route_request_in_t *inCache;

          if (singleSrc == DsrControlP$AMPacket$address()) {
              sim_log_debug(237U, "DsrControlP", "DSR: Pkt %u: Address already in route request to %u, dropping!\n", pid, singleDest);

              DsrControlP$DsrPacketEngine$drop(pid);
              return;
            }
          for (i = 0; i < numAddr; i++) {
              if (__nesc_ntoh_uint16((unsigned char *)&rreq->addr[i]) == DsrControlP$AMPacket$address()) {
                  sim_log_debug(238U, "DsrControlP", "DSR: Pkt %u: Address already in route request to %u, dropping!\n", pid, singleDest);

                  DsrControlP$DsrPacketEngine$drop(pid);
                  return;
                }
            }

          DsrControlP$addPath(singleSrc, rreq->addr, numAddr, DsrControlP$AMPacket$address());


          for (i = 0; i < DSR_ROUTE_REQUEST_IDS; i++) 
            inEntry.target[i] = DsrControlP$NULL_ADDR;
          inCache = DsrControlP$RouteRequestInCache$insert(&inEntry);
          for (i = 0; i < DSR_ROUTE_REQUEST_IDS; i++) {
              if (inCache->ident[i] == __nesc_ntoh_uint8((unsigned char *)&rreq->ident) && 
              inCache->target[i] == singleDest) {
                  sim_log_debug(239U, "DsrControlP", "DSR: Pkt %u: Route request to %u (ID %hhu) found in cache, dropping!\n", pid, singleDest, __nesc_ntoh_uint8((unsigned char *)&rreq->ident));


                  DsrControlP$DsrPacketEngine$drop(pid);
                  return;
                }
            }
          sim_log_debug(240U, "DsrControlP", "DSR: Pkt %u: Route request to %u (ID %hhu) is new\n", pid, singleDest, __nesc_ntoh_uint8((unsigned char *)&rreq->ident));


          inCache->ident[inCache->next] = __nesc_ntoh_uint8((unsigned char *)&rreq->ident);
          inCache->target[inCache->next] = singleDest;
          inCache->next++;
          inCache->next %= DSR_ROUTE_REQUEST_IDS;


          DsrControlP$preLengthChange(msg, data);

          if (
#line 332
          DsrControlP$RouteRequest$setLength(data, DsrControlP$RouteRequest$length(data) + sizeof(nx_am_addr_t ), 
          DsrControlP$SubPacket$maxPayloadLength()) != SUCCESS) {
              sim_log_error(241U, "DsrControlP", "DSR: Pkt %u: Not enough room to extend route request, dropping!\n", pid);

              DsrControlP$DsrPacketEngine$drop(pid);
              return;
            }
          DsrControlP$postLengthChange(msg, data);
          __nesc_hton_uint16((unsigned char *)&rreq->addr[numAddr], DsrControlP$AMPacket$address());
          sim_log_debug(242U, "DsrControlP", "DSR: Pkt %u: Sending route request to %u further\n", pid, singleDest);
          DsrControlP$Acks$noAck(msg);
          DsrControlP$DsrPacketEngine$send(pid);
        }
    }
  for (key = DsrControlP$RouteError$list(data); !DsrControlP$RouteErrorList$end(data, key); 
  key = DsrControlP$RouteErrorList$next(data, key)) {

      if ((optLen = DsrControlP$RouteError$length(data, key)) != 0) {
          dsr_route_error_t *rerr = (dsr_route_error_t *)DsrControlP$RouteError$value(data, key);

#line 351
          sim_log_debug(243U, "DsrControlP", "DSR: Pkt %u: Found route error option at %u\n", pid, key);
        }
    }

  if ((optLen = DsrControlP$SourceRoute$length(data)) != 0) {

      dsr_source_route_t *sr = (dsr_source_route_t *)DsrControlP$SourceRoute$value(data);
      uint8_t numAddr = (optLen - sizeof(dsr_source_route_t )) / sizeof(nx_am_addr_t );
      am_addr_t pathSrc = singleSrc;
      am_addr_t pathDest = singleDest;
      uint8_t cacheableInterAddr = numAddr;

#line 362
      if (! __nesc_ntohbf_uint8((unsigned char *)&(*sr), 0, 1)) {
        sim_log_debug(244U, "DsrControlP", "DSR: Pkt %u: Found source route option from %u\n", pid, pathSrc);
        }
      else {
#line 365
        sim_log_debug(245U, "DsrControlP", "DSR: Pkt %u: Found route reply option from %u\n", pid, pathSrc);
        }
#line 366
      if (__nesc_ntohbf_uint8((unsigned char *)&(*sr), 4, 4) > numAddr) {
          sim_log_error(246U, "DsrControlP", "DSR: Pkt %u: Too many segments left (%u > %u), dropping!\n", pid, __nesc_ntohbf_uint8((unsigned char *)&(*sr), 4, 4), numAddr);

          DsrControlP$DsrPacketEngine$drop(pid);
          return;
        }

      if (__nesc_ntohbf_uint8((unsigned char *)&(*sr), 1, 3) > 0) {
        pathSrc = DsrControlP$NULL_ADDR;
        }
#line 375
      if (__nesc_ntohbf_uint8((unsigned char *)&(*sr), 0, 1) && __nesc_ntohbf_uint8((unsigned char *)&(*sr), 4, 4) > 0) {
          cacheableInterAddr = numAddr - __nesc_ntohbf_uint8((unsigned char *)&(*sr), 4, 4) + 1;
          pathDest = DsrControlP$NULL_ADDR;
        }
      DsrControlP$addPath(pathSrc, sr->addr, cacheableInterAddr, pathDest);
      if (DsrControlP$AMPacket$isForMe(msg)) {

          if (__nesc_ntohbf_uint8((unsigned char *)&(*sr), 4, 4) == 0) {
              sim_log_debug(247U, "DsrControlP", "DSR: Pkt %u: No segments left, removing source route\n", pid);
              if (__nesc_ntohbf_uint8((unsigned char *)&(*sr), 0, 1)) {
                  packet_id_t rreqPid = DsrControlP$findSinglePktTo(singleSrc);

                  if (DsrControlP$SinglePacketWaitList$end(rreqPid)) {

                      sim_log_error(248U, "DsrControlP", "DSR: Pkt %u: Looking for pkt that originated route request to %u, but no packets are waiting!\n", pid, singleSrc);


                      return;
                    }
                  sim_log_debug(249U, "DsrControlP", "DSR: Pkt %u: Pkt %u received successfully, dropping\n", pid, rreqPid);

                  DsrControlP$SinglePacketEngine$drop(rreqPid);
                }
              DsrControlP$preLengthChange(msg, data);
              DsrControlP$SourceRoute$remove(data, DsrControlP$SubPacket$maxPayloadLength());
              DsrControlP$postLengthChange(msg, data);
            }
          else 
#line 401
            {
              uint8_t nextHop;

              nextHop = numAddr - (__nesc_temp42 = (unsigned char *)&(*sr), __nesc_htonbf_uint8(__nesc_temp42, 4, 4, (__nesc_temp43 = __nesc_ntohbf_uint8(__nesc_temp42, 4, 4) - 1)), __nesc_temp43);


              if (nextHop < numAddr) {
                  if (__nesc_ntoh_uint16((unsigned char *)&sr->addr[nextHop]) == singleDest) {
                      sim_log_error(250U, "DsrControlP", "DSR: Pkt %u: Destination is also intermediate node, dropping!\n", pid);

                      DsrControlP$DsrPacketEngine$drop(pid);
                      return;
                    }
                  DsrControlP$AMPacket$setDestination(msg, __nesc_ntoh_uint16((unsigned char *)&sr->addr[nextHop]));
                }
              else {
#line 416
                DsrControlP$AMPacket$setDestination(msg, singleDest);
                }
#line 417
              sim_log_debug(251U, "DsrControlP", "DSR: Pkt %u: Sending to %u along the way to %u\n", pid, DsrControlP$AMPacket$destination(msg), singleDest);

              DsrControlP$Acks$requestAck(msg);
              DsrControlP$DsrPacketEngine$send(pid);
              return;
            }
        }
      else 
#line 423
        {
        }
    }


  if (DsrControlP$SinglePacket$isForMe(msg)) {
      sim_log_debug(252U, "DsrControlP", "DSR: Pkt %u: Destination reached, passing to upper layer\n", pid);
      DsrControlP$DsrPacketEngine$receive(pid);
    }
  else 
#line 431
    {

      sim_log_debug(253U, "DsrControlP", "DSR: Pkt %u: Processing complete, discarding\n", pid);
      DsrControlP$DsrPacketEngine$drop(pid);
    }
}

#line 995
static void DsrControlP$addPath(am_addr_t src, nx_am_addr_t addr[], uint8_t numAddr, am_addr_t dest)
#line 995
{
  uint8_t i;
  uint8_t totalAddr = numAddr;
  uint8_t copyDestIdx = 0;
  route_cache_node_id_t path[numAddr + 2];

  if (src != DsrControlP$NULL_ADDR) {
      path[0] = src;
      copyDestIdx = 1;
      totalAddr++;
    }
  if (dest != DsrControlP$NULL_ADDR) {
    path[totalAddr++] = dest;
    }
  for (i = 0; i < numAddr; i++) 
    path[i + copyDestIdx] = __nesc_ntoh_uint16((unsigned char *)&addr[i]);

  sim_log_debug(284U, "DsrControlP", "DSR: Adding path with %u links\n", totalAddr - 1);
  DsrControlP$RouteCache$addPath(path, totalAddr - 1, TRUE);
}

# 152 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/GraphSparseP.nc"
static  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$insert(graph_vertex_id_t s, 
graph_vertex_id_t d)
#line 153
{
  graph_edge_id_t newEdge;

#line 155
  if (s >= 4 || d >= 4) {
      sim_log_error(300U, "GraphSparseP", "GS: At least one vertex too large!\n");
      return 8;
    }
  if (!0 && /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edge(s, d) != 8) {
    return 8;
    }
#line 161
  sim_log_debug(301U, "GraphSparseP", "GS: Inserting edge %u -> %u\n", s, d);
  newEdge = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$IndexedAlloc$alloc();
  if (newEdge == 8) {
      sim_log_error(302U, "GraphSparseP", "GS: Can't hold any more edges!\n");
      return 8;
    }
  if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[sim_node()][s] == 8) {
    /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$vSize[sim_node()]++;
    }
#line 169
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[sim_node()][newEdge].next = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[sim_node()][s];
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[sim_node()][newEdge].dest = d;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[sim_node()][s] = newEdge;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$inserted(newEdge);
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$printGraph();
  return newEdge;
}

# 316 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/data/graph/SourceShortestPathP.nc"
static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$initTree(void)
#line 316
{
  graph_vertex_id_t i;

#line 318
  for (i = 0; i < 4; i++) {
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[sim_node()][i] = 4;
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[sim_node()][i] = 4;
    }
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$clear();
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$foundDest[sim_node()] = FAIL;
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void TestDsrP$Timer$startOneShot(uint32_t arg_0x7e5334d0){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(2U, arg_0x7e5334d0);
#line 62
}
#line 62
# 62 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[sim_node()][num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 79
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(num);
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask();
}

# 125 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void *TestDsrP$SendB$getPayload(message_t *arg_0x7e5b35d0){
#line 125
  void *result;
#line 125

#line 125
  result = SinglePacketP$Send$getPayload(25, arg_0x7e5b35d0);
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 212 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()] = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setInterrupt(void)
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag().flat;

#line 101
      sim_log_debug(163U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: TIFR is %hhx\n", tifr);
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) || tifr & (1 << OCF0)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
              sim_log_debug(164U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: under min: %hhu.\n", interrupt_in);
            }
          else {
              sim_log_debug(165U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: OCF set.\n");
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()]) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
          sim_log_debug(166U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: no alarm set, set at max.\n");
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();

#line 120
          sim_log_debug(167U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: now-t0 = %llu, dt = %llu\n", now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()], /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()]);

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()]) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()]) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[sim_node()] = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[sim_node()] - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[sim_node()];

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT;
                  }
                else {
#line 139
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 142
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$fired();
    }
}

# 455 "/opt/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static   void HplAtm128Timer0AsyncP$Compare$set(uint8_t t)
#line 455
{
  sim_log_debug(184U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting compare: %hhu\n", t);
  /* atomic removed: atomic calls only */
#line 457
  {




    if (t == 0 || t >= 0xfe) {
      t = 1;
      }
    if (t != * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]) {
        * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31] = t;
        HplAtm128Timer0AsyncP$schedule_new_compare();
      }
  }
}

#line 259
static void HplAtm128Timer0AsyncP$schedule_new_compare(void)
#line 259
{
  if (HplAtm128Timer0AsyncP$compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP$cancel_compare();
    }
  if (HplAtm128Timer0AsyncP$Timer0$getScale() != AVR_CLOCK_OFF) {
      sim_event_t *newEvent = HplAtm128Timer0AsyncP$allocate_compare();

#line 265
      HplAtm128Timer0AsyncP$configure_compare(newEvent);

      HplAtm128Timer0AsyncP$compare[sim_node()] = newEvent;
      sim_queue_insert(newEvent);
    }
}

# 89 "/opt/tinyos-2.x/tos/lib/tossim/sim_event_queue.c"
static sim_event_t *sim_queue_allocate_event(void)
#line 89
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 91
  memset(evt, 0, sizeof(sim_event_t ));
  evt->mote = sim_node();
  return evt;
}

# 92 "/opt/tinyos-2.x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
  void INTERRUPT_16(void)
#line 92
{
  HplAtm128Timer0AsyncP$inOverflow[sim_node()] = TRUE;
  HplAtm128Timer0AsyncP$Timer0$overflow();
  HplAtm128Timer0AsyncP$inOverflow[sim_node()] = FALSE;
}

#line 500
static void HplAtm128Timer0AsyncP$configure_overflow(sim_event_t *evt)
#line 500
{
  sim_time_t overflowTime = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP$Timer0$get();
  uint8_t overflowVal = 0;




  overflowTime = (overflowVal - timerVal) & 0xff;
  if (overflowTime == 0) {
      overflowTime = 256;
    }




  overflowTime = overflowTime << HplAtm128Timer0AsyncP$shiftFromScale();
  overflowTime = HplAtm128Timer0AsyncP$clock_to_sim(overflowTime);
  overflowTime += sim_time();
  overflowTime -= (sim_time() - HplAtm128Timer0AsyncP$last_zero()) % (1 << HplAtm128Timer0AsyncP$shiftFromScale());

  sim_log_debug(187U, "HplAtm128Timer0AsyncP", "Scheduling new overflow for %i at time %llu\n", sim_node(), overflowTime);

  evt->time = overflowTime;
}

#line 86
  void INTERRUPT_15(void)
#line 86
{

  HplAtm128Timer0AsyncP$Compare$fired();
}

#line 223
static void HplAtm128Timer0AsyncP$configure_compare(sim_event_t *evt)
#line 223
{
  sim_time_t compareTime = 0;
  sim_time_t phaseOffset = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP$Timer0$get();
  uint8_t compareVal = HplAtm128Timer0AsyncP$Compare$get();




  compareTime = (compareVal - timerVal) & 0xff;
  if (compareTime == 0) {
      compareTime = 256;
    }






  compareTime = (compareTime + 1) << HplAtm128Timer0AsyncP$shiftFromScale();
  compareTime = HplAtm128Timer0AsyncP$clock_to_sim(compareTime);
  compareTime += sim_time();




  phaseOffset = sim_time();
  phaseOffset -= HplAtm128Timer0AsyncP$last_zero();
  phaseOffset %= HplAtm128Timer0AsyncP$clock_to_sim(1 << HplAtm128Timer0AsyncP$shiftFromScale());
  compareTime -= phaseOffset;

  sim_log_debug(176U, "HplAtm128Timer0AsyncP", "Configuring new compare of %i for %i at time %llu  (@ %llu)\n", (int )compareVal, sim_node(), compareTime, sim_time());

  evt->time = compareTime;
}

# 1065 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/multihop/PacketEngineP.nc"
static am_id_t PacketEngineP$uid(message_t *msg)
#line 1065
{
  return * (am_id_t *)PacketEngineP$SubPacket$getPayload(PacketEngineP$lid(msg), msg, (void *)0);
}

# 82 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 83
{
  if (clientId >= 2) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg != (void *)0) {
      return EBUSY;
    }
  sim_log_debug(347U, "AMQueue", "AMQueue: request to send from %hhu (%p): passed checks\n", clientId, msg);

  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] >= 2) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(msg);

      sim_log_debug(348U, "AMQueue", "%s: request to send from %hhu (%p): queue empty\n", __FUNCTION__, clientId, msg);
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(amId, dest, msg, len);
      if (err != SUCCESS) {
          sim_log_debug(349U, "AMQueue", "%s: underlying send failed.\n", __FUNCTION__);
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[sim_node()] = 2;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[sim_node()][clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      sim_log_debug(350U, "AMQueue", "AMQueue: request to send from %hhu (%p): queue not empty\n", clientId, msg);
    }
  return SUCCESS;
}

# 90 "/opt/tinyos-2.x/tos/lib/tossim/TossimActiveMessageP.nc"
static  uint8_t TossimActiveMessageP$Receive$payloadLength(am_id_t id, message_t *m)
#line 90
{
  return TossimActiveMessageP$Packet$payloadLength(m);
}





static  uint8_t TossimActiveMessageP$Snoop$payloadLength(am_id_t id, message_t *m)
#line 98
{
  return TossimActiveMessageP$Packet$payloadLength(m);
}

# 311 "/home/jryans/tinyos-2.x-contrib-rice/tos/lib/netarch/single/SinglePacketP.nc"
static  message_t *SinglePacketP$SubReceive$receive(am_id_t upperId, message_t *msg, void *payload, uint8_t len)
#line 311
{
  sim_log_debug(357U, "SinglePacketP", "SP: Received/snooped pkt from %u to %u\n", SinglePacketP$SinglePacket$source(msg), SinglePacketP$SinglePacket$destination(msg));

  return SinglePacketP$Receive$receive(upperId, msg, SinglePacketP$Packet$getPayload(msg, &len), len);
}

# 121 "TestDsrP.nc"
static  message_t *TestDsrP$Receive$receive(message_t *msg, void *payload, uint8_t len)
#line 121
{
  sim_log_debug(102U, "TestDsrP", "Received Data: %s, Payload Length: %hhu\n", (char *)payload, len);
  if (TestDsrP$AMPacket$address() == 0) {
      message_t *tmpPkt = TestDsrP$testPktA[sim_node()];

#line 125
      TestDsrP$testPktA[sim_node()] = msg;
      TestDsrP$Timer$startOneShot(1024);
      return tmpPkt;
    }
  return msg;
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

  /* Module TestDsrP */
  if (!strcmp(varname, "TestDsrP$testPktBufA"))
  {
    *addr = (uintptr_t)&TestDsrP$testPktBufA[__nesc_mote];
    *size = sizeof(TestDsrP$testPktBufA[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestDsrP$testPktA"))
  {
    *addr = (uintptr_t)&TestDsrP$testPktA[__nesc_mote];
    *size = sizeof(TestDsrP$testPktA[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestDsrP$testPktBufB"))
  {
    *addr = (uintptr_t)&TestDsrP$testPktBufB[__nesc_mote];
    *size = sizeof(TestDsrP$testPktBufB[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TestDsrP$testPktB"))
  {
    *addr = (uintptr_t)&TestDsrP$testPktB[__nesc_mote];
    *size = sizeof(TestDsrP$testPktB[__nesc_mote]);
    return 0;
  }

  /* Module PacketEngineP */
  if (!strcmp(varname, "PacketEngineP$msgBuffer"))
  {
    *addr = (uintptr_t)&PacketEngineP$msgBuffer[__nesc_mote];
    *size = sizeof(PacketEngineP$msgBuffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PacketEngineP$nextFreePkt"))
  {
    *addr = (uintptr_t)&PacketEngineP$nextFreePkt[__nesc_mote];
    *size = sizeof(PacketEngineP$nextFreePkt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PacketEngineP$nextAddedPkt"))
  {
    *addr = (uintptr_t)&PacketEngineP$nextAddedPkt[__nesc_mote];
    *size = sizeof(PacketEngineP$nextAddedPkt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PacketEngineP$nextWaitPkt"))
  {
    *addr = (uintptr_t)&PacketEngineP$nextWaitPkt[__nesc_mote];
    *size = sizeof(PacketEngineP$nextWaitPkt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PacketEngineP$nextActionPkt"))
  {
    *addr = (uintptr_t)&PacketEngineP$nextActionPkt[__nesc_mote];
    *size = sizeof(PacketEngineP$nextActionPkt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "PacketEngineP$running"))
  {
    *addr = (uintptr_t)&PacketEngineP$running[__nesc_mote];
    *size = sizeof(PacketEngineP$running[__nesc_mote]);
    return 0;
  }

  /* Module PoolP$0 */
  if (!strcmp(varname, "/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$free"))
  {
    *addr = (uintptr_t)&/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$free[__nesc_mote];
    *size = sizeof(/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$free[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$index"))
  {
    *addr = (uintptr_t)&/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$index[__nesc_mote];
    *size = sizeof(/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$queue"))
  {
    *addr = (uintptr_t)&/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$queue[__nesc_mote];
    *size = sizeof(/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool"))
  {
    *addr = (uintptr_t)&/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool[__nesc_mote];
    *size = sizeof(/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool[__nesc_mote]);
    return 0;
  }

  /* Module StateImplP */
  if (!strcmp(varname, "StateImplP$state"))
  {
    *addr = (uintptr_t)&StateImplP$state[__nesc_mote];
    *size = sizeof(StateImplP$state[__nesc_mote]);
    return 0;
  }

  /* Module RandomMlcgP */
  if (!strcmp(varname, "RandomMlcgP$seed"))
  {
    *addr = (uintptr_t)&RandomMlcgP$seed[__nesc_mote];
    *size = sizeof(RandomMlcgP$seed[__nesc_mote]);
    return 0;
  }

  /* Module Atm128AlarmAsyncP$0 */
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote]);
    return 0;
  }

  /* Module HplAtm128Timer0AsyncP */
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$inOverflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$inOverflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$inOverflow[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$lastZero"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$lastZero[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$lastZero[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$oldScale"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$oldScale[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$oldScale[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$compare"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$compare[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$compare[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP$overflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP$overflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP$overflow[__nesc_mote]);
    return 0;
  }

  /* Module AlarmToTimerC$0 */
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote]);
    return 0;
  }

  /* Module VirtualizeTimerC$0 */
  if (!strcmp(varname, "/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote]);
    return 0;
  }

  /* Module CounterToLocalTimeC$0 */

  /* Module TossimPacketModelC */
  if (!strcmp(varname, "TossimPacketModelC$initialized"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$initialized[__nesc_mote];
    *size = sizeof(TossimPacketModelC$initialized[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$running"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$running[__nesc_mote];
    *size = sizeof(TossimPacketModelC$running[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$backoffCount"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$backoffCount[__nesc_mote];
    *size = sizeof(TossimPacketModelC$backoffCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$neededFreeSamples"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$neededFreeSamples[__nesc_mote];
    *size = sizeof(TossimPacketModelC$neededFreeSamples[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$sending"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$sending[__nesc_mote];
    *size = sizeof(TossimPacketModelC$sending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$transmitting"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$transmitting[__nesc_mote];
    *size = sizeof(TossimPacketModelC$transmitting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$sendingLength"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$sendingLength[__nesc_mote];
    *size = sizeof(TossimPacketModelC$sendingLength[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$destNode"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$destNode[__nesc_mote];
    *size = sizeof(TossimPacketModelC$destNode[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$sendEvent"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$sendEvent[__nesc_mote];
    *size = sizeof(TossimPacketModelC$sendEvent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC$error"))
  {
    *addr = (uintptr_t)&TossimPacketModelC$error[__nesc_mote];
    *size = sizeof(TossimPacketModelC$error[__nesc_mote]);
    return 0;
  }

  /* Module CpmModelC */
  if (!strcmp(varname, "CpmModelC$outgoing"))
  {
    *addr = (uintptr_t)&CpmModelC$outgoing[__nesc_mote];
    *size = sizeof(CpmModelC$outgoing[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$requestAck"))
  {
    *addr = (uintptr_t)&CpmModelC$requestAck[__nesc_mote];
    *size = sizeof(CpmModelC$requestAck[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$receiving"))
  {
    *addr = (uintptr_t)&CpmModelC$receiving[__nesc_mote];
    *size = sizeof(CpmModelC$receiving[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$outstandingReceptionHead"))
  {
    *addr = (uintptr_t)&CpmModelC$outstandingReceptionHead[__nesc_mote];
    *size = sizeof(CpmModelC$outstandingReceptionHead[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC$clearThreshold"))
  {
    *addr = (uintptr_t)&CpmModelC$clearThreshold[__nesc_mote];
    *size = sizeof(CpmModelC$clearThreshold[__nesc_mote]);
    return 0;
  }

  /* Module ActiveMessageAddressC */
  if (!strcmp(varname, "ActiveMessageAddressC$set"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC$set[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC$set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ActiveMessageAddressC$addr"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC$addr[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC$addr[__nesc_mote]);
    return 0;
  }

  /* Module DsrControlP */
  if (!strcmp(varname, "DsrControlP$nextIdent"))
  {
    *addr = (uintptr_t)&DsrControlP$nextIdent[__nesc_mote];
    *size = sizeof(DsrControlP$nextIdent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "DsrControlP$sendPktBuf"))
  {
    *addr = (uintptr_t)&DsrControlP$sendPktBuf[__nesc_mote];
    *size = sizeof(DsrControlP$sendPktBuf[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "DsrControlP$sendPkt"))
  {
    *addr = (uintptr_t)&DsrControlP$sendPkt[__nesc_mote];
    *size = sizeof(DsrControlP$sendPkt[__nesc_mote]);
    return 0;
  }

  /* Module TlvP */

  /* Module SimpleLinkCacheP */

  /* Module BitVectorC$2 */
  if (!strcmp(varname, "/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$m_bits"))
  {
    *addr = (uintptr_t)&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$m_bits[__nesc_mote];
    *size = sizeof(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$m_bits[__nesc_mote]);
    return 0;
  }

  /* Module IndexedAllocBitsP$0 */
  if (!strcmp(varname, "/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free"))
  {
    *addr = (uintptr_t)&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free[__nesc_mote];
    *size = sizeof(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$size"))
  {
    *addr = (uintptr_t)&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$size[__nesc_mote];
    *size = sizeof(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$size[__nesc_mote]);
    return 0;
  }

  /* Module GraphSparseP$0 */
  if (!strcmp(varname, "/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$vSize"))
  {
    *addr = (uintptr_t)&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$vSize[__nesc_mote];
    *size = sizeof(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$vSize[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v"))
  {
    *addr = (uintptr_t)&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[__nesc_mote];
    *size = sizeof(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e"))
  {
    *addr = (uintptr_t)&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[__nesc_mote];
    *size = sizeof(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[__nesc_mote]);
    return 0;
  }

  /* Module PriorityQueueP$0 */
  if (!strcmp(varname, "/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size"))
  {
    *addr = (uintptr_t)&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[__nesc_mote];
    *size = sizeof(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai"))
  {
    *addr = (uintptr_t)&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[__nesc_mote];
    *size = sizeof(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp"))
  {
    *addr = (uintptr_t)&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[__nesc_mote];
    *size = sizeof(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[__nesc_mote]);
    return 0;
  }

  /* Module SourceShortestPathP$0 */
  if (!strcmp(varname, "/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt"))
  {
    *addr = (uintptr_t)&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[__nesc_mote];
    *size = sizeof(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe"))
  {
    *addr = (uintptr_t)&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[__nesc_mote];
    *size = sizeof(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight"))
  {
    *addr = (uintptr_t)&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[__nesc_mote];
    *size = sizeof(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc"))
  {
    *addr = (uintptr_t)&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc[__nesc_mote];
    *size = sizeof(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded"))
  {
    *addr = (uintptr_t)&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded[__nesc_mote];
    *size = sizeof(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest"))
  {
    *addr = (uintptr_t)&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[__nesc_mote];
    *size = sizeof(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$foundDest"))
  {
    *addr = (uintptr_t)&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$foundDest[__nesc_mote];
    *size = sizeof(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$foundDest[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree"))
  {
    *addr = (uintptr_t)&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree[__nesc_mote];
    *size = sizeof(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree[__nesc_mote]);
    return 0;
  }

  /* Module BitVectorC$1 */
  if (!strcmp(varname, "/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$m_bits"))
  {
    *addr = (uintptr_t)&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$m_bits[__nesc_mote];
    *size = sizeof(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$m_bits[__nesc_mote]);
    return 0;
  }

  /* Module GraphEdgeUnitWeightC */

  /* Module LruDataCacheP$0 */
  if (!strcmp(varname, "/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$cache"))
  {
    *addr = (uintptr_t)&/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$cache[__nesc_mote];
    *size = sizeof(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$cache[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first"))
  {
    *addr = (uintptr_t)&/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first[__nesc_mote];
    *size = sizeof(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count"))
  {
    *addr = (uintptr_t)&/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count[__nesc_mote];
    *size = sizeof(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count[__nesc_mote]);
    return 0;
  }

  /* Module LruDataCacheP$1 */
  if (!strcmp(varname, "/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$cache"))
  {
    *addr = (uintptr_t)&/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$cache[__nesc_mote];
    *size = sizeof(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$cache[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first"))
  {
    *addr = (uintptr_t)&/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first[__nesc_mote];
    *size = sizeof(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count"))
  {
    *addr = (uintptr_t)&/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count[__nesc_mote];
    *size = sizeof(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count[__nesc_mote]);
    return 0;
  }

  /* Module DataTimerP$0 */
  if (!strcmp(varname, "/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data"))
  {
    *addr = (uintptr_t)&/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data[__nesc_mote];
    *size = sizeof(/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$delay"))
  {
    *addr = (uintptr_t)&/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$delay[__nesc_mote];
    *size = sizeof(/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$delay[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size"))
  {
    *addr = (uintptr_t)&/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size[__nesc_mote];
    *size = sizeof(/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$startTime"))
  {
    *addr = (uintptr_t)&/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$startTime[__nesc_mote];
    *size = sizeof(/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$startTime[__nesc_mote]);
    return 0;
  }

  /* Module BitVectorC$0 */
  if (!strcmp(varname, "/*DsrP.ComposeC*/BitVectorC$0$m_bits"))
  {
    *addr = (uintptr_t)&/*DsrP.ComposeC*/BitVectorC$0$m_bits[__nesc_mote];
    *size = sizeof(/*DsrP.ComposeC*/BitVectorC$0$m_bits[__nesc_mote]);
    return 0;
  }

  /* Module AMQueueEntryP$0 */

  /* Module AMQueueImplP$0 */
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote]);
    return 0;
  }

  /* Module SinglePacketP */

  /* Module PacketEngineClientP$0 */

  /* Module AMQueueEntryP$1 */

  /* Module PacketEngineClientP$1 */

  /* Module PacketEngineClientP$2 */

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

  /* Module TestDsrP */
  memset(&TestDsrP$testPktBufA[__nesc_mote], 0, sizeof TestDsrP$testPktBufA[__nesc_mote]);
  TestDsrP$testPktA[__nesc_mote] = &TestDsrP$testPktBufA[__nesc_mote];
  memset(&TestDsrP$testPktBufB[__nesc_mote], 0, sizeof TestDsrP$testPktBufB[__nesc_mote]);
  TestDsrP$testPktB[__nesc_mote] = &TestDsrP$testPktBufB[__nesc_mote];

  /* Module PacketEngineP */
  memset(&PacketEngineP$msgBuffer[__nesc_mote], 0, sizeof PacketEngineP$msgBuffer[__nesc_mote]);
  memset(&PacketEngineP$nextFreePkt[__nesc_mote], 0, sizeof PacketEngineP$nextFreePkt[__nesc_mote]);
  memset(&PacketEngineP$nextAddedPkt[__nesc_mote], 0, sizeof PacketEngineP$nextAddedPkt[__nesc_mote]);
  memset(&PacketEngineP$nextWaitPkt[__nesc_mote], 0, sizeof PacketEngineP$nextWaitPkt[__nesc_mote]);
  memset(&PacketEngineP$nextActionPkt[__nesc_mote], 0, sizeof PacketEngineP$nextActionPkt[__nesc_mote]);
  memset(&PacketEngineP$running[__nesc_mote], 0, sizeof PacketEngineP$running[__nesc_mote]);

  /* Module PoolP$0 */
  memset(&/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$free[__nesc_mote], 0, sizeof /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$free[__nesc_mote]);
  memset(&/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$index[__nesc_mote], 0, sizeof /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$index[__nesc_mote]);
  memset(&/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$queue[__nesc_mote], 0, sizeof /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$queue[__nesc_mote]);
  memset(&/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool[__nesc_mote], 0, sizeof /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool[__nesc_mote]);

  /* Module StateImplP */
  memset(&StateImplP$state[__nesc_mote], 0, sizeof StateImplP$state[__nesc_mote]);

  /* Module RandomMlcgP */
  memset(&RandomMlcgP$seed[__nesc_mote], 0, sizeof RandomMlcgP$seed[__nesc_mote]);

  /* Module Atm128AlarmAsyncP$0 */
  memset(&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set[__nesc_mote]);
  memset(&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0[__nesc_mote]);
  memset(&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt[__nesc_mote]);
  memset(&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base[__nesc_mote]);

  /* Module HplAtm128Timer0AsyncP */
  HplAtm128Timer0AsyncP$inOverflow[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP$lastZero[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP$oldScale[__nesc_mote] = AVR_CLOCK_OFF;
  memset(&HplAtm128Timer0AsyncP$compare[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP$compare[__nesc_mote]);
  memset(&HplAtm128Timer0AsyncP$overflow[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP$overflow[__nesc_mote]);

  /* Module AlarmToTimerC$0 */
  memset(&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt[__nesc_mote]);
  memset(&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot[__nesc_mote]);

  /* Module VirtualizeTimerC$0 */
  memset(&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote], 0, sizeof /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[__nesc_mote]);

  /* Module CounterToLocalTimeC$0 */

  /* Module TossimPacketModelC */
  TossimPacketModelC$initialized[__nesc_mote] = FALSE;
  TossimPacketModelC$running[__nesc_mote] = FALSE;
  memset(&TossimPacketModelC$backoffCount[__nesc_mote], 0, sizeof TossimPacketModelC$backoffCount[__nesc_mote]);
  memset(&TossimPacketModelC$neededFreeSamples[__nesc_mote], 0, sizeof TossimPacketModelC$neededFreeSamples[__nesc_mote]);
  TossimPacketModelC$sending[__nesc_mote] = (void *)0;
  TossimPacketModelC$transmitting[__nesc_mote] = FALSE;
  TossimPacketModelC$sendingLength[__nesc_mote] = 0;
  memset(&TossimPacketModelC$destNode[__nesc_mote], 0, sizeof TossimPacketModelC$destNode[__nesc_mote]);
  memset(&TossimPacketModelC$sendEvent[__nesc_mote], 0, sizeof TossimPacketModelC$sendEvent[__nesc_mote]);
  TossimPacketModelC$error[__nesc_mote] = 0;

  /* Module CpmModelC */
  memset(&CpmModelC$outgoing[__nesc_mote], 0, sizeof CpmModelC$outgoing[__nesc_mote]);
  memset(&CpmModelC$requestAck[__nesc_mote], 0, sizeof CpmModelC$requestAck[__nesc_mote]);
  CpmModelC$receiving[__nesc_mote] = 0;
  CpmModelC$outstandingReceptionHead[__nesc_mote] = (void *)0;
  CpmModelC$clearThreshold[__nesc_mote] = -72.0;

  /* Module ActiveMessageAddressC */
  ActiveMessageAddressC$set[__nesc_mote] = FALSE;
  memset(&ActiveMessageAddressC$addr[__nesc_mote], 0, sizeof ActiveMessageAddressC$addr[__nesc_mote]);

  /* Module DsrControlP */
  memset(&DsrControlP$nextIdent[__nesc_mote], 0, sizeof DsrControlP$nextIdent[__nesc_mote]);
  memset(&DsrControlP$sendPktBuf[__nesc_mote], 0, sizeof DsrControlP$sendPktBuf[__nesc_mote]);
  DsrControlP$sendPkt[__nesc_mote] = &DsrControlP$sendPktBuf[__nesc_mote];

  /* Module TlvP */

  /* Module SimpleLinkCacheP */

  /* Module BitVectorC$2 */
  memset(&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$m_bits[__nesc_mote], 0, sizeof /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$2$m_bits[__nesc_mote]);

  /* Module IndexedAllocBitsP$0 */
  memset(&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free[__nesc_mote], 0, sizeof /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free[__nesc_mote]);
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$size[__nesc_mote] = 0;

  /* Module GraphSparseP$0 */
  memset(&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$vSize[__nesc_mote], 0, sizeof /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$vSize[__nesc_mote]);
  memset(&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[__nesc_mote], 0, sizeof /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[__nesc_mote]);
  memset(&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[__nesc_mote], 0, sizeof /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[__nesc_mote]);

  /* Module PriorityQueueP$0 */
  memset(&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[__nesc_mote], 0, sizeof /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size[__nesc_mote]);
  memset(&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[__nesc_mote], 0, sizeof /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[__nesc_mote]);
  memset(&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[__nesc_mote], 0, sizeof /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[__nesc_mote]);

  /* Module SourceShortestPathP$0 */
  memset(&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[__nesc_mote], 0, sizeof /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[__nesc_mote]);
  memset(&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[__nesc_mote], 0, sizeof /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[__nesc_mote]);
  memset(&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[__nesc_mote], 0, sizeof /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[__nesc_mote]);
  memset(&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc[__nesc_mote], 0, sizeof /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc[__nesc_mote]);
  memset(&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded[__nesc_mote], 0, sizeof /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded[__nesc_mote]);
  memset(&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[__nesc_mote], 0, sizeof /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest[__nesc_mote]);
  memset(&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$foundDest[__nesc_mote], 0, sizeof /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$foundDest[__nesc_mote]);
  memset(&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree[__nesc_mote], 0, sizeof /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree[__nesc_mote]);

  /* Module BitVectorC$1 */
  memset(&/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$m_bits[__nesc_mote], 0, sizeof /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.NeedRouteToC*/BitVectorC$1$m_bits[__nesc_mote]);

  /* Module GraphEdgeUnitWeightC */

  /* Module LruDataCacheP$0 */
  memset(&/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$cache[__nesc_mote], 0, sizeof /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$cache[__nesc_mote]);
  memset(&/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first[__nesc_mote], 0, sizeof /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first[__nesc_mote]);
  memset(&/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count[__nesc_mote], 0, sizeof /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count[__nesc_mote]);

  /* Module LruDataCacheP$1 */
  memset(&/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$cache[__nesc_mote], 0, sizeof /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$cache[__nesc_mote]);
  memset(&/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first[__nesc_mote], 0, sizeof /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first[__nesc_mote]);
  memset(&/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count[__nesc_mote], 0, sizeof /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count[__nesc_mote]);

  /* Module DataTimerP$0 */
  memset(&/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data[__nesc_mote], 0, sizeof /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data[__nesc_mote]);
  memset(&/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$delay[__nesc_mote], 0, sizeof /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$delay[__nesc_mote]);
  memset(&/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size[__nesc_mote], 0, sizeof /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size[__nesc_mote]);
  memset(&/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$startTime[__nesc_mote], 0, sizeof /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$startTime[__nesc_mote]);

  /* Module BitVectorC$0 */
  memset(&/*DsrP.ComposeC*/BitVectorC$0$m_bits[__nesc_mote], 0, sizeof /*DsrP.ComposeC*/BitVectorC$0$m_bits[__nesc_mote]);

  /* Module AMQueueEntryP$0 */

  /* Module AMQueueImplP$0 */
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current[__nesc_mote] = 2;
  memset(&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote], 0, sizeof /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[__nesc_mote]);
  memset(&/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote], 0, sizeof /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[__nesc_mote]);

  /* Module SinglePacketP */

  /* Module PacketEngineClientP$0 */

  /* Module AMQueueEntryP$1 */

  /* Module PacketEngineClientP$1 */

  /* Module PacketEngineClientP$2 */

}
#pragma pack(push,4)
#pragma pack(pop)
