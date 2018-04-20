#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 65 "/usr/lib/gcc/avr/3.4.3/../../../../avr/include/stdint.h"
typedef signed char int8_t;




typedef unsigned char uint8_t;
# 104 "/usr/lib/gcc/avr/3.4.3/../../../../avr/include/stdint.h" 3
typedef int int16_t;




typedef unsigned int uint16_t;










typedef long int32_t;




typedef unsigned long uint32_t;










typedef long long int64_t;




typedef unsigned long long uint64_t;
#line 155
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void *source);




static __inline uint8_t __nesc_hton_uint8(void *target, uint8_t value);





static __inline uint8_t __nesc_ntoh_leuint8(const void *source);




static __inline uint8_t __nesc_hton_leuint8(void *target, uint8_t value);





static __inline int8_t __nesc_ntoh_int8(const void *source);
#line 257
static __inline int8_t __nesc_hton_int8(void *target, int8_t value);
static inline uint8_t __nesc_bf_decode8(const uint8_t *msg, unsigned offset, uint8_t length);
#line 258
static inline void __nesc_bf_encode8(uint8_t *msg, unsigned offset, uint8_t length, uint8_t x);
#line 258
static __inline uint8_t __nesc_ntohbf_uint8(const void *source, unsigned offset, uint8_t length);
#line 258
static __inline uint8_t __nesc_htonbf_uint8(void *target, unsigned offset, uint8_t length, uint8_t value);





static __inline uint16_t __nesc_ntoh_uint16(const void *source);




static __inline uint16_t __nesc_hton_uint16(void *target, uint16_t value);






static __inline uint16_t __nesc_ntoh_leuint16(const void *source);




static __inline uint16_t __nesc_hton_leuint16(void *target, uint16_t value);
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
# 213 "/usr/lib/gcc/avr/3.4.3/include/stddef.h" 3
typedef unsigned int size_t;
# 67 "/usr/lib/gcc/avr/3.4.3/../../../../avr/include/string.h"
extern void *memcpy(void *, const void *, size_t );
extern void *memmove(void *, const void *, size_t );
extern void *memset(void *, int , size_t );
# 325 "/usr/lib/gcc/avr/3.4.3/include/stddef.h" 3
typedef int wchar_t;
# 69 "/usr/lib/gcc/avr/3.4.3/../../../../avr/include/stdlib.h"
#line 66
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 72
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *, const void *);
# 151 "/usr/lib/gcc/avr/3.4.3/include/stddef.h" 3
typedef int ptrdiff_t;
# 20 "/opt/tinyos-2.x/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 21
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;





struct __nesc_attr_atmostonce {
};
#line 31
struct __nesc_attr_atleastonce {
};
#line 32
struct __nesc_attr_exactlyonce {
};
# 34 "/opt/tinyos-2.x/tos/types/TinyError.h"
enum __nesc_unnamed4245 {
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
# 90 "/usr/lib/gcc/avr/3.4.3/../../../../avr/include/avr/pgmspace.h"
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;

typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;


typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/opt/tinyos-2.x/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 82 "/opt/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt(void);



static __inline void __nesc_disable_interrupt(void);




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 102
__inline __nesc_atomic_t 
__nesc_atomic_start(void )  ;









#line 112
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)  ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4246 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2);
# 34 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4247 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4248 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4249 {
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
typedef struct __nesc_unnamed4250 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4251 {
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


enum __nesc_unnamed4252 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4253 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4254 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 141
typedef struct __nesc_unnamed4257 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 29 "/opt/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4258 {
#line 29
  int notUsed;
} 
#line 29
TMilli;
typedef struct __nesc_unnamed4259 {
#line 30
  int notUsed;
} 
#line 30
T32khz;
typedef struct __nesc_unnamed4260 {
#line 31
  int notUsed;
} 
#line 31
TMicro;
# 43 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4261 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4262 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4263 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4264 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4265 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 99
#line 89
typedef union __nesc_unnamed4266 {

  uint8_t flat;
  struct __nesc_unnamed4267 {
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
typedef union __nesc_unnamed4268 {

  uint8_t flat;
  struct __nesc_unnamed4269 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 137
#line 124
typedef union __nesc_unnamed4270 {

  uint8_t flat;
  struct __nesc_unnamed4271 {
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
typedef union __nesc_unnamed4272 {

  uint8_t flat;
  struct __nesc_unnamed4273 {
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
typedef union __nesc_unnamed4274 {

  uint8_t flat;
  struct __nesc_unnamed4275 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4276 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 193
#line 184
typedef union __nesc_unnamed4277 {

  uint8_t flat;
  struct __nesc_unnamed4278 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4279 {
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
typedef union __nesc_unnamed4280 {

  uint8_t flat;
  struct __nesc_unnamed4281 {
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
typedef union __nesc_unnamed4282 {

  uint8_t flat;
  struct __nesc_unnamed4283 {
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
typedef union __nesc_unnamed4284 {

  uint8_t flat;
  struct __nesc_unnamed4285 {
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
typedef union __nesc_unnamed4286 {

  uint8_t flat;
  struct __nesc_unnamed4287 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 51 "/opt/tinyos-2.x/tos/platforms/mica/MicaTimer.h"
typedef struct __nesc_unnamed4288 {
} 
#line 51
T64khz;
typedef struct __nesc_unnamed4289 {
} 
#line 52
T128khz;
typedef struct __nesc_unnamed4290 {
} 
#line 53
T2mhz;
typedef struct __nesc_unnamed4291 {
} 
#line 54
T4mhz;
#line 107
typedef T32khz TOne;
typedef TMicro TThree;
typedef uint16_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;

enum __nesc_unnamed4292 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_256, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 0, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4293 {
  PLATFORM_MHZ = 8
};
# 55 "/opt/tinyos-2.x/tos/platforms/micaz/hardware.h"
enum __nesc_unnamed4294 {
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1
};

enum __nesc_unnamed4295 {
  PLATFORM_BAUDRATE = 57600L
};
# 66 "UnicastCountToLeds.h"
#line 64
typedef nx_struct unicast_count_msg {
  nx_uint16_t counter;
} __attribute__((packed)) unicast_count_msg_t;

enum __nesc_unnamed4296 {
  AM_UNICAST_COUNT_MSG = 6
};
# 30 "/opt/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4297 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420.h"
typedef uint8_t cc2420_status_t;
#line 59
#line 45
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;






  nxle_uint8_t type;
} __attribute__((packed)) cc2420_header_t;





#line 64
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;
#line 86
#line 71
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t tx_power;
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_bool crc;
  nx_bool ack;
  nx_uint16_t time;
  nx_uint16_t rxInterval;
} __attribute__((packed)) 






cc2420_metadata_t;





#line 89
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 123
enum __nesc_unnamed4298 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 36 + MAC_FOOTER_SIZE
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_MIN_BACKOFF = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 256
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_STXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};
# 6 "/opt/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4299 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4300 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 72 "/opt/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4301 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4302 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4303 {
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
# 49 "/opt/tinyos-2.x/tos/platforms/micaz/platform_message.h"
#line 46
typedef union message_header {
  cc2420_header_t cc2420;
  serial_header_t serial;
} message_header_t;



#line 51
typedef union message_footer {
  cc2420_footer_t cc2420;
} message_footer_t;



#line 55
typedef union message_metadata {
  cc2420_metadata_t cc2420;
} message_metadata_t;
# 19 "/opt/tinyos-2.x/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[36];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 35 "../../../tos/lib/netarch/single/SinglePacket.h"
enum __nesc_unnamed4304 {
  AM_SINGLE = 4
};





#line 39
typedef nx_struct __nesc_unnamed4305 {
  nx_am_addr_t src;
  nx_am_addr_t dest;
  nx_uint8_t data[0];
} __attribute__((packed)) single_packet_header_t;
# 43 "../../../tos/lib/netarch/multihop/PacketEngine.h"
typedef uint8_t packet_client_id_t;
typedef uint8_t packet_id_t  ;
typedef am_id_t packet_am_id_t  ;
typedef uint8_t packet_send_action_t  ;



enum __nesc_unnamed4306 {
  INVALID_PAYLOAD_LENGTH = 255, 
  AM_INVALID_TYPE = 255, 
  AM_RECOVER_TYPE = 254, 
  AM_NO_UPPER_DATA = 0, 
  AM_SINK_ADDR = 0
};


enum __nesc_unnamed4307 {

  PKT_SEND_DONE, 

  PKT_SEND_RETRY, 

  PKT_SEND_WAIT, 

  PKT_SEND_UNKNOWN
};

static inline packet_send_action_t pktSendActionCombine(packet_send_action_t a, packet_send_action_t b);
#line 83
static inline packet_am_id_t pamidCombine(packet_am_id_t a, packet_am_id_t b);









#line 90
typedef struct __nesc_unnamed4308 {
  packet_id_t pid;
  packet_client_id_t cid;
} packet_send_entry_t;
#line 110
enum __nesc_unnamed4309 {

  FORWARD_PACKET_TIME = 4
};




enum __nesc_unnamed4310 {
  SEND_RETRY_OFFSET = FORWARD_PACKET_TIME << 1, 
  SEND_DONE_OFFSET = FORWARD_PACKET_TIME << 2, 
  SEND_RETRY_WINDOW = SEND_RETRY_OFFSET - 1, 
  SEND_DONE_WINDOW = SEND_DONE_OFFSET - 1
};
# 37 "../../../tos/lib/netarch/dsr/DsrControl.h"
enum __nesc_unnamed4311 {
  AM_DSR = 48, 
  DSR_ROUTE_REQUEST_OUT_SIZE = 8, 
  DSR_ROUTE_REQUEST_IN_SIZE = 8, 
  DSR_ROUTE_REQUEST_IDS = 4, 
  DSR_HOP_LIMIT = 255, 
  DSR_MAX_REQUEST_ATTMEPTS = 16, 
  DSR_MAX_REQUEST_PERIOD = 10240, 
  DSR_INIT_REQUEST_PERIOD = 512, 
  DSR_MAX_RETRIES = 2, 
  DSR_MAX_SALVAGE_COUNT = 16
};
#line 64
#line 60
typedef struct __nesc_unnamed4312 {
  am_addr_t node;
  uint8_t hopsLeft;
  uint8_t rreqsSinceRrep;
} dsr_route_request_out_t;






#line 66
typedef struct __nesc_unnamed4313 {
  am_addr_t node;
  uint8_t next;
  uint8_t ident[DSR_ROUTE_REQUEST_IDS];
  am_addr_t target[DSR_ROUTE_REQUEST_IDS];
} dsr_route_request_in_t;
# 35 "../../../tos/types/Iterator.h"
typedef bool iterator_end_t  ;





static inline iterator_end_t iteratorEndCombine(iterator_end_t a, iterator_end_t b);
# 59 "../../../tos/lib/netarch/dsr/DsrOptions.h"
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
typedef nx_struct __nesc_unnamed4314 {
  nx_uint8_t ident;
  nx_am_addr_t addr[0];
} __attribute__((packed)) dsr_route_request_t;
#line 101
#line 99
typedef nx_struct __nesc_unnamed4315 {
  nx_am_addr_t addr[0];
} __attribute__((packed)) dsr_route_reply_t;
#line 125
#line 119
typedef nx_struct __nesc_unnamed4316 {
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
typedef nx_struct __nesc_unnamed4317 {
  nx_am_addr_t addr;
} __attribute__((packed)) dsr_node_unreachable_rei_t;



#line 137
typedef nx_struct __nesc_unnamed4318 {
  nx_uint8_t type;
} __attribute__((packed)) dsr_option_not_supported_rei_t;
#line 153
#line 151
typedef nx_struct __nesc_unnamed4319 {
  nx_uint8_t ident;
} __attribute__((packed)) dsr_ack_request_t;
#line 171
#line 167
typedef nx_struct __nesc_unnamed4320 {
  nx_uint8_t ident;
  nx_am_addr_t src;
  nx_am_addr_t dest;
} __attribute__((packed)) dsr_ack_t;
#line 192
#line 187
typedef nx_struct __nesc_unnamed4321 {
  unsigned char __nesc_filler1[1];


  nx_am_addr_t addr[0];
} __attribute__((packed)) dsr_source_route_t;
# 35 "../../../tos/lib/netarch/tlv/Tlv.h"
typedef uint8_t tlv_key_t;






#line 38
typedef nx_struct __nesc_unnamed4322 {
  nx_uint8_t type;
  nx_uint8_t len;
  nx_uint8_t val[0];
} __attribute__((packed)) tlv_t;





#line 45
typedef nx_struct __nesc_unnamed4323 {
  nx_uint8_t len;
  tlv_t tlv[0];
} __attribute__((packed)) tlv_block_t;
# 35 "../../../tos/lib/netarch/dsr/RouteCache.h"
typedef uint8_t route_cache_link_id_t;
typedef uint8_t route_cache_node_id_t;
# 35 "../../../tos/lib/data/timer/DataTimer.h"
typedef uint16_t data_timer_time_t;
# 35 "../../../tos/lib/data/graph/Graph.h"
typedef uint8_t graph_vertex_id_t;
typedef uint8_t graph_edge_id_t;
typedef uint8_t graph_edge_unit_weight_t;




#line 39
typedef struct __nesc_unnamed4324 {
  graph_vertex_id_t dest;
  graph_edge_id_t next;
} graph_edge_node_t;




#line 44
typedef struct __nesc_unnamed4325 {
  graph_vertex_id_t src;
  graph_edge_id_t current;
} graph_edge_list_t;

enum __nesc_unnamed4326 {
  GRAPH_PARALLEL_EDGES_ALLOWED = TRUE, 
  GRAPH_PARALLEL_EDGES_NOT_ALLOWED = FALSE
};
# 35 "../../../tos/lib/data/alloc/IndexedAlloc.h"
typedef uint8_t indexed_alloc_id_t;
# 35 "../../../tos/lib/data/queue/PriorityQueue.h"
typedef uint8_t priority_queue_id_t;
# 38 "/opt/tinyos-2.x/tos/chips/cc2420/IEEE802154.h"
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3
};

enum iee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3
};
# 32 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.h"
enum __nesc_unnamed4327 {
  ATM128_SPI_CLK_DIVIDE_4 = 0, 
  ATM128_SPI_CLK_DIVIDE_16 = 1, 
  ATM128_SPI_CLK_DIVIDE_64 = 2, 
  ATM128_SPI_CLK_DIVIDE_128 = 3
};
#line 49
#line 40
typedef struct __nesc_unnamed4328 {
  uint8_t spie : 1;
  uint8_t spe : 1;
  uint8_t dord : 1;
  uint8_t mstr : 1;
  uint8_t cpol : 1;
  uint8_t cpha : 1;
  uint8_t spr : 2;
} 
Atm128SPIControl_s;



#line 50
typedef union __nesc_unnamed4329 {
  uint8_t flat;
  Atm128SPIControl_s bits;
} Atm128SPIControl_t;

typedef Atm128SPIControl_t Atm128_SPCR_t;








#line 58
typedef struct __nesc_unnamed4330 {
  uint8_t spif : 1;
  uint8_t wcol : 1;
  uint8_t rsvd : 5;
  uint8_t spi2x : 1;
} 
Atm128SPIStatus_s;



#line 65
typedef union __nesc_unnamed4331 {
  uint8_t flat;
  Atm128SPIStatus_s bits;
} Atm128SPIStatus_t;

typedef Atm128SPIStatus_t Atm128_SPSR_t;

typedef uint8_t Atm128_SPDR_t;
# 33 "/opt/tinyos-2.x/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
typedef TMilli UnicastCountToLedsC$MilliTimer$precision_tag;
enum /*UnicastCountToLedsAppC.AMSenderC*/SingleSenderC$0$__nesc_unnamed4332 {
  SingleSenderC$0$PACKET_ENGINE_CLIENT_ID = 0U
};
typedef message_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvListPacket$data_source_t;
typedef tlv_key_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvListPacket$iterator_item_t;
typedef tlv_key_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvList$iterator_item_t;
typedef tlv_key_t TlvP$TlvList$iterator_item_t;
enum PacketEngineP$__nesc_unnamed4333 {
  PacketEngineP$SEND_CLIENT_SIZE = 2U, PacketEngineP$SEND_SIZE = 10, PacketEngineP$RECEIVE_SIZE = 10, PacketEngineP$BUFFER_SIZE = PacketEngineP$SEND_SIZE + PacketEngineP$RECEIVE_SIZE
};
typedef message_t PacketEngineP$SendPool$t;
typedef message_t PacketEngineP$ReceivePool$t;
typedef packet_id_t PacketEngineP$PacketWaitList$iterator_item_t;
typedef packet_send_entry_t PacketEngineP$SendQueue$item_t;
typedef packet_send_entry_t *PacketEngineP$SendQueueEqual$equal_t;
typedef TMilli PacketEngineP$SendBackoff$precision_tag;
typedef uint16_t RandomMlcgP$SeedInit$parameter;
typedef dsr_route_request_out_t /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutCache$item_t;
typedef am_addr_t /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutTimer$data_t;
typedef dsr_route_request_in_t */*DsrP.DsrControlP*/DsrControlP$0$RouteRequestInEqual$equal_t;
typedef message_t /*DsrP.DsrControlP*/DsrControlP$0$RouteErrorList$data_source_t;
typedef tlv_key_t /*DsrP.DsrControlP*/DsrControlP$0$RouteErrorList$iterator_item_t;
typedef packet_id_t /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketWaitList$iterator_item_t;
typedef dsr_route_request_in_t /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestInCache$item_t;
typedef packet_id_t /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketWaitList$iterator_item_t;
typedef route_cache_node_id_t /*DsrP.DsrControlP*/DsrControlP$0$RouteNodeList$iterator_item_t;
typedef packet_id_t /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketWaitList$iterator_item_t;
typedef dsr_route_request_out_t */*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutEqual$equal_t;
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
typedef T32khz CC2420ControlP$StartupTimer$precision_tag;
typedef uint32_t CC2420ControlP$StartupTimer$size_type;
typedef uint16_t CC2420ControlP$ReadRssi$val_t;
typedef uint8_t HplAtm128Timer0AsyncP$Compare$size_type;
typedef uint8_t HplAtm128Timer0AsyncP$Timer$timer_size;
typedef uint16_t HplAtm128Timer1P$CompareA$size_type;
typedef uint16_t HplAtm128Timer1P$Capture$size_type;
typedef uint16_t HplAtm128Timer1P$CompareB$size_type;
typedef uint16_t HplAtm128Timer1P$CompareC$size_type;
typedef uint16_t HplAtm128Timer1P$Timer$timer_size;
typedef uint16_t /*InitOneP.InitOne*/Atm128TimerInitC$0$timer_size;
typedef /*InitOneP.InitOne*/Atm128TimerInitC$0$timer_size /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$timer_size;
typedef TOne /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$frequency_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$frequency_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size;
enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16*/AlarmOne16C$0$__nesc_unnamed4334 {
  AlarmOne16C$0$COMPARE_ID = 0U
};
typedef TOne /*CounterOne16C.NCounter*/Atm128CounterC$0$frequency_tag;
typedef uint16_t /*CounterOne16C.NCounter*/Atm128CounterC$0$timer_size;
typedef /*CounterOne16C.NCounter*/Atm128CounterC$0$frequency_tag /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$precision_tag;
typedef /*CounterOne16C.NCounter*/Atm128CounterC$0$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$size_type;
typedef /*CounterOne16C.NCounter*/Atm128CounterC$0$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$timer_size;
typedef T32khz /*Counter32khz32C.Transform32*/TransformCounterC$0$to_precision_tag;
typedef uint32_t /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type;
typedef T32khz /*Counter32khz32C.Transform32*/TransformCounterC$0$from_precision_tag;
typedef uint16_t /*Counter32khz32C.Transform32*/TransformCounterC$0$from_size_type;
typedef counter_one_overflow_t /*Counter32khz32C.Transform32*/TransformCounterC$0$upper_count_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC$0$from_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC$0$from_size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$size_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC$0$to_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$size_type;
typedef T32khz /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_precision_tag;
typedef uint32_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type;
typedef TOne /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_precision_tag;
typedef uint16_t /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_precision_tag /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$precision_tag;
typedef /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$size_type;
typedef uint16_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$size_type;
enum /*CC2420ControlC.Spi*/CC2420SpiC$0$__nesc_unnamed4335 {
  CC2420SpiC$0$CLIENT_ID = 0U
};
enum /*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$__nesc_unnamed4336 {
  CC2420SpiC$1$CLIENT_ID = 1U
};
enum /*CC2420ControlC.RssiResource*/CC2420SpiC$2$__nesc_unnamed4337 {
  CC2420SpiC$2$CLIENT_ID = 2U
};
typedef T32khz CC2420TransmitP$BackoffTimer$precision_tag;
typedef uint32_t CC2420TransmitP$BackoffTimer$size_type;
enum /*CC2420TransmitC.Spi*/CC2420SpiC$3$__nesc_unnamed4338 {
  CC2420SpiC$3$CLIENT_ID = 3U
};
enum /*CC2420ReceiveC.Spi*/CC2420SpiC$4$__nesc_unnamed4339 {
  CC2420SpiC$4$CLIENT_ID = 4U
};
typedef dsr_route_request_in_t /*DsrP.RouteRequestInCacheC*/LruDataCacheC$0$data_cache_item_t;
typedef /*DsrP.RouteRequestInCacheC*/LruDataCacheC$0$data_cache_item_t /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t;
typedef /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t */*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$Equal$equal_t;
typedef /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$DataCache$item_t;
typedef dsr_route_request_out_t /*DsrP.RouteRequestOutCacheC*/LruDataCacheC$1$data_cache_item_t;
typedef /*DsrP.RouteRequestOutCacheC*/LruDataCacheC$1$data_cache_item_t /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t;
typedef /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t */*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$Equal$equal_t;
typedef /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$item_t;
typedef am_addr_t /*DsrP.RouteRequestOutTimerC*/DataTimerC$0$data_timer_data_t;
enum HilTimerMilliC$__nesc_unnamed4340 {
  HilTimerMilliC$TIMER_COUNT = 3U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size;
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
typedef /*DsrP.RouteRequestOutTimerC*/DataTimerC$0$data_timer_data_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data_timer_data_t;
typedef /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data_timer_data_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$data_t;
typedef TMilli /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$precision_tag;
typedef packet_send_entry_t /*PacketEngineC.SendQueueC*/LruDataCacheC$2$data_cache_item_t;
typedef /*PacketEngineC.SendQueueC*/LruDataCacheC$2$data_cache_item_t /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$data_cache_item_t;
typedef /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$data_cache_item_t */*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$Equal$equal_t;
typedef /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$data_cache_item_t /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$DataCache$item_t;
typedef message_t /*PacketEngineC.ReceivePoolC*/PoolC$0$pool_t;
typedef /*PacketEngineC.ReceivePoolC*/PoolC$0$pool_t /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool_t;
typedef /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool_t /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$t;
typedef message_t /*PacketEngineC.SendPoolC*/PoolC$1$pool_t;
typedef /*PacketEngineC.SendPoolC*/PoolC$1$pool_t /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$pool_t;
typedef /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$pool_t /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$Pool$t;
enum AMQueueP$__nesc_unnamed4341 {
  AMQueueP$NUM_CLIENTS = 2U
};
enum /*DsrC.DsrSendC*/SingleProcessorSenderC$0$__nesc_unnamed4342 {
  SingleProcessorSenderC$0$PACKET_ENGINE_CLIENT_ID = 1U
};
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t PlatformP$Init$init(void);
#line 51
static  error_t MotePlatformP$PlatformInit$init(void);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$clr(void);




static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr(void);




static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr(void);


static   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void);
#line 30
static   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void);




static   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$clr(void);




static   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr(void);




static   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput(void);
#line 29
static   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set(void);
static   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr(void);




static   void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput(void);
#line 35
static   void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput(void);
#line 33
static   void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void);
#line 32
static   bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$get(void);
static   void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void);
#line 32
static   bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get(void);
static   void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void);
#line 32
static   bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get(void);
#line 32
static   bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t MeasureClockC$Init$init(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t SchedulerBasicP$TaskBasic$postTask(
# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7f071c40);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP$TaskBasic$default$runTask(
# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7f071c40);
# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static  void SchedulerBasicP$Scheduler$init(void);
#line 61
static  void SchedulerBasicP$Scheduler$taskLoop(void);
#line 54
static  bool SchedulerBasicP$Scheduler$runNextTask(void);
# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static   void McuSleepC$McuSleep$sleep(void);
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void McuSleepC$McuPowerState$update(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void UnicastCountToLedsC$AMControl$startDone(error_t arg_0x7eb54af0);
#line 117
static  void UnicastCountToLedsC$AMControl$stopDone(error_t arg_0x7eb526e8);
# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static  void UnicastCountToLedsC$Boot$booted(void);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void UnicastCountToLedsC$AMSend$sendDone(message_t *arg_0x7eb750a8, error_t arg_0x7eb75230);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *UnicastCountToLedsC$Receive$receive(message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void UnicastCountToLedsC$MilliTimer$fired(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t LedsP$Init$init(void);
# 50 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static   void LedsP$Leds$led0Off(void);










static   void LedsP$Leds$led1On(void);




static   void LedsP$Leds$led1Off(void);
#line 83
static   void LedsP$Leds$led2Off(void);
#line 45
static   void LedsP$Leds$led0On(void);
#line 78
static   void LedsP$Leds$led2On(void);
# 60 "../../../tos/interfaces/StaticIndexedIterator.nc"
static  iterator_end_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvListPacket$end(
# 50 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
uint8_t arg_0x7e9b3258, 
# 60 "../../../tos/interfaces/StaticIndexedIterator.nc"
/*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvListPacket$data_source_t *arg_0x7e9e2c28, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvListPacket$iterator_item_t arg_0x7e9e2db8);
#line 51
static  /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvListPacket$iterator_item_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvListPacket$next(
# 50 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
uint8_t arg_0x7e9b3258, 
# 51 "../../../tos/interfaces/StaticIndexedIterator.nc"
/*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvListPacket$data_source_t *arg_0x7e9e2358, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvListPacket$iterator_item_t arg_0x7e9e24e8);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$Packet$payloadLength(message_t *arg_0x7eb45938);
#line 115
static  void */*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$Packet$getPayload(message_t *arg_0x7eb44d60, uint8_t arg_0x7eb44ee8);
#line 83
static  void /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$Packet$setPayloadLength(message_t *arg_0x7eb44010, uint8_t arg_0x7eb44198);
# 82 "../../../tos/lib/netarch/tlv/TlvMultiplePacket.nc"
static  void */*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiplePacket$value(
# 49 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
uint8_t arg_0x7e9b4688, 
# 82 "../../../tos/lib/netarch/tlv/TlvMultiplePacket.nc"
message_t *arg_0x7e9f2bf0, tlv_key_t arg_0x7e9f2d80);
#line 120
static  tlv_key_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiplePacket$list(
# 49 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
uint8_t arg_0x7e9b4688, 
# 120 "../../../tos/lib/netarch/tlv/TlvMultiplePacket.nc"
message_t *arg_0x7e9f0b50);
#line 52
static  uint8_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiplePacket$length(
# 49 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
uint8_t arg_0x7e9b4688, 
# 52 "../../../tos/lib/netarch/tlv/TlvMultiplePacket.nc"
message_t *arg_0x7e9f35a0, tlv_key_t arg_0x7e9f3730);
#line 98
static  error_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiplePacket$add(
# 49 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
uint8_t arg_0x7e9b4688, 
# 98 "../../../tos/lib/netarch/tlv/TlvMultiplePacket.nc"
message_t *arg_0x7e9f1588, tlv_key_t *arg_0x7e9f1738, 
uint8_t arg_0x7e9f18d0);
# 50 "../../../tos/lib/netarch/tlv/TlvBlockPacket.nc"
static  error_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvBlockPacket$add(message_t *arg_0x7ea12cc0);
# 75 "../../../tos/lib/netarch/tlv/TlvSinglePacket.nc"
static  void */*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSinglePacket$value(
# 48 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
uint8_t arg_0x7e9b5c70, 
# 75 "../../../tos/lib/netarch/tlv/TlvSinglePacket.nc"
message_t *arg_0x7ea01010);
#line 100
static  error_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSinglePacket$remove(
# 48 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
uint8_t arg_0x7e9b5c70, 
# 100 "../../../tos/lib/netarch/tlv/TlvSinglePacket.nc"
message_t *arg_0x7ea00288);
#line 51
static  uint8_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSinglePacket$length(
# 48 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
uint8_t arg_0x7e9b5c70, 
# 51 "../../../tos/lib/netarch/tlv/TlvSinglePacket.nc"
message_t *arg_0x7ea03d50);
#line 66
static  error_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSinglePacket$setLength(
# 48 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
uint8_t arg_0x7e9b5c70, 
# 66 "../../../tos/lib/netarch/tlv/TlvSinglePacket.nc"
message_t *arg_0x7ea02510, uint8_t arg_0x7ea02698);
#line 91
static  error_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSinglePacket$add(
# 48 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
uint8_t arg_0x7e9b5c70, 
# 91 "../../../tos/lib/netarch/tlv/TlvSinglePacket.nc"
message_t *arg_0x7ea017c0, uint8_t arg_0x7ea01948);
# 85 "../../../tos/lib/netarch/tlv/TlvMultiple.nc"
static  void *TlvP$TlvMultiple$value(
# 49 "../../../tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7e900c38, 
# 85 "../../../tos/lib/netarch/tlv/TlvMultiple.nc"
void *arg_0x7e987ed8, tlv_key_t arg_0x7e986088);
#line 126
static  tlv_key_t TlvP$TlvMultiple$list(
# 49 "../../../tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7e900c38, 
# 126 "../../../tos/lib/netarch/tlv/TlvMultiple.nc"
void *arg_0x7e983360);
#line 115
static  error_t TlvP$TlvMultiple$remove(
# 49 "../../../tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7e900c38, 
# 115 "../../../tos/lib/netarch/tlv/TlvMultiple.nc"
void *arg_0x7e985870, tlv_key_t arg_0x7e985a00, uint8_t arg_0x7e985b90);
#line 52
static  uint8_t TlvP$TlvMultiple$length(
# 49 "../../../tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7e900c38, 
# 52 "../../../tos/lib/netarch/tlv/TlvMultiple.nc"
void *arg_0x7e990510, tlv_key_t arg_0x7e9906a0);
#line 73
static  error_t TlvP$TlvMultiple$setLength(
# 49 "../../../tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7e900c38, 
# 73 "../../../tos/lib/netarch/tlv/TlvMultiple.nc"
void *arg_0x7e990e40, tlv_key_t arg_0x7e987010, 
uint8_t arg_0x7e9871a8, uint8_t arg_0x7e987338, 
uint8_t arg_0x7e9874d0);
#line 103
static  error_t TlvP$TlvMultiple$add(
# 49 "../../../tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7e900c38, 
# 103 "../../../tos/lib/netarch/tlv/TlvMultiple.nc"
void *arg_0x7e986850, tlv_key_t *arg_0x7e986a00, 
uint8_t arg_0x7e986b98, uint8_t arg_0x7e986d28, uint8_t arg_0x7e986eb0);
# 60 "../../../tos/interfaces/StaticVoidIndexedIterator.nc"
static  iterator_end_t TlvP$TlvList$end(
# 50 "../../../tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7e8f6758, 
# 60 "../../../tos/interfaces/StaticVoidIndexedIterator.nc"
void *arg_0x7e977600, TlvP$TlvList$iterator_item_t arg_0x7e977790);
#line 51
static  TlvP$TlvList$iterator_item_t TlvP$TlvList$next(
# 50 "../../../tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7e8f6758, 
# 51 "../../../tos/interfaces/StaticVoidIndexedIterator.nc"
void *arg_0x7e980cb0, TlvP$TlvList$iterator_item_t arg_0x7e980e40);
# 69 "../../../tos/lib/netarch/tlv/TlvBlock.nc"
static  uint8_t TlvP$TlvBlock$length(void *arg_0x7e9a3010);
#line 51
static  error_t TlvP$TlvBlock$add(void *arg_0x7e9a5a40, uint8_t arg_0x7e9a5bd0, uint8_t arg_0x7e9a5d58);
# 77 "../../../tos/lib/netarch/tlv/TlvSingle.nc"
static  void *TlvP$TlvSingle$value(
# 48 "../../../tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7e900300, 
# 77 "../../../tos/lib/netarch/tlv/TlvSingle.nc"
void *arg_0x7e996838);
#line 106
static  error_t TlvP$TlvSingle$remove(
# 48 "../../../tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7e900300, 
# 106 "../../../tos/lib/netarch/tlv/TlvSingle.nc"
void *arg_0x7e995e50, uint8_t arg_0x7e994010);
#line 50
static  uint8_t TlvP$TlvSingle$length(
# 48 "../../../tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7e900300, 
# 50 "../../../tos/lib/netarch/tlv/TlvSingle.nc"
void *arg_0x7e997010);
#line 67
static  error_t TlvP$TlvSingle$setLength(
# 48 "../../../tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7e900300, 
# 67 "../../../tos/lib/netarch/tlv/TlvSingle.nc"
void *arg_0x7e997780, uint8_t arg_0x7e997908, 
uint8_t arg_0x7e997aa8, uint8_t arg_0x7e997c30);
#line 95
static  error_t TlvP$TlvSingle$add(
# 48 "../../../tos/lib/netarch/tlv/TlvP.nc"
uint8_t arg_0x7e900300, 
# 95 "../../../tos/lib/netarch/tlv/TlvSingle.nc"
void *arg_0x7e995010, uint8_t arg_0x7e995198, 
uint8_t arg_0x7e995338, uint8_t arg_0x7e9954c0);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *PacketEngineP$SubReceive$receive(
# 95 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e871e40, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t PacketEngineP$SubSend$default$send(
# 94 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e8714e0, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x7eb81d30, message_t *arg_0x7eb81ee0, uint8_t arg_0x7eb80088);
#line 99
static  void PacketEngineP$SubSend$sendDone(
# 94 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e8714e0, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7eb750a8, error_t arg_0x7eb75230);
# 47 "../../../tos/lib/netarch/multihop/PacketEngineClient.nc"
static  am_id_t PacketEngineP$PacketEngineClient$default$upperType(
# 98 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
packet_client_id_t arg_0x7e863208);
# 54 "../../../tos/lib/netarch/multihop/PacketEngineClient.nc"
static  am_id_t PacketEngineP$PacketEngineClient$default$defaultLowerType(
# 98 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
packet_client_id_t arg_0x7e863208);
# 31 "/opt/tinyos-2.x/tos/interfaces/Intercept.nc"
static  bool PacketEngineP$Intercept$default$forward(
# 86 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e875ee8, 
# 31 "/opt/tinyos-2.x/tos/interfaces/Intercept.nc"
message_t *arg_0x7e875528, void *arg_0x7e8756c8, uint16_t arg_0x7e875858);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t PacketEngineP$Packet$payloadLength(message_t *arg_0x7eb45938);
#line 115
static  void *PacketEngineP$Packet$getPayload(message_t *arg_0x7eb44d60, uint8_t arg_0x7eb44ee8);
#line 95
static  uint8_t PacketEngineP$Packet$maxPayloadLength(void);
#line 83
static  void PacketEngineP$Packet$setPayloadLength(message_t *arg_0x7eb44010, uint8_t arg_0x7eb44198);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t PacketEngineP$Send$send(
# 84 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
packet_client_id_t arg_0x7e8841a0, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x7eb81d30, message_t *arg_0x7eb81ee0, uint8_t arg_0x7eb80088);
#line 124
static  void *PacketEngineP$Send$getPayload(
# 84 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
packet_client_id_t arg_0x7e8841a0, 
# 124 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7eb75ce0, uint8_t arg_0x7eb75e68);
#line 99
static  void PacketEngineP$Send$default$sendDone(
# 84 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
packet_client_id_t arg_0x7e8841a0, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7eb750a8, error_t arg_0x7eb75230);
# 92 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void PacketEngineP$RadioControl$startDone(error_t arg_0x7eb54af0);
#line 117
static  void PacketEngineP$RadioControl$stopDone(error_t arg_0x7eb526e8);
# 56 "../../../tos/interfaces/IndexedIterator.nc"
static  iterator_end_t PacketEngineP$PacketWaitList$end(
# 89 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e876d18, 
# 56 "../../../tos/interfaces/IndexedIterator.nc"
PacketEngineP$PacketWaitList$iterator_item_t arg_0x7ea448a8);
#line 48
static  PacketEngineP$PacketWaitList$iterator_item_t PacketEngineP$PacketWaitList$next(
# 89 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e876d18, 
# 48 "../../../tos/interfaces/IndexedIterator.nc"
PacketEngineP$PacketWaitList$iterator_item_t arg_0x7ea441d8);
# 57 "../../../tos/lib/data/cache/DataCache.nc"
static  void PacketEngineP$SendQueue$evicted(PacketEngineP$SendQueue$item_t *arg_0x7e856cc0);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t PacketEngineP$SubPacket$default$payloadLength(
# 96 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e870500, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
message_t *arg_0x7eb45938);
#line 115
static  void *PacketEngineP$SubPacket$default$getPayload(
# 96 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e870500, 
# 115 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
message_t *arg_0x7eb44d60, uint8_t arg_0x7eb44ee8);
#line 83
static  void PacketEngineP$SubPacket$default$setPayloadLength(
# 96 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e870500, 
# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
message_t *arg_0x7eb44010, uint8_t arg_0x7eb44198);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t PacketEngineP$Init$init(void);
# 179 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
static  packet_am_id_t PacketEngineP$PacketEngine$upperType(
# 88 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e877b78, 
# 179 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7ea569a8);
#line 98
static  error_t PacketEngineP$PacketEngine$send(
# 88 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e877b78, 
# 98 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7ea64b60);
#line 135
static  error_t PacketEngineP$PacketEngine$receive(
# 88 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e877b78, 
# 135 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7ea61860);
#line 124
static  error_t PacketEngineP$PacketEngine$sendIntercept(
# 88 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e877b78, 
# 124 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7ea61010);
#line 57
static  void PacketEngineP$PacketEngine$default$sendAdded(
# 88 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e877b78, 
# 57 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7ea66618, message_t *arg_0x7ea667c8);










static  void PacketEngineP$PacketEngine$default$receiveAdded(
# 88 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e877b78, 
# 68 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7ea65010, message_t *arg_0x7ea651c0);










static  void PacketEngineP$PacketEngine$default$snoopAdded(
# 88 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e877b78, 
# 79 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7ea659b0, message_t *arg_0x7ea65b60);







static  message_t *PacketEngineP$PacketEngine$packet(
# 88 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e877b78, 
# 87 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7ea643e8);
#line 113
static  packet_send_action_t PacketEngineP$PacketEngine$default$sendDone(
# 88 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e877b78, 
# 113 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7ea63380, message_t *arg_0x7ea63530, error_t arg_0x7ea636b8);
#line 146
static  error_t PacketEngineP$PacketEngine$drop(
# 88 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e877b78, 
# 146 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7ea60088);
#line 158
static  error_t PacketEngineP$PacketEngine$upperSendDone(
# 88 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e877b78, 
# 158 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7ea60870, error_t arg_0x7ea609f8);
#line 171
static  packet_id_t PacketEngineP$PacketEngine$waitList(
# 88 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e877b78);
# 187 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
static  void PacketEngineP$PacketEngine$setUpperType(
# 88 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e877b78, 
# 187 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7ea55100, am_id_t arg_0x7ea55288);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void PacketEngineP$msgAction$runTask(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *PacketEngineP$Receive$default$receive(
# 85 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e884ad0, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void PacketEngineP$msgAdded$runTask(void);
# 48 "../../../tos/interfaces/Equal.nc"
static  bool PacketEngineP$SendQueueEqual$test(PacketEngineP$SendQueueEqual$equal_t arg_0x7e868d30, PacketEngineP$SendQueueEqual$equal_t arg_0x7e868eb8);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void PacketEngineP$SendBackoff$fired(void);
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t PacketEngineP$StdControl$start(void);
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t RandomMlcgP$Random$rand16(void);
#line 35
static   uint32_t RandomMlcgP$Random$rand32(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RandomMlcgP$Init$init(void);
# 57 "../../../tos/lib/data/cache/DataCache.nc"
static  void /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutCache$evicted(/*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutCache$item_t *arg_0x7e856cc0);
# 68 "../../../tos/lib/data/timer/DataTimer.nc"
static  void /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutTimer$expired(/*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutTimer$data_t arg_0x7e6f18b0);
# 48 "../../../tos/interfaces/Equal.nc"
static  bool /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestInEqual$test(/*DsrP.DsrControlP*/DsrControlP$0$RouteRequestInEqual$equal_t arg_0x7e868d30, /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestInEqual$equal_t arg_0x7e868eb8);
# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static  void /*DsrP.DsrControlP*/DsrControlP$0$Boot$booted(void);
# 57 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
static  void /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$sendAdded(packet_id_t arg_0x7ea66618, message_t *arg_0x7ea667c8);










static  void /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$receiveAdded(packet_id_t arg_0x7ea65010, message_t *arg_0x7ea651c0);










static  void /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$snoopAdded(packet_id_t arg_0x7ea659b0, message_t *arg_0x7ea65b60);
#line 113
static  packet_send_action_t /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$sendDone(packet_id_t arg_0x7ea63380, message_t *arg_0x7ea63530, error_t arg_0x7ea636b8);
# 57 "../../../tos/lib/data/cache/DataCache.nc"
static  void /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestInCache$evicted(/*DsrP.DsrControlP*/DsrControlP$0$RouteRequestInCache$item_t *arg_0x7e856cc0);
# 57 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
static  void /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$sendAdded(packet_id_t arg_0x7ea66618, message_t *arg_0x7ea667c8);










static  void /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$receiveAdded(packet_id_t arg_0x7ea65010, message_t *arg_0x7ea651c0);










static  void /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$snoopAdded(packet_id_t arg_0x7ea659b0, message_t *arg_0x7ea65b60);
#line 113
static  packet_send_action_t /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$sendDone(packet_id_t arg_0x7ea63380, message_t *arg_0x7ea63530, error_t arg_0x7ea636b8);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*DsrP.DsrControlP*/DsrControlP$0$Send$sendDone(message_t *arg_0x7eb750a8, error_t arg_0x7eb75230);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*DsrP.DsrControlP*/DsrControlP$0$composePkt$runTask(void);
# 57 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
static  void /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$sendAdded(packet_id_t arg_0x7ea66618, message_t *arg_0x7ea667c8);










static  void /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$receiveAdded(packet_id_t arg_0x7ea65010, message_t *arg_0x7ea651c0);










static  void /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$snoopAdded(packet_id_t arg_0x7ea659b0, message_t *arg_0x7ea65b60);
#line 113
static  packet_send_action_t /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$sendDone(packet_id_t arg_0x7ea63380, message_t *arg_0x7ea63530, error_t arg_0x7ea636b8);
# 97 "../../../tos/lib/netarch/dsr/RouteCache.nc"
static  void /*DsrP.DsrControlP*/DsrControlP$0$SalvageRouteCache$routeUpdate(route_cache_node_id_t arg_0x7e701bf0, route_cache_node_id_t arg_0x7e701d88, 
route_cache_link_id_t arg_0x7e700010);
#line 97
static  void /*DsrP.DsrControlP*/DsrControlP$0$RouteCache$routeUpdate(route_cache_node_id_t arg_0x7e701bf0, route_cache_node_id_t arg_0x7e701d88, 
route_cache_link_id_t arg_0x7e700010);
# 48 "../../../tos/interfaces/Equal.nc"
static  bool /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutEqual$test(/*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutEqual$equal_t arg_0x7e868d30, /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutEqual$equal_t arg_0x7e868eb8);
# 150 "../../../tos/lib/data/graph/Graph.nc"
static  void SimpleLinkCacheP$Graph$removed(graph_edge_id_t arg_0x7e5e1d18);
#line 143
static  void SimpleLinkCacheP$Graph$inserted(graph_edge_id_t arg_0x7e5e1640);
# 54 "../../../tos/lib/data/graph/SourceShortestPath.nc"
static  void SimpleLinkCacheP$SourceShortestPath$builtTree(graph_vertex_id_t arg_0x7e5d9920);
#line 72
static  void SimpleLinkCacheP$SourceShortestPath$builtTreeTo(graph_vertex_id_t arg_0x7e5d8968, graph_vertex_id_t arg_0x7e5d8b00, 
error_t arg_0x7e5d8ca0);
# 61 "../../../tos/lib/netarch/dsr/RouteCache.nc"
static  void SimpleLinkCacheP$RouteCache$removeLink(route_cache_node_id_t arg_0x7e704e68, route_cache_node_id_t arg_0x7e702030, bool arg_0x7e7021b8);
#line 49
static  void SimpleLinkCacheP$RouteCache$addPath(route_cache_node_id_t arg_0x7e704338[], route_cache_link_id_t arg_0x7e7044d8, bool arg_0x7e704660);
#line 70
static  void SimpleLinkCacheP$RouteCache$trackRoute(route_cache_node_id_t arg_0x7e7029e8, route_cache_node_id_t arg_0x7e702b80);







static  void SimpleLinkCacheP$RouteCache$checkRoute(route_cache_node_id_t arg_0x7e701320, route_cache_node_id_t arg_0x7e7014b8);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$Init$init(void);
# 34 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
static   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$BitVector$clearAll(void);
#line 58
static   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$BitVector$clear(uint16_t arg_0x7e6e5850);
#line 46
static   bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$BitVector$get(uint16_t arg_0x7e6e6df8);





static   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$BitVector$set(uint16_t arg_0x7e6e5350);
# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$Boot$booted(void);
# 79 "../../../tos/lib/data/alloc/IndexedAlloc.nc"
static  indexed_alloc_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$IndexedAlloc$alloc(void);








static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$IndexedAlloc$free(indexed_alloc_id_t arg_0x7e5953c8);
# 115 "../../../tos/lib/data/graph/Graph.nc"
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$remove(graph_vertex_id_t arg_0x7e5e4b38, graph_vertex_id_t arg_0x7e5e4cd0);










static  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edge(graph_vertex_id_t arg_0x7e5e34d0, graph_vertex_id_t arg_0x7e5e3668);
#line 105
static  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$insert(graph_vertex_id_t arg_0x7e5e4178, graph_vertex_id_t arg_0x7e5e4310);
#line 136
static  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edgeList(graph_vertex_id_t arg_0x7e5e3e50);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Init$init(void);
# 54 "../../../tos/lib/data/graph/GraphEdge.nc"
static  graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdge$dest(graph_edge_id_t arg_0x7e5b5120);
# 56 "../../../tos/interfaces/IndexedIterator.nc"
static  iterator_end_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$end(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$iterator_item_t arg_0x7ea448a8);
#line 48
static  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$iterator_item_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$next(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$iterator_item_t arg_0x7ea441d8);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Init$init(void);
# 122 "../../../tos/lib/data/queue/PriorityQueue.nc"
static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$clear(void);
#line 72
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$insert(priority_queue_id_t arg_0x7e519c68);
#line 87
static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$moveUp(priority_queue_id_t arg_0x7e518c20);
#line 47
static  bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$empty(void);
#line 117
static  priority_queue_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$removeBest(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$runTask(void);
# 150 "../../../tos/lib/data/graph/Graph.nc"
static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$removed(graph_edge_id_t arg_0x7e5e1d18);
#line 143
static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$inserted(graph_edge_id_t arg_0x7e5e1640);
# 56 "../../../tos/interfaces/IndexedIterator.nc"
static  iterator_end_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$end(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$iterator_item_t arg_0x7ea448a8);
#line 48
static  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$iterator_item_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$next(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$iterator_item_t arg_0x7ea441d8);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Init$init(void);
# 82 "../../../tos/lib/data/graph/SourceShortestPath.nc"
static  bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$rebuildNeeded(graph_vertex_id_t arg_0x7e5d7408);
#line 47
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildTree(graph_vertex_id_t arg_0x7e5d91c0);
#line 89
static  bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildingTree(void);










static  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$edgeCount(graph_vertex_id_t arg_0x7e5d5178);
#line 64
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildTreeTo(graph_vertex_id_t arg_0x7e5d8030, graph_vertex_id_t arg_0x7e5d81c8);
# 49 "../../../tos/interfaces/Compare.nc"
static  int16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Compare$test(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Compare$compare_t arg_0x7e511090, /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Compare$compare_t arg_0x7e511220);
# 58 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
static   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$BitVector$clear(uint16_t arg_0x7e6e5850);
#line 46
static   bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$BitVector$get(uint16_t arg_0x7e6e6df8);





static   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$BitVector$set(uint16_t arg_0x7e6e5350);
#line 77
static   uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$BitVector$size(void);
#line 58
static   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$BitVector$clear(uint16_t arg_0x7e6e5850);
#line 46
static   bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$BitVector$get(uint16_t arg_0x7e6e6df8);





static   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$BitVector$set(uint16_t arg_0x7e6e5350);
# 55 "../../../tos/lib/data/graph/GraphEdgeWeight.nc"
static  GraphEdgeUnitWeightC$GraphEdgeWeight$weight_t GraphEdgeUnitWeightC$GraphEdgeWeight$weight(graph_edge_id_t arg_0x7e5ac3f0);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void CC2420ActiveMessageP$SubSend$sendDone(message_t *arg_0x7e3c1598, error_t arg_0x7e3c1720);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ActiveMessageP$SubReceive$receive(message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0);
# 53 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static  void CC2420ActiveMessageP$CC2420Config$syncDone(error_t arg_0x7e3b8800);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t CC2420ActiveMessageP$AMSend$send(
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e3ca6b8, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x7eb81d30, message_t *arg_0x7eb81ee0, uint8_t arg_0x7eb80088);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ActiveMessageP$Snoop$default$receive(
# 41 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e3c95e8, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t CC2420ActiveMessageP$Packet$payloadLength(message_t *arg_0x7eb45938);
#line 115
static  void *CC2420ActiveMessageP$Packet$getPayload(message_t *arg_0x7eb44d60, uint8_t arg_0x7eb44ee8);
#line 95
static  uint8_t CC2420ActiveMessageP$Packet$maxPayloadLength(void);
#line 83
static  void CC2420ActiveMessageP$Packet$setPayloadLength(message_t *arg_0x7eb44010, uint8_t arg_0x7eb44198);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ActiveMessageP$Receive$default$receive(
# 40 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e3c9010, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0);
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t CC2420ActiveMessageP$AMPacket$address(void);









static  am_addr_t CC2420ActiveMessageP$AMPacket$destination(message_t *arg_0x7eb35888);
#line 92
static  void CC2420ActiveMessageP$AMPacket$setDestination(message_t *arg_0x7eb34490, am_addr_t arg_0x7eb34620);
#line 136
static  am_id_t CC2420ActiveMessageP$AMPacket$type(message_t *arg_0x7eb33da0);
#line 151
static  void CC2420ActiveMessageP$AMPacket$setType(message_t *arg_0x7eb31350, am_id_t arg_0x7eb314d8);
#line 125
static  bool CC2420ActiveMessageP$AMPacket$isForMe(message_t *arg_0x7eb33670);
# 83 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t CC2420CsmaP$SplitControl$start(void);
# 95 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static   void CC2420CsmaP$RadioBackoff$default$requestCca(
# 41 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
am_id_t arg_0x7e37d4e0, 
# 95 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t *arg_0x7e3dcc10);
#line 81
static   void CC2420CsmaP$RadioBackoff$default$requestInitialBackoff(
# 41 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
am_id_t arg_0x7e37d4e0, 
# 81 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t *arg_0x7e3dc0a8);






static   void CC2420CsmaP$RadioBackoff$default$requestCongestionBackoff(
# 41 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
am_id_t arg_0x7e37d4e0, 
# 88 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t *arg_0x7e3dc660);
#line 81
static   void CC2420CsmaP$SubBackoff$requestInitialBackoff(message_t *arg_0x7e3dc0a8);






static   void CC2420CsmaP$SubBackoff$requestCongestionBackoff(message_t *arg_0x7e3dc660);
# 73 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static   void CC2420CsmaP$CC2420Transmit$sendDone(message_t *arg_0x7e36c558, error_t arg_0x7e36c6e0);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t CC2420CsmaP$Send$send(message_t *arg_0x7e3c2340, uint8_t arg_0x7e3c24c8);
#line 114
static  void *CC2420CsmaP$Send$getPayload(message_t *arg_0x7e3c01f8, uint8_t arg_0x7e3c0380);
#line 101
static  uint8_t CC2420CsmaP$Send$maxPayloadLength(void);
# 76 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static   void CC2420CsmaP$CC2420Power$startOscillatorDone(void);
#line 56
static   void CC2420CsmaP$CC2420Power$startVRegDone(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420CsmaP$Resource$granted(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void CC2420CsmaP$sendDone_task$runTask(void);
#line 64
static  void CC2420CsmaP$stopDone_task$runTask(void);
#line 64
static  void CC2420CsmaP$startDone_task$runTask(void);
# 101 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static   bool CC2420ControlP$CC2420Config$isAutoAckEnabled(void);
#line 96
static   bool CC2420ControlP$CC2420Config$isHwAutoAckDefault(void);
#line 64
static   uint16_t CC2420ControlP$CC2420Config$getShortAddr(void);
#line 52
static  error_t CC2420ControlP$CC2420Config$sync(void);
#line 70
static   uint16_t CC2420ControlP$CC2420Config$getPanAddr(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void CC2420ControlP$StartupTimer$fired(void);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void CC2420ControlP$ReadRssi$default$readDone(error_t arg_0x7e335cd8, CC2420ControlP$ReadRssi$val_t arg_0x7e335e60);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void CC2420ControlP$syncDone$runTask(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t CC2420ControlP$Init$init(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420ControlP$SpiResource$granted(void);
#line 92
static  void CC2420ControlP$SyncResource$granted(void);
# 71 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static   error_t CC2420ControlP$CC2420Power$startOscillator(void);
#line 90
static   error_t CC2420ControlP$CC2420Power$rxOn(void);
#line 51
static   error_t CC2420ControlP$CC2420Power$startVReg(void);
#line 63
static   error_t CC2420ControlP$CC2420Power$stopVReg(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void CC2420ControlP$sync$runTask(void);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420ControlP$Resource$release(void);
#line 78
static   error_t CC2420ControlP$Resource$request(void);
# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void CC2420ControlP$InterruptCCA$fired(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420ControlP$RssiResource$granted(void);
# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static   Atm128_TIFR_t HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag(void);
#line 37
static   void HplAtm128Timer0AsyncP$TimerCtrl$setControl(Atm128TimerControl_t arg_0x7e249948);
# 54 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static   mcu_power_t HplAtm128Timer0AsyncP$McuPowerOverride$lowestState(void);
# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static   int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void);
#line 32
static   void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void);
# 39 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   HplAtm128Timer0AsyncP$Compare$size_type HplAtm128Timer0AsyncP$Compare$get(void);





static   void HplAtm128Timer0AsyncP$Compare$set(HplAtm128Timer0AsyncP$Compare$size_type arg_0x7e266e78);










static   void HplAtm128Timer0AsyncP$Compare$start(void);
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   HplAtm128Timer0AsyncP$Timer$timer_size HplAtm128Timer0AsyncP$Timer$get(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl16.nc"
static   void HplAtm128Timer1P$TimerCtrl$setCtrlCapture(Atm128TimerCtrlCapture_t arg_0x7e281750);
#line 37
static   Atm128TimerCtrlCapture_t HplAtm128Timer1P$TimerCtrl$getCtrlCapture(void);
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer1P$CompareA$reset(void);
#line 45
static   void HplAtm128Timer1P$CompareA$set(HplAtm128Timer1P$CompareA$size_type arg_0x7e266e78);










static   void HplAtm128Timer1P$CompareA$start(void);


static   void HplAtm128Timer1P$CompareA$stop(void);
# 79 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void HplAtm128Timer1P$Capture$setEdge(bool arg_0x7e26bb48);
#line 55
static   void HplAtm128Timer1P$Capture$reset(void);


static   void HplAtm128Timer1P$Capture$start(void);


static   void HplAtm128Timer1P$Capture$stop(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer1P$CompareB$default$fired(void);
#line 49
static   void HplAtm128Timer1P$CompareC$default$fired(void);
# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   bool HplAtm128Timer1P$Timer$test(void);
#line 52
static   HplAtm128Timer1P$Timer$timer_size HplAtm128Timer1P$Timer$get(void);
#line 95
static   void HplAtm128Timer1P$Timer$setScale(uint8_t arg_0x7e287010);
#line 58
static   void HplAtm128Timer1P$Timer$set(HplAtm128Timer1P$Timer$timer_size arg_0x7e28a350);










static   void HplAtm128Timer1P$Timer$start(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*InitOneP.InitOne*/Atm128TimerInitC$0$Init$init(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow(void);
# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$size_type arg_0x7e3289e0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$size_type arg_0x7e328b70);
#line 62
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$stop(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$size_type /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$get(void);






static   bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$isOverflowPending(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$overflow(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void);
#line 53
static   /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$get(void);
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow(void);
#line 92
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type arg_0x7e3289e0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type arg_0x7e328b70);
#line 55
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$size_type arg_0x7e3298c8);






static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$stop(void);




static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$fired(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$overflow(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t NoInitC$Init$init(void);
# 43 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureFallingEdge(void);
#line 55
static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$disable(void);
#line 42
static   error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureRisingEdge(void);
# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(/*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$size_type arg_0x7e26c540);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$disable(void);
#line 43
static   error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$default$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$default$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired(void);
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$clear(void);
#line 40
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$disable(void);
#line 59
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(bool arg_0x7e024728);
#line 35
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$enable(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired(void);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t HplCC2420InterruptsP$CCA$disable(void);
#line 42
static   error_t HplCC2420InterruptsP$CCA$enableRisingEdge(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void HplCC2420InterruptsP$CCATask$runTask(void);
# 71 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static   void CC2420SpiP$SpiPacket$sendDone(uint8_t *arg_0x7df65030, uint8_t *arg_0x7df651d8, uint16_t arg_0x7df65368, 
error_t arg_0x7df65500);
# 62 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static   error_t CC2420SpiP$Fifo$continueRead(
# 46 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7df70d40, 
# 62 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t *arg_0x7df8bd30, uint8_t arg_0x7df8beb8);
#line 91
static   void CC2420SpiP$Fifo$default$writeDone(
# 46 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7df70d40, 
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t *arg_0x7df88610, uint8_t arg_0x7df88798, error_t arg_0x7df88920);
#line 82
static   cc2420_status_t CC2420SpiP$Fifo$write(
# 46 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7df70d40, 
# 82 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t *arg_0x7df89dd0, uint8_t arg_0x7df88010);
#line 51
static   cc2420_status_t CC2420SpiP$Fifo$beginRead(
# 46 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7df70d40, 
# 51 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t *arg_0x7df8b598, uint8_t arg_0x7df8b720);
#line 71
static   void CC2420SpiP$Fifo$default$readDone(
# 46 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7df70d40, 
# 71 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t *arg_0x7df894f8, uint8_t arg_0x7df89680, error_t arg_0x7df89808);
# 31 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static   void CC2420SpiP$ChipSpiResource$abortRelease(void);







static   error_t CC2420SpiP$ChipSpiResource$attemptRelease(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420SpiP$SpiResource$granted(void);
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static   cc2420_status_t CC2420SpiP$Ram$write(
# 47 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint16_t arg_0x7df6f6f0, 
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
uint8_t arg_0x7e31b248, uint8_t *arg_0x7e31b3f0, uint8_t arg_0x7e31b578);
# 47 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static   cc2420_status_t CC2420SpiP$Reg$read(
# 48 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7df6fdb0, 
# 47 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t *arg_0x7e318280);







static   cc2420_status_t CC2420SpiP$Reg$write(
# 48 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7df6fdb0, 
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t arg_0x7e3187f0);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420SpiP$Resource$release(
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7df703e0);
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420SpiP$Resource$immediateRequest(
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7df703e0);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420SpiP$Resource$request(
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7df703e0);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420SpiP$Resource$default$granted(
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7df703e0);
# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   bool CC2420SpiP$Resource$isOwner(
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7df703e0);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void CC2420SpiP$grant$runTask(void);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420SpiP$Strobe$strobe(
# 49 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7df6d4b8);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t StateImplP$Init$init(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static   void StateImplP$State$toIdle(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x7df077b0);
# 66 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static   bool StateImplP$State$isState(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x7df077b0, 
# 66 "/opt/tinyos-2.x/tos/interfaces/State.nc"
uint8_t arg_0x7e841c28);
#line 61
static   bool StateImplP$State$isIdle(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x7df077b0);
# 45 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static   error_t StateImplP$State$requestState(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x7df077b0, 
# 45 "/opt/tinyos-2.x/tos/interfaces/State.nc"
uint8_t arg_0x7e844ad0);





static   void StateImplP$State$forceState(
# 67 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t arg_0x7df077b0, 
# 51 "/opt/tinyos-2.x/tos/interfaces/State.nc"
uint8_t arg_0x7e841088);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void Atm128SpiP$zeroTask$runTask(void);
# 59 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static   error_t Atm128SpiP$SpiPacket$send(uint8_t *arg_0x7df66598, uint8_t *arg_0x7df66740, uint16_t arg_0x7df668d0);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void Atm128SpiP$ResourceArbiter$granted(
# 84 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7ded4950);
# 34 "/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
static   uint8_t Atm128SpiP$SpiByte$write(uint8_t arg_0x7df6cd78);
# 92 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void Atm128SpiP$Spi$dataReady(uint8_t arg_0x7dece520);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$Resource$release(
# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7dee4628);
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$Resource$immediateRequest(
# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7dee4628);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$Resource$request(
# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7dee4628);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void Atm128SpiP$Resource$default$granted(
# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7dee4628);
# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   bool Atm128SpiP$Resource$isOwner(
# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7dee4628);
# 72 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void HplAtm128SpiP$SPI$sleep(void);
#line 66
static   void HplAtm128SpiP$SPI$initMaster(void);
#line 105
static   void HplAtm128SpiP$SPI$setMasterBit(bool arg_0x7decb208);
#line 96
static   void HplAtm128SpiP$SPI$enableInterrupt(bool arg_0x7decea68);
#line 80
static   uint8_t HplAtm128SpiP$SPI$read(void);
#line 125
static   void HplAtm128SpiP$SPI$setMasterDoubleSpeed(bool arg_0x7dec9b80);
#line 114
static   void HplAtm128SpiP$SPI$setClock(uint8_t arg_0x7decaa28);
#line 108
static   void HplAtm128SpiP$SPI$setClockPolarity(bool arg_0x7decba60);
#line 86
static   void HplAtm128SpiP$SPI$write(uint8_t arg_0x7dece010);
#line 99
static   void HplAtm128SpiP$SPI$enableSpi(bool arg_0x7decd250);
#line 111
static   void HplAtm128SpiP$SPI$setClockPhase(bool arg_0x7deca260);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t arg_0x7de18af0);
#line 43
static   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void);








static   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t arg_0x7de18108);







static   resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void);
# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7de01088);
# 51 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7de01088);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7de01b70);
# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7de01b70);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7de02730);
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7de02730);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7de02730);
# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7de02730);
# 80 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void);
# 44 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static   am_addr_t ActiveMessageAddressC$amAddress(void);
# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static   am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void);




static   am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void);
# 66 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static   void CC2420TransmitP$RadioBackoff$setCongestionBackoff(uint16_t arg_0x7e3dd590);
#line 60
static   void CC2420TransmitP$RadioBackoff$setInitialBackoff(uint16_t arg_0x7e3dd010);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   void CC2420TransmitP$CaptureSFD$captured(uint16_t arg_0x7e047d80);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void CC2420TransmitP$BackoffTimer$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static   void CC2420TransmitP$CC2420Receive$receive(uint8_t arg_0x7dd51708, message_t *arg_0x7dd518b8);
# 51 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static   error_t CC2420TransmitP$Send$send(message_t *arg_0x7e36d4f0, bool arg_0x7e36d678);
# 24 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static   void CC2420TransmitP$ChipSpiResource$releasing(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t CC2420TransmitP$Init$init(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420TransmitP$SpiResource$granted(void);
# 39 "/opt/tinyos-2.x/tos/interfaces/RadioTimeStamping.nc"
static   void CC2420TransmitP$TimeStamp$default$transmittedSFD(uint16_t arg_0x7dd83d00, message_t *arg_0x7dd83eb0);










static   void CC2420TransmitP$TimeStamp$default$receivedSFD(uint16_t arg_0x7dd803f8);
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t CC2420TransmitP$StdControl$start(void);









static  error_t CC2420TransmitP$StdControl$stop(void);
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static   void CC2420TransmitP$TXFIFO$writeDone(uint8_t *arg_0x7df88610, uint8_t arg_0x7df88798, error_t arg_0x7df88920);
#line 71
static   void CC2420TransmitP$TXFIFO$readDone(uint8_t *arg_0x7df894f8, uint8_t arg_0x7df89680, error_t arg_0x7df89808);
# 53 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static  void CC2420ReceiveP$CC2420Config$syncDone(error_t arg_0x7e3b8800);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void CC2420ReceiveP$receiveDone_task$runTask(void);
# 53 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static   void CC2420ReceiveP$CC2420Receive$sfd_dropped(void);
#line 47
static   void CC2420ReceiveP$CC2420Receive$sfd(uint16_t arg_0x7dd55de8);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t CC2420ReceiveP$Init$init(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420ReceiveP$SpiResource$granted(void);
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static   void CC2420ReceiveP$RXFIFO$writeDone(uint8_t *arg_0x7df88610, uint8_t arg_0x7df88798, error_t arg_0x7df88920);
#line 71
static   void CC2420ReceiveP$RXFIFO$readDone(uint8_t *arg_0x7df894f8, uint8_t arg_0x7df89680, error_t arg_0x7df89808);
# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void CC2420ReceiveP$InterruptFIFOP$fired(void);
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t CC2420ReceiveP$StdControl$start(void);









static  error_t CC2420ReceiveP$StdControl$stop(void);
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static   cc2420_header_t *CC2420PacketC$CC2420PacketBody$getHeader(message_t *arg_0x7e3bc7a8);




static   cc2420_metadata_t *CC2420PacketC$CC2420PacketBody$getMetadata(message_t *arg_0x7e3bccf8);
# 48 "/opt/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
static   error_t CC2420PacketC$Acks$requestAck(message_t *arg_0x7ea35010);
#line 60
static   error_t CC2420PacketC$Acks$noAck(message_t *arg_0x7ea35720);
#line 74
static   bool CC2420PacketC$Acks$wasAcked(message_t *arg_0x7ea35dc0);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void UniqueSendP$SubSend$sendDone(message_t *arg_0x7e3c1598, error_t arg_0x7e3c1720);
#line 64
static  error_t UniqueSendP$Send$send(message_t *arg_0x7e3c2340, uint8_t arg_0x7e3c24c8);
#line 114
static  void *UniqueSendP$Send$getPayload(message_t *arg_0x7e3c01f8, uint8_t arg_0x7e3c0380);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t UniqueSendP$Init$init(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *UniqueReceiveP$SubReceive$receive(message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t UniqueReceiveP$Init$init(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *UniqueReceiveP$DuplicateReceive$default$receive(message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$Init$init(void);
# 47 "../../../tos/lib/data/cache/DataCache.nc"
static  /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$DataCache$item_t */*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$DataCache$insert(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$DataCache$item_t *arg_0x7e8566e8);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$Init$init(void);
# 47 "../../../tos/lib/data/cache/DataCache.nc"
static  /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$item_t */*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$insert(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$item_t *arg_0x7e8566e8);
#line 66
static  /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$item_t */*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$lookup(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$item_t *arg_0x7e855360);
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$getNow(void);
#line 92
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type arg_0x7e3289e0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$size_type arg_0x7e328b70);
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
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$fired(void);
# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$getNow(void);
#line 118
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t arg_0x7eb64238, uint32_t arg_0x7eb643c8);
#line 67
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$stop(void);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void);
#line 125
static  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7db1e010);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7db1e010);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7db1e010, 
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t arg_0x7eb70010);








static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7db1e010, 
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t arg_0x7eb705e0);




static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7db1e010);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void);
# 51 "../../../tos/lib/data/timer/DataTimer.nc"
static  error_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$start(/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$data_t arg_0x7e6f2820, data_timer_time_t arg_0x7e6f29b8);









static  error_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$stop(/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$data_t arg_0x7e6f1168);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Init$init(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$fired(void);
# 34 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
static   void /*DsrP.ComposeC*/BitVectorC$0$BitVector$clearAll(void);
#line 58
static   void /*DsrP.ComposeC*/BitVectorC$0$BitVector$clear(uint16_t arg_0x7e6e5850);
#line 46
static   bool /*DsrP.ComposeC*/BitVectorC$0$BitVector$get(uint16_t arg_0x7e6e6df8);





static   void /*DsrP.ComposeC*/BitVectorC$0$BitVector$set(uint16_t arg_0x7e6e5350);
#line 34
static   void /*DsrP.SalvageC*/BitVectorC$1$BitVector$clearAll(void);
#line 58
static   void /*DsrP.SalvageC*/BitVectorC$1$BitVector$clear(uint16_t arg_0x7e6e5850);
#line 46
static   bool /*DsrP.SalvageC*/BitVectorC$1$BitVector$get(uint16_t arg_0x7e6e6df8);





static   void /*DsrP.SalvageC*/BitVectorC$1$BitVector$set(uint16_t arg_0x7e6e5350);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$Init$init(void);
# 74 "../../../tos/lib/data/cache/DataCache.nc"
static  error_t /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$DataCache$remove(/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$DataCache$item_t *arg_0x7e855978);
#line 47
static  /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$DataCache$item_t */*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$DataCache$insert(/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$DataCache$item_t *arg_0x7e8566e8);
#line 66
static  /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$DataCache$item_t */*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$DataCache$lookup(/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$DataCache$item_t *arg_0x7e855360);
# 96 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
static  /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$t */*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$get(void);
#line 61
static  bool /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$empty(void);
#line 88
static  error_t /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$put(/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$t *arg_0x7e8473c0);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Init$init(void);
# 96 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
static  /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$Pool$t */*PacketEngineC.SendPoolC.PoolP*/PoolP$1$Pool$get(void);
#line 61
static  bool /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$Pool$empty(void);
#line 88
static  error_t /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$Pool$put(/*PacketEngineC.SendPoolC.PoolP*/PoolP$1$Pool$t *arg_0x7e8473c0);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$Init$init(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t arg_0x7eb81d30, message_t *arg_0x7eb81ee0, uint8_t arg_0x7eb80088);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *arg_0x7e3c1598, error_t arg_0x7e3c1720);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(
# 40 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x7da470f8, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7eb750a8, error_t arg_0x7eb75230);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7da48770, 
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x7e3c2340, uint8_t arg_0x7e3c24c8);
#line 89
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7da48770, 
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x7e3c1598, error_t arg_0x7e3c1720);
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void);
#line 64
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask$runTask(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t SinglePacketP$SubSend$default$send(
# 52 "../../../tos/lib/netarch/single/SinglePacketP.nc"
packet_client_id_t arg_0x7d9f3d38, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x7eb81d30, message_t *arg_0x7eb81ee0, uint8_t arg_0x7eb80088);
#line 124
static  void *SinglePacketP$SubSend$default$getPayload(
# 52 "../../../tos/lib/netarch/single/SinglePacketP.nc"
packet_client_id_t arg_0x7d9f3d38, 
# 124 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7eb75ce0, uint8_t arg_0x7eb75e68);
#line 99
static  void SinglePacketP$SubSend$sendDone(
# 52 "../../../tos/lib/netarch/single/SinglePacketP.nc"
packet_client_id_t arg_0x7d9f3d38, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7eb750a8, error_t arg_0x7eb75230);
# 47 "../../../tos/lib/netarch/single/SinglePacket.nc"
static  am_addr_t SinglePacketP$SinglePacket$source(message_t *arg_0x7eaa3010);
#line 67
static  am_addr_t SinglePacketP$SinglePacket$destination(message_t *arg_0x7eaa1140);
#line 59
static  void SinglePacketP$SinglePacket$setSource(message_t *arg_0x7eaa3750, am_addr_t arg_0x7eaa38e0);
#line 79
static  void SinglePacketP$SinglePacket$setDestination(message_t *arg_0x7eaa1890, am_addr_t arg_0x7eaa1a20);









static  bool SinglePacketP$SinglePacket$isForMe(message_t *arg_0x7eaa0288);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *SinglePacketP$SubReceive$receive(
# 53 "../../../tos/lib/netarch/single/SinglePacketP.nc"
am_id_t arg_0x7d9f26e8, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t SinglePacketP$Send$send(
# 45 "../../../tos/lib/netarch/single/SinglePacketP.nc"
packet_client_id_t arg_0x7d9f5b58, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x7eb81d30, message_t *arg_0x7eb81ee0, uint8_t arg_0x7eb80088);
#line 124
static  void *SinglePacketP$Send$getPayload(
# 45 "../../../tos/lib/netarch/single/SinglePacketP.nc"
packet_client_id_t arg_0x7d9f5b58, 
# 124 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7eb75ce0, uint8_t arg_0x7eb75e68);
#line 99
static  void SinglePacketP$Send$default$sendDone(
# 45 "../../../tos/lib/netarch/single/SinglePacketP.nc"
packet_client_id_t arg_0x7d9f5b58, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7eb750a8, error_t arg_0x7eb75230);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *SinglePacketP$Snoop$default$receive(
# 47 "../../../tos/lib/netarch/single/SinglePacketP.nc"
am_id_t arg_0x7d9f4a90, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t SinglePacketP$Packet$payloadLength(message_t *arg_0x7eb45938);
#line 115
static  void *SinglePacketP$Packet$getPayload(message_t *arg_0x7eb44d60, uint8_t arg_0x7eb44ee8);
#line 83
static  void SinglePacketP$Packet$setPayloadLength(message_t *arg_0x7eb44010, uint8_t arg_0x7eb44198);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *SinglePacketP$Receive$default$receive(
# 46 "../../../tos/lib/netarch/single/SinglePacketP.nc"
am_id_t arg_0x7d9f44b8, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0);
# 47 "../../../tos/lib/netarch/multihop/PacketEngineClient.nc"
static  am_id_t /*DsrC.DsrSendC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$0$PacketEngineClient$upperType(void);






static  am_id_t /*DsrC.DsrSendC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$0$PacketEngineClient$defaultLowerType(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t arg_0x7eb81d30, message_t *arg_0x7eb81ee0, uint8_t arg_0x7eb80088);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *arg_0x7e3c1598, error_t arg_0x7e3c1720);
# 47 "../../../tos/lib/netarch/multihop/PacketEngineClient.nc"
static  am_id_t /*UnicastCountToLedsAppC.AMSenderC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$1$PacketEngineClient$upperType(void);






static  am_id_t /*UnicastCountToLedsAppC.AMSenderC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$1$PacketEngineClient$defaultLowerType(void);
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
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void);
#line 47
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void);


static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput(void);
#line 46
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set(void);
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr(void);




static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput(void);
#line 52
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput(void);
#line 52
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput(void);
#line 50
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void);
#line 45
static __inline   bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$get(void);
#line 45
static __inline   bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get(void);




static __inline   void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void);
#line 45
static __inline   bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get(void);




static __inline   void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void);
#line 45
static __inline   bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get(void);
# 33 "/opt/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
enum MeasureClockC$__nesc_unnamed4343 {


  MeasureClockC$MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC$cycles;

static inline  error_t MeasureClockC$Init$init(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RealMainP$SoftwareInit$init(void);
# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static  void RealMainP$Boot$booted(void);
# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static  error_t RealMainP$PlatformInit$init(void);
# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static  void RealMainP$Scheduler$init(void);
#line 61
static  void RealMainP$Scheduler$taskLoop(void);
#line 54
static  bool RealMainP$Scheduler$runNextTask(void);
# 52 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
int main(void)   ;
# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP$TaskBasic$runTask(
# 45 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x7f071c40);
# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static   void SchedulerBasicP$McuSleep$sleep(void);
# 50 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP$__nesc_unnamed4344 {

  SchedulerBasicP$NUM_TASKS = 18U, 
  SchedulerBasicP$NO_TASK = 255
};

volatile uint8_t SchedulerBasicP$m_head;
volatile uint8_t SchedulerBasicP$m_tail;
volatile uint8_t SchedulerBasicP$m_next[SchedulerBasicP$NUM_TASKS];








static __inline uint8_t SchedulerBasicP$popTask(void);
#line 86
static inline bool SchedulerBasicP$isWaiting(uint8_t id);




static inline bool SchedulerBasicP$pushTask(uint8_t id);
#line 113
static inline  void SchedulerBasicP$Scheduler$init(void);









static  bool SchedulerBasicP$Scheduler$runNextTask(void);
#line 138
static inline  void SchedulerBasicP$Scheduler$taskLoop(void);
#line 159
static   error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id);




static   void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id);
# 54 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static   mcu_power_t McuSleepC$McuPowerOverride$lowestState(void);
# 58 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
const_uint8_t McuSleepC$atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 3, ((
1 << 2) | (1 << 4)) | (1 << 3), (
1 << 4) | (1 << 3), (
1 << 2) | (1 << 4), 
1 << 4 };

static inline mcu_power_t McuSleepC$getPowerState(void);
#line 97
static inline   void McuSleepC$McuSleep$sleep(void);
#line 109
static inline   void McuSleepC$McuPowerState$update(void);
# 83 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  error_t UnicastCountToLedsC$AMControl$start(void);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t UnicastCountToLedsC$AMSend$send(am_addr_t arg_0x7eb81d30, message_t *arg_0x7eb81ee0, uint8_t arg_0x7eb80088);
#line 124
static  void *UnicastCountToLedsC$AMSend$getPayload(message_t *arg_0x7eb75ce0, uint8_t arg_0x7eb75e68);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void UnicastCountToLedsC$MilliTimer$startPeriodic(uint32_t arg_0x7eb70010);
# 50 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static   void UnicastCountToLedsC$Leds$led0Off(void);










static   void UnicastCountToLedsC$Leds$led1On(void);




static   void UnicastCountToLedsC$Leds$led1Off(void);
#line 83
static   void UnicastCountToLedsC$Leds$led2Off(void);
#line 45
static   void UnicastCountToLedsC$Leds$led0On(void);
#line 78
static   void UnicastCountToLedsC$Leds$led2On(void);
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t UnicastCountToLedsC$AMPacket$address(void);
# 94 "UnicastCountToLedsC.nc"
message_t UnicastCountToLedsC$packet;

uint16_t UnicastCountToLedsC$counter = 0;
#line 108
static inline  void UnicastCountToLedsC$Boot$booted(void);




static inline  void UnicastCountToLedsC$AMControl$startDone(error_t err);










static inline  void UnicastCountToLedsC$AMControl$stopDone(error_t err);

static inline  void UnicastCountToLedsC$MilliTimer$fired(void);
#line 139
static inline  message_t *UnicastCountToLedsC$Receive$receive(message_t *bufPtr, 
void *payload, uint8_t len);
#line 167
static inline  void UnicastCountToLedsC$AMSend$sendDone(message_t *bufPtr, error_t error);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void LedsP$Led0$makeOutput(void);
#line 29
static   void LedsP$Led0$set(void);
static   void LedsP$Led0$clr(void);




static   void LedsP$Led1$makeOutput(void);
#line 29
static   void LedsP$Led1$set(void);
static   void LedsP$Led1$clr(void);




static   void LedsP$Led2$makeOutput(void);
#line 29
static   void LedsP$Led2$set(void);
static   void LedsP$Led2$clr(void);
# 45 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline  error_t LedsP$Init$init(void);
#line 63
static inline   void LedsP$Leds$led0On(void);




static inline   void LedsP$Leds$led0Off(void);









static inline   void LedsP$Leds$led1On(void);




static inline   void LedsP$Leds$led1Off(void);









static inline   void LedsP$Leds$led2On(void);




static inline   void LedsP$Leds$led2Off(void);
# 85 "../../../tos/lib/netarch/tlv/TlvMultiple.nc"
static  void */*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiple$value(
# 56 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
uint8_t arg_0x7e983970, 
# 85 "../../../tos/lib/netarch/tlv/TlvMultiple.nc"
void *arg_0x7e987ed8, tlv_key_t arg_0x7e986088);
#line 126
static  tlv_key_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiple$list(
# 56 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
uint8_t arg_0x7e983970, 
# 126 "../../../tos/lib/netarch/tlv/TlvMultiple.nc"
void *arg_0x7e983360);
#line 52
static  uint8_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiple$length(
# 56 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
uint8_t arg_0x7e983970, 
# 52 "../../../tos/lib/netarch/tlv/TlvMultiple.nc"
void *arg_0x7e990510, tlv_key_t arg_0x7e9906a0);
#line 103
static  error_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiple$add(
# 56 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
uint8_t arg_0x7e983970, 
# 103 "../../../tos/lib/netarch/tlv/TlvMultiple.nc"
void *arg_0x7e986850, tlv_key_t *arg_0x7e986a00, 
uint8_t arg_0x7e986b98, uint8_t arg_0x7e986d28, uint8_t arg_0x7e986eb0);
# 60 "../../../tos/interfaces/StaticVoidIndexedIterator.nc"
static  iterator_end_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvList$end(
# 57 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
uint8_t arg_0x7e977de8, 
# 60 "../../../tos/interfaces/StaticVoidIndexedIterator.nc"
void *arg_0x7e977600, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvList$iterator_item_t arg_0x7e977790);
#line 51
static  /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvList$iterator_item_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvList$next(
# 57 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
uint8_t arg_0x7e977de8, 
# 51 "../../../tos/interfaces/StaticVoidIndexedIterator.nc"
void *arg_0x7e980cb0, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvList$iterator_item_t arg_0x7e980e40);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$payloadLength(message_t *arg_0x7eb45938);
#line 115
static  void */*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$getPayload(message_t *arg_0x7eb44d60, uint8_t arg_0x7eb44ee8);
#line 95
static  uint8_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$maxPayloadLength(void);
#line 83
static  void /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$setPayloadLength(message_t *arg_0x7eb44010, uint8_t arg_0x7eb44198);
# 69 "../../../tos/lib/netarch/tlv/TlvBlock.nc"
static  uint8_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvBlock$length(void *arg_0x7e9a3010);
#line 51
static  error_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvBlock$add(void *arg_0x7e9a5a40, uint8_t arg_0x7e9a5bd0, uint8_t arg_0x7e9a5d58);
# 77 "../../../tos/lib/netarch/tlv/TlvSingle.nc"
static  void */*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSingle$value(
# 55 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
uint8_t arg_0x7e9945d0, 
# 77 "../../../tos/lib/netarch/tlv/TlvSingle.nc"
void *arg_0x7e996838);
#line 106
static  error_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSingle$remove(
# 55 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
uint8_t arg_0x7e9945d0, 
# 106 "../../../tos/lib/netarch/tlv/TlvSingle.nc"
void *arg_0x7e995e50, uint8_t arg_0x7e994010);
#line 50
static  uint8_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSingle$length(
# 55 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
uint8_t arg_0x7e9945d0, 
# 50 "../../../tos/lib/netarch/tlv/TlvSingle.nc"
void *arg_0x7e997010);
#line 67
static  error_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSingle$setLength(
# 55 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
uint8_t arg_0x7e9945d0, 
# 67 "../../../tos/lib/netarch/tlv/TlvSingle.nc"
void *arg_0x7e997780, uint8_t arg_0x7e997908, 
uint8_t arg_0x7e997aa8, uint8_t arg_0x7e997c30);
#line 95
static  error_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSingle$add(
# 55 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
uint8_t arg_0x7e9945d0, 
# 95 "../../../tos/lib/netarch/tlv/TlvSingle.nc"
void *arg_0x7e995010, uint8_t arg_0x7e995198, 
uint8_t arg_0x7e995338, uint8_t arg_0x7e9954c0);
# 66 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
static void */*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$preLengthChange(message_t *pkt, uint8_t *trailLen);
static void /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$postLengthChange(message_t *pkt, void *data, uint8_t trailLen);
static inline uint8_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$maxLen(void);
#line 81
static inline  error_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvBlockPacket$add(message_t *pkt);
#line 123
static  uint8_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSinglePacket$length(uint8_t type, message_t *pkt);
#line 140
static  error_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSinglePacket$setLength(uint8_t type, message_t *pkt, uint8_t len);
#line 155
static  void */*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSinglePacket$value(uint8_t type, message_t *pkt);
#line 173
static  error_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSinglePacket$add(uint8_t type, message_t *pkt, uint8_t len);
#line 188
static  error_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSinglePacket$remove(uint8_t type, message_t *pkt);
#line 206
static inline  uint8_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiplePacket$length(uint8_t type, message_t *pkt, tlv_key_t key);
#line 244
static inline  void */*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiplePacket$value(uint8_t type, message_t *pkt, tlv_key_t key);
#line 262
static inline  error_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiplePacket$add(uint8_t type, message_t *pkt, tlv_key_t *key, 
uint8_t len);
#line 296
static  tlv_key_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiplePacket$list(uint8_t type, message_t *pkt);
#line 309
static inline  tlv_key_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvListPacket$next(uint8_t type, message_t *pkt, tlv_key_t key);










static inline  iterator_end_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvListPacket$end(uint8_t type, message_t *pkt, tlv_key_t key);
#line 346
static inline  uint8_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$Packet$payloadLength(message_t *pkt);
#line 365
static inline  void /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$Packet$setPayloadLength(message_t *pkt, uint8_t len);
#line 402
static  void */*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$Packet$getPayload(message_t *pkt, uint8_t len);
#line 425
static void */*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$preLengthChange(message_t *pkt, uint8_t *trailLen);
#line 442
static void /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$postLengthChange(message_t *pkt, void *data, uint8_t trailLen);








static inline uint8_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$maxLen(void);
# 58 "../../../tos/lib/netarch/tlv/TlvP.nc"
enum TlvP$__nesc_unnamed4345 {
  TlvP$TLV_FIRST_KEY = 255
};



static inline tlv_t *TlvP$tlvAt(void *block, tlv_key_t key);
#line 79
static inline  error_t TlvP$TlvBlock$add(void *block, uint8_t trailLen, uint8_t maxLen);
#line 111
static inline  uint8_t TlvP$TlvBlock$length(void *block);
#line 125
static inline  uint8_t TlvP$TlvSingle$length(uint8_t type, void *block);
#line 147
static inline  error_t TlvP$TlvSingle$setLength(uint8_t type, void *block, uint8_t len, 
uint8_t trailLen, uint8_t maxLen);
#line 162
static inline  void *TlvP$TlvSingle$value(uint8_t type, void *block);
#line 185
static inline  error_t TlvP$TlvSingle$add(uint8_t type, void *block, uint8_t len, 
uint8_t trailLen, uint8_t maxLen);
#line 200
static inline  error_t TlvP$TlvSingle$remove(uint8_t type, void *block, uint8_t trailLen);
#line 215
static  uint8_t TlvP$TlvMultiple$length(uint8_t type, void *block, tlv_key_t key);
#line 243
static  error_t TlvP$TlvMultiple$setLength(uint8_t type, void *block, tlv_key_t key, 
uint8_t len, uint8_t trailLen, 
uint8_t maxLen);
#line 282
static  void *TlvP$TlvMultiple$value(uint8_t type, void *block, tlv_key_t key);
#line 307
static  error_t TlvP$TlvMultiple$add(uint8_t type, void *block, tlv_key_t *key, 
uint8_t len, uint8_t trailLen, uint8_t maxLen);
#line 337
static inline  error_t TlvP$TlvMultiple$remove(uint8_t type, void *block, tlv_key_t key, uint8_t trailLen);
#line 349
static inline  tlv_key_t TlvP$TlvMultiple$list(uint8_t type, void *block);
#line 362
static  tlv_key_t TlvP$TlvList$next(uint8_t type, void *block, tlv_key_t key);
#line 389
static inline  iterator_end_t TlvP$TlvList$end(uint8_t type, void *block, tlv_key_t key);
#line 403
static inline tlv_t *TlvP$tlvAt(void *block, tlv_key_t key);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t PacketEngineP$SubSend$send(
# 94 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e8714e0, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x7eb81d30, message_t *arg_0x7eb81ee0, uint8_t arg_0x7eb80088);
# 96 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
static  PacketEngineP$SendPool$t *PacketEngineP$SendPool$get(void);
#line 61
static  bool PacketEngineP$SendPool$empty(void);
#line 88
static  error_t PacketEngineP$SendPool$put(PacketEngineP$SendPool$t *arg_0x7e8473c0);
# 47 "../../../tos/lib/netarch/multihop/PacketEngineClient.nc"
static  am_id_t PacketEngineP$PacketEngineClient$upperType(
# 98 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
packet_client_id_t arg_0x7e863208);
# 54 "../../../tos/lib/netarch/multihop/PacketEngineClient.nc"
static  am_id_t PacketEngineP$PacketEngineClient$defaultLowerType(
# 98 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
packet_client_id_t arg_0x7e863208);
# 96 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
static  PacketEngineP$ReceivePool$t *PacketEngineP$ReceivePool$get(void);
#line 61
static  bool PacketEngineP$ReceivePool$empty(void);
#line 88
static  error_t PacketEngineP$ReceivePool$put(PacketEngineP$ReceivePool$t *arg_0x7e8473c0);
# 31 "/opt/tinyos-2.x/tos/interfaces/Intercept.nc"
static  bool PacketEngineP$Intercept$forward(
# 86 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e875ee8, 
# 31 "/opt/tinyos-2.x/tos/interfaces/Intercept.nc"
message_t *arg_0x7e875528, void *arg_0x7e8756c8, uint16_t arg_0x7e875858);
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t PacketEngineP$Random$rand16(void);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void PacketEngineP$Send$sendDone(
# 84 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
packet_client_id_t arg_0x7e8841a0, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7eb750a8, error_t arg_0x7eb75230);
# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static   void PacketEngineP$SendState$toIdle(void);
#line 45
static   error_t PacketEngineP$SendState$requestState(uint8_t arg_0x7e844ad0);





static   void PacketEngineP$SendState$forceState(uint8_t arg_0x7e841088);
# 74 "../../../tos/lib/data/cache/DataCache.nc"
static  error_t PacketEngineP$SendQueue$remove(PacketEngineP$SendQueue$item_t *arg_0x7e855978);
#line 47
static  PacketEngineP$SendQueue$item_t *PacketEngineP$SendQueue$insert(PacketEngineP$SendQueue$item_t *arg_0x7e8566e8);
#line 66
static  PacketEngineP$SendQueue$item_t *PacketEngineP$SendQueue$lookup(PacketEngineP$SendQueue$item_t *arg_0x7e855360);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t PacketEngineP$SubPacket$payloadLength(
# 96 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e870500, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
message_t *arg_0x7eb45938);
#line 115
static  void *PacketEngineP$SubPacket$getPayload(
# 96 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e870500, 
# 115 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
message_t *arg_0x7eb44d60, uint8_t arg_0x7eb44ee8);
#line 83
static  void PacketEngineP$SubPacket$setPayloadLength(
# 96 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e870500, 
# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
message_t *arg_0x7eb44010, uint8_t arg_0x7eb44198);
# 57 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
static  void PacketEngineP$PacketEngine$sendAdded(
# 88 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e877b78, 
# 57 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7ea66618, message_t *arg_0x7ea667c8);










static  void PacketEngineP$PacketEngine$receiveAdded(
# 88 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e877b78, 
# 68 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7ea65010, message_t *arg_0x7ea651c0);










static  void PacketEngineP$PacketEngine$snoopAdded(
# 88 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e877b78, 
# 79 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7ea659b0, message_t *arg_0x7ea65b60);
#line 113
static  packet_send_action_t PacketEngineP$PacketEngine$sendDone(
# 88 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e877b78, 
# 113 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
packet_id_t arg_0x7ea63380, message_t *arg_0x7ea63530, error_t arg_0x7ea636b8);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t PacketEngineP$msgAction$postTask(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *PacketEngineP$Receive$receive(
# 85 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
am_id_t arg_0x7e884ad0, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t PacketEngineP$msgAdded$postTask(void);
# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void PacketEngineP$SendBackoff$startOneShot(uint32_t arg_0x7eb705e0);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t PacketEngineP$SubSendPacket$payloadLength(message_t *arg_0x7eb45938);
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t PacketEngineP$AMPacket$destination(message_t *arg_0x7eb35888);
#line 136
static  am_id_t PacketEngineP$AMPacket$type(message_t *arg_0x7eb33da0);
#line 151
static  void PacketEngineP$AMPacket$setType(message_t *arg_0x7eb31350, am_id_t arg_0x7eb314d8);
#line 125
static  bool PacketEngineP$AMPacket$isForMe(message_t *arg_0x7eb33670);
# 194 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
enum PacketEngineP$__nesc_unnamed4346 {
#line 194
  PacketEngineP$msgAdded = 0U
};
#line 194
typedef int PacketEngineP$__nesc_sillytask_msgAdded[PacketEngineP$msgAdded];
enum PacketEngineP$__nesc_unnamed4347 {
#line 195
  PacketEngineP$msgAction = 1U
};
#line 195
typedef int PacketEngineP$__nesc_sillytask_msgAction[PacketEngineP$msgAction];
#line 125
#line 121
typedef struct PacketEngineP$__nesc_unnamed4348 {
  unsigned state : 5;
  unsigned srcLayer : 1;
  message_t *msg;
} PacketEngineP$msg_entry_t;


enum PacketEngineP$__nesc_unnamed4349 {

  PacketEngineP$PKT_FREE = 1 << 0, 

  PacketEngineP$PKT_ADDED = 1 << 1, 

  PacketEngineP$PKT_WAIT = 1 << 2, 

  PacketEngineP$PKT_SEND = 1 << 3, 

  PacketEngineP$PKT_SEND_INTERCEPT = 1 << 4
};


enum PacketEngineP$__nesc_unnamed4350 {

  PacketEngineP$PKT_UPPER_LAYER, 

  PacketEngineP$PKT_LOWER_LAYER
};


enum PacketEngineP$__nesc_unnamed4351 {
  PacketEngineP$S_IDLE, 
  PacketEngineP$S_SENDING, 
  PacketEngineP$S_BACKOFF
};


PacketEngineP$msg_entry_t PacketEngineP$msgBuffer[PacketEngineP$BUFFER_SIZE];


packet_id_t PacketEngineP$nextFreePkt;


packet_id_t PacketEngineP$nextAddedPkt;


packet_id_t PacketEngineP$nextWaitPkt;


packet_id_t PacketEngineP$nextActionPkt;


bool PacketEngineP$running;


bool PacketEngineP$radioOn;



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
#line 213
static inline  error_t PacketEngineP$StdControl$start(void);
#line 230
static inline  void PacketEngineP$RadioControl$startDone(error_t err);








static inline  void PacketEngineP$RadioControl$stopDone(error_t err);
#line 265
static  error_t PacketEngineP$Send$send(packet_client_id_t clientId, am_addr_t addr, message_t *msg, 
uint8_t len);
#line 318
static inline   void PacketEngineP$Send$default$sendDone(packet_client_id_t clientId, message_t *msg, error_t error);
#line 363
static inline  void *PacketEngineP$Send$getPayload(packet_client_id_t clientId, message_t *msg, uint8_t len);
#line 375
static inline   am_id_t PacketEngineP$PacketEngineClient$default$upperType(packet_client_id_t clientId);









static inline   am_id_t PacketEngineP$PacketEngineClient$default$defaultLowerType(packet_client_id_t clientId);
#line 400
static inline  void PacketEngineP$SendQueue$evicted(packet_send_entry_t *sendQueue);
#line 421
static inline  bool PacketEngineP$SendQueueEqual$test(packet_send_entry_t *a, packet_send_entry_t *b);
#line 436
static inline   message_t *PacketEngineP$Receive$default$receive(am_id_t upperId, message_t *msg, void *payload, uint8_t len);
#line 455
static  message_t *PacketEngineP$SubReceive$receive(am_id_t lowerId, message_t *msg, void *payload, uint8_t len);
#line 491
static inline   error_t PacketEngineP$SubSend$default$send(am_id_t lowerId, am_addr_t addr, message_t *msg, uint8_t len);
#line 505
static  void PacketEngineP$SubSend$sendDone(am_id_t lowerId, message_t *msg, error_t error);
#line 557
static  uint8_t PacketEngineP$Packet$payloadLength(message_t *msg);
#line 574
static  void PacketEngineP$Packet$setPayloadLength(message_t *msg, uint8_t len);
#line 588
static inline  uint8_t PacketEngineP$Packet$maxPayloadLength(void);
#line 611
static  void *PacketEngineP$Packet$getPayload(message_t *msg, uint8_t len);
#line 626
static inline   uint8_t PacketEngineP$SubPacket$default$payloadLength(am_id_t lowerId, message_t *msg);










static inline   void PacketEngineP$SubPacket$default$setPayloadLength(am_id_t lowerId, message_t *msg, uint8_t len);










static inline   void *PacketEngineP$SubPacket$default$getPayload(am_id_t lowerId, message_t *msg, uint8_t len);









static inline  void PacketEngineP$SendBackoff$fired(void);
#line 672
static inline   void PacketEngineP$PacketEngine$default$sendAdded(am_id_t lowerId, packet_id_t pid, message_t *msg);










static inline   void PacketEngineP$PacketEngine$default$receiveAdded(am_id_t lowerId, packet_id_t pid, message_t *msg);










static inline   void PacketEngineP$PacketEngine$default$snoopAdded(am_id_t lowerId, packet_id_t pid, message_t *msg);










static  message_t *PacketEngineP$PacketEngine$packet(am_id_t lowerId, packet_id_t pid);
#line 721
static  error_t PacketEngineP$PacketEngine$send(am_id_t lowerId, packet_id_t pid);
#line 742
static inline   packet_send_action_t PacketEngineP$PacketEngine$default$sendDone(am_id_t lowerId, packet_id_t pid, 
message_t *msg, 
error_t result);
#line 758
static inline  error_t PacketEngineP$PacketEngine$sendIntercept(am_id_t lowerId, packet_id_t pid);
#line 776
static  error_t PacketEngineP$PacketEngine$receive(am_id_t lowerId, packet_id_t pid);
#line 802
static  error_t PacketEngineP$PacketEngine$drop(am_id_t lowerId, packet_id_t pid);
#line 824
static  packet_id_t PacketEngineP$PacketEngine$waitList(am_id_t lowerId);
#line 839
static  packet_am_id_t PacketEngineP$PacketEngine$upperType(am_id_t lowerId, packet_id_t pid);
#line 852
static inline  void PacketEngineP$PacketEngine$setUpperType(am_id_t lowerId, packet_id_t pid, am_id_t newUid);
#line 868
static  error_t PacketEngineP$PacketEngine$upperSendDone(am_id_t lowerId, packet_id_t pid, error_t result);
#line 892
static  packet_id_t PacketEngineP$PacketWaitList$next(am_id_t lowerId, packet_id_t m);
#line 908
static inline  iterator_end_t PacketEngineP$PacketWaitList$end(am_id_t lowerId, packet_id_t m);
#line 921
static packet_id_t PacketEngineP$pidCombineInternal(packet_id_t a, packet_id_t b);
#line 934
static inline packet_id_t pidCombine(packet_id_t a, packet_id_t b)  ;
#line 951
static inline   bool PacketEngineP$Intercept$default$forward(am_id_t upperId, message_t *msg, void *payload, uint16_t len);








static inline  void PacketEngineP$msgAdded$runTask(void);
#line 1005
static inline  void PacketEngineP$msgAction$runTask(void);
#line 1092
static am_id_t PacketEngineP$uid(message_t *msg);








static void PacketEngineP$setUid(message_t *msg, am_id_t newUid);








static inline am_id_t PacketEngineP$lid(message_t *msg);








static inline void PacketEngineP$setLid(message_t *msg, am_id_t newLid);








static void PacketEngineP$setIds(message_t *msg, packet_client_id_t clientId);
#line 1143
static inline void PacketEngineP$moveFreeIndex(void);







static inline void PacketEngineP$moveAddedIndex(void);







static inline void PacketEngineP$moveWaitIndex(void);







static inline void PacketEngineP$moveActionIndex(void);
#line 1180
static void PacketEngineP$moveIndex(packet_id_t *idx, uint8_t state);
#line 1202
static inline void PacketEngineP$printIndices(void);
#line 1215
static void PacketEngineP$addPacket(message_t *msg);
#line 1236
static void PacketEngineP$markPacket(packet_id_t pid, uint8_t state);
#line 1256
static void PacketEngineP$removePacket(packet_id_t pid);
#line 1277
static void PacketEngineP$startSendBackoff(uint16_t mask, uint16_t offset);
# 41 "/opt/tinyos-2.x/tos/system/RandomMlcgP.nc"
uint32_t RandomMlcgP$seed;


static inline  error_t RandomMlcgP$Init$init(void);
#line 58
static   uint32_t RandomMlcgP$Random$rand32(void);
#line 78
static inline   uint16_t RandomMlcgP$Random$rand16(void);
# 47 "../../../tos/lib/data/cache/DataCache.nc"
static  /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutCache$item_t */*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutCache$insert(/*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutCache$item_t *arg_0x7e8566e8);
#line 66
static  /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutCache$item_t */*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutCache$lookup(/*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutCache$item_t *arg_0x7e855360);
# 51 "../../../tos/lib/data/timer/DataTimer.nc"
static  error_t /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutTimer$start(/*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutTimer$data_t arg_0x7e6f2820, data_timer_time_t arg_0x7e6f29b8);









static  error_t /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutTimer$stop(/*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutTimer$data_t arg_0x7e6f1168);
# 60 "../../../tos/interfaces/StaticIndexedIterator.nc"
static  iterator_end_t /*DsrP.DsrControlP*/DsrControlP$0$RouteErrorList$end(/*DsrP.DsrControlP*/DsrControlP$0$RouteErrorList$data_source_t *arg_0x7e9e2c28, /*DsrP.DsrControlP*/DsrControlP$0$RouteErrorList$iterator_item_t arg_0x7e9e2db8);
#line 51
static  /*DsrP.DsrControlP*/DsrControlP$0$RouteErrorList$iterator_item_t /*DsrP.DsrControlP*/DsrControlP$0$RouteErrorList$next(/*DsrP.DsrControlP*/DsrControlP$0$RouteErrorList$data_source_t *arg_0x7e9e2358, /*DsrP.DsrControlP*/DsrControlP$0$RouteErrorList$iterator_item_t arg_0x7e9e24e8);
# 56 "../../../tos/interfaces/IndexedIterator.nc"
static  iterator_end_t /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketWaitList$end(/*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketWaitList$iterator_item_t arg_0x7ea448a8);
#line 48
static  /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketWaitList$iterator_item_t /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketWaitList$next(/*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketWaitList$iterator_item_t arg_0x7ea441d8);
# 47 "../../../tos/lib/netarch/single/SinglePacket.nc"
static  am_addr_t /*DsrP.DsrControlP*/DsrControlP$0$SinglePacket$source(message_t *arg_0x7eaa3010);
#line 67
static  am_addr_t /*DsrP.DsrControlP*/DsrControlP$0$SinglePacket$destination(message_t *arg_0x7eaa1140);
#line 89
static  bool /*DsrP.DsrControlP*/DsrControlP$0$SinglePacket$isForMe(message_t *arg_0x7eaa0288);
# 179 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
static  packet_am_id_t /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$upperType(packet_id_t arg_0x7ea569a8);
#line 146
static  error_t /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$drop(packet_id_t arg_0x7ea60088);
#line 158
static  error_t /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$upperSendDone(packet_id_t arg_0x7ea60870, error_t arg_0x7ea609f8);
#line 171
static  packet_id_t /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$waitList(void);
# 47 "../../../tos/lib/data/cache/DataCache.nc"
static  /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestInCache$item_t */*DsrP.DsrControlP*/DsrControlP$0$RouteRequestInCache$insert(/*DsrP.DsrControlP*/DsrControlP$0$RouteRequestInCache$item_t *arg_0x7e8566e8);
# 98 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
static  error_t /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$send(packet_id_t arg_0x7ea64b60);
#line 135
static  error_t /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$receive(packet_id_t arg_0x7ea61860);
#line 87
static  message_t */*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$packet(packet_id_t arg_0x7ea643e8);
#line 146
static  error_t /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$drop(packet_id_t arg_0x7ea60088);
#line 158
static  error_t /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$upperSendDone(packet_id_t arg_0x7ea60870, error_t arg_0x7ea609f8);
#line 171
static  packet_id_t /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$waitList(void);
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t /*DsrP.DsrControlP*/DsrControlP$0$Random$rand16(void);
# 75 "../../../tos/lib/netarch/tlv/TlvSinglePacket.nc"
static  void */*DsrP.DsrControlP*/DsrControlP$0$RouteRequest$value(message_t *arg_0x7ea01010);
#line 100
static  error_t /*DsrP.DsrControlP*/DsrControlP$0$RouteRequest$remove(message_t *arg_0x7ea00288);
#line 51
static  uint8_t /*DsrP.DsrControlP*/DsrControlP$0$RouteRequest$length(message_t *arg_0x7ea03d50);
#line 66
static  error_t /*DsrP.DsrControlP*/DsrControlP$0$RouteRequest$setLength(message_t *arg_0x7ea02510, uint8_t arg_0x7ea02698);
#line 91
static  error_t /*DsrP.DsrControlP*/DsrControlP$0$RouteRequest$add(message_t *arg_0x7ea017c0, uint8_t arg_0x7ea01948);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*DsrP.DsrControlP*/DsrControlP$0$Send$send(am_addr_t arg_0x7eb81d30, message_t *arg_0x7eb81ee0, uint8_t arg_0x7eb80088);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*DsrP.DsrControlP*/DsrControlP$0$composePkt$postTask(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t /*DsrP.DsrControlP*/DsrControlP$0$ComposePacket$payloadLength(message_t *arg_0x7eb45938);
#line 83
static  void /*DsrP.DsrControlP*/DsrControlP$0$ComposePacket$setPayloadLength(message_t *arg_0x7eb44010, uint8_t arg_0x7eb44198);
# 50 "../../../tos/lib/netarch/tlv/TlvBlockPacket.nc"
static  error_t /*DsrP.DsrControlP*/DsrControlP$0$DsrHeader$add(message_t *arg_0x7ea12cc0);
# 75 "../../../tos/lib/netarch/tlv/TlvSinglePacket.nc"
static  void */*DsrP.DsrControlP*/DsrControlP$0$SourceRoute$value(message_t *arg_0x7ea01010);
#line 100
static  error_t /*DsrP.DsrControlP*/DsrControlP$0$SourceRoute$remove(message_t *arg_0x7ea00288);
#line 51
static  uint8_t /*DsrP.DsrControlP*/DsrControlP$0$SourceRoute$length(message_t *arg_0x7ea03d50);
#line 66
static  error_t /*DsrP.DsrControlP*/DsrControlP$0$SourceRoute$setLength(message_t *arg_0x7ea02510, uint8_t arg_0x7ea02698);
#line 91
static  error_t /*DsrP.DsrControlP*/DsrControlP$0$SourceRoute$add(message_t *arg_0x7ea017c0, uint8_t arg_0x7ea01948);
# 98 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
static  error_t /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$send(packet_id_t arg_0x7ea64b60);
#line 135
static  error_t /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$receive(packet_id_t arg_0x7ea61860);
#line 124
static  error_t /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$sendIntercept(packet_id_t arg_0x7ea61010);
#line 87
static  message_t */*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$packet(packet_id_t arg_0x7ea643e8);
#line 146
static  error_t /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(packet_id_t arg_0x7ea60088);
#line 158
static  error_t /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$upperSendDone(packet_id_t arg_0x7ea60870, error_t arg_0x7ea609f8);
#line 171
static  packet_id_t /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$waitList(void);
#line 187
static  void /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$setUpperType(packet_id_t arg_0x7ea55100, am_id_t arg_0x7ea55288);
# 56 "../../../tos/interfaces/IndexedIterator.nc"
static  iterator_end_t /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketWaitList$end(/*DsrP.DsrControlP*/DsrControlP$0$SinglePacketWaitList$iterator_item_t arg_0x7ea448a8);
#line 48
static  /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketWaitList$iterator_item_t /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketWaitList$next(/*DsrP.DsrControlP*/DsrControlP$0$SinglePacketWaitList$iterator_item_t arg_0x7ea441d8);
# 78 "../../../tos/lib/netarch/dsr/RouteCache.nc"
static  void /*DsrP.DsrControlP*/DsrControlP$0$SalvageRouteCache$checkRoute(route_cache_node_id_t arg_0x7e701320, route_cache_node_id_t arg_0x7e7014b8);
# 34 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
static   void /*DsrP.DsrControlP*/DsrControlP$0$Compose$clearAll(void);
#line 58
static   void /*DsrP.DsrControlP*/DsrControlP$0$Compose$clear(uint16_t arg_0x7e6e5850);
#line 46
static   bool /*DsrP.DsrControlP*/DsrControlP$0$Compose$get(uint16_t arg_0x7e6e6df8);





static   void /*DsrP.DsrControlP*/DsrControlP$0$Compose$set(uint16_t arg_0x7e6e5350);
# 82 "../../../tos/lib/netarch/tlv/TlvMultiplePacket.nc"
static  void */*DsrP.DsrControlP*/DsrControlP$0$RouteError$value(message_t *arg_0x7e9f2bf0, tlv_key_t arg_0x7e9f2d80);
#line 120
static  tlv_key_t /*DsrP.DsrControlP*/DsrControlP$0$RouteError$list(message_t *arg_0x7e9f0b50);
#line 52
static  uint8_t /*DsrP.DsrControlP*/DsrControlP$0$RouteError$length(message_t *arg_0x7e9f35a0, tlv_key_t arg_0x7e9f3730);
#line 98
static  error_t /*DsrP.DsrControlP*/DsrControlP$0$RouteError$add(message_t *arg_0x7e9f1588, tlv_key_t *arg_0x7e9f1738, 
uint8_t arg_0x7e9f18d0);
# 48 "../../../tos/interfaces/IndexedIterator.nc"
static  /*DsrP.DsrControlP*/DsrControlP$0$RouteNodeList$iterator_item_t /*DsrP.DsrControlP*/DsrControlP$0$RouteNodeList$next(/*DsrP.DsrControlP*/DsrControlP$0$RouteNodeList$iterator_item_t arg_0x7ea441d8);
# 61 "../../../tos/lib/netarch/dsr/RouteCache.nc"
static  void /*DsrP.DsrControlP*/DsrControlP$0$RouteCache$removeLink(route_cache_node_id_t arg_0x7e704e68, route_cache_node_id_t arg_0x7e702030, bool arg_0x7e7021b8);
#line 49
static  void /*DsrP.DsrControlP*/DsrControlP$0$RouteCache$addPath(route_cache_node_id_t arg_0x7e704338[], route_cache_link_id_t arg_0x7e7044d8, bool arg_0x7e704660);
#line 70
static  void /*DsrP.DsrControlP*/DsrControlP$0$RouteCache$trackRoute(route_cache_node_id_t arg_0x7e7029e8, route_cache_node_id_t arg_0x7e702b80);
# 56 "../../../tos/interfaces/IndexedIterator.nc"
static  iterator_end_t /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketWaitList$end(/*DsrP.DsrControlP*/DsrControlP$0$DsrPacketWaitList$iterator_item_t arg_0x7ea448a8);
#line 48
static  /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketWaitList$iterator_item_t /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketWaitList$next(/*DsrP.DsrControlP*/DsrControlP$0$DsrPacketWaitList$iterator_item_t arg_0x7ea441d8);
# 34 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
static   void /*DsrP.DsrControlP*/DsrControlP$0$Salvage$clearAll(void);
#line 58
static   void /*DsrP.DsrControlP*/DsrControlP$0$Salvage$clear(uint16_t arg_0x7e6e5850);
#line 46
static   bool /*DsrP.DsrControlP*/DsrControlP$0$Salvage$get(uint16_t arg_0x7e6e6df8);





static   void /*DsrP.DsrControlP*/DsrControlP$0$Salvage$set(uint16_t arg_0x7e6e5350);
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$address(void);









static  am_addr_t /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$destination(message_t *arg_0x7eb35888);
#line 92
static  void /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$setDestination(message_t *arg_0x7eb34490, am_addr_t arg_0x7eb34620);
#line 136
static  am_id_t /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$type(message_t *arg_0x7eb33da0);
#line 151
static  void /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$setType(message_t *arg_0x7eb31350, am_id_t arg_0x7eb314d8);
#line 125
static  bool /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$isForMe(message_t *arg_0x7eb33670);
# 48 "/opt/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
static   error_t /*DsrP.DsrControlP*/DsrControlP$0$Acks$requestAck(message_t *arg_0x7ea35010);
#line 60
static   error_t /*DsrP.DsrControlP*/DsrControlP$0$Acks$noAck(message_t *arg_0x7ea35720);
#line 74
static   bool /*DsrP.DsrControlP*/DsrControlP$0$Acks$wasAcked(message_t *arg_0x7ea35dc0);
# 151 "../../../tos/lib/netarch/dsr/DsrControlP.nc"
enum /*DsrP.DsrControlP*/DsrControlP$0$__nesc_unnamed4352 {
#line 151
  DsrControlP$0$composePkt = 2U
};
#line 151
typedef int /*DsrP.DsrControlP*/DsrControlP$0$__nesc_sillytask_composePkt[/*DsrP.DsrControlP*/DsrControlP$0$composePkt];
#line 135
enum /*DsrP.DsrControlP*/DsrControlP$0$__nesc_unnamed4353 {
  DsrControlP$0$NULL_ADDR = AM_BROADCAST_ADDR
};


enum /*DsrP.DsrControlP*/DsrControlP$0$__nesc_unnamed4354 {
  DsrControlP$0$S_IDLE, 
  DsrControlP$0$S_SENDING
};

uint8_t /*DsrP.DsrControlP*/DsrControlP$0$nextIdent;

uint8_t /*DsrP.DsrControlP*/DsrControlP$0$retriesLeft[20];




static inline packet_id_t /*DsrP.DsrControlP*/DsrControlP$0$findSinglePktTo(am_addr_t dest);
static packet_id_t /*DsrP.DsrControlP*/DsrControlP$0$findSingleDsrPktTo(am_addr_t dest);
static void /*DsrP.DsrControlP*/DsrControlP$0$addPath(am_addr_t src, nx_am_addr_t addr[], uint8_t numAddr, am_addr_t dest);
static error_t /*DsrP.DsrControlP*/DsrControlP$0$addRouteRequest(packet_id_t pid, message_t *msg, am_addr_t dest);
static error_t /*DsrP.DsrControlP*/DsrControlP$0$addDsrHeader(packet_id_t pid, message_t *msg);
static inline void /*DsrP.DsrControlP*/DsrControlP$0$updateRouteRequestOutTimer(am_addr_t dest, uint8_t attempts);
static inline void /*DsrP.DsrControlP*/DsrControlP$0$resetRouteRequestOutCache(am_addr_t dest);



static inline  void /*DsrP.DsrControlP*/DsrControlP$0$Boot$booted(void);
#line 179
static inline  void /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$sendAdded(packet_id_t pid, message_t *msg);
#line 202
static  void /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$receiveAdded(packet_id_t pid, message_t *msg);
#line 220
static inline  void /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$snoopAdded(packet_id_t pid, message_t *msg);
#line 238
static inline  packet_send_action_t /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$sendDone(packet_id_t pid, message_t *msg, 
error_t result);
#line 254
static inline  void /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$sendAdded(packet_id_t pid, message_t *msg);
#line 285
static  void /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$receiveAdded(packet_id_t pid, message_t *msg);
#line 470
static inline  void /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$snoopAdded(packet_id_t pid, message_t *msg);
#line 488
static inline  packet_send_action_t /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$sendDone(packet_id_t pid, message_t *msg, 
error_t result);
#line 504
static inline  void /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$sendAdded(packet_id_t pid, message_t *msg);










static inline  void /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$receiveAdded(packet_id_t pid, message_t *msg);










static inline  void /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$snoopAdded(packet_id_t pid, message_t *msg);
#line 541
static  packet_send_action_t /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$sendDone(packet_id_t pid, message_t *msg, 
error_t result);
#line 590
static  void /*DsrP.DsrControlP*/DsrControlP$0$RouteCache$routeUpdate(route_cache_node_id_t src, route_cache_node_id_t dest, 
route_cache_link_id_t numLinks);
#line 700
static  void /*DsrP.DsrControlP*/DsrControlP$0$SalvageRouteCache$routeUpdate(route_cache_node_id_t src, route_cache_node_id_t dest, 
route_cache_link_id_t numLinks);
#line 786
static inline  void /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestInCache$evicted(dsr_route_request_in_t *item);
#line 798
static inline  bool /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestInEqual$test(dsr_route_request_in_t *a, dsr_route_request_in_t *b);
#line 812
static inline  void /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutCache$evicted(dsr_route_request_out_t *item);
#line 824
static inline  bool /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutEqual$test(dsr_route_request_out_t *a, dsr_route_request_out_t *b);
#line 837
static  void /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutTimer$expired(am_addr_t dest);
#line 887
static inline  void /*DsrP.DsrControlP*/DsrControlP$0$Send$sendDone(message_t *msg, error_t error);
#line 900
static inline  void /*DsrP.DsrControlP*/DsrControlP$0$composePkt$runTask(void);
#line 1170
static inline packet_id_t /*DsrP.DsrControlP*/DsrControlP$0$findSinglePktTo(am_addr_t dest);
#line 1186
static packet_id_t /*DsrP.DsrControlP*/DsrControlP$0$findSingleDsrPktTo(am_addr_t dest);
#line 1209
static void /*DsrP.DsrControlP*/DsrControlP$0$addPath(am_addr_t src, nx_am_addr_t addr[], uint8_t numAddr, am_addr_t dest);
#line 1237
static error_t /*DsrP.DsrControlP*/DsrControlP$0$addRouteRequest(packet_id_t pid, message_t *msg, am_addr_t dest);
#line 1263
static error_t /*DsrP.DsrControlP*/DsrControlP$0$addDsrHeader(packet_id_t pid, message_t *msg);
#line 1284
static inline void /*DsrP.DsrControlP*/DsrControlP$0$updateRouteRequestOutTimer(am_addr_t dest, uint8_t attempts);
#line 1300
static inline void /*DsrP.DsrControlP*/DsrControlP$0$resetRouteRequestOutCache(am_addr_t dest);
# 58 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
static   void SimpleLinkCacheP$Initial$clear(uint16_t arg_0x7e6e5850);
#line 46
static   bool SimpleLinkCacheP$Initial$get(uint16_t arg_0x7e6e6df8);





static   void SimpleLinkCacheP$Initial$set(uint16_t arg_0x7e6e5350);
# 115 "../../../tos/lib/data/graph/Graph.nc"
static  error_t SimpleLinkCacheP$Graph$remove(graph_vertex_id_t arg_0x7e5e4b38, graph_vertex_id_t arg_0x7e5e4cd0);
#line 105
static  graph_edge_id_t SimpleLinkCacheP$Graph$insert(graph_vertex_id_t arg_0x7e5e4178, graph_vertex_id_t arg_0x7e5e4310);
# 82 "../../../tos/lib/data/graph/SourceShortestPath.nc"
static  bool SimpleLinkCacheP$SourceShortestPath$rebuildNeeded(graph_vertex_id_t arg_0x7e5d7408);
#line 47
static  error_t SimpleLinkCacheP$SourceShortestPath$buildTree(graph_vertex_id_t arg_0x7e5d91c0);
#line 89
static  bool SimpleLinkCacheP$SourceShortestPath$buildingTree(void);










static  graph_edge_id_t SimpleLinkCacheP$SourceShortestPath$edgeCount(graph_vertex_id_t arg_0x7e5d5178);
# 97 "../../../tos/lib/netarch/dsr/RouteCache.nc"
static  void SimpleLinkCacheP$RouteCache$routeUpdate(route_cache_node_id_t arg_0x7e701bf0, route_cache_node_id_t arg_0x7e701d88, 
route_cache_link_id_t arg_0x7e700010);
# 58 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
static   void SimpleLinkCacheP$Track$clear(uint16_t arg_0x7e6e5850);
#line 46
static   bool SimpleLinkCacheP$Track$get(uint16_t arg_0x7e6e6df8);





static   void SimpleLinkCacheP$Track$set(uint16_t arg_0x7e6e5350);
#line 77
static   uint16_t SimpleLinkCacheP$Track$size(void);
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t SimpleLinkCacheP$AMPacket$address(void);
# 72 "../../../tos/lib/netarch/dsr/SimpleLinkCacheP.nc"
static inline  void SimpleLinkCacheP$RouteCache$addPath(route_cache_node_id_t nodes[], route_cache_link_id_t numLinks, 
bool reverse);
#line 95
static  void SimpleLinkCacheP$RouteCache$removeLink(route_cache_node_id_t src, route_cache_node_id_t dest, 
bool reverse);
#line 111
static  void SimpleLinkCacheP$RouteCache$trackRoute(route_cache_node_id_t src, route_cache_node_id_t dest);
#line 125
static  void SimpleLinkCacheP$RouteCache$checkRoute(route_cache_node_id_t src, route_cache_node_id_t dest);
#line 150
static inline  void SimpleLinkCacheP$Graph$inserted(graph_edge_id_t m);






static inline  void SimpleLinkCacheP$Graph$removed(graph_edge_id_t m);








static inline  void SimpleLinkCacheP$SourceShortestPath$builtTree(graph_vertex_id_t src);
#line 195
static inline  void SimpleLinkCacheP$SourceShortestPath$builtTreeTo(graph_vertex_id_t src, graph_vertex_id_t dest, 
error_t pathResult);
# 40 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
typedef uint8_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$int_type;

enum /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$__nesc_unnamed4355 {

  BitVectorC$4$ELEMENT_SIZE = 8 * sizeof(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$int_type ), 
  BitVectorC$4$ARRAY_SIZE = (50 + /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$ELEMENT_SIZE - 1) / /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$ELEMENT_SIZE
};

/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$int_type /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$m_bits[/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$ARRAY_SIZE];

static inline uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$getIndex(uint16_t bitnum);




static inline uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$getMask(uint16_t bitnum);




static inline  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$Init$init(void);





static inline   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$BitVector$clearAll(void);









static   bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$BitVector$get(uint16_t bitnum);




static inline   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$BitVector$set(uint16_t bitnum);




static inline   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$BitVector$clear(uint16_t bitnum);
# 34 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
static   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$clearAll(void);
#line 58
static   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$clear(uint16_t arg_0x7e6e5850);
#line 46
static   bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$get(uint16_t arg_0x7e6e6df8);





static   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$set(uint16_t arg_0x7e6e5350);
# 54 "../../../tos/lib/data/alloc/IndexedAllocBitsP.nc"
indexed_alloc_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free;
indexed_alloc_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$size = 0;



static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$findFree(void);



static inline  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$Boot$booted(void);
#line 112
static inline  indexed_alloc_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$IndexedAlloc$alloc(void);
#line 130
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$IndexedAlloc$free(indexed_alloc_id_t m);
#line 157
static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$findFree(void);
# 150 "../../../tos/lib/data/graph/Graph.nc"
static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$removed(graph_edge_id_t arg_0x7e5e1d18);
#line 143
static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$inserted(graph_edge_id_t arg_0x7e5e1640);
# 79 "../../../tos/lib/data/alloc/IndexedAlloc.nc"
static  indexed_alloc_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$IndexedAlloc$alloc(void);








static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$IndexedAlloc$free(indexed_alloc_id_t arg_0x7e5953c8);
# 57 "../../../tos/lib/data/graph/GraphSparseP.nc"
graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$vSize;
graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[20];
graph_edge_node_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[50];



static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$printGraph(void);



static inline  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Init$init(void);
#line 152
static  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$insert(graph_vertex_id_t s, 
graph_vertex_id_t d);
#line 185
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$remove(graph_vertex_id_t s, graph_vertex_id_t d);
#line 233
static inline  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edge(graph_vertex_id_t s, graph_vertex_id_t d);
#line 253
static inline  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edgeList(graph_vertex_id_t s);
#line 276
static inline  graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdge$dest(graph_edge_id_t m);
#line 288
static inline  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$next(graph_edge_id_t m);









static inline  iterator_end_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$end(graph_edge_id_t m);








static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$printGraph(void);
# 49 "../../../tos/interfaces/Compare.nc"
static  int16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$test(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$compare_t arg_0x7e511090, /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$compare_t arg_0x7e511220);
# 56 "../../../tos/lib/data/queue/PriorityQueueP.nc"
priority_queue_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size;


priority_queue_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[20];

priority_queue_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[20];




static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$clearData(void);
static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$moveUpPos(priority_queue_id_t a);
static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$moveDownPos(priority_queue_id_t a, priority_queue_id_t curSize);
static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$flip(priority_queue_id_t a, priority_queue_id_t b);
static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTree(void);




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
static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTree(void);
#line 312
static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$clearData(void);
# 56 "../../../tos/interfaces/IndexedIterator.nc"
static  iterator_end_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$end(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$iterator_item_t arg_0x7ea448a8);
#line 48
static  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$iterator_item_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$next(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$iterator_item_t arg_0x7ea441d8);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$postTask(void);
# 136 "../../../tos/lib/data/graph/Graph.nc"
static  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$edgeList(graph_vertex_id_t arg_0x7e5e3e50);
# 54 "../../../tos/lib/data/graph/SourceShortestPath.nc"
static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$builtTree(graph_vertex_id_t arg_0x7e5d9920);
#line 72
static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$builtTreeTo(graph_vertex_id_t arg_0x7e5d8968, graph_vertex_id_t arg_0x7e5d8b00, 
error_t arg_0x7e5d8ca0);
# 54 "../../../tos/lib/data/graph/GraphEdge.nc"
static  graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdge$dest(graph_edge_id_t arg_0x7e5b5120);
# 122 "../../../tos/lib/data/queue/PriorityQueue.nc"
static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$clear(void);
#line 72
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$insert(priority_queue_id_t arg_0x7e519c68);
#line 87
static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$moveUp(priority_queue_id_t arg_0x7e518c20);
#line 47
static  bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$empty(void);
#line 117
static  priority_queue_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$removeBest(void);
# 55 "../../../tos/lib/data/graph/GraphEdgeWeight.nc"
static  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeWeight$weight_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeWeight$weight(graph_edge_id_t arg_0x7e5ac3f0);
# 84 "../../../tos/lib/data/graph/SourceShortestPathP.nc"
enum /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$__nesc_unnamed4356 {
#line 84
  SourceShortestPathP$0$buildTreeTask = 3U
};
#line 84
typedef int /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$__nesc_sillytask_buildTreeTask[/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask];
#line 61
graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[20];

graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[20];

/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$graph_edge_weight_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[20];

graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc;


bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded;


graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest;

error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$foundDest;

bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree;



static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$initTree(void);
static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$printPaths(void);





static inline  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Init$init(void);
#line 105
static inline  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildTree(graph_vertex_id_t src);
#line 117
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildTreeTo(graph_vertex_id_t src, 
graph_vertex_id_t dest);
#line 152
static inline  bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$rebuildNeeded(graph_vertex_id_t src);








static inline  bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildingTree(void);
#line 174
static  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$edgeCount(graph_vertex_id_t dest);
#line 203
static inline  graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$next(graph_vertex_id_t dest);
#line 216
static inline  iterator_end_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$end(graph_vertex_id_t dest);









static inline  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$runTask(void);
#line 285
static inline  int16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Compare$test(graph_vertex_id_t a, graph_vertex_id_t b);










static inline  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$inserted(graph_edge_id_t m);








static inline  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$removed(graph_edge_id_t m);
#line 325
static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$initTree(void);
#line 338
static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$printPaths(void);
# 40 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
typedef uint8_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$int_type;

enum /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$__nesc_unnamed4357 {

  BitVectorC$2$ELEMENT_SIZE = 8 * sizeof(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$int_type ), 
  BitVectorC$2$ARRAY_SIZE = (20 + /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$ELEMENT_SIZE - 1) / /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$ELEMENT_SIZE
};

/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$int_type /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$m_bits[/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$ARRAY_SIZE];

static inline uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$getIndex(uint16_t bitnum);




static inline uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$getMask(uint16_t bitnum);
#line 76
static   bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$BitVector$get(uint16_t bitnum);




static inline   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$BitVector$set(uint16_t bitnum);




static inline   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$BitVector$clear(uint16_t bitnum);
#line 104
static inline   uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$BitVector$size(void);
#line 40
typedef uint8_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$int_type;

enum /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$__nesc_unnamed4358 {

  BitVectorC$3$ELEMENT_SIZE = 8 * sizeof(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$int_type ), 
  BitVectorC$3$ARRAY_SIZE = (20 + /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$ELEMENT_SIZE - 1) / /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$ELEMENT_SIZE
};

/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$int_type /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$m_bits[/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$ARRAY_SIZE];

static inline uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$getIndex(uint16_t bitnum);




static inline uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$getMask(uint16_t bitnum);
#line 76
static   bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$BitVector$get(uint16_t bitnum);




static inline   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$BitVector$set(uint16_t bitnum);




static inline   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$BitVector$clear(uint16_t bitnum);
# 65 "../../../tos/lib/data/graph/GraphEdgeUnitWeightC.nc"
static inline  graph_edge_unit_weight_t GraphEdgeUnitWeightC$GraphEdgeWeight$weight(graph_edge_id_t m);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t CC2420ActiveMessageP$SubSend$send(message_t *arg_0x7e3c2340, uint8_t arg_0x7e3c24c8);
#line 114
static  void *CC2420ActiveMessageP$SubSend$getPayload(message_t *arg_0x7e3c01f8, uint8_t arg_0x7e3c0380);
# 70 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static   uint16_t CC2420ActiveMessageP$CC2420Config$getPanAddr(void);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void CC2420ActiveMessageP$AMSend$sendDone(
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e3ca6b8, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7eb750a8, error_t arg_0x7eb75230);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ActiveMessageP$Snoop$receive(
# 41 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e3c95e8, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0);
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static   cc2420_header_t *CC2420ActiveMessageP$CC2420PacketBody$getHeader(message_t *arg_0x7e3bc7a8);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ActiveMessageP$Receive$receive(
# 40 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
am_id_t arg_0x7e3c9010, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0);
# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static   am_addr_t CC2420ActiveMessageP$ActiveMessageAddress$amAddress(void);
# 56 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
enum CC2420ActiveMessageP$__nesc_unnamed4359 {
  CC2420ActiveMessageP$CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE
};


static  error_t CC2420ActiveMessageP$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len);
#line 85
static inline  am_addr_t CC2420ActiveMessageP$AMPacket$address(void);



static inline  am_addr_t CC2420ActiveMessageP$AMPacket$destination(message_t *amsg);









static  void CC2420ActiveMessageP$AMPacket$setDestination(message_t *amsg, am_addr_t addr);









static  bool CC2420ActiveMessageP$AMPacket$isForMe(message_t *amsg);




static  am_id_t CC2420ActiveMessageP$AMPacket$type(message_t *amsg);




static  void CC2420ActiveMessageP$AMPacket$setType(message_t *amsg, am_id_t type);
#line 142
static  uint8_t CC2420ActiveMessageP$Packet$payloadLength(message_t *msg);



static  void CC2420ActiveMessageP$Packet$setPayloadLength(message_t *msg, uint8_t len);



static inline  uint8_t CC2420ActiveMessageP$Packet$maxPayloadLength(void);



static inline  void *CC2420ActiveMessageP$Packet$getPayload(message_t *msg, uint8_t len);





static inline  void CC2420ActiveMessageP$SubSend$sendDone(message_t *msg, error_t result);





static inline  message_t *CC2420ActiveMessageP$SubReceive$receive(message_t *msg, void *payload, uint8_t len);
#line 181
static inline  void CC2420ActiveMessageP$CC2420Config$syncDone(error_t error);



static inline   message_t *CC2420ActiveMessageP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline   message_t *CC2420ActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
# 92 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static  void CC2420CsmaP$SplitControl$startDone(error_t arg_0x7eb54af0);
#line 117
static  void CC2420CsmaP$SplitControl$stopDone(error_t arg_0x7eb526e8);
# 95 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static   void CC2420CsmaP$RadioBackoff$requestCca(
# 41 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
am_id_t arg_0x7e37d4e0, 
# 95 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t *arg_0x7e3dcc10);
#line 81
static   void CC2420CsmaP$RadioBackoff$requestInitialBackoff(
# 41 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
am_id_t arg_0x7e37d4e0, 
# 81 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t *arg_0x7e3dc0a8);






static   void CC2420CsmaP$RadioBackoff$requestCongestionBackoff(
# 41 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
am_id_t arg_0x7e37d4e0, 
# 88 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
message_t *arg_0x7e3dc660);
#line 66
static   void CC2420CsmaP$SubBackoff$setCongestionBackoff(uint16_t arg_0x7e3dd590);
#line 60
static   void CC2420CsmaP$SubBackoff$setInitialBackoff(uint16_t arg_0x7e3dd010);
# 51 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static   error_t CC2420CsmaP$CC2420Transmit$send(message_t *arg_0x7e36d4f0, bool arg_0x7e36d678);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void CC2420CsmaP$Send$sendDone(message_t *arg_0x7e3c1598, error_t arg_0x7e3c1720);
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t CC2420CsmaP$Random$rand16(void);
# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static  error_t CC2420CsmaP$SubControl$start(void);









static  error_t CC2420CsmaP$SubControl$stop(void);
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static   cc2420_header_t *CC2420CsmaP$CC2420PacketBody$getHeader(message_t *arg_0x7e3bc7a8);




static   cc2420_metadata_t *CC2420CsmaP$CC2420PacketBody$getMetadata(message_t *arg_0x7e3bccf8);
# 71 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static   error_t CC2420CsmaP$CC2420Power$startOscillator(void);
#line 90
static   error_t CC2420CsmaP$CC2420Power$rxOn(void);
#line 51
static   error_t CC2420CsmaP$CC2420Power$startVReg(void);
#line 63
static   error_t CC2420CsmaP$CC2420Power$stopVReg(void);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420CsmaP$Resource$release(void);
#line 78
static   error_t CC2420CsmaP$Resource$request(void);
# 66 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static   bool CC2420CsmaP$SplitControlState$isState(uint8_t arg_0x7e841c28);
#line 45
static   error_t CC2420CsmaP$SplitControlState$requestState(uint8_t arg_0x7e844ad0);





static   void CC2420CsmaP$SplitControlState$forceState(uint8_t arg_0x7e841088);
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t CC2420CsmaP$AMPacket$address(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t CC2420CsmaP$sendDone_task$postTask(void);
#line 56
static   error_t CC2420CsmaP$stopDone_task$postTask(void);
#line 56
static   error_t CC2420CsmaP$startDone_task$postTask(void);
# 75 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
enum CC2420CsmaP$__nesc_unnamed4360 {
#line 75
  CC2420CsmaP$startDone_task = 4U
};
#line 75
typedef int CC2420CsmaP$__nesc_sillytask_startDone_task[CC2420CsmaP$startDone_task];

enum CC2420CsmaP$__nesc_unnamed4361 {
#line 77
  CC2420CsmaP$stopDone_task = 5U
};
#line 77
typedef int CC2420CsmaP$__nesc_sillytask_stopDone_task[CC2420CsmaP$stopDone_task];
enum CC2420CsmaP$__nesc_unnamed4362 {
#line 78
  CC2420CsmaP$sendDone_task = 6U
};
#line 78
typedef int CC2420CsmaP$__nesc_sillytask_sendDone_task[CC2420CsmaP$sendDone_task];
#line 59
enum CC2420CsmaP$__nesc_unnamed4363 {
  CC2420CsmaP$S_STOPPED, 
  CC2420CsmaP$S_STARTING, 
  CC2420CsmaP$S_STARTED, 
  CC2420CsmaP$S_STOPPING, 
  CC2420CsmaP$S_TRANSMITTING
};

message_t *CC2420CsmaP$m_msg;

error_t CC2420CsmaP$sendErr = SUCCESS;


 bool CC2420CsmaP$ccaOn;







static inline void CC2420CsmaP$shutdown(void);


static  error_t CC2420CsmaP$SplitControl$start(void);
#line 124
static inline  error_t CC2420CsmaP$Send$send(message_t *p_msg, uint8_t len);
#line 158
static inline  void *CC2420CsmaP$Send$getPayload(message_t *m, uint8_t len);








static inline  uint8_t CC2420CsmaP$Send$maxPayloadLength(void);
#line 199
static inline   void CC2420CsmaP$CC2420Transmit$sendDone(message_t *p_msg, error_t err);




static inline   void CC2420CsmaP$CC2420Power$startVRegDone(void);



static inline  void CC2420CsmaP$Resource$granted(void);



static inline   void CC2420CsmaP$CC2420Power$startOscillatorDone(void);




static inline   void CC2420CsmaP$SubBackoff$requestInitialBackoff(message_t *msg);







static inline   void CC2420CsmaP$SubBackoff$requestCongestionBackoff(message_t *msg);
#line 239
static inline  void CC2420CsmaP$sendDone_task$runTask(void);
#line 252
static inline  void CC2420CsmaP$startDone_task$runTask(void);







static inline  void CC2420CsmaP$stopDone_task$runTask(void);









static inline void CC2420CsmaP$shutdown(void);
#line 284
static inline    void CC2420CsmaP$RadioBackoff$default$requestInitialBackoff(am_id_t amId, 
message_t *msg);


static inline    void CC2420CsmaP$RadioBackoff$default$requestCongestionBackoff(am_id_t amId, 
message_t *msg);


static inline    void CC2420CsmaP$RadioBackoff$default$requestCca(am_id_t amId, 
message_t *msg);
# 53 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static  void CC2420ControlP$CC2420Config$syncDone(error_t arg_0x7e3b8800);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static   cc2420_status_t CC2420ControlP$RXCTRL1$write(uint16_t arg_0x7e3187f0);
# 55 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void CC2420ControlP$StartupTimer$start(CC2420ControlP$StartupTimer$size_type arg_0x7e3298c8);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static   cc2420_status_t CC2420ControlP$MDMCTRL0$write(uint16_t arg_0x7e3187f0);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420ControlP$RSTN$makeOutput(void);
#line 29
static   void CC2420ControlP$RSTN$set(void);
static   void CC2420ControlP$RSTN$clr(void);
# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
static  void CC2420ControlP$ReadRssi$readDone(error_t arg_0x7e335cd8, CC2420ControlP$ReadRssi$val_t arg_0x7e335e60);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t CC2420ControlP$syncDone$postTask(void);
# 47 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static   cc2420_status_t CC2420ControlP$RSSI$read(uint16_t *arg_0x7e318280);







static   cc2420_status_t CC2420ControlP$IOCFG0$write(uint16_t arg_0x7e3187f0);
# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
static   am_addr_t CC2420ControlP$ActiveMessageAddress$amAddress(void);




static   am_group_t CC2420ControlP$ActiveMessageAddress$amGroup(void);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420ControlP$CSN$makeOutput(void);
#line 29
static   void CC2420ControlP$CSN$set(void);
static   void CC2420ControlP$CSN$clr(void);




static   void CC2420ControlP$VREN$makeOutput(void);
#line 29
static   void CC2420ControlP$VREN$set(void);
static   void CC2420ControlP$VREN$clr(void);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420ControlP$SXOSCON$strobe(void);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420ControlP$SpiResource$release(void);
#line 78
static   error_t CC2420ControlP$SpiResource$request(void);
#line 110
static   error_t CC2420ControlP$SyncResource$release(void);
#line 78
static   error_t CC2420ControlP$SyncResource$request(void);
# 76 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
static   void CC2420ControlP$CC2420Power$startOscillatorDone(void);
#line 56
static   void CC2420ControlP$CC2420Power$startVRegDone(void);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static   cc2420_status_t CC2420ControlP$IOCFG1$write(uint16_t arg_0x7e3187f0);
#line 55
static   cc2420_status_t CC2420ControlP$FSCTRL$write(uint16_t arg_0x7e3187f0);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420ControlP$SRXON$strobe(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void CC2420ControlP$Resource$granted(void);
# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static   cc2420_status_t CC2420ControlP$PANID$write(uint8_t arg_0x7e31b248, uint8_t *arg_0x7e31b3f0, uint8_t arg_0x7e31b578);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t CC2420ControlP$InterruptCCA$disable(void);
#line 42
static   error_t CC2420ControlP$InterruptCCA$enableRisingEdge(void);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420ControlP$RssiResource$release(void);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420ControlP$SRFOFF$strobe(void);
# 112 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
enum CC2420ControlP$__nesc_unnamed4364 {
#line 112
  CC2420ControlP$sync = 7U
};
#line 112
typedef int CC2420ControlP$__nesc_sillytask_sync[CC2420ControlP$sync];
enum CC2420ControlP$__nesc_unnamed4365 {
#line 113
  CC2420ControlP$syncDone = 8U
};
#line 113
typedef int CC2420ControlP$__nesc_sillytask_syncDone[CC2420ControlP$syncDone];
#line 86
#line 80
typedef enum CC2420ControlP$__nesc_unnamed4366 {
  CC2420ControlP$S_VREG_STOPPED, 
  CC2420ControlP$S_VREG_STARTING, 
  CC2420ControlP$S_VREG_STARTED, 
  CC2420ControlP$S_XOSC_STARTING, 
  CC2420ControlP$S_XOSC_STARTED
} CC2420ControlP$cc2420_control_state_t;

uint8_t CC2420ControlP$m_channel;

uint8_t CC2420ControlP$m_tx_power;

uint16_t CC2420ControlP$m_pan;

uint16_t CC2420ControlP$m_short_addr;

bool CC2420ControlP$m_sync_busy;

bool CC2420ControlP$autoAckEnabled;

bool CC2420ControlP$hwAutoAckDefault;

bool CC2420ControlP$addressRecognition;

 CC2420ControlP$cc2420_control_state_t CC2420ControlP$m_state = CC2420ControlP$S_VREG_STOPPED;



static void CC2420ControlP$writeFsctrl(void);
static void CC2420ControlP$writeMdmctrl0(void);
static void CC2420ControlP$writeId(void);





static inline  error_t CC2420ControlP$Init$init(void);
#line 156
static inline   error_t CC2420ControlP$Resource$request(void);







static inline   error_t CC2420ControlP$Resource$release(void);







static inline   error_t CC2420ControlP$CC2420Power$startVReg(void);
#line 184
static inline   error_t CC2420ControlP$CC2420Power$stopVReg(void);







static inline   error_t CC2420ControlP$CC2420Power$startOscillator(void);
#line 234
static inline   error_t CC2420ControlP$CC2420Power$rxOn(void);
#line 264
static inline   uint16_t CC2420ControlP$CC2420Config$getShortAddr(void);







static inline   uint16_t CC2420ControlP$CC2420Config$getPanAddr(void);
#line 285
static inline  error_t CC2420ControlP$CC2420Config$sync(void);
#line 331
static inline   bool CC2420ControlP$CC2420Config$isHwAutoAckDefault(void);






static inline   bool CC2420ControlP$CC2420Config$isAutoAckEnabled(void);









static inline  void CC2420ControlP$SyncResource$granted(void);
#line 362
static inline  void CC2420ControlP$SpiResource$granted(void);




static inline  void CC2420ControlP$RssiResource$granted(void);
#line 380
static inline   void CC2420ControlP$StartupTimer$fired(void);









static inline   void CC2420ControlP$InterruptCCA$fired(void);
#line 414
static inline  void CC2420ControlP$sync$runTask(void);



static inline  void CC2420ControlP$syncDone$runTask(void);









static void CC2420ControlP$writeFsctrl(void);
#line 442
static void CC2420ControlP$writeMdmctrl0(void);
#line 461
static void CC2420ControlP$writeId(void);
#line 478
static inline   void CC2420ControlP$ReadRssi$default$readDone(error_t error, uint16_t data);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer0AsyncP$Compare$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void HplAtm128Timer0AsyncP$Timer$overflow(void);
# 50 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline   uint8_t HplAtm128Timer0AsyncP$Timer$get(void);
#line 76
static inline   void HplAtm128Timer0AsyncP$TimerCtrl$setControl(Atm128TimerControl_t x);
#line 94
static inline   Atm128_TIFR_t HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag(void);
#line 122
static inline   void HplAtm128Timer0AsyncP$Compare$start(void);









static inline   uint8_t HplAtm128Timer0AsyncP$Compare$get(void);


static inline   void HplAtm128Timer0AsyncP$Compare$set(uint8_t t);




static __inline void HplAtm128Timer0AsyncP$stabiliseTimer0(void);
#line 155
static inline   mcu_power_t HplAtm128Timer0AsyncP$McuPowerOverride$lowestState(void);
#line 178
void __vector_15(void) __attribute((signal))   ;





void __vector_16(void) __attribute((signal))   ;
#line 198
static inline   void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void);







static inline   int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void);
# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static   Atm128_TIFR_t HplAtm128Timer1P$Timer0Ctrl$getInterruptFlag(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer1P$CompareA$fired(void);
# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void HplAtm128Timer1P$Capture$captured(HplAtm128Timer1P$Capture$size_type arg_0x7e26c540);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void HplAtm128Timer1P$CompareB$fired(void);
#line 49
static   void HplAtm128Timer1P$CompareC$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void HplAtm128Timer1P$Timer$overflow(void);
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   uint16_t HplAtm128Timer1P$Timer$get(void);


static inline   void HplAtm128Timer1P$Timer$set(uint16_t t);








static inline   void HplAtm128Timer1P$Timer$setScale(uint8_t s);









static inline   Atm128TimerCtrlCapture_t HplAtm128Timer1P$TimerCtrl$getCtrlCapture(void);









static inline uint16_t HplAtm128Timer1P$TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x);






static inline   void HplAtm128Timer1P$TimerCtrl$setCtrlCapture(Atm128_TCCR1B_t x);
#line 122
static inline   void HplAtm128Timer1P$Capture$setEdge(bool up);



static inline   void HplAtm128Timer1P$Capture$reset(void);
static inline   void HplAtm128Timer1P$CompareA$reset(void);



static inline   void HplAtm128Timer1P$Timer$start(void);
static inline   void HplAtm128Timer1P$Capture$start(void);
static inline   void HplAtm128Timer1P$CompareA$start(void);




static inline   void HplAtm128Timer1P$Capture$stop(void);
static inline   void HplAtm128Timer1P$CompareA$stop(void);




static inline   bool HplAtm128Timer1P$Timer$test(void);
#line 183
static inline   void HplAtm128Timer1P$CompareA$set(uint16_t t);
#line 195
void __vector_12(void) __attribute((interrupt))   ;


static inline    void HplAtm128Timer1P$CompareB$default$fired(void);
void __vector_13(void) __attribute((interrupt))   ;


static inline    void HplAtm128Timer1P$CompareC$default$fired(void);
void __vector_24(void) __attribute((interrupt))   ;



void __vector_11(void) __attribute((interrupt))   ;



void __vector_14(void) __attribute((interrupt))   ;
# 95 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$setScale(uint8_t arg_0x7e287010);
#line 58
static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$set(/*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$timer_size arg_0x7e28a350);










static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$start(void);
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline  error_t /*InitOneP.InitOne*/Atm128TimerInitC$0$Init$init(void);








static inline   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$fired(void);
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset(void);
#line 45
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type arg_0x7e266e78);










static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$start(void);


static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop(void);
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$get(void);
# 65 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$stop(void);








static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size dt);
#line 110
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void);






static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void);
# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   void /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$overflow(void);
# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$test(void);
#line 52
static   /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$get(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   /*CounterOne16C.NCounter*/Atm128CounterC$0$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$get(void);




static inline   bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$isOverflowPending(void);









static inline   void /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$overflow(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$get(void);






static   bool /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$isOverflowPending(void);










static   void /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$overflow(void);
# 56 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.Transform32*/TransformCounterC$0$upper_count_type /*Counter32khz32C.Transform32*/TransformCounterC$0$m_upper;

enum /*Counter32khz32C.Transform32*/TransformCounterC$0$__nesc_unnamed4367 {

  TransformCounterC$0$LOW_SHIFT_RIGHT = 0, 
  TransformCounterC$0$HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC$0$from_size_type ) - /*Counter32khz32C.Transform32*/TransformCounterC$0$LOW_SHIFT_RIGHT, 
  TransformCounterC$0$NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type ) - 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC$0$from_size_type ) + 0, 



  TransformCounterC$0$OVERFLOW_MASK = /*Counter32khz32C.Transform32*/TransformCounterC$0$NUM_UPPER_BITS ? ((/*Counter32khz32C.Transform32*/TransformCounterC$0$upper_count_type )2 << (/*Counter32khz32C.Transform32*/TransformCounterC$0$NUM_UPPER_BITS - 1)) - 1 : 0
};

static   /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$get(void);
#line 122
static inline   void /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void);
# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$fired(void);
#line 92
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type arg_0x7e3289e0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type arg_0x7e328b70);
#line 62
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$stop(void);
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$get(void);
# 66 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0;
/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt;

enum /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$__nesc_unnamed4368 {

  TransformAlarmC$0$MAX_DELAY_LOG2 = 8 * sizeof(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type ) - 1 - 0, 
  TransformAlarmC$0$MAX_DELAY = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type )1 << /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY_LOG2
};

static inline   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow(void);
#line 91
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$stop(void);




static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$set_alarm(void);
#line 136
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type dt);









static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type dt);




static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$fired(void);
#line 166
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$overflow(void);
# 22 "/opt/tinyos-2.x/tos/system/NoInitC.nc"
static inline  error_t NoInitC$Init$init(void);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captured(uint16_t arg_0x7e047d80);
# 79 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$setEdge(bool arg_0x7e26bb48);
#line 55
static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$reset(void);


static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$start(void);


static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$stop(void);
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$enableCapture(uint8_t mode);









static inline   error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureRisingEdge(void);



static inline   error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureFallingEdge(void);



static inline   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$disable(void);



static inline   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(uint16_t time);
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$clear(void);
#line 40
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable(void);
#line 59
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(bool arg_0x7e024728);
#line 35
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$enable(void);
# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$fired(void);
# 15 "/opt/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$enable(bool rising);
#line 29
static inline   error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void);



static inline   error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$disable(void);




static inline   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static   void HplAtm128InterruptSigP$IntSig6$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig1$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig4$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig7$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig2$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig5$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig0$fired(void);
#line 41
static   void HplAtm128InterruptSigP$IntSig3$fired(void);
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
void __vector_1(void) __attribute((signal))   ;




void __vector_2(void) __attribute((signal))   ;




void __vector_3(void) __attribute((signal))   ;




void __vector_4(void) __attribute((signal))   ;




void __vector_5(void) __attribute((signal))   ;




void __vector_6(void) __attribute((signal))   ;




void __vector_7(void) __attribute((signal))   ;




void __vector_8(void) __attribute((signal))   ;
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$default$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$default$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$fired(void);
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$clear(void);
static __inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$enable(void);
static __inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$disable(void);



static __inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(bool low_to_high);
#line 61
static inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired(void);
# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$fired(void);
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired(void);

static inline    void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired(void);
# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   bool HplCC2420InterruptsP$CC_CCA$get(void);
# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   void HplCC2420InterruptsP$CCA$fired(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t HplCC2420InterruptsP$CCATask$postTask(void);
# 69 "/opt/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
enum HplCC2420InterruptsP$__nesc_unnamed4369 {
#line 69
  HplCC2420InterruptsP$CCATask = 9U
};
#line 69
typedef int HplCC2420InterruptsP$__nesc_sillytask_CCATask[HplCC2420InterruptsP$CCATask];
#line 56
 uint8_t HplCC2420InterruptsP$ccaWaitForState;

 uint8_t HplCC2420InterruptsP$ccaLastState;

bool HplCC2420InterruptsP$ccaCheckDisabled = FALSE;








static inline  void HplCC2420InterruptsP$CCATask$runTask(void);
#line 89
static inline   error_t HplCC2420InterruptsP$CCA$enableRisingEdge(void);
#line 105
static inline   error_t HplCC2420InterruptsP$CCA$disable(void);
# 59 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static   error_t CC2420SpiP$SpiPacket$send(uint8_t *arg_0x7df66598, uint8_t *arg_0x7df66740, uint16_t arg_0x7df668d0);
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static   void CC2420SpiP$Fifo$writeDone(
# 46 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7df70d40, 
# 91 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t *arg_0x7df88610, uint8_t arg_0x7df88798, error_t arg_0x7df88920);
#line 71
static   void CC2420SpiP$Fifo$readDone(
# 46 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7df70d40, 
# 71 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t *arg_0x7df894f8, uint8_t arg_0x7df89680, error_t arg_0x7df89808);
# 24 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static   void CC2420SpiP$ChipSpiResource$releasing(void);
# 34 "/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
static   uint8_t CC2420SpiP$SpiByte$write(uint8_t arg_0x7df6cd78);
# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static   void CC2420SpiP$WorkingState$toIdle(void);




static   bool CC2420SpiP$WorkingState$isIdle(void);
#line 45
static   error_t CC2420SpiP$WorkingState$requestState(uint8_t arg_0x7e844ad0);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420SpiP$SpiResource$release(void);
#line 87
static   error_t CC2420SpiP$SpiResource$immediateRequest(void);
#line 78
static   error_t CC2420SpiP$SpiResource$request(void);
#line 118
static   bool CC2420SpiP$SpiResource$isOwner(void);
#line 92
static  void CC2420SpiP$Resource$granted(
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x7df703e0);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t CC2420SpiP$grant$postTask(void);
# 88 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
enum CC2420SpiP$__nesc_unnamed4370 {
#line 88
  CC2420SpiP$grant = 10U
};
#line 88
typedef int CC2420SpiP$__nesc_sillytask_grant[CC2420SpiP$grant];
#line 63
enum CC2420SpiP$__nesc_unnamed4371 {
  CC2420SpiP$RESOURCE_COUNT = 5U, 
  CC2420SpiP$NO_HOLDER = 0xFF
};


enum CC2420SpiP$__nesc_unnamed4372 {
  CC2420SpiP$S_IDLE, 
  CC2420SpiP$S_BUSY
};


 uint16_t CC2420SpiP$m_addr;


uint8_t CC2420SpiP$m_requests = 0;


uint8_t CC2420SpiP$m_holder = CC2420SpiP$NO_HOLDER;


bool CC2420SpiP$release;


static error_t CC2420SpiP$attemptRelease(void);







static inline   void CC2420SpiP$ChipSpiResource$abortRelease(void);






static inline   error_t CC2420SpiP$ChipSpiResource$attemptRelease(void);




static   error_t CC2420SpiP$Resource$request(uint8_t id);
#line 126
static   error_t CC2420SpiP$Resource$immediateRequest(uint8_t id);
#line 149
static   error_t CC2420SpiP$Resource$release(uint8_t id);
#line 178
static inline   uint8_t CC2420SpiP$Resource$isOwner(uint8_t id);





static inline  void CC2420SpiP$SpiResource$granted(void);




static   cc2420_status_t CC2420SpiP$Fifo$beginRead(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 209
static inline   error_t CC2420SpiP$Fifo$continueRead(uint8_t addr, uint8_t *data, 
uint8_t len);



static inline   cc2420_status_t CC2420SpiP$Fifo$write(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 260
static inline   cc2420_status_t CC2420SpiP$Ram$write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len);
#line 285
static inline   cc2420_status_t CC2420SpiP$Reg$read(uint8_t addr, uint16_t *data);
#line 303
static   cc2420_status_t CC2420SpiP$Reg$write(uint8_t addr, uint16_t data);
#line 316
static   cc2420_status_t CC2420SpiP$Strobe$strobe(uint8_t addr);










static   void CC2420SpiP$SpiPacket$sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error);








static error_t CC2420SpiP$attemptRelease(void);
#line 356
static inline  void CC2420SpiP$grant$runTask(void);








static inline   void CC2420SpiP$Resource$default$granted(uint8_t id);


static inline    void CC2420SpiP$Fifo$default$readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error);


static inline    void CC2420SpiP$Fifo$default$writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error);
# 74 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
uint8_t StateImplP$state[5U];

enum StateImplP$__nesc_unnamed4373 {
  StateImplP$S_IDLE = 0
};


static inline  error_t StateImplP$Init$init(void);
#line 96
static   error_t StateImplP$State$requestState(uint8_t id, uint8_t reqState);
#line 111
static inline   void StateImplP$State$forceState(uint8_t id, uint8_t reqState);






static inline   void StateImplP$State$toIdle(uint8_t id);







static inline   bool StateImplP$State$isIdle(uint8_t id);






static   bool StateImplP$State$isState(uint8_t id, uint8_t myState);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t Atm128SpiP$zeroTask$postTask(void);
# 71 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
static   void Atm128SpiP$SpiPacket$sendDone(uint8_t *arg_0x7df65030, uint8_t *arg_0x7df651d8, uint16_t arg_0x7df65368, 
error_t arg_0x7df65500);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$ResourceArbiter$release(
# 84 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7ded4950);
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$ResourceArbiter$immediateRequest(
# 84 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7ded4950);
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t Atm128SpiP$ResourceArbiter$request(
# 84 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7ded4950);
# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   bool Atm128SpiP$ResourceArbiter$isOwner(
# 84 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7ded4950);
# 72 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void Atm128SpiP$Spi$sleep(void);
#line 66
static   void Atm128SpiP$Spi$initMaster(void);
#line 96
static   void Atm128SpiP$Spi$enableInterrupt(bool arg_0x7decea68);
#line 80
static   uint8_t Atm128SpiP$Spi$read(void);
#line 125
static   void Atm128SpiP$Spi$setMasterDoubleSpeed(bool arg_0x7dec9b80);
#line 114
static   void Atm128SpiP$Spi$setClock(uint8_t arg_0x7decaa28);
#line 108
static   void Atm128SpiP$Spi$setClockPolarity(bool arg_0x7decba60);
#line 86
static   void Atm128SpiP$Spi$write(uint8_t arg_0x7dece010);
#line 99
static   void Atm128SpiP$Spi$enableSpi(bool arg_0x7decd250);
#line 111
static   void Atm128SpiP$Spi$setClockPhase(bool arg_0x7deca260);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void Atm128SpiP$Resource$granted(
# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x7dee4628);
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void Atm128SpiP$McuPowerState$update(void);
# 80 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
static   bool Atm128SpiP$ArbiterInfo$inUse(void);
# 207 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
enum Atm128SpiP$__nesc_unnamed4374 {
#line 207
  Atm128SpiP$zeroTask = 11U
};
#line 207
typedef int Atm128SpiP$__nesc_sillytask_zeroTask[Atm128SpiP$zeroTask];
#line 90
uint8_t *Atm128SpiP$txBuffer;
uint8_t *Atm128SpiP$rxBuffer;
uint16_t Atm128SpiP$len;
uint16_t Atm128SpiP$pos;

enum Atm128SpiP$__nesc_unnamed4375 {
  Atm128SpiP$SPI_IDLE, 
  Atm128SpiP$SPI_BUSY, 
  Atm128SpiP$SPI_ATOMIC_SIZE = 10
};




bool Atm128SpiP$started;

static void Atm128SpiP$startSpi(void);
#line 120
static inline void Atm128SpiP$stopSpi(void);








static   uint8_t Atm128SpiP$SpiByte$write(uint8_t tx);
#line 164
static error_t Atm128SpiP$sendNextPart(void);
#line 207
static inline  void Atm128SpiP$zeroTask$runTask(void);
#line 240
static   error_t Atm128SpiP$SpiPacket$send(uint8_t *writeBuf, 
uint8_t *readBuf, 
uint16_t bufLen);
#line 264
static inline   void Atm128SpiP$Spi$dataReady(uint8_t data);
#line 304
static inline   error_t Atm128SpiP$Resource$immediateRequest(uint8_t id);







static inline   error_t Atm128SpiP$Resource$request(uint8_t id);








static inline   error_t Atm128SpiP$Resource$release(uint8_t id);









static inline   uint8_t Atm128SpiP$Resource$isOwner(uint8_t id);



static inline  void Atm128SpiP$ResourceArbiter$granted(uint8_t id);



static inline   void Atm128SpiP$Resource$default$granted(uint8_t id);
# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void HplAtm128SpiP$MISO$makeInput(void);

static   void HplAtm128SpiP$SCK$makeOutput(void);
#line 35
static   void HplAtm128SpiP$SS$makeOutput(void);
#line 29
static   void HplAtm128SpiP$SS$set(void);
static   void HplAtm128SpiP$SS$clr(void);
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static   void HplAtm128SpiP$Mcu$update(void);
# 92 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
static   void HplAtm128SpiP$SPI$dataReady(uint8_t arg_0x7dece520);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void HplAtm128SpiP$MOSI$makeOutput(void);
# 79 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$initMaster(void);
#line 95
static inline   void HplAtm128SpiP$SPI$sleep(void);



static inline   uint8_t HplAtm128SpiP$SPI$read(void);
static inline   void HplAtm128SpiP$SPI$write(uint8_t d);


void __vector_17(void) __attribute((signal))   ;
#line 116
static   void HplAtm128SpiP$SPI$enableInterrupt(bool enabled);
#line 131
static   void HplAtm128SpiP$SPI$enableSpi(bool enabled);
#line 157
static inline   void HplAtm128SpiP$SPI$setMasterBit(bool isMaster);
#line 170
static inline   void HplAtm128SpiP$SPI$setClockPolarity(bool highWhenIdle);
#line 184
static inline   void HplAtm128SpiP$SPI$setClockPhase(bool sampleOnTrailing);
#line 201
static inline   void HplAtm128SpiP$SPI$setClock(uint8_t v);
#line 214
static inline   void HplAtm128SpiP$SPI$setMasterDoubleSpeed(bool on);
# 39 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$__nesc_unnamed4376 {
#line 39
  FcfsResourceQueueC$0$NO_ENTRY = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[1U];
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

static inline  error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void);




static inline   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void);



static inline   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id);



static inline   resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void);
#line 72
static inline   error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id);
# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7de01088);
# 51 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(
# 52 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7de01088);
# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7de01b70);
# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(
# 56 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7de01b70);
# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(resource_client_id_t arg_0x7de18af0);
#line 43
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty(void);
#line 60
static   resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$dequeue(void);
# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(
# 51 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x7de02730);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask(void);
# 69 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4377 {
#line 69
  SimpleArbiterP$0$grantedTask = 12U
};
#line 69
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask];
#line 62
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4378 {
#line 62
  SimpleArbiterP$0$RES_IDLE = 0, SimpleArbiterP$0$RES_GRANTING = 1, SimpleArbiterP$0$RES_BUSY = 2
};
#line 63
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$__nesc_unnamed4379 {
#line 63
  SimpleArbiterP$0$NO_RES = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE;
 uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$NO_RES;
 uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId;



static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(uint8_t id);
#line 84
static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(uint8_t id);
#line 97
static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(uint8_t id);
#line 123
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse(void);
#line 147
static   uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(uint8_t id);






static inline  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void);
#line 166
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(uint8_t id);

static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id);

static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(uint8_t id);

static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id);
# 51 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
am_addr_t ActiveMessageAddressC$addr = TOS_AM_ADDRESS;


am_group_t ActiveMessageAddressC$group = TOS_AM_GROUP;






static inline   am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void);
#line 82
static inline   am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void);
#line 95
static   am_addr_t ActiveMessageAddressC$amAddress(void);
# 81 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
static   void CC2420TransmitP$RadioBackoff$requestInitialBackoff(message_t *arg_0x7e3dc0a8);






static   void CC2420TransmitP$RadioBackoff$requestCongestionBackoff(message_t *arg_0x7e3dc660);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420TransmitP$STXONCCA$strobe(void);
# 43 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
static   error_t CC2420TransmitP$CaptureSFD$captureFallingEdge(void);
#line 55
static   void CC2420TransmitP$CaptureSFD$disable(void);
#line 42
static   error_t CC2420TransmitP$CaptureSFD$captureRisingEdge(void);
# 55 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   void CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$BackoffTimer$size_type arg_0x7e3298c8);






static   void CC2420TransmitP$BackoffTimer$stop(void);
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
static   cc2420_status_t CC2420TransmitP$TXCTRL$write(uint16_t arg_0x7e3187f0);
# 53 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static   void CC2420TransmitP$CC2420Receive$sfd_dropped(void);
#line 47
static   void CC2420TransmitP$CC2420Receive$sfd(uint16_t arg_0x7dd55de8);
# 73 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
static   void CC2420TransmitP$Send$sendDone(message_t *arg_0x7e36c558, error_t arg_0x7e36c6e0);
# 31 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static   void CC2420TransmitP$ChipSpiResource$abortRelease(void);







static   error_t CC2420TransmitP$ChipSpiResource$attemptRelease(void);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420TransmitP$SFLUSHTX$strobe(void);
# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420TransmitP$CSN$makeOutput(void);
#line 29
static   void CC2420TransmitP$CSN$set(void);
static   void CC2420TransmitP$CSN$clr(void);
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static   cc2420_header_t *CC2420TransmitP$CC2420PacketBody$getHeader(message_t *arg_0x7e3bc7a8);




static   cc2420_metadata_t *CC2420TransmitP$CC2420PacketBody$getMetadata(message_t *arg_0x7e3bccf8);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420TransmitP$SpiResource$release(void);
#line 87
static   error_t CC2420TransmitP$SpiResource$immediateRequest(void);
#line 78
static   error_t CC2420TransmitP$SpiResource$request(void);
# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420TransmitP$CCA$makeInput(void);
#line 32
static   bool CC2420TransmitP$CCA$get(void);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420TransmitP$SNOP$strobe(void);
# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420TransmitP$SFD$makeInput(void);
#line 32
static   bool CC2420TransmitP$SFD$get(void);
# 39 "/opt/tinyos-2.x/tos/interfaces/RadioTimeStamping.nc"
static   void CC2420TransmitP$TimeStamp$transmittedSFD(uint16_t arg_0x7dd83d00, message_t *arg_0x7dd83eb0);










static   void CC2420TransmitP$TimeStamp$receivedSFD(uint16_t arg_0x7dd803f8);
# 82 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static   cc2420_status_t CC2420TransmitP$TXFIFO$write(uint8_t *arg_0x7df89dd0, uint8_t arg_0x7df88010);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420TransmitP$STXON$strobe(void);
# 88 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
#line 78
typedef enum CC2420TransmitP$__nesc_unnamed4380 {
  CC2420TransmitP$S_STOPPED, 
  CC2420TransmitP$S_STARTED, 
  CC2420TransmitP$S_LOAD, 
  CC2420TransmitP$S_SAMPLE_CCA, 
  CC2420TransmitP$S_BEGIN_TRANSMIT, 
  CC2420TransmitP$S_SFD, 
  CC2420TransmitP$S_EFD, 
  CC2420TransmitP$S_ACK_WAIT, 
  CC2420TransmitP$S_CANCEL
} CC2420TransmitP$cc2420_transmit_state_t;





enum CC2420TransmitP$__nesc_unnamed4381 {
  CC2420TransmitP$CC2420_ABORT_PERIOD = 320
};

 message_t *CC2420TransmitP$m_msg;

 bool CC2420TransmitP$m_cca;

 uint8_t CC2420TransmitP$m_tx_power;

CC2420TransmitP$cc2420_transmit_state_t CC2420TransmitP$m_state = CC2420TransmitP$S_STOPPED;

bool CC2420TransmitP$m_receiving = FALSE;

uint16_t CC2420TransmitP$m_prev_time;


bool CC2420TransmitP$sfdHigh;


bool CC2420TransmitP$abortSpiRelease;


 int8_t CC2420TransmitP$totalCcaChecks;


 uint16_t CC2420TransmitP$myInitialBackoff;


 uint16_t CC2420TransmitP$myCongestionBackoff;



static inline error_t CC2420TransmitP$send(message_t *p_msg, bool cca);

static void CC2420TransmitP$loadTXFIFO(void);
static void CC2420TransmitP$attemptSend(void);
static void CC2420TransmitP$congestionBackoff(void);
static error_t CC2420TransmitP$acquireSpiResource(void);
static inline error_t CC2420TransmitP$releaseSpiResource(void);
static void CC2420TransmitP$signalDone(error_t err);



static inline  error_t CC2420TransmitP$Init$init(void);







static inline  error_t CC2420TransmitP$StdControl$start(void);










static inline  error_t CC2420TransmitP$StdControl$stop(void);
#line 170
static inline   error_t CC2420TransmitP$Send$send(message_t *p_msg, bool useCca);
#line 221
static inline   void CC2420TransmitP$RadioBackoff$setInitialBackoff(uint16_t backoffTime);







static inline   void CC2420TransmitP$RadioBackoff$setCongestionBackoff(uint16_t backoffTime);
#line 251
static inline   void CC2420TransmitP$CaptureSFD$captured(uint16_t time);
#line 320
static inline   void CC2420TransmitP$ChipSpiResource$releasing(void);
#line 332
static inline   void CC2420TransmitP$CC2420Receive$receive(uint8_t type, message_t *ack_msg);
#line 360
static inline  void CC2420TransmitP$SpiResource$granted(void);
#line 398
static inline   void CC2420TransmitP$TXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);
#line 430
static inline   void CC2420TransmitP$TXFIFO$readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);










static inline   void CC2420TransmitP$BackoffTimer$fired(void);
#line 491
static inline error_t CC2420TransmitP$send(message_t *p_msg, bool cca);
#line 559
static void CC2420TransmitP$attemptSend(void);
#line 601
static void CC2420TransmitP$congestionBackoff(void);






static error_t CC2420TransmitP$acquireSpiResource(void);







static inline error_t CC2420TransmitP$releaseSpiResource(void);
#line 638
static void CC2420TransmitP$loadTXFIFO(void);
#line 660
static void CC2420TransmitP$signalDone(error_t err);
#line 672
static inline    void CC2420TransmitP$TimeStamp$default$transmittedSFD(uint16_t time, message_t *p_msg);


static inline    void CC2420TransmitP$TimeStamp$default$receivedSFD(uint16_t time);
# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   bool CC2420ReceiveP$FIFO$get(void);
# 101 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
static   bool CC2420ReceiveP$CC2420Config$isAutoAckEnabled(void);
#line 96
static   bool CC2420ReceiveP$CC2420Config$isHwAutoAckDefault(void);
#line 64
static   uint16_t CC2420ReceiveP$CC2420Config$getShortAddr(void);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t CC2420ReceiveP$receiveDone_task$postTask(void);
# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   bool CC2420ReceiveP$FIFOP$get(void);
# 61 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static   void CC2420ReceiveP$CC2420Receive$receive(uint8_t arg_0x7dd51708, message_t *arg_0x7dd518b8);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420ReceiveP$SACK$strobe(void);
# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static   void CC2420ReceiveP$CSN$set(void);
static   void CC2420ReceiveP$CSN$clr(void);
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static   cc2420_header_t *CC2420ReceiveP$CC2420PacketBody$getHeader(message_t *arg_0x7e3bc7a8);




static   cc2420_metadata_t *CC2420ReceiveP$CC2420PacketBody$getMetadata(message_t *arg_0x7e3bccf8);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *CC2420ReceiveP$Receive$receive(message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0);
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
static   error_t CC2420ReceiveP$SpiResource$release(void);
#line 87
static   error_t CC2420ReceiveP$SpiResource$immediateRequest(void);
#line 78
static   error_t CC2420ReceiveP$SpiResource$request(void);
#line 118
static   bool CC2420ReceiveP$SpiResource$isOwner(void);
# 62 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static   error_t CC2420ReceiveP$RXFIFO$continueRead(uint8_t *arg_0x7df8bd30, uint8_t arg_0x7df8beb8);
#line 51
static   cc2420_status_t CC2420ReceiveP$RXFIFO$beginRead(uint8_t *arg_0x7df8b598, uint8_t arg_0x7df8b720);
# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
static   error_t CC2420ReceiveP$InterruptFIFOP$disable(void);
#line 43
static   error_t CC2420ReceiveP$InterruptFIFOP$enableFallingEdge(void);
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static   cc2420_status_t CC2420ReceiveP$SFLUSHRX$strobe(void);
# 109 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
enum CC2420ReceiveP$__nesc_unnamed4382 {
#line 109
  CC2420ReceiveP$receiveDone_task = 13U
};
#line 109
typedef int CC2420ReceiveP$__nesc_sillytask_receiveDone_task[CC2420ReceiveP$receiveDone_task];
#line 71
#line 65
typedef enum CC2420ReceiveP$__nesc_unnamed4383 {
  CC2420ReceiveP$S_STOPPED, 
  CC2420ReceiveP$S_STARTED, 
  CC2420ReceiveP$S_RX_LENGTH, 
  CC2420ReceiveP$S_RX_FCF, 
  CC2420ReceiveP$S_RX_PAYLOAD
} CC2420ReceiveP$cc2420_receive_state_t;

enum CC2420ReceiveP$__nesc_unnamed4384 {
  CC2420ReceiveP$RXFIFO_SIZE = 128, 
  CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE = 8, 
  CC2420ReceiveP$SACK_HEADER_LENGTH = 7
};

uint16_t CC2420ReceiveP$m_timestamp_queue[CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE];

uint8_t CC2420ReceiveP$m_timestamp_head;

uint8_t CC2420ReceiveP$m_timestamp_size;


uint8_t CC2420ReceiveP$m_missed_packets;


bool CC2420ReceiveP$receivingPacket;


 uint8_t CC2420ReceiveP$rxFrameLength;

 uint8_t CC2420ReceiveP$m_bytes_left;

 message_t *CC2420ReceiveP$m_p_rx_buf;

message_t CC2420ReceiveP$m_rx_buf;

CC2420ReceiveP$cc2420_receive_state_t CC2420ReceiveP$m_state;


static void CC2420ReceiveP$reset_state(void);
static void CC2420ReceiveP$beginReceive(void);
static void CC2420ReceiveP$receive(void);
static void CC2420ReceiveP$waitForNextPacket(void);
static void CC2420ReceiveP$flush(void);




static inline  error_t CC2420ReceiveP$Init$init(void);





static inline  error_t CC2420ReceiveP$StdControl$start(void);









static inline  error_t CC2420ReceiveP$StdControl$stop(void);
#line 143
static inline   void CC2420ReceiveP$CC2420Receive$sfd(uint16_t time);








static inline   void CC2420ReceiveP$CC2420Receive$sfd_dropped(void);
#line 169
static inline   void CC2420ReceiveP$InterruptFIFOP$fired(void);










static inline  void CC2420ReceiveP$SpiResource$granted(void);








static inline   void CC2420ReceiveP$RXFIFO$readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error);
#line 312
static inline   void CC2420ReceiveP$RXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);







static inline  void CC2420ReceiveP$receiveDone_task$runTask(void);
#line 335
static inline  void CC2420ReceiveP$CC2420Config$syncDone(error_t error);






static void CC2420ReceiveP$beginReceive(void);
#line 360
static void CC2420ReceiveP$flush(void);
#line 377
static void CC2420ReceiveP$receive(void);









static void CC2420ReceiveP$waitForNextPacket(void);
#line 415
static void CC2420ReceiveP$reset_state(void);
# 56 "/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketC.nc"
static   error_t CC2420PacketC$Acks$requestAck(message_t *p_msg);




static   error_t CC2420PacketC$Acks$noAck(message_t *p_msg);




static inline   bool CC2420PacketC$Acks$wasAcked(message_t *p_msg);
#line 90
static inline   cc2420_header_t *CC2420PacketC$CC2420PacketBody$getHeader(message_t *msg);



static inline   cc2420_metadata_t *CC2420PacketC$CC2420PacketBody$getMetadata(message_t *msg);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t UniqueSendP$SubSend$send(message_t *arg_0x7e3c2340, uint8_t arg_0x7e3c24c8);
#line 114
static  void *UniqueSendP$SubSend$getPayload(message_t *arg_0x7e3c01f8, uint8_t arg_0x7e3c0380);
#line 89
static  void UniqueSendP$Send$sendDone(message_t *arg_0x7e3c1598, error_t arg_0x7e3c1720);
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
static   uint16_t UniqueSendP$Random$rand16(void);
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static   cc2420_header_t *UniqueSendP$CC2420PacketBody$getHeader(message_t *arg_0x7e3bc7a8);
# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static   void UniqueSendP$State$toIdle(void);
#line 45
static   error_t UniqueSendP$State$requestState(uint8_t arg_0x7e844ad0);
# 54 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
uint8_t UniqueSendP$localSendId;

enum UniqueSendP$__nesc_unnamed4385 {
  UniqueSendP$S_IDLE, 
  UniqueSendP$S_SENDING
};


static inline  error_t UniqueSendP$Init$init(void);
#line 75
static inline  error_t UniqueSendP$Send$send(message_t *msg, uint8_t len);
#line 99
static inline  void *UniqueSendP$Send$getPayload(message_t *msg, uint8_t len);




static inline  void UniqueSendP$SubSend$sendDone(message_t *msg, error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *UniqueReceiveP$Receive$receive(message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0);
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
static   cc2420_header_t *UniqueReceiveP$CC2420PacketBody$getHeader(message_t *arg_0x7e3bc7a8);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *UniqueReceiveP$DuplicateReceive$receive(message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0);
# 59 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
#line 56
struct UniqueReceiveP$__nesc_unnamed4386 {
  am_addr_t source;
  uint8_t dsn;
} UniqueReceiveP$receivedMessages[4];

uint8_t UniqueReceiveP$writeIndex = 0;


uint8_t UniqueReceiveP$recycleSourceElement;

enum UniqueReceiveP$__nesc_unnamed4387 {
  UniqueReceiveP$INVALID_ELEMENT = 0xFF
};


static inline  error_t UniqueReceiveP$Init$init(void);









static inline bool UniqueReceiveP$hasSeen(uint16_t msgSource, uint8_t msgDsn);
static inline void UniqueReceiveP$insert(uint16_t msgSource, uint8_t msgDsn);


static inline  message_t *UniqueReceiveP$SubReceive$receive(message_t *msg, void *payload, 
uint8_t len);
#line 111
static inline bool UniqueReceiveP$hasSeen(uint16_t msgSource, uint8_t msgDsn);
#line 137
static inline void UniqueReceiveP$insert(uint16_t msgSource, uint8_t msgDsn);
#line 158
static inline   message_t *UniqueReceiveP$DuplicateReceive$default$receive(message_t *msg, void *payload, uint8_t len);
# 48 "../../../tos/interfaces/Equal.nc"
static  bool /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$Equal$test(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$Equal$equal_t arg_0x7e868d30, /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$Equal$equal_t arg_0x7e868eb8);
# 57 "../../../tos/lib/data/cache/DataCache.nc"
static  void /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$DataCache$evicted(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$DataCache$item_t *arg_0x7e856cc0);
# 79 "../../../tos/lib/data/cache/LruDataCacheP.nc"
/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$cache[8];
uint8_t /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first;
uint8_t /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count;



static inline  error_t /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$Init$init(void);







static inline void /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$printCache(void);
#line 107
static inline uint8_t /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$lookup(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t *item);
#line 119
static inline void /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$remove(uint8_t i);
#line 168
static inline  /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t */*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$DataCache$insert(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t *item);
# 48 "../../../tos/interfaces/Equal.nc"
static  bool /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$Equal$test(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$Equal$equal_t arg_0x7e868d30, /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$Equal$equal_t arg_0x7e868eb8);
# 57 "../../../tos/lib/data/cache/DataCache.nc"
static  void /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$evicted(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$item_t *arg_0x7e856cc0);
# 79 "../../../tos/lib/data/cache/LruDataCacheP.nc"
/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$cache[8];
uint8_t /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first;
uint8_t /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count;



static inline  error_t /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$Init$init(void);







static inline void /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$printCache(void);
#line 107
static uint8_t /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$lookup(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t *item);
#line 119
static inline void /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$remove(uint8_t i);
#line 153
static  /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t */*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$lookup(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t *item);
#line 168
static inline  /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t */*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$insert(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t *item);
# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static   Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void);
#line 37
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t arg_0x7e249948);
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





static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type arg_0x7e266e78);










static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void);
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void);
# 38 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0;
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt;
 uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base;



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$__nesc_unnamed4388 {
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
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void);
# 98 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getNow(void);
#line 92
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7e3289e0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7e328b70);
#line 105
static   /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(void);
#line 62
static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$stop(void);
# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired(void);
# 63 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_unnamed4389 {
#line 63
  AlarmToTimerC$0$fired = 14U
};
#line 63
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$__nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired];
#line 44
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot;

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
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t arg_0x7eb64238, uint32_t arg_0x7eb643c8);
#line 67
static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$stop(void);




static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(
# 37 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7db1e010);
#line 60
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4390 {
#line 60
  VirtualizeTimerC$0$updateFromTimer = 15U
};
#line 60
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer];
#line 42
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4391 {

  VirtualizeTimerC$0$NUM_TIMERS = 3, 
  VirtualizeTimerC$0$END_OF_LIST = 255
};








#line 48
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$__nesc_unnamed4392 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now);
#line 88
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$runTask(void);
#line 127
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$fired(void);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt);




static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt);




static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num);
#line 177
static inline  uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(uint8_t num);
#line 192
static inline   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num);
# 47 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline   void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC$0$Counter$overflow(void);
# 68 "../../../tos/lib/data/timer/DataTimer.nc"
static  void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$expired(/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$data_t arg_0x7e6f18b0);
# 125 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  uint32_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$getNow(void);
#line 62
static  void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$startOneShot(uint32_t arg_0x7eb705e0);




static  void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$stop(void);
# 58 "../../../tos/lib/data/timer/DataTimerP.nc"
/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data_timer_data_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data[8];
data_timer_time_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$delay[8];
uint8_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size;
uint32_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$startTime;



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

enum /*DsrP.ComposeC*/BitVectorC$0$__nesc_unnamed4393 {

  BitVectorC$0$ELEMENT_SIZE = 8 * sizeof(/*DsrP.ComposeC*/BitVectorC$0$int_type ), 
  BitVectorC$0$ARRAY_SIZE = (20 + /*DsrP.ComposeC*/BitVectorC$0$ELEMENT_SIZE - 1) / /*DsrP.ComposeC*/BitVectorC$0$ELEMENT_SIZE
};

/*DsrP.ComposeC*/BitVectorC$0$int_type /*DsrP.ComposeC*/BitVectorC$0$m_bits[/*DsrP.ComposeC*/BitVectorC$0$ARRAY_SIZE];

static inline uint16_t /*DsrP.ComposeC*/BitVectorC$0$getIndex(uint16_t bitnum);




static inline uint16_t /*DsrP.ComposeC*/BitVectorC$0$getMask(uint16_t bitnum);










static inline   void /*DsrP.ComposeC*/BitVectorC$0$BitVector$clearAll(void);









static   bool /*DsrP.ComposeC*/BitVectorC$0$BitVector$get(uint16_t bitnum);




static inline   void /*DsrP.ComposeC*/BitVectorC$0$BitVector$set(uint16_t bitnum);




static   void /*DsrP.ComposeC*/BitVectorC$0$BitVector$clear(uint16_t bitnum);
#line 40
typedef uint8_t /*DsrP.SalvageC*/BitVectorC$1$int_type;

enum /*DsrP.SalvageC*/BitVectorC$1$__nesc_unnamed4394 {

  BitVectorC$1$ELEMENT_SIZE = 8 * sizeof(/*DsrP.SalvageC*/BitVectorC$1$int_type ), 
  BitVectorC$1$ARRAY_SIZE = (20 + /*DsrP.SalvageC*/BitVectorC$1$ELEMENT_SIZE - 1) / /*DsrP.SalvageC*/BitVectorC$1$ELEMENT_SIZE
};

/*DsrP.SalvageC*/BitVectorC$1$int_type /*DsrP.SalvageC*/BitVectorC$1$m_bits[/*DsrP.SalvageC*/BitVectorC$1$ARRAY_SIZE];

static inline uint16_t /*DsrP.SalvageC*/BitVectorC$1$getIndex(uint16_t bitnum);




static inline uint16_t /*DsrP.SalvageC*/BitVectorC$1$getMask(uint16_t bitnum);










static inline   void /*DsrP.SalvageC*/BitVectorC$1$BitVector$clearAll(void);









static inline   bool /*DsrP.SalvageC*/BitVectorC$1$BitVector$get(uint16_t bitnum);




static inline   void /*DsrP.SalvageC*/BitVectorC$1$BitVector$set(uint16_t bitnum);




static   void /*DsrP.SalvageC*/BitVectorC$1$BitVector$clear(uint16_t bitnum);
# 48 "../../../tos/interfaces/Equal.nc"
static  bool /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$Equal$test(/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$Equal$equal_t arg_0x7e868d30, /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$Equal$equal_t arg_0x7e868eb8);
# 57 "../../../tos/lib/data/cache/DataCache.nc"
static  void /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$DataCache$evicted(/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$DataCache$item_t *arg_0x7e856cc0);
# 79 "../../../tos/lib/data/cache/LruDataCacheP.nc"
/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$data_cache_item_t /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$cache[10];
uint8_t /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$first;
uint8_t /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$count;



static inline  error_t /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$Init$init(void);







static inline void /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$printCache(void);
#line 107
static uint8_t /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$lookup(/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$data_cache_item_t *item);
#line 119
static void /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$remove(uint8_t i);
#line 153
static inline  /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$data_cache_item_t */*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$DataCache$lookup(/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$data_cache_item_t *item);
#line 168
static inline  /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$data_cache_item_t */*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$DataCache$insert(/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$data_cache_item_t *item);
#line 195
static inline  error_t /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$DataCache$remove(/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$data_cache_item_t *item);
# 60 "/opt/tinyos-2.x/tos/system/PoolP.nc"
uint8_t /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$free;
uint8_t /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$index;
/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool_t */*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$queue[10];
/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool_t /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool[10];

static inline  error_t /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Init$init(void);









static inline  bool /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$empty(void);










static inline  /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool_t */*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$get(void);
#line 100
static inline  error_t /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$put(/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool_t *newVal);
#line 60
uint8_t /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$free;
uint8_t /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$index;
/*PacketEngineC.SendPoolC.PoolP*/PoolP$1$pool_t */*PacketEngineC.SendPoolC.PoolP*/PoolP$1$queue[10];
/*PacketEngineC.SendPoolC.PoolP*/PoolP$1$pool_t /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$pool[10];

static inline  error_t /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$Init$init(void);









static inline  bool /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$Pool$empty(void);










static inline  /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$pool_t */*PacketEngineC.SendPoolC.PoolP*/PoolP$1$Pool$get(void);
#line 100
static  error_t /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$Pool$put(/*PacketEngineC.SendPoolC.PoolP*/PoolP$1$pool_t *newVal);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t *arg_0x7eb750a8, error_t arg_0x7eb75230);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t *arg_0x7e3c2340, uint8_t arg_0x7e3c24c8);
# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  void /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t *arg_0x7eb34490, am_addr_t arg_0x7eb34620);
#line 151
static  void /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t *arg_0x7eb31350, am_id_t arg_0x7eb314d8);
# 45 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline  error_t /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline  void /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(message_t *m, error_t err);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(
# 40 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x7da470f8, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x7eb81d30, message_t *arg_0x7eb81ee0, uint8_t arg_0x7eb80088);
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(
# 38 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7da48770, 
# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t *arg_0x7e3c1598, error_t arg_0x7e3c1720);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t *arg_0x7eb45938);
#line 83
static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t *arg_0x7eb44010, uint8_t arg_0x7eb44198);
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static   error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void);
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t *arg_0x7eb35888);
#line 136
static  am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t *arg_0x7eb33da0);
# 118 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4395 {
#line 118
  AMQueueImplP$0$CancelTask = 16U
};
#line 118
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$CancelTask];
#line 161
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4396 {
#line 161
  AMQueueImplP$0$errorTask = 17U
};
#line 161
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask];
#line 49
#line 47
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$__nesc_unnamed4397 {
  message_t *msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 2;
/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[2];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[2 / 8 + 1];

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
static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err);
#line 207
static inline   void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(uint8_t id, message_t *msg, error_t err);
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  error_t SinglePacketP$SubSend$send(
# 52 "../../../tos/lib/netarch/single/SinglePacketP.nc"
packet_client_id_t arg_0x7d9f3d38, 
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t arg_0x7eb81d30, message_t *arg_0x7eb81ee0, uint8_t arg_0x7eb80088);
#line 124
static  void *SinglePacketP$SubSend$getPayload(
# 52 "../../../tos/lib/netarch/single/SinglePacketP.nc"
packet_client_id_t arg_0x7d9f3d38, 
# 124 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7eb75ce0, uint8_t arg_0x7eb75e68);
#line 99
static  void SinglePacketP$Send$sendDone(
# 45 "../../../tos/lib/netarch/single/SinglePacketP.nc"
packet_client_id_t arg_0x7d9f5b58, 
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t *arg_0x7eb750a8, error_t arg_0x7eb75230);
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static  message_t *SinglePacketP$Snoop$receive(
# 47 "../../../tos/lib/netarch/single/SinglePacketP.nc"
am_id_t arg_0x7d9f4a90, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0);
#line 67
static  message_t *SinglePacketP$Receive$receive(
# 46 "../../../tos/lib/netarch/single/SinglePacketP.nc"
am_id_t arg_0x7d9f44b8, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0);
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  uint8_t SinglePacketP$SubPacket$payloadLength(message_t *arg_0x7eb45938);
#line 115
static  void *SinglePacketP$SubPacket$getPayload(message_t *arg_0x7eb44d60, uint8_t arg_0x7eb44ee8);
#line 83
static  void SinglePacketP$SubPacket$setPayloadLength(message_t *arg_0x7eb44010, uint8_t arg_0x7eb44198);
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t SinglePacketP$AMPacket$address(void);
# 70 "../../../tos/lib/netarch/single/SinglePacketP.nc"
static inline  am_addr_t SinglePacketP$SinglePacket$source(message_t *msg);
#line 84
static inline  void SinglePacketP$SinglePacket$setSource(message_t *msg, am_addr_t src);









static inline  am_addr_t SinglePacketP$SinglePacket$destination(message_t *msg);
#line 108
static inline  void SinglePacketP$SinglePacket$setDestination(message_t *msg, am_addr_t dest);
#line 120
static  bool SinglePacketP$SinglePacket$isForMe(message_t *msg);
#line 145
static  error_t SinglePacketP$Send$send(packet_client_id_t clientId, am_addr_t addr, message_t *msg, 
uint8_t len);
#line 162
static inline   void SinglePacketP$Send$default$sendDone(packet_client_id_t clientId, message_t *msg, error_t error);
#line 208
static  void *SinglePacketP$Send$getPayload(packet_client_id_t clientId, message_t *msg, uint8_t len);
#line 225
static inline   error_t SinglePacketP$SubSend$default$send(packet_client_id_t clientId, am_addr_t addr, 
message_t *msg, 
uint8_t len);
#line 243
static inline  void SinglePacketP$SubSend$sendDone(packet_client_id_t clientId, message_t *msg, error_t error);










static inline   void *SinglePacketP$SubSend$default$getPayload(packet_client_id_t clientId, message_t *msg, uint8_t len);
#line 270
static inline   message_t *SinglePacketP$Receive$default$receive(am_id_t upperId, message_t *msg, void *payload, uint8_t len);
#line 286
static inline   message_t *SinglePacketP$Snoop$default$receive(am_id_t upperId, message_t *msg, void *payload, uint8_t len);
#line 329
static inline  message_t *SinglePacketP$SubReceive$receive(am_id_t upperId, message_t *msg, void *payload, uint8_t len);
#line 384
static inline  uint8_t SinglePacketP$Packet$payloadLength(message_t *msg);
#line 401
static inline  void SinglePacketP$Packet$setPayloadLength(message_t *msg, uint8_t len);
#line 436
static  void *SinglePacketP$Packet$getPayload(message_t *msg, uint8_t len);
# 53 "../../../tos/lib/netarch/multihop/PacketEngineClientP.nc"
static inline  am_id_t /*DsrC.DsrSendC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$0$PacketEngineClient$upperType(void);








static inline  am_id_t /*DsrC.DsrSendC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$0$PacketEngineClient$defaultLowerType(void);
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static  void /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(message_t *arg_0x7eb750a8, error_t arg_0x7eb75230);
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static  error_t /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(message_t *arg_0x7e3c2340, uint8_t arg_0x7e3c24c8);
# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  void /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(message_t *arg_0x7eb34490, am_addr_t arg_0x7eb34620);
#line 151
static  void /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(message_t *arg_0x7eb31350, am_id_t arg_0x7eb314d8);
# 45 "/opt/tinyos-2.x/tos/system/AMQueueEntryP.nc"
static inline  error_t /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline  void /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(message_t *m, error_t err);
# 53 "../../../tos/lib/netarch/multihop/PacketEngineClientP.nc"
static inline  am_id_t /*UnicastCountToLedsAppC.AMSenderC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$1$PacketEngineClient$upperType(void);








static inline  am_id_t /*UnicastCountToLedsAppC.AMSenderC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$1$PacketEngineClient$defaultLowerType(void);
# 86 "/opt/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_disable_interrupt(void)
#line 86
{
   __asm volatile ("cli");}

#line 103
 
#line 102
__inline __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 106
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



 
#line 112
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 113 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline  void SchedulerBasicP$Scheduler$init(void)
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP$m_next, SchedulerBasicP$NO_TASK, sizeof SchedulerBasicP$m_next);
    SchedulerBasicP$m_head = SchedulerBasicP$NO_TASK;
    SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
  }
}

# 46 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static  void RealMainP$Scheduler$init(void){
#line 46
  SchedulerBasicP$Scheduler$init();
#line 46
}
#line 46
# 42 "/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline void PlatformP$power_init(void)
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    * (volatile uint8_t *)(0x35 + 0x20) = 1 << 5;
  }
}

# 49 "/opt/tinyos-2.x/tos/types/TinyError.h"
static inline error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 81 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P$TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x)
#line 81
{
#line 81
  union __nesc_unnamed4398 {
#line 81
    Atm128TimerCtrlCapture_t f;
#line 81
    uint16_t t;
  } 
#line 81
  c = { .f = x };

#line 81
  return c.t;
}





static inline   void HplAtm128Timer1P$TimerCtrl$setCtrlCapture(Atm128_TCCR1B_t x)
#line 88
{
  * (volatile uint8_t *)(0x2E + 0x20) = HplAtm128Timer1P$TimerCtrlCapture2int(x);
}

#line 71
static inline   Atm128TimerCtrlCapture_t HplAtm128Timer1P$TimerCtrl$getCtrlCapture(void)
#line 71
{
  return * (Atm128TimerCtrlCapture_t *)& * (volatile uint8_t *)(0x2E + 0x20);
}

#line 61
static inline   void HplAtm128Timer1P$Timer$setScale(uint8_t s)
#line 61
{
  Atm128TimerCtrlCapture_t x = HplAtm128Timer1P$TimerCtrl$getCtrlCapture();

#line 63
  x.bits.cs = s;
  HplAtm128Timer1P$TimerCtrl$setCtrlCapture(x);
}

# 95 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$setScale(uint8_t arg_0x7e287010){
#line 95
  HplAtm128Timer1P$Timer$setScale(arg_0x7e287010);
#line 95
}
#line 95
# 131 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$Timer$start(void)
#line 131
{
#line 131
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 2;
}

# 69 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$start(void){
#line 69
  HplAtm128Timer1P$Timer$start();
#line 69
}
#line 69
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$Timer$set(uint16_t t)
#line 52
{
#line 52
  * (volatile uint16_t *)(0x2C + 0x20) = t;
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$set(/*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$timer_size arg_0x7e28a350){
#line 58
  HplAtm128Timer1P$Timer$set(arg_0x7e28a350);
#line 58
}
#line 58
# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline  error_t /*InitOneP.InitOne*/Atm128TimerInitC$0$Init$init(void)
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$set(0);
    /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$start();
    /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$setScale(4);
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t MotePlatformP$SubInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*InitOneP.InitOne*/Atm128TimerInitC$0$Init$init();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)59U &= ~(1 << 4);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void MotePlatformP$SerialIdPin$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$clr();
#line 30
}
#line 30
# 50 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP$4$IO$makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)58U &= ~(1 << 4);
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

  * (volatile uint8_t *)(0x15 + 0x20) = 0;
  * (volatile uint8_t *)(0x14 + 0x20) = 0xff;


  MotePlatformP$SerialIdPin$makeInput();
  MotePlatformP$SerialIdPin$clr();

  return MotePlatformP$SubInit$init();
}

# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 0;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led2$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 1;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led1$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$set();
#line 29
}
#line 29
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 2;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led0$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$set();
#line 29
}
#line 29
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 0;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led2$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 1;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led1$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 2;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led0$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$makeOutput();
#line 35
}
#line 35
# 45 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline  error_t LedsP$Init$init(void)
#line 45
{
  /* atomic removed: atomic calls only */
#line 46
  {
    ;
    LedsP$Led0$makeOutput();
    LedsP$Led1$makeOutput();
    LedsP$Led2$makeOutput();
    LedsP$Led0$set();
    LedsP$Led1$set();
    LedsP$Led2$set();
  }
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t PlatformP$MoteInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = LedsP$Init$init();
#line 51
  result = ecombine(result, MotePlatformP$PlatformInit$init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 41 "/opt/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
static inline  error_t MeasureClockC$Init$init(void)
#line 41
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 47
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)(0x2E + 0x20) = 1 << 0;
    * (volatile uint8_t *)(0x30 + 0x20) = 1 << 3;
    * (volatile uint8_t *)(0x33 + 0x20) = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)(0x2C + 0x20);
    for (wraps = MeasureClockC$MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)(0x2C + 0x20);

        if (next < start) {
          wraps--;
          }
#line 65
        start = next;
      }


    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;


    start = * (volatile uint16_t *)(0x2C + 0x20);
    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;
    MeasureClockC$cycles = * (volatile uint16_t *)(0x2C + 0x20);

    MeasureClockC$cycles = (MeasureClockC$cycles - start + 16) >> 5;


    * (volatile uint8_t *)(0x30 + 0x20) = * (volatile uint8_t *)(0x2E + 0x20) = * (volatile uint8_t *)(0x33 + 0x20) = 0;
    * (volatile uint8_t *)(0x32 + 0x20) = 0;
    * (volatile uint16_t *)(0x2C + 0x20) = 0;
    * (volatile uint8_t *)0x7C = * (volatile uint8_t *)(0x36 + 0x20) = 0xff;
    while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
      ;
  }
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
inline static  error_t RealMainP$PlatformInit$init(void){
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
inline static  bool RealMainP$Scheduler$runNextTask(void){
#line 54
  unsigned char result;
#line 54

#line 54
  result = SchedulerBasicP$Scheduler$runNextTask();
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$sendDone(message_t *arg_0x7eb750a8, error_t arg_0x7eb75230){
#line 99
  PacketEngineP$SubSend$sendDone(48, arg_0x7eb750a8, arg_0x7eb75230);
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
inline static  void /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$sendDone(message_t *arg_0x7eb750a8, error_t arg_0x7eb75230){
#line 99
  PacketEngineP$SubSend$sendDone(4, arg_0x7eb750a8, arg_0x7eb75230);
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
inline static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(uint8_t arg_0x7da48770, message_t *arg_0x7e3c1598, error_t arg_0x7e3c1720){
#line 89
  switch (arg_0x7da48770) {
#line 89
    case 0U:
#line 89
      /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$sendDone(arg_0x7e3c1598, arg_0x7e3c1720);
#line 89
      break;
#line 89
    case 1U:
#line 89
      /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$sendDone(arg_0x7e3c1598, arg_0x7e3c1720);
#line 89
      break;
#line 89
    default:
#line 89
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$default$sendDone(arg_0x7da48770, arg_0x7e3c1598, arg_0x7e3c1720);
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
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

# 70 "../../../tos/lib/netarch/multihop/PacketEngine.h"
static inline packet_send_action_t pktSendActionCombine(packet_send_action_t a, packet_send_action_t b)
#line 70
{
  if (a == b) {
    return a;
    }
  else {
#line 73
    if (a == PKT_SEND_UNKNOWN) {
      return b;
      }
    else {
#line 75
      if (b == PKT_SEND_UNKNOWN) {
        return a;
        }
      else 
#line 77
        {
          ;
          return PKT_SEND_DONE;
        }
      }
    }
}

# 238 "../../../tos/lib/netarch/dsr/DsrControlP.nc"
static inline  packet_send_action_t /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$sendDone(packet_id_t pid, message_t *msg, 
error_t result)
#line 239
{
  return PKT_SEND_UNKNOWN;
}

#line 488
static inline  packet_send_action_t /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$sendDone(packet_id_t pid, message_t *msg, 
error_t result)
#line 489
{
  return PKT_SEND_UNKNOWN;
}

# 742 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   packet_send_action_t PacketEngineP$PacketEngine$default$sendDone(am_id_t lowerId, packet_id_t pid, 
message_t *msg, 
error_t result)
#line 744
{
  ;
  return SUCCESS;
}

# 113 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
inline static  packet_send_action_t PacketEngineP$PacketEngine$sendDone(am_id_t arg_0x7e877b78, packet_id_t arg_0x7ea63380, message_t *arg_0x7ea63530, error_t arg_0x7ea636b8){
#line 113
  unsigned char result;
#line 113

#line 113
  switch (arg_0x7e877b78) {
#line 113
    case 4:
#line 113
      result = /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$sendDone(arg_0x7ea63380, arg_0x7ea63530, arg_0x7ea636b8);
#line 113
      result = pktSendActionCombine(result, /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$sendDone(arg_0x7ea63380, arg_0x7ea63530, arg_0x7ea636b8));
#line 113
      break;
#line 113
    case 48:
#line 113
      result = /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$sendDone(arg_0x7ea63380, arg_0x7ea63530, arg_0x7ea636b8);
#line 113
      result = pktSendActionCombine(result, /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$sendDone(arg_0x7ea63380, arg_0x7ea63530, arg_0x7ea636b8));
#line 113
      break;
#line 113
    default:
#line 113
      result = PacketEngineP$PacketEngine$default$sendDone(arg_0x7e877b78, arg_0x7ea63380, arg_0x7ea63530, arg_0x7ea636b8);
#line 113
      break;
#line 113
    }
#line 113

#line 113
  return result;
#line 113
}
#line 113
# 235 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void *source)
#line 235
{
  const uint8_t *base = source;

#line 237
  return base[0];
}

#line 257
static __inline int8_t __nesc_ntoh_int8(const void *source)
#line 257
{
#line 257
  return __nesc_ntoh_uint8(source);
}

# 94 "/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketC.nc"
static inline   cc2420_metadata_t *CC2420PacketC$CC2420PacketBody$getMetadata(message_t *msg)
#line 94
{
  return (cc2420_metadata_t *)msg->metadata;
}

#line 66
static inline   bool CC2420PacketC$Acks$wasAcked(message_t *p_msg)
#line 66
{
  return __nesc_ntoh_int8((unsigned char *)&CC2420PacketC$CC2420PacketBody$getMetadata(p_msg)->ack);
}

# 74 "/opt/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
inline static   bool /*DsrP.DsrControlP*/DsrControlP$0$Acks$wasAcked(message_t *arg_0x7ea35dc0){
#line 74
  unsigned char result;
#line 74

#line 74
  result = CC2420PacketC$Acks$wasAcked(arg_0x7ea35dc0);
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 61 "../../../tos/lib/netarch/dsr/RouteCache.nc"
inline static  void /*DsrP.DsrControlP*/DsrControlP$0$RouteCache$removeLink(route_cache_node_id_t arg_0x7e704e68, route_cache_node_id_t arg_0x7e702030, bool arg_0x7e7021b8){
#line 61
  SimpleLinkCacheP$RouteCache$removeLink(arg_0x7e704e68, arg_0x7e702030, arg_0x7e7021b8);
#line 61
}
#line 61
# 115 "../../../tos/lib/data/graph/Graph.nc"
inline static  error_t SimpleLinkCacheP$Graph$remove(graph_vertex_id_t arg_0x7e5e4b38, graph_vertex_id_t arg_0x7e5e4cd0){
#line 115
  unsigned char result;
#line 115

#line 115
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$remove(arg_0x7e5e4b38, arg_0x7e5e4cd0);
#line 115

#line 115
  return result;
#line 115
}
#line 115
# 88 "../../../tos/lib/data/alloc/IndexedAlloc.nc"
inline static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$IndexedAlloc$free(indexed_alloc_id_t arg_0x7e5953c8){
#line 88
  unsigned char result;
#line 88

#line 88
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$IndexedAlloc$free(arg_0x7e5953c8);
#line 88

#line 88
  return result;
#line 88
}
#line 88
# 55 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$getMask(uint16_t bitnum)
{
  return 1 << bitnum % /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$ELEMENT_SIZE;
}

#line 50
static inline uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$getIndex(uint16_t bitnum)
{
  return bitnum / /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$ELEMENT_SIZE;
}

#line 86
static inline   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$BitVector$clear(uint16_t bitnum)
{
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$m_bits[/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$getIndex(bitnum)] &= ~/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$getMask(bitnum);
}

# 58 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$clear(uint16_t arg_0x7e6e5850){
#line 58
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$BitVector$clear(arg_0x7e6e5850);
#line 58
}
#line 58
# 157 "../../../tos/lib/netarch/dsr/SimpleLinkCacheP.nc"
static inline  void SimpleLinkCacheP$Graph$removed(graph_edge_id_t m)
#line 157
{
}

# 305 "../../../tos/lib/data/graph/SourceShortestPathP.nc"
static inline  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$removed(graph_edge_id_t m)
#line 305
{
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded = TRUE;
}

# 150 "../../../tos/lib/data/graph/Graph.nc"
inline static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$removed(graph_edge_id_t arg_0x7e5e1d18){
#line 150
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$removed(arg_0x7e5e1d18);
#line 150
  SimpleLinkCacheP$Graph$removed(arg_0x7e5e1d18);
#line 150
}
#line 150
# 307 "../../../tos/lib/data/graph/GraphSparseP.nc"
static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$printGraph(void)
#line 307
{
}

# 86 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP$isWaiting(uint8_t id)
{
  return SchedulerBasicP$m_next[id] != SchedulerBasicP$NO_TASK || SchedulerBasicP$m_tail == id;
}

static inline bool SchedulerBasicP$pushTask(uint8_t id)
{
  if (!SchedulerBasicP$isWaiting(id)) 
    {
      if (SchedulerBasicP$m_head == SchedulerBasicP$NO_TASK) 
        {
          SchedulerBasicP$m_head = id;
          SchedulerBasicP$m_tail = id;
        }
      else 
        {
          SchedulerBasicP$m_next[SchedulerBasicP$m_tail] = id;
          SchedulerBasicP$m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

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

#line 81
static inline   void /*DsrP.ComposeC*/BitVectorC$0$BitVector$set(uint16_t bitnum)
{
  /*DsrP.ComposeC*/BitVectorC$0$m_bits[/*DsrP.ComposeC*/BitVectorC$0$getIndex(bitnum)] |= /*DsrP.ComposeC*/BitVectorC$0$getMask(bitnum);
}

# 52 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   void /*DsrP.DsrControlP*/DsrControlP$0$Compose$set(uint16_t arg_0x7e6e5350){
#line 52
  /*DsrP.ComposeC*/BitVectorC$0$BitVector$set(arg_0x7e6e5350);
#line 52
}
#line 52
# 93 "../../../tos/lib/data/cache/LruDataCacheP.nc"
static inline void /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$printCache(void)
#line 93
{
}

#line 153
static inline  /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$data_cache_item_t */*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$DataCache$lookup(/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$data_cache_item_t *item)
#line 153
{
  uint8_t i = /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$lookup(item);

#line 155
  /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$printCache();
  if (i == /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$count) {
    return (void *)0;
    }
#line 158
  return &/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$cache[(i + /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$first) % 10];
}

# 66 "../../../tos/lib/data/cache/DataCache.nc"
inline static  PacketEngineP$SendQueue$item_t *PacketEngineP$SendQueue$lookup(PacketEngineP$SendQueue$item_t *arg_0x7e855360){
#line 66
  struct __nesc_unnamed4308 *result;
#line 66

#line 66
  result = /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$DataCache$lookup(arg_0x7e855360);
#line 66

#line 66
  return result;
#line 66
}
#line 66
# 421 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline  bool PacketEngineP$SendQueueEqual$test(packet_send_entry_t *a, packet_send_entry_t *b)
#line 421
{
  return a->pid == b->pid;
}

# 48 "../../../tos/interfaces/Equal.nc"
inline static  bool /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$Equal$test(/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$Equal$equal_t arg_0x7e868d30, /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$Equal$equal_t arg_0x7e868eb8){
#line 48
  unsigned char result;
#line 48

#line 48
  result = PacketEngineP$SendQueueEqual$test(arg_0x7e868d30, arg_0x7e868eb8);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 167 "UnicastCountToLedsC.nc"
static inline  void UnicastCountToLedsC$AMSend$sendDone(message_t *bufPtr, error_t error)
#line 167
{
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*DsrP.DsrControlP*/DsrControlP$0$composePkt$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*DsrP.DsrControlP*/DsrControlP$0$composePkt);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 887 "../../../tos/lib/netarch/dsr/DsrControlP.nc"
static inline  void /*DsrP.DsrControlP*/DsrControlP$0$Send$sendDone(message_t *msg, error_t error)
#line 887
{
  if (error == FAIL) {
    ;
    }
#line 890
  ;
  /*DsrP.DsrControlP*/DsrControlP$0$composePkt$postTask();
}

# 162 "../../../tos/lib/netarch/single/SinglePacketP.nc"
static inline   void SinglePacketP$Send$default$sendDone(packet_client_id_t clientId, message_t *msg, error_t error)
#line 162
{
  ;
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void SinglePacketP$Send$sendDone(packet_client_id_t arg_0x7d9f5b58, message_t *arg_0x7eb750a8, error_t arg_0x7eb75230){
#line 99
  switch (arg_0x7d9f5b58) {
#line 99
    case /*UnicastCountToLedsAppC.AMSenderC*/SingleSenderC$0$PACKET_ENGINE_CLIENT_ID:
#line 99
      UnicastCountToLedsC$AMSend$sendDone(arg_0x7eb750a8, arg_0x7eb75230);
#line 99
      break;
#line 99
    case /*DsrC.DsrSendC*/SingleProcessorSenderC$0$PACKET_ENGINE_CLIENT_ID:
#line 99
      /*DsrP.DsrControlP*/DsrControlP$0$Send$sendDone(arg_0x7eb750a8, arg_0x7eb75230);
#line 99
      break;
#line 99
    default:
#line 99
      SinglePacketP$Send$default$sendDone(arg_0x7d9f5b58, arg_0x7eb750a8, arg_0x7eb75230);
#line 99
      break;
#line 99
    }
#line 99
}
#line 99
# 243 "../../../tos/lib/netarch/single/SinglePacketP.nc"
static inline  void SinglePacketP$SubSend$sendDone(packet_client_id_t clientId, message_t *msg, error_t error)
#line 243
{
  SinglePacketP$Send$sendDone(clientId, msg, error);
}

# 318 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   void PacketEngineP$Send$default$sendDone(packet_client_id_t clientId, message_t *msg, error_t error)
#line 318
{
  ;
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void PacketEngineP$Send$sendDone(packet_client_id_t arg_0x7e8841a0, message_t *arg_0x7eb750a8, error_t arg_0x7eb75230){
#line 99
  switch (arg_0x7e8841a0) {
#line 99
    case 0:
#line 99
      SinglePacketP$SubSend$sendDone(/*UnicastCountToLedsAppC.AMSenderC*/SingleSenderC$0$PACKET_ENGINE_CLIENT_ID, arg_0x7eb750a8, arg_0x7eb75230);
#line 99
      break;
#line 99
    case 1:
#line 99
      SinglePacketP$SubSend$sendDone(/*DsrC.DsrSendC*/SingleProcessorSenderC$0$PACKET_ENGINE_CLIENT_ID, arg_0x7eb750a8, arg_0x7eb75230);
#line 99
      break;
#line 99
    default:
#line 99
      PacketEngineP$Send$default$sendDone(arg_0x7e8841a0, arg_0x7eb750a8, arg_0x7eb75230);
#line 99
      break;
#line 99
    }
#line 99
}
#line 99
# 78 "/opt/tinyos-2.x/tos/system/RandomMlcgP.nc"
static inline   uint16_t RandomMlcgP$Random$rand16(void)
#line 78
{
  return (uint16_t )RandomMlcgP$Random$rand32();
}

# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static   uint16_t PacketEngineP$Random$rand16(void){
#line 41
  unsigned int result;
#line 41

#line 41
  result = RandomMlcgP$Random$rand16();
#line 41

#line 41
  return result;
#line 41
}
#line 41
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
# 147 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, TRUE);
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void PacketEngineP$SendBackoff$startOneShot(uint32_t arg_0x7eb705e0){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(1U, arg_0x7eb705e0);
#line 62
}
#line 62
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$updateFromTimer);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 94 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline   Atm128_TIFR_t HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag(void)
#line 94
{
  return * (Atm128_TIFR_t *)& * (volatile uint8_t *)(0x36 + 0x20);
}

# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static   Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$getInterruptFlag(void){
#line 44
  union __nesc_unnamed4272 result;
#line 44

#line 44
  result = HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag();
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
    StateImplP$state[id] = reqState;
#line 112
    __nesc_atomic_end(__nesc_atomic); }
}

# 51 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static   void PacketEngineP$SendState$forceState(uint8_t arg_0x7e841088){
#line 51
  StateImplP$State$forceState(4U, arg_0x7e841088);
#line 51
}
#line 51
# 100 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static inline  error_t /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$put(/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool_t *newVal)
#line 100
{
  if (/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$free >= 10) {
      return FAIL;
    }
  else {
      uint8_t emptyIndex = /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$index + /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$free;

#line 106
      if (emptyIndex >= 10) {
          emptyIndex -= 10;
        }
      /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$queue[emptyIndex] = newVal;
      /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$free++;
      return SUCCESS;
    }
}

# 88 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
inline static  error_t PacketEngineP$ReceivePool$put(PacketEngineP$ReceivePool$t *arg_0x7e8473c0){
#line 88
  unsigned char result;
#line 88

#line 88
  result = /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$put(arg_0x7e8473c0);
#line 88

#line 88
  return result;
#line 88
}
#line 88
# 195 "../../../tos/lib/data/cache/LruDataCacheP.nc"
static inline  error_t /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$DataCache$remove(/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$data_cache_item_t *item)
#line 195
{
  uint8_t i = /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$lookup(item);

#line 197
  if (i == /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$count) {
    return EINVAL;
    }
#line 199
  /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$remove(i);
  /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$printCache();
  return SUCCESS;
}

# 74 "../../../tos/lib/data/cache/DataCache.nc"
inline static  error_t PacketEngineP$SendQueue$remove(PacketEngineP$SendQueue$item_t *arg_0x7e855978){
#line 74
  unsigned char result;
#line 74

#line 74
  result = /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$DataCache$remove(arg_0x7e855978);
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 161 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$runTask(void)
#line 161
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current, /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg, FAIL);
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$errorTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(am_id_t arg_0x7da470f8, am_addr_t arg_0x7eb81d30, message_t *arg_0x7eb81ee0, uint8_t arg_0x7eb80088){
#line 69
  unsigned char result;
#line 69

#line 69
  result = CC2420ActiveMessageP$AMSend$send(arg_0x7da470f8, arg_0x7eb81d30, arg_0x7eb81ee0, arg_0x7eb80088);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$payloadLength(message_t *arg_0x7eb45938){
#line 67
  unsigned char result;
#line 67

#line 67
  result = CC2420ActiveMessageP$Packet$payloadLength(arg_0x7eb45938);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 136 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(message_t *arg_0x7eb33da0){
#line 136
  unsigned char result;
#line 136

#line 136
  result = CC2420ActiveMessageP$AMPacket$type(arg_0x7eb33da0);
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
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current + 1) % 2;
  for (i = 0; i < 2; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$cancelMask[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current + 1) % 2;
        }
      else {
          break;
        }
    }
  if (i >= 2) {
#line 70
    /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 2;
    }
}

#line 166
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend(void)
#line 166
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current < 2) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg;
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

# 272 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   uint16_t CC2420ControlP$CC2420Config$getPanAddr(void)
#line 272
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 273
    {
      unsigned int __nesc_temp = 
#line 273
      CC2420ControlP$m_pan;

      {
#line 273
        __nesc_atomic_end(__nesc_atomic); 
#line 273
        return __nesc_temp;
      }
    }
#line 275
    __nesc_atomic_end(__nesc_atomic); }
}

# 70 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static   uint16_t CC2420ActiveMessageP$CC2420Config$getPanAddr(void){
#line 70
  unsigned int result;
#line 70

#line 70
  result = CC2420ControlP$CC2420Config$getPanAddr();
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 251 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_hton_leuint8(void *target, uint8_t value)
#line 251
{
  uint8_t *base = target;

#line 253
  base[0] = value;
  return value;
}

#line 246
static __inline uint8_t __nesc_ntoh_leuint8(const void *source)
#line 246
{
  const uint8_t *base = source;

#line 248
  return base[0];
}

#line 269
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

#line 257
static __inline int8_t __nesc_hton_int8(void *target, int8_t value)
#line 257
{
#line 257
  __nesc_hton_uint8(target, value);
#line 257
  return value;
}

#line 281
static __inline uint16_t __nesc_hton_leuint16(void *target, uint16_t value)
#line 281
{
  uint8_t *base = target;

#line 283
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

#line 276
static __inline uint16_t __nesc_ntoh_leuint16(const void *source)
#line 276
{
  const uint8_t *base = source;

#line 278
  return ((uint16_t )base[1] << 8) | base[0];
}

# 491 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$send(message_t *p_msg, bool cca)
#line 491
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 492
    {
      if (CC2420TransmitP$m_state == CC2420TransmitP$S_CANCEL) {
          {
            unsigned char __nesc_temp = 
#line 494
            ECANCEL;

            {
#line 494
              __nesc_atomic_end(__nesc_atomic); 
#line 494
              return __nesc_temp;
            }
          }
        }
#line 497
      if (CC2420TransmitP$m_state != CC2420TransmitP$S_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 498
            FAIL;

            {
#line 498
              __nesc_atomic_end(__nesc_atomic); 
#line 498
              return __nesc_temp;
            }
          }
        }
#line 501
      CC2420TransmitP$m_state = CC2420TransmitP$S_LOAD;
      CC2420TransmitP$m_cca = cca;
      CC2420TransmitP$m_msg = p_msg;
      CC2420TransmitP$totalCcaChecks = 0;
    }
#line 505
    __nesc_atomic_end(__nesc_atomic); }

  if (CC2420TransmitP$acquireSpiResource() == SUCCESS) {
      CC2420TransmitP$loadTXFIFO();
    }

  return SUCCESS;
}

#line 170
static inline   error_t CC2420TransmitP$Send$send(message_t *p_msg, bool useCca)
#line 170
{
  return CC2420TransmitP$send(p_msg, useCca);
}

# 51 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static   error_t CC2420CsmaP$CC2420Transmit$send(message_t *arg_0x7e36d4f0, bool arg_0x7e36d678){
#line 51
  unsigned char result;
#line 51

#line 51
  result = CC2420TransmitP$Send$send(arg_0x7e36d4f0, arg_0x7e36d678);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 292 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline    void CC2420CsmaP$RadioBackoff$default$requestCca(am_id_t amId, 
message_t *msg)
#line 293
{
}

# 95 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static   void CC2420CsmaP$RadioBackoff$requestCca(am_id_t arg_0x7e37d4e0, message_t *arg_0x7e3dcc10){
#line 95
    CC2420CsmaP$RadioBackoff$default$requestCca(arg_0x7e37d4e0, arg_0x7e3dcc10);
#line 95
}
#line 95
# 61 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline   am_addr_t ActiveMessageAddressC$ActiveMessageAddress$amAddress(void)
#line 61
{
  return ActiveMessageAddressC$amAddress();
}

# 50 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static   am_addr_t CC2420ActiveMessageP$ActiveMessageAddress$amAddress(void){
#line 50
  unsigned int result;
#line 50

#line 50
  result = ActiveMessageAddressC$ActiveMessageAddress$amAddress();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 85 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  am_addr_t CC2420ActiveMessageP$AMPacket$address(void)
#line 85
{
  return CC2420ActiveMessageP$ActiveMessageAddress$amAddress();
}

# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t CC2420CsmaP$AMPacket$address(void){
#line 57
  unsigned int result;
#line 57

#line 57
  result = CC2420ActiveMessageP$AMPacket$address();
#line 57

#line 57
  return result;
#line 57
}
#line 57
# 51 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static   void CC2420CsmaP$SplitControlState$forceState(uint8_t arg_0x7e841088){
#line 51
  StateImplP$State$forceState(1U, arg_0x7e841088);
#line 51
}
#line 51
#line 66
inline static   bool CC2420CsmaP$SplitControlState$isState(uint8_t arg_0x7e841c28){
#line 66
  unsigned char result;
#line 66

#line 66
  result = StateImplP$State$isState(1U, arg_0x7e841c28);
#line 66

#line 66
  return result;
#line 66
}
#line 66
# 47 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static   cc2420_metadata_t *CC2420CsmaP$CC2420PacketBody$getMetadata(message_t *arg_0x7e3bccf8){
#line 47
  nx_struct cc2420_metadata_t *result;
#line 47

#line 47
  result = CC2420PacketC$CC2420PacketBody$getMetadata(arg_0x7e3bccf8);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 90 "/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketC.nc"
static inline   cc2420_header_t *CC2420PacketC$CC2420PacketBody$getHeader(message_t *msg)
#line 90
{
  return (cc2420_header_t *)(msg->data - sizeof(cc2420_header_t ));
}

# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static   cc2420_header_t *CC2420CsmaP$CC2420PacketBody$getHeader(message_t *arg_0x7e3bc7a8){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketC$CC2420PacketBody$getHeader(arg_0x7e3bc7a8);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 124 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline  error_t CC2420CsmaP$Send$send(message_t *p_msg, uint8_t len)
#line 124
{
  unsigned char *__nesc_temp49;
  unsigned char *__nesc_temp48;
#line 126
  cc2420_header_t *header = CC2420CsmaP$CC2420PacketBody$getHeader(p_msg);
  cc2420_metadata_t *metadata = CC2420CsmaP$CC2420PacketBody$getMetadata(p_msg);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 129
    {
      if (!CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STARTED)) {
          {
            unsigned char __nesc_temp = 
#line 131
            FAIL;

            {
#line 131
              __nesc_atomic_end(__nesc_atomic); 
#line 131
              return __nesc_temp;
            }
          }
        }
#line 134
      CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_TRANSMITTING);
      CC2420CsmaP$m_msg = p_msg;
    }
#line 136
    __nesc_atomic_end(__nesc_atomic); }

  __nesc_hton_leuint8((unsigned char *)&header->length, len);
  (__nesc_temp48 = (unsigned char *)&header->fcf, __nesc_hton_leuint16(__nesc_temp48, __nesc_ntoh_leuint16(__nesc_temp48) & (1 << IEEE154_FCF_ACK_REQ)));
  (__nesc_temp49 = (unsigned char *)&header->fcf, __nesc_hton_leuint16(__nesc_temp49, __nesc_ntoh_leuint16(__nesc_temp49) | ((((IEEE154_TYPE_DATA << IEEE154_FCF_FRAME_TYPE) | (
  1 << IEEE154_FCF_INTRAPAN)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_DEST_ADDR_MODE)) | (
  IEEE154_ADDR_SHORT << IEEE154_FCF_SRC_ADDR_MODE))));
  __nesc_hton_leuint16((unsigned char *)&header->src, CC2420CsmaP$AMPacket$address());
  __nesc_hton_int8((unsigned char *)&metadata->ack, FALSE);
  __nesc_hton_uint8((unsigned char *)&metadata->rssi, 0);
  __nesc_hton_uint8((unsigned char *)&metadata->lqi, 0);
  __nesc_hton_uint16((unsigned char *)&metadata->time, 0);

  CC2420CsmaP$ccaOn = TRUE;
  CC2420CsmaP$RadioBackoff$requestCca(__nesc_ntoh_leuint8((unsigned char *)&((cc2420_header_t *)(CC2420CsmaP$m_msg->data - 
  sizeof(cc2420_header_t )))->type), CC2420CsmaP$m_msg);
  CC2420CsmaP$CC2420Transmit$send(CC2420CsmaP$m_msg, CC2420CsmaP$ccaOn);
  return SUCCESS;
}

# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t UniqueSendP$SubSend$send(message_t *arg_0x7e3c2340, uint8_t arg_0x7e3c24c8){
#line 64
  unsigned char result;
#line 64

#line 64
  result = CC2420CsmaP$Send$send(arg_0x7e3c2340, arg_0x7e3c24c8);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static   cc2420_header_t *UniqueSendP$CC2420PacketBody$getHeader(message_t *arg_0x7e3bc7a8){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketC$CC2420PacketBody$getHeader(arg_0x7e3bc7a8);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 45 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static   error_t UniqueSendP$State$requestState(uint8_t arg_0x7e844ad0){
#line 45
  unsigned char result;
#line 45

#line 45
  result = StateImplP$State$requestState(2U, arg_0x7e844ad0);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 75 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline  error_t UniqueSendP$Send$send(message_t *msg, uint8_t len)
#line 75
{
  error_t error;

#line 77
  if (UniqueSendP$State$requestState(UniqueSendP$S_SENDING) == SUCCESS) {
      __nesc_hton_leuint8((unsigned char *)&UniqueSendP$CC2420PacketBody$getHeader(msg)->dsn, UniqueSendP$localSendId++);

      if ((error = UniqueSendP$SubSend$send(msg, len)) != SUCCESS) {
          UniqueSendP$State$toIdle();
        }

      return error;
    }

  return EBUSY;
}

# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t CC2420ActiveMessageP$SubSend$send(message_t *arg_0x7e3c2340, uint8_t arg_0x7e3c24c8){
#line 64
  unsigned char result;
#line 64

#line 64
  result = UniqueSendP$Send$send(arg_0x7e3c2340, arg_0x7e3c24c8);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420TransmitP$SpiResource$immediateRequest(void){
#line 87
  unsigned char result;
#line 87

#line 87
  result = CC2420SpiP$Resource$immediateRequest(/*CC2420TransmitC.Spi*/CC2420SpiC$3$CLIENT_ID);
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 45 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static   error_t CC2420SpiP$WorkingState$requestState(uint8_t arg_0x7e844ad0){
#line 45
  unsigned char result;
#line 45

#line 45
  result = StateImplP$State$requestState(0U, arg_0x7e844ad0);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   bool Atm128SpiP$ResourceArbiter$isOwner(uint8_t arg_0x7ded4950){
#line 118
  unsigned char result;
#line 118

#line 118
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(arg_0x7ded4950);
#line 118

#line 118
  return result;
#line 118
}
#line 118
# 331 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline   uint8_t Atm128SpiP$Resource$isOwner(uint8_t id)
#line 331
{
  return Atm128SpiP$ResourceArbiter$isOwner(id);
}

# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   bool CC2420SpiP$SpiResource$isOwner(void){
#line 118
  unsigned char result;
#line 118

#line 118
  result = Atm128SpiP$Resource$isOwner(0U);
#line 118

#line 118
  return result;
#line 118
}
#line 118
# 170 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(uint8_t id)
#line 170
{
}

# 49 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(uint8_t arg_0x7de01b70){
#line 49
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$configure(arg_0x7de01b70);
#line 49
}
#line 49
# 168 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(uint8_t id)
#line 168
{
}

# 51 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(uint8_t arg_0x7de01088){
#line 51
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$immediateRequested(arg_0x7de01088);
#line 51
}
#line 51
# 84 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(uint8_t id)
#line 84
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$immediateRequested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
  /* atomic removed: atomic calls only */
#line 86
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE) {
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_BUSY;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId = id;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
        {
          unsigned char __nesc_temp = 
#line 91
          SUCCESS;

#line 91
          return __nesc_temp;
        }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      FAIL;

#line 93
      return __nesc_temp;
    }
  }
}

# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t Atm128SpiP$ResourceArbiter$immediateRequest(uint8_t arg_0x7ded4950){
#line 87
  unsigned char result;
#line 87

#line 87
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$immediateRequest(arg_0x7ded4950);
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 304 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline   error_t Atm128SpiP$Resource$immediateRequest(uint8_t id)
#line 304
{
  error_t result = Atm128SpiP$ResourceArbiter$immediateRequest(id);

#line 306
  if (result == SUCCESS) {
      Atm128SpiP$startSpi();
    }
  return result;
}

# 87 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420SpiP$SpiResource$immediateRequest(void){
#line 87
  unsigned char result;
#line 87

#line 87
  result = Atm128SpiP$Resource$immediateRequest(0U);
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 109 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline   void McuSleepC$McuPowerState$update(void)
#line 109
{
}

# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static   void HplAtm128SpiP$Mcu$update(void){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)56U &= ~(1 << 0);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAtm128SpiP$SS$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 157 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$setMasterBit(bool isMaster)
#line 157
{
  if (isMaster) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 4;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 4);
    }
}

# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)55U |= 1 << 0;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAtm128SpiP$SS$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)55U |= 1 << 1;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAtm128SpiP$SCK$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP$9$IO$makeOutput();
#line 35
}
#line 35
# 50 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)55U &= ~(1 << 3);
}

# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAtm128SpiP$MISO$makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP$11$IO$makeInput();
#line 33
}
#line 33
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)55U |= 1 << 2;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAtm128SpiP$MOSI$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP$10$IO$makeOutput();
#line 35
}
#line 35
# 79 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$initMaster(void)
#line 79
{
  HplAtm128SpiP$MOSI$makeOutput();
  HplAtm128SpiP$MISO$makeInput();
  HplAtm128SpiP$SCK$makeOutput();
  HplAtm128SpiP$SS$makeOutput();
  HplAtm128SpiP$SPI$setMasterBit(TRUE);
  HplAtm128SpiP$SS$clr();
}

# 66 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$initMaster(void){
#line 66
  HplAtm128SpiP$SPI$initMaster();
#line 66
}
#line 66
# 214 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$setMasterDoubleSpeed(bool on)
#line 214
{
  if (on) {
      * (volatile uint8_t *)(0x0E + 0x20) |= 1 << 0;
    }
  else {
      * (volatile uint8_t *)(0x0E + 0x20) &= ~(1 << 0);
    }
}

# 125 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$setMasterDoubleSpeed(bool arg_0x7dec9b80){
#line 125
  HplAtm128SpiP$SPI$setMasterDoubleSpeed(arg_0x7dec9b80);
#line 125
}
#line 125
# 170 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$setClockPolarity(bool highWhenIdle)
#line 170
{
  if (highWhenIdle) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 3;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 3);
    }
}

# 108 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$setClockPolarity(bool arg_0x7decba60){
#line 108
  HplAtm128SpiP$SPI$setClockPolarity(arg_0x7decba60);
#line 108
}
#line 108
# 184 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$setClockPhase(bool sampleOnTrailing)
#line 184
{
  if (sampleOnTrailing) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 2;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 2);
    }
}

# 111 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$setClockPhase(bool arg_0x7deca260){
#line 111
  HplAtm128SpiP$SPI$setClockPhase(arg_0x7deca260);
#line 111
}
#line 111
# 201 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$setClock(uint8_t v)
#line 201
{
  v &= 1 | 0;
  * (volatile uint8_t *)(0x0D + 0x20) = (* (volatile uint8_t *)(0x0D + 0x20) & ~(1 | 0)) | v;
}

# 114 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$setClock(uint8_t arg_0x7decaa28){
#line 114
  HplAtm128SpiP$SPI$setClock(arg_0x7decaa28);
#line 114
}
#line 114
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420TransmitP$SpiResource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC2420SpiP$Resource$request(/*CC2420TransmitC.Spi*/CC2420SpiC$3$CLIENT_ID);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 54 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(resource_client_id_t id)
#line 54
{
  return /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[id] != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY || /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail == id;
}

#line 72
static inline   error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(resource_client_id_t id)
#line 72
{
  /* atomic removed: atomic calls only */
#line 73
  {
    if (!/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEnqueued(id)) {
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = id;
          }
        else {
#line 78
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail] = id;
          }
#line 79
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = id;
        {
          unsigned char __nesc_temp = 
#line 80
          SUCCESS;

#line 80
          return __nesc_temp;
        }
      }
#line 82
    {
      unsigned char __nesc_temp = 
#line 82
      EBUSY;

#line 82
      return __nesc_temp;
    }
  }
}

# 69 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(resource_client_id_t arg_0x7de18af0){
#line 69
  unsigned char result;
#line 69

#line 69
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$enqueue(arg_0x7de18af0);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 166 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(uint8_t id)
#line 166
{
}

# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceRequested.nc"
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(uint8_t arg_0x7de01088){
#line 43
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$default$requested(arg_0x7de01088);
#line 43
}
#line 43
# 71 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(uint8_t id)
#line 71
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceRequested$requested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
  /* atomic removed: atomic calls only */
#line 73
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE) {
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_GRANTING;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId = id;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask();
        {
          unsigned char __nesc_temp = 
#line 78
          SUCCESS;

#line 78
          return __nesc_temp;
        }
      }
#line 80
    {
      unsigned char __nesc_temp = 
#line 80
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$enqueue(id);

#line 80
      return __nesc_temp;
    }
  }
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t Atm128SpiP$ResourceArbiter$request(uint8_t arg_0x7ded4950){
#line 78
  unsigned char result;
#line 78

#line 78
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$request(arg_0x7ded4950);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 80 "/opt/tinyos-2.x/tos/interfaces/ArbiterInfo.nc"
inline static   bool Atm128SpiP$ArbiterInfo$inUse(void){
#line 80
  unsigned char result;
#line 80

#line 80
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse();
#line 80

#line 80
  return result;
#line 80
}
#line 80
# 312 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline   error_t Atm128SpiP$Resource$request(uint8_t id)
#line 312
{
  /* atomic removed: atomic calls only */
#line 313
  {
    if (!Atm128SpiP$ArbiterInfo$inUse()) {
        Atm128SpiP$startSpi();
      }
  }
  return Atm128SpiP$ResourceArbiter$request(id);
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420SpiP$SpiResource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = Atm128SpiP$Resource$request(0U);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static   cc2420_status_t CC2420TransmitP$TXCTRL$write(uint16_t arg_0x7e3187f0){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_TXCTRL, arg_0x7e3187f0);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 100 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$write(uint8_t d)
#line 100
{
#line 100
  * (volatile uint8_t *)(0x0F + 0x20) = d;
}

# 86 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$write(uint8_t arg_0x7dece010){
#line 86
  HplAtm128SpiP$SPI$write(arg_0x7dece010);
#line 86
}
#line 86
# 59 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static   error_t CC2420SpiP$SpiPacket$send(uint8_t *arg_0x7df66598, uint8_t *arg_0x7df66740, uint16_t arg_0x7df668d0){
#line 59
  unsigned char result;
#line 59

#line 59
  result = Atm128SpiP$SpiPacket$send(arg_0x7df66598, arg_0x7df66740, arg_0x7df668d0);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 34 "/opt/tinyos-2.x/tos/interfaces/SpiByte.nc"
inline static   uint8_t CC2420SpiP$SpiByte$write(uint8_t arg_0x7df6cd78){
#line 34
  unsigned char result;
#line 34

#line 34
  result = Atm128SpiP$SpiByte$write(arg_0x7df6cd78);
#line 34

#line 34
  return result;
#line 34
}
#line 34
# 126 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline   bool StateImplP$State$isIdle(uint8_t id)
#line 126
{
  return StateImplP$State$isState(id, StateImplP$S_IDLE);
}

# 61 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static   bool CC2420SpiP$WorkingState$isIdle(void){
#line 61
  unsigned char result;
#line 61

#line 61
  result = StateImplP$State$isIdle(0U);
#line 61

#line 61
  return result;
#line 61
}
#line 61
# 214 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline   cc2420_status_t CC2420SpiP$Fifo$write(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 215
{

  uint8_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 219
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 221
            status;

            {
#line 221
              __nesc_atomic_end(__nesc_atomic); 
#line 221
              return __nesc_temp;
            }
          }
        }
    }
#line 225
    __nesc_atomic_end(__nesc_atomic); }
#line 225
  CC2420SpiP$m_addr = addr;

  status = CC2420SpiP$SpiByte$write(CC2420SpiP$m_addr);
  CC2420SpiP$SpiPacket$send(data, (void *)0, len);

  return status;
}

# 82 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static   cc2420_status_t CC2420TransmitP$TXFIFO$write(uint8_t *arg_0x7df89dd0, uint8_t arg_0x7df88010){
#line 82
  unsigned char result;
#line 82

#line 82
  result = CC2420SpiP$Fifo$write(CC2420_TXFIFO, arg_0x7df89dd0, arg_0x7df88010);
#line 82

#line 82
  return result;
#line 82
}
#line 82
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t Atm128SpiP$zeroTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(Atm128SpiP$zeroTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7e3289e0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$size_type arg_0x7e328b70){
#line 92
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(arg_0x7e3289e0, arg_0x7e328b70);
#line 92
}
#line 92
# 47 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$startAt(t0, dt);
}

#line 82
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 83
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(t0, dt, TRUE);
}

# 118 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$startOneShotAt(uint32_t arg_0x7eb64238, uint32_t arg_0x7eb643c8){
#line 118
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$startOneShotAt(arg_0x7eb64238, arg_0x7eb643c8);
#line 118
}
#line 118
# 204 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$stop(void)
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set = FALSE;
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
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

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

# 150 "../../../tos/lib/data/timer/DataTimerP.nc"
static inline void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$startTimer(void)
#line 150
{
  /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$startOneShot(/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$delay[0]);
}

# 68 "../../../tos/lib/data/timer/DataTimer.nc"
inline static  void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$expired(/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$data_t arg_0x7e6f18b0){
#line 68
  /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutTimer$expired(arg_0x7e6f18b0);
#line 68
}
#line 68
# 134 "../../../tos/lib/data/timer/DataTimerP.nc"
static inline  void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$fired(void)
#line 134
{
  /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$adjustTimer();
  while (/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$delay[0] == 0 && /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size > 0) {
      /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$expired(/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data[0]);
      ;
      /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$removeTimer(0);
    }
  if (/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size > 0) {
    /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$startTimer();
    }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t PacketEngineP$msgAction$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(PacketEngineP$msgAction);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 118 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline   void StateImplP$State$toIdle(uint8_t id)
#line 118
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 119
    StateImplP$state[id] = StateImplP$S_IDLE;
#line 119
    __nesc_atomic_end(__nesc_atomic); }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static   void PacketEngineP$SendState$toIdle(void){
#line 56
  StateImplP$State$toIdle(4U);
#line 56
}
#line 56
# 658 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline  void PacketEngineP$SendBackoff$fired(void)
#line 658
{
  PacketEngineP$SendState$toIdle();
  if (PacketEngineP$nextActionPkt < PacketEngineP$BUFFER_SIZE) {
    PacketEngineP$msgAction$postTask();
    }
}

# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t UnicastCountToLedsC$AMSend$send(am_addr_t arg_0x7eb81d30, message_t *arg_0x7eb81ee0, uint8_t arg_0x7eb80088){
#line 69
  unsigned char result;
#line 69

#line 69
  result = SinglePacketP$Send$send(/*UnicastCountToLedsAppC.AMSenderC*/SingleSenderC$0$PACKET_ENGINE_CLIENT_ID, arg_0x7eb81d30, arg_0x7eb81ee0, arg_0x7eb80088);
#line 69

#line 69
  return result;
#line 69
}
#line 69
#line 124
inline static  void *UnicastCountToLedsC$AMSend$getPayload(message_t *arg_0x7eb75ce0, uint8_t arg_0x7eb75e68){
#line 124
  void *result;
#line 124

#line 124
  result = SinglePacketP$Send$getPayload(/*UnicastCountToLedsAppC.AMSenderC*/SingleSenderC$0$PACKET_ENGINE_CLIENT_ID, arg_0x7eb75ce0, arg_0x7eb75e68);
#line 124

#line 124
  return result;
#line 124
}
#line 124
# 126 "UnicastCountToLedsC.nc"
static inline  void UnicastCountToLedsC$MilliTimer$fired(void)
#line 126
{
  unicast_count_msg_t *rcm;

#line 128
  UnicastCountToLedsC$counter++;
  ;
  rcm = (unicast_count_msg_t *)UnicastCountToLedsC$AMSend$getPayload(&UnicastCountToLedsC$packet, sizeof(unicast_count_msg_t ));
  if (rcm == (void *)0) {
    return;
    }
#line 133
  __nesc_hton_uint16((unsigned char *)&rcm->counter, UnicastCountToLedsC$counter);

  if (UnicastCountToLedsC$AMSend$send(1, &UnicastCountToLedsC$packet, sizeof(unicast_count_msg_t )) == SUCCESS) {
    ;
    }
}

# 192 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline   void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(uint8_t num)
{
}

# 72 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$fired(uint8_t arg_0x7db1e010){
#line 72
  switch (arg_0x7db1e010) {
#line 72
    case 0U:
#line 72
      /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$fired();
#line 72
      break;
#line 72
    case 1U:
#line 72
      PacketEngineP$SendBackoff$fired();
#line 72
      break;
#line 72
    case 2U:
#line 72
      UnicastCountToLedsC$MilliTimer$fired();
#line 72
      break;
#line 72
    default:
#line 72
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$default$fired(arg_0x7db1e010);
#line 72
      break;
#line 72
    }
#line 72
}
#line 72
# 363 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline  void *PacketEngineP$Send$getPayload(packet_client_id_t clientId, message_t *msg, uint8_t len)
#line 363
{
  PacketEngineP$setIds(msg, clientId);
  return PacketEngineP$Packet$getPayload(msg, len);
}

# 254 "../../../tos/lib/netarch/single/SinglePacketP.nc"
static inline   void *SinglePacketP$SubSend$default$getPayload(packet_client_id_t clientId, message_t *msg, uint8_t len)
#line 254
{
  ;
  return (void *)0;
}

# 124 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void *SinglePacketP$SubSend$getPayload(packet_client_id_t arg_0x7d9f3d38, message_t *arg_0x7eb75ce0, uint8_t arg_0x7eb75e68){
#line 124
  void *result;
#line 124

#line 124
  switch (arg_0x7d9f3d38) {
#line 124
    case /*UnicastCountToLedsAppC.AMSenderC*/SingleSenderC$0$PACKET_ENGINE_CLIENT_ID:
#line 124
      result = PacketEngineP$Send$getPayload(0, arg_0x7eb75ce0, arg_0x7eb75e68);
#line 124
      break;
#line 124
    case /*DsrC.DsrSendC*/SingleProcessorSenderC$0$PACKET_ENGINE_CLIENT_ID:
#line 124
      result = PacketEngineP$Send$getPayload(1, arg_0x7eb75ce0, arg_0x7eb75e68);
#line 124
      break;
#line 124
    default:
#line 124
      result = SinglePacketP$SubSend$default$getPayload(arg_0x7d9f3d38, arg_0x7eb75ce0, arg_0x7eb75e68);
#line 124
      break;
#line 124
    }
#line 124

#line 124
  return result;
#line 124
}
#line 124
# 53 "../../../tos/lib/netarch/multihop/PacketEngineClientP.nc"
static inline  am_id_t /*DsrC.DsrSendC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$0$PacketEngineClient$upperType(void)
#line 53
{
  return 0;
}

#line 53
static inline  am_id_t /*UnicastCountToLedsAppC.AMSenderC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$1$PacketEngineClient$upperType(void)
#line 53
{
  return 6;
}

# 375 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   am_id_t PacketEngineP$PacketEngineClient$default$upperType(packet_client_id_t clientId)
#line 375
{
  ;
  return AM_INVALID_TYPE;
}

# 47 "../../../tos/lib/netarch/multihop/PacketEngineClient.nc"
inline static  am_id_t PacketEngineP$PacketEngineClient$upperType(packet_client_id_t arg_0x7e863208){
#line 47
  unsigned char result;
#line 47

#line 47
  switch (arg_0x7e863208) {
#line 47
    case 0:
#line 47
      result = /*UnicastCountToLedsAppC.AMSenderC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$1$PacketEngineClient$upperType();
#line 47
      break;
#line 47
    case 1:
#line 47
      result = /*DsrC.DsrSendC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$0$PacketEngineClient$upperType();
#line 47
      break;
#line 47
    default:
#line 47
      result = PacketEngineP$PacketEngineClient$default$upperType(arg_0x7e863208);
#line 47
      break;
#line 47
    }
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 151 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void PacketEngineP$AMPacket$setType(message_t *arg_0x7eb31350, am_id_t arg_0x7eb314d8){
#line 151
  CC2420ActiveMessageP$AMPacket$setType(arg_0x7eb31350, arg_0x7eb314d8);
#line 151
}
#line 151
# 1119 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline void PacketEngineP$setLid(message_t *msg, am_id_t newLid)
#line 1119
{
  PacketEngineP$AMPacket$setType(msg, newLid);
}

# 62 "../../../tos/lib/netarch/multihop/PacketEngineClientP.nc"
static inline  am_id_t /*DsrC.DsrSendC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$0$PacketEngineClient$defaultLowerType(void)
#line 62
{
  return 48;
}

#line 62
static inline  am_id_t /*UnicastCountToLedsAppC.AMSenderC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$1$PacketEngineClient$defaultLowerType(void)
#line 62
{
  return 4;
}

# 385 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   am_id_t PacketEngineP$PacketEngineClient$default$defaultLowerType(packet_client_id_t clientId)
#line 385
{
  ;
  return AM_INVALID_TYPE;
}

# 54 "../../../tos/lib/netarch/multihop/PacketEngineClient.nc"
inline static  am_id_t PacketEngineP$PacketEngineClient$defaultLowerType(packet_client_id_t arg_0x7e863208){
#line 54
  unsigned char result;
#line 54

#line 54
  switch (arg_0x7e863208) {
#line 54
    case 0:
#line 54
      result = /*UnicastCountToLedsAppC.AMSenderC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$1$PacketEngineClient$defaultLowerType();
#line 54
      break;
#line 54
    case 1:
#line 54
      result = /*DsrC.DsrSendC.PacketSenderC.PacketEngineClientP*/PacketEngineClientP$0$PacketEngineClient$defaultLowerType();
#line 54
      break;
#line 54
    default:
#line 54
      result = PacketEngineP$PacketEngineClient$default$defaultLowerType(arg_0x7e863208);
#line 54
      break;
#line 54
    }
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 167 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline  uint8_t CC2420CsmaP$Send$maxPayloadLength(void)
#line 167
{
  return 36;
}

#line 158
static inline  void *CC2420CsmaP$Send$getPayload(message_t *m, uint8_t len)
#line 158
{
  if (len <= CC2420CsmaP$Send$maxPayloadLength()) {
      return m->data;
    }
  else {
      return (void *)0;
    }
}

# 114 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void *UniqueSendP$SubSend$getPayload(message_t *arg_0x7e3c01f8, uint8_t arg_0x7e3c0380){
#line 114
  void *result;
#line 114

#line 114
  result = CC2420CsmaP$Send$getPayload(arg_0x7e3c01f8, arg_0x7e3c0380);
#line 114

#line 114
  return result;
#line 114
}
#line 114
# 99 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline  void *UniqueSendP$Send$getPayload(message_t *msg, uint8_t len)
#line 99
{
  return UniqueSendP$SubSend$getPayload(msg, len);
}

# 114 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void *CC2420ActiveMessageP$SubSend$getPayload(message_t *arg_0x7e3c01f8, uint8_t arg_0x7e3c0380){
#line 114
  void *result;
#line 114

#line 114
  result = UniqueSendP$Send$getPayload(arg_0x7e3c01f8, arg_0x7e3c0380);
#line 114

#line 114
  return result;
#line 114
}
#line 114
# 154 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  void *CC2420ActiveMessageP$Packet$getPayload(message_t *msg, uint8_t len)
#line 154
{
  return CC2420ActiveMessageP$SubSend$getPayload(msg, len);
}

# 648 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   void *PacketEngineP$SubPacket$default$getPayload(am_id_t lowerId, message_t *msg, uint8_t len)
#line 648
{
  ;
  return (void *)0;
}

# 115 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void *PacketEngineP$SubPacket$getPayload(am_id_t arg_0x7e870500, message_t *arg_0x7eb44d60, uint8_t arg_0x7eb44ee8){
#line 115
  void *result;
#line 115

#line 115
  switch (arg_0x7e870500) {
#line 115
    case 4:
#line 115
      result = CC2420ActiveMessageP$Packet$getPayload(arg_0x7eb44d60, arg_0x7eb44ee8);
#line 115
      break;
#line 115
    case 48:
#line 115
      result = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$Packet$getPayload(arg_0x7eb44d60, arg_0x7eb44ee8);
#line 115
      break;
#line 115
    default:
#line 115
      result = PacketEngineP$SubPacket$default$getPayload(arg_0x7e870500, arg_0x7eb44d60, arg_0x7eb44ee8);
#line 115
      break;
#line 115
    }
#line 115

#line 115
  return result;
#line 115
}
#line 115
inline static  void *SinglePacketP$SubPacket$getPayload(message_t *arg_0x7eb44d60, uint8_t arg_0x7eb44ee8){
#line 115
  void *result;
#line 115

#line 115
  result = PacketEngineP$Packet$getPayload(arg_0x7eb44d60, arg_0x7eb44ee8);
#line 115

#line 115
  return result;
#line 115
}
#line 115
# 84 "../../../tos/lib/netarch/single/SinglePacketP.nc"
static inline  void SinglePacketP$SinglePacket$setSource(message_t *msg, am_addr_t src)
#line 84
{
  __nesc_hton_uint16((unsigned char *)&((single_packet_header_t *)SinglePacketP$SubPacket$getPayload(msg, sizeof(single_packet_header_t )))->src, src);
}

# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t SinglePacketP$AMPacket$address(void){
#line 57
  unsigned int result;
#line 57

#line 57
  result = CC2420ActiveMessageP$AMPacket$address();
#line 57

#line 57
  return result;
#line 57
}
#line 57
# 108 "../../../tos/lib/netarch/single/SinglePacketP.nc"
static inline  void SinglePacketP$SinglePacket$setDestination(message_t *msg, am_addr_t dest)
#line 108
{
  __nesc_hton_uint16((unsigned char *)&((single_packet_header_t *)SinglePacketP$SubPacket$getPayload(msg, sizeof(single_packet_header_t )))->dest, dest);
}

# 111 "../../../tos/lib/netarch/tlv/TlvP.nc"
static inline  uint8_t TlvP$TlvBlock$length(void *block)
#line 111
{
  tlv_block_t *blk = (tlv_block_t *)block;

#line 113
  return sizeof(tlv_block_t ) + __nesc_ntoh_uint8((unsigned char *)&blk->len);
}

# 69 "../../../tos/lib/netarch/tlv/TlvBlock.nc"
inline static  uint8_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvBlock$length(void *arg_0x7e9a3010){
#line 69
  unsigned char result;
#line 69

#line 69
  result = TlvP$TlvBlock$length(arg_0x7e9a3010);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$setPayloadLength(message_t *arg_0x7eb44010, uint8_t arg_0x7eb44198){
#line 83
  CC2420ActiveMessageP$Packet$setPayloadLength(arg_0x7eb44010, arg_0x7eb44198);
#line 83
}
#line 83
#line 67
inline static  uint8_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$payloadLength(message_t *arg_0x7eb45938){
#line 67
  unsigned char result;
#line 67

#line 67
  result = CC2420ActiveMessageP$Packet$payloadLength(arg_0x7eb45938);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 365 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
static inline  void /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$Packet$setPayloadLength(message_t *pkt, uint8_t len)
#line 365
{
  void *data = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$getPayload(pkt, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$payloadLength(pkt));

#line 367
  /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$setPayloadLength(pkt, len + /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvBlock$length(data));
}

# 637 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   void PacketEngineP$SubPacket$default$setPayloadLength(am_id_t lowerId, message_t *msg, uint8_t len)
#line 637
{
  ;
}

# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void PacketEngineP$SubPacket$setPayloadLength(am_id_t arg_0x7e870500, message_t *arg_0x7eb44010, uint8_t arg_0x7eb44198){
#line 83
  switch (arg_0x7e870500) {
#line 83
    case 4:
#line 83
      CC2420ActiveMessageP$Packet$setPayloadLength(arg_0x7eb44010, arg_0x7eb44198);
#line 83
      break;
#line 83
    case 48:
#line 83
      /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$Packet$setPayloadLength(arg_0x7eb44010, arg_0x7eb44198);
#line 83
      break;
#line 83
    default:
#line 83
      PacketEngineP$SubPacket$default$setPayloadLength(arg_0x7e870500, arg_0x7eb44010, arg_0x7eb44198);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 225 "../../../tos/lib/netarch/single/SinglePacketP.nc"
static inline   error_t SinglePacketP$SubSend$default$send(packet_client_id_t clientId, am_addr_t addr, 
message_t *msg, 
uint8_t len)
#line 227
{
  ;
  return FAIL;
}

# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t SinglePacketP$SubSend$send(packet_client_id_t arg_0x7d9f3d38, am_addr_t arg_0x7eb81d30, message_t *arg_0x7eb81ee0, uint8_t arg_0x7eb80088){
#line 69
  unsigned char result;
#line 69

#line 69
  switch (arg_0x7d9f3d38) {
#line 69
    case /*UnicastCountToLedsAppC.AMSenderC*/SingleSenderC$0$PACKET_ENGINE_CLIENT_ID:
#line 69
      result = PacketEngineP$Send$send(0, arg_0x7eb81d30, arg_0x7eb81ee0, arg_0x7eb80088);
#line 69
      break;
#line 69
    case /*DsrC.DsrSendC*/SingleProcessorSenderC$0$PACKET_ENGINE_CLIENT_ID:
#line 69
      result = PacketEngineP$Send$send(1, arg_0x7eb81d30, arg_0x7eb81ee0, arg_0x7eb80088);
#line 69
      break;
#line 69
    default:
#line 69
      result = SinglePacketP$SubSend$default$send(arg_0x7d9f3d38, arg_0x7eb81d30, arg_0x7eb81ee0, arg_0x7eb80088);
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
# 1159 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline void PacketEngineP$moveWaitIndex(void)
#line 1159
{
  PacketEngineP$moveIndex(&PacketEngineP$nextWaitPkt, PacketEngineP$PKT_WAIT);
}

# 88 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
inline static  error_t PacketEngineP$SendPool$put(PacketEngineP$SendPool$t *arg_0x7e8473c0){
#line 88
  unsigned char result;
#line 88

#line 88
  result = /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$Pool$put(arg_0x7e8473c0);
#line 88

#line 88
  return result;
#line 88
}
#line 88
# 136 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_id_t PacketEngineP$AMPacket$type(message_t *arg_0x7eb33da0){
#line 136
  unsigned char result;
#line 136

#line 136
  result = CC2420ActiveMessageP$AMPacket$type(arg_0x7eb33da0);
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 1110 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline am_id_t PacketEngineP$lid(message_t *msg)
#line 1110
{
  return PacketEngineP$AMPacket$type(msg);
}

#line 400
static inline  void PacketEngineP$SendQueue$evicted(packet_send_entry_t *sendQueue)
#line 400
{
  packet_id_t pid = sendQueue->pid;

#line 402
  ;
  PacketEngineP$PacketEngine$upperSendDone(PacketEngineP$lid(PacketEngineP$msgBuffer[pid].msg), pid, EBUSY);

  if (PacketEngineP$SendPool$put(PacketEngineP$msgBuffer[pid].msg) == FAIL) {
    ;
    }
#line 407
  PacketEngineP$msgBuffer[pid].state = PacketEngineP$PKT_FREE;
  if (PacketEngineP$nextWaitPkt == pid) {
    PacketEngineP$moveWaitIndex();
    }
}

# 57 "../../../tos/lib/data/cache/DataCache.nc"
inline static  void /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$DataCache$evicted(/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$DataCache$item_t *arg_0x7e856cc0){
#line 57
  PacketEngineP$SendQueue$evicted(arg_0x7e856cc0);
#line 57
}
#line 57
# 168 "../../../tos/lib/data/cache/LruDataCacheP.nc"
static inline  /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$data_cache_item_t */*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$DataCache$insert(/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$data_cache_item_t *item)
#line 168
{
  uint8_t i = /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$lookup(item);

#line 170
  if (i != /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$count) {
    memcpy(item, &/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$cache[(i + /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$first) % 10], sizeof(/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$data_cache_item_t ));
    }
  else {
#line 172
    if (/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$count == 10) {
      /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$DataCache$evicted(&/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$cache[/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$first]);
      }
    }
#line 174
  if (/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$count == 10 || i != /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$count) {





      /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$remove(i % /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$count);
    }

  memcpy(&/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$cache[(/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$first + /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$count) % 10], item, sizeof(/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$data_cache_item_t ));
  item = &/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$cache[(/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$first + /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$count++) % 10];
  /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$printCache();
  return item;
}

# 47 "../../../tos/lib/data/cache/DataCache.nc"
inline static  PacketEngineP$SendQueue$item_t *PacketEngineP$SendQueue$insert(PacketEngineP$SendQueue$item_t *arg_0x7e8566e8){
#line 47
  struct __nesc_unnamed4308 *result;
#line 47

#line 47
  result = /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$DataCache$insert(arg_0x7e8566e8);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 75 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static inline  bool /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$Pool$empty(void)
#line 75
{
  return /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$free == 0;
}

# 61 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
inline static  bool PacketEngineP$SendPool$empty(void){
#line 61
  unsigned char result;
#line 61

#line 61
  result = /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$Pool$empty();
#line 61

#line 61
  return result;
#line 61
}
#line 61
# 86 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static inline  /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$pool_t */*PacketEngineC.SendPoolC.PoolP*/PoolP$1$Pool$get(void)
#line 86
{
  if (/*PacketEngineC.SendPoolC.PoolP*/PoolP$1$free) {
      /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$pool_t *rval = /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$queue[/*PacketEngineC.SendPoolC.PoolP*/PoolP$1$index];

#line 89
      /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$queue[/*PacketEngineC.SendPoolC.PoolP*/PoolP$1$index] = (void *)0;
      /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$free--;
      /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$index++;
      if (/*PacketEngineC.SendPoolC.PoolP*/PoolP$1$index == 10) {
          /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$index = 0;
        }
      return rval;
    }
  return (void *)0;
}

# 96 "/opt/tinyos-2.x/tos/interfaces/Pool.nc"
inline static  PacketEngineP$SendPool$t *PacketEngineP$SendPool$get(void){
#line 96
  nx_struct message_t *result;
#line 96

#line 96
  result = /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$Pool$get();
#line 96

#line 96
  return result;
#line 96
}
#line 96
# 1143 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline void PacketEngineP$moveFreeIndex(void)
#line 1143
{
  PacketEngineP$moveIndex(&PacketEngineP$nextFreePkt, PacketEngineP$PKT_FREE);
}

# 346 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
static inline  uint8_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$Packet$payloadLength(message_t *pkt)
#line 346
{
  uint8_t len = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$payloadLength(pkt);
  void *data = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$getPayload(pkt, len);

#line 349
  return len - /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvBlock$length(data);
}

# 626 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   uint8_t PacketEngineP$SubPacket$default$payloadLength(am_id_t lowerId, message_t *msg)
#line 626
{
  ;
  return INVALID_PAYLOAD_LENGTH;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t PacketEngineP$SubPacket$payloadLength(am_id_t arg_0x7e870500, message_t *arg_0x7eb45938){
#line 67
  unsigned char result;
#line 67

#line 67
  switch (arg_0x7e870500) {
#line 67
    case 4:
#line 67
      result = CC2420ActiveMessageP$Packet$payloadLength(arg_0x7eb45938);
#line 67
      break;
#line 67
    case 48:
#line 67
      result = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$Packet$payloadLength(arg_0x7eb45938);
#line 67
      break;
#line 67
    default:
#line 67
      result = PacketEngineP$SubPacket$default$payloadLength(arg_0x7e870500, arg_0x7eb45938);
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
  result = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$getNow(0U);
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 152 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num].isrunning = FALSE;
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$stop(void){
#line 67
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$stop(0U);
#line 67
}
#line 67
# 824 "../../../tos/lib/netarch/dsr/DsrControlP.nc"
static inline  bool /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutEqual$test(dsr_route_request_out_t *a, dsr_route_request_out_t *b)
#line 824
{
  return a->node == b->node;
}

# 48 "../../../tos/interfaces/Equal.nc"
inline static  bool /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$Equal$test(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$Equal$equal_t arg_0x7e868d30, /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$Equal$equal_t arg_0x7e868eb8){
#line 48
  unsigned char result;
#line 48

#line 48
  result = /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutEqual$test(arg_0x7e868d30, arg_0x7e868eb8);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 86 "../../../tos/lib/data/timer/DataTimerP.nc"
static inline  error_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$start(/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data_timer_data_t newData, data_timer_time_t newDelay)
#line 86
{
  uint8_t i;

#line 88
  if (/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size == 8) {
    return FAIL;
    }
#line 90
  /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$adjustTimer();
  for (i = /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size; i > 0; i--) {
      if (/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$delay[i - 1] > newDelay) {
          /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data[i] = /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data[i - 1];
          /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$delay[i] = /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$delay[i - 1];
        }
      else {
#line 96
        break;
        }
    }
#line 98
  /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data[i] = newData;
  /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$delay[i] = newDelay;
  /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size++;
  ;
  /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$startTimer();
  return SUCCESS;
}

# 51 "../../../tos/lib/data/timer/DataTimer.nc"
inline static  error_t /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutTimer$start(/*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutTimer$data_t arg_0x7e6f2820, data_timer_time_t arg_0x7e6f29b8){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$start(arg_0x7e6f2820, arg_0x7e6f29b8);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 1284 "../../../tos/lib/netarch/dsr/DsrControlP.nc"
static inline void /*DsrP.DsrControlP*/DsrControlP$0$updateRouteRequestOutTimer(am_addr_t dest, uint8_t attempts)
#line 1284
{
  data_timer_time_t newTime;

#line 1286
  if (DSR_INIT_REQUEST_PERIOD << attempts > DSR_MAX_REQUEST_PERIOD) {
    newTime = DSR_MAX_REQUEST_PERIOD;
    }
  else {
#line 1289
    newTime = DSR_INIT_REQUEST_PERIOD << attempts;
    }
#line 1290
  /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutTimer$start(dest, newTime);
  ;
}

# 135 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline   void HplAtm128Timer0AsyncP$Compare$set(uint8_t t)
#line 135
{
  * (volatile uint8_t *)(0x31 + 0x20) = t;
}

# 45 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$size_type arg_0x7e266e78){
#line 45
  HplAtm128Timer0AsyncP$Compare$set(arg_0x7e266e78);
#line 45
}
#line 45
# 50 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline   uint8_t HplAtm128Timer0AsyncP$Timer$get(void)
#line 50
{
#line 50
  return * (volatile uint8_t *)(0x32 + 0x20);
}

# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get(void){
#line 52
  unsigned char result;
#line 52

#line 52
  result = HplAtm128Timer0AsyncP$Timer$get();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 206 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline   int HplAtm128Timer0AsyncP$TimerAsync$compareBusy(void)
#line 206
{
  return (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 1)) != 0;
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


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$set(n);
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired);
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
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt;

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
# 63 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline  void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$fired$runTask(void)
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Alarm$getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$m_dt, FALSE);
    }
#line 67
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC$0$Timer$fired();
}

# 189 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline   message_t *CC2420ActiveMessageP$Snoop$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 189
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *CC2420ActiveMessageP$Snoop$receive(am_id_t arg_0x7e3c95e8, message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x7e3c95e8) {
#line 67
    case 4:
#line 67
      result = PacketEngineP$SubReceive$receive(4, arg_0x7eb845c8, arg_0x7eb84768, arg_0x7eb848f0);
#line 67
      break;
#line 67
    case 48:
#line 67
      result = PacketEngineP$SubReceive$receive(48, arg_0x7eb845c8, arg_0x7eb84768, arg_0x7eb848f0);
#line 67
      break;
#line 67
    default:
#line 67
      result = CC2420ActiveMessageP$Snoop$default$receive(arg_0x7e3c95e8, arg_0x7eb845c8, arg_0x7eb84768, arg_0x7eb848f0);
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
# 185 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline   message_t *CC2420ActiveMessageP$Receive$default$receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 185
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *CC2420ActiveMessageP$Receive$receive(am_id_t arg_0x7e3c9010, message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x7e3c9010) {
#line 67
    case 4:
#line 67
      result = PacketEngineP$SubReceive$receive(4, arg_0x7eb845c8, arg_0x7eb84768, arg_0x7eb848f0);
#line 67
      break;
#line 67
    case 48:
#line 67
      result = PacketEngineP$SubReceive$receive(48, arg_0x7eb845c8, arg_0x7eb84768, arg_0x7eb848f0);
#line 67
      break;
#line 67
    default:
#line 67
      result = CC2420ActiveMessageP$Receive$default$receive(arg_0x7e3c9010, arg_0x7eb845c8, arg_0x7eb84768, arg_0x7eb848f0);
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
# 166 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  message_t *CC2420ActiveMessageP$SubReceive$receive(message_t *msg, void *payload, uint8_t len)
#line 166
{
  if (CC2420ActiveMessageP$AMPacket$isForMe(msg)) {
      return CC2420ActiveMessageP$Receive$receive(CC2420ActiveMessageP$AMPacket$type(msg), msg, payload, len - CC2420ActiveMessageP$CC2420_SIZE);
    }
  else {
      return CC2420ActiveMessageP$Snoop$receive(CC2420ActiveMessageP$AMPacket$type(msg), msg, payload, len - CC2420ActiveMessageP$CC2420_SIZE);
    }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *UniqueReceiveP$Receive$receive(message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = CC2420ActiveMessageP$SubReceive$receive(arg_0x7eb845c8, arg_0x7eb84768, arg_0x7eb848f0);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 137 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline void UniqueReceiveP$insert(uint16_t msgSource, uint8_t msgDsn)
#line 137
{
  uint8_t element = UniqueReceiveP$recycleSourceElement;
  bool increment = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 141
    {
      if (element == UniqueReceiveP$INVALID_ELEMENT || UniqueReceiveP$writeIndex == element) {

          element = UniqueReceiveP$writeIndex;
          increment = TRUE;
        }

      UniqueReceiveP$receivedMessages[element].source = msgSource;
      UniqueReceiveP$receivedMessages[element].dsn = msgDsn;
      if (increment) {
          UniqueReceiveP$writeIndex++;
          UniqueReceiveP$writeIndex %= 4;
        }
    }
#line 154
    __nesc_atomic_end(__nesc_atomic); }
}


static inline   message_t *UniqueReceiveP$DuplicateReceive$default$receive(message_t *msg, void *payload, uint8_t len)
#line 158
{
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *UniqueReceiveP$DuplicateReceive$receive(message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = UniqueReceiveP$DuplicateReceive$default$receive(arg_0x7eb845c8, arg_0x7eb84768, arg_0x7eb848f0);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 111 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline bool UniqueReceiveP$hasSeen(uint16_t msgSource, uint8_t msgDsn)
#line 111
{
  int i;

#line 113
  UniqueReceiveP$recycleSourceElement = UniqueReceiveP$INVALID_ELEMENT;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 115
    {
      for (i = 0; i < 4; i++) {
          if (UniqueReceiveP$receivedMessages[i].source == msgSource) {
              if (UniqueReceiveP$receivedMessages[i].dsn == msgDsn) {

                  {
                    unsigned char __nesc_temp = 
#line 120
                    TRUE;

                    {
#line 120
                      __nesc_atomic_end(__nesc_atomic); 
#line 120
                      return __nesc_temp;
                    }
                  }
                }
#line 123
              UniqueReceiveP$recycleSourceElement = i;
            }
        }
    }
#line 126
    __nesc_atomic_end(__nesc_atomic); }

  return FALSE;
}

# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static   cc2420_header_t *UniqueReceiveP$CC2420PacketBody$getHeader(message_t *arg_0x7e3bc7a8){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketC$CC2420PacketBody$getHeader(arg_0x7e3bc7a8);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 85 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline  message_t *UniqueReceiveP$SubReceive$receive(message_t *msg, void *payload, 
uint8_t len)
#line 86
{
  uint16_t msgSource = __nesc_ntoh_leuint16((unsigned char *)&UniqueReceiveP$CC2420PacketBody$getHeader(msg)->src);
  uint8_t msgDsn = __nesc_ntoh_leuint8((unsigned char *)&UniqueReceiveP$CC2420PacketBody$getHeader(msg)->dsn);

  if (UniqueReceiveP$hasSeen(msgSource, msgDsn)) {
      return UniqueReceiveP$DuplicateReceive$receive(msg, payload, len);
    }
  else {
      UniqueReceiveP$insert(msgSource, msgDsn);
      return UniqueReceiveP$Receive$receive(msg, payload, len);
    }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *CC2420ReceiveP$Receive$receive(message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  result = UniqueReceiveP$SubReceive$receive(arg_0x7eb845c8, arg_0x7eb84768, arg_0x7eb848f0);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static   cc2420_header_t *CC2420ReceiveP$CC2420PacketBody$getHeader(message_t *arg_0x7e3bc7a8){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketC$CC2420PacketBody$getHeader(arg_0x7e3bc7a8);
#line 42

#line 42
  return result;
#line 42
}
#line 42





inline static   cc2420_metadata_t *CC2420ReceiveP$CC2420PacketBody$getMetadata(message_t *arg_0x7e3bccf8){
#line 47
  nx_struct cc2420_metadata_t *result;
#line 47

#line 47
  result = CC2420PacketC$CC2420PacketBody$getMetadata(arg_0x7e3bccf8);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 320 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline  void CC2420ReceiveP$receiveDone_task$runTask(void)
#line 320
{
  cc2420_metadata_t *metadata = CC2420ReceiveP$CC2420PacketBody$getMetadata(CC2420ReceiveP$m_p_rx_buf);
  uint8_t *buf = (uint8_t *)CC2420ReceiveP$CC2420PacketBody$getHeader(CC2420ReceiveP$m_p_rx_buf);

#line 322
  ;

  __nesc_hton_int8((unsigned char *)&metadata->crc, buf[CC2420ReceiveP$rxFrameLength] >> 7);
  __nesc_hton_uint8((unsigned char *)&metadata->rssi, buf[CC2420ReceiveP$rxFrameLength - 1]);
  __nesc_hton_uint8((unsigned char *)&metadata->lqi, buf[CC2420ReceiveP$rxFrameLength] & 0x7f);
  CC2420ReceiveP$m_p_rx_buf = CC2420ReceiveP$Receive$receive(CC2420ReceiveP$m_p_rx_buf, CC2420ReceiveP$m_p_rx_buf->data, 
  CC2420ReceiveP$rxFrameLength);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 330
    CC2420ReceiveP$receivingPacket = FALSE;
#line 330
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ReceiveP$waitForNextPacket();
}

# 75 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static inline  bool /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$empty(void)
#line 75
{
  return /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$free == 0;
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
# 86 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static inline  /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool_t */*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Pool$get(void)
#line 86
{
  if (/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$free) {
      /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool_t *rval = /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$queue[/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$index];

#line 89
      /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$queue[/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$index] = (void *)0;
      /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$free--;
      /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$index++;
      if (/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$index == 10) {
          /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$index = 0;
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
# 95 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline   void CC2420SpiP$ChipSpiResource$abortRelease(void)
#line 95
{
  /* atomic removed: atomic calls only */
#line 96
  CC2420SpiP$release = FALSE;
}

# 31 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static   void CC2420TransmitP$ChipSpiResource$abortRelease(void){
#line 31
  CC2420SpiP$ChipSpiResource$abortRelease();
#line 31
}
#line 31
# 320 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$ChipSpiResource$releasing(void)
#line 320
{
  if (CC2420TransmitP$abortSpiRelease) {
      CC2420TransmitP$ChipSpiResource$abortRelease();
    }
}

# 24 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static   void CC2420SpiP$ChipSpiResource$releasing(void){
#line 24
  CC2420TransmitP$ChipSpiResource$releasing();
#line 24
}
#line 24
# 44 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static   void Atm128SpiP$McuPowerState$update(void){
#line 44
  McuSleepC$McuPowerState$update();
#line 44
}
#line 44
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)56U |= 1 << 0;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void HplAtm128SpiP$SS$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 95 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   void HplAtm128SpiP$SPI$sleep(void)
#line 95
{
  HplAtm128SpiP$SS$set();
}

# 72 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void Atm128SpiP$Spi$sleep(void){
#line 72
  HplAtm128SpiP$SPI$sleep();
#line 72
}
#line 72
#line 99
inline static   void Atm128SpiP$Spi$enableSpi(bool arg_0x7decd250){
#line 99
  HplAtm128SpiP$SPI$enableSpi(arg_0x7decd250);
#line 99
}
#line 99
# 120 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP$stopSpi(void)
#line 120
{
  Atm128SpiP$Spi$enableSpi(FALSE);
  Atm128SpiP$started = FALSE;
  /* atomic removed: atomic calls only */
#line 123
  {
    Atm128SpiP$Spi$sleep();
  }
  Atm128SpiP$McuPowerState$update();
}

# 172 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline    void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(uint8_t id)
#line 172
{
}

# 55 "/opt/tinyos-2.x/tos/interfaces/ResourceConfigure.nc"
inline static   void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(uint8_t arg_0x7de01b70){
#line 55
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$default$unconfigure(arg_0x7de01b70);
#line 55
}
#line 55
# 58 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue(void)
#line 58
{
  /* atomic removed: atomic calls only */
#line 59
  {
    if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
        uint8_t id = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead;

#line 62
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead];
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
          }
#line 65
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ[id] = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 66
          id;

#line 66
          return __nesc_temp;
        }
      }
#line 68
    {
      unsigned char __nesc_temp = 
#line 68
      /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;

#line 68
      return __nesc_temp;
    }
  }
}

# 60 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$dequeue(void){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$dequeue();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 50 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline   bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty(void)
#line 50
{
  return /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY;
}

# 43 "/opt/tinyos-2.x/tos/interfaces/ResourceQueue.nc"
inline static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty(void){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$FcfsQueue$isEmpty();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 97 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline   error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(uint8_t id)
#line 97
{
  bool released = FALSE;

  /* atomic removed: atomic calls only */
#line 99
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_BUSY && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId == id) {
        if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$isEmpty() == FALSE) {
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Queue$dequeue();
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_GRANTING;
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$postTask();
          }
        else {
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$NO_RES;
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE;
          }
        released = TRUE;
      }
  }
  if (released == TRUE) {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t Atm128SpiP$ResourceArbiter$release(uint8_t arg_0x7ded4950){
#line 110
  unsigned char result;
#line 110

#line 110
  result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$release(arg_0x7ded4950);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 321 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline   error_t Atm128SpiP$Resource$release(uint8_t id)
#line 321
{
  error_t error = Atm128SpiP$ResourceArbiter$release(id);

  /* atomic removed: atomic calls only */
#line 323
  {
    if (!Atm128SpiP$ArbiterInfo$inUse()) {
        Atm128SpiP$stopSpi();
      }
  }
  return error;
}

# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420SpiP$SpiResource$release(void){
#line 110
  unsigned char result;
#line 110

#line 110
  result = Atm128SpiP$Resource$release(0U);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 178 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline   uint8_t CC2420SpiP$Resource$isOwner(uint8_t id)
#line 178
{
  /* atomic removed: atomic calls only */
#line 179
  {
    unsigned char __nesc_temp = 
#line 179
    CC2420SpiP$m_holder == id;

#line 179
    return __nesc_temp;
  }
}

# 118 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   bool CC2420ReceiveP$SpiResource$isOwner(void){
#line 118
  unsigned char result;
#line 118

#line 118
  result = CC2420SpiP$Resource$isOwner(/*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID);
#line 118

#line 118
  return result;
#line 118
}
#line 118
#line 87
inline static   error_t CC2420ReceiveP$SpiResource$immediateRequest(void){
#line 87
  unsigned char result;
#line 87

#line 87
  result = CC2420SpiP$Resource$immediateRequest(/*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID);
#line 87

#line 87
  return result;
#line 87
}
#line 87
#line 78
inline static   error_t CC2420ReceiveP$SpiResource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC2420SpiP$Resource$request(/*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t CC2420SpiP$grant$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC2420SpiP$grant);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 184 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline  void CC2420SpiP$SpiResource$granted(void)
#line 184
{
  CC2420SpiP$grant$postTask();
}

# 339 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline   void Atm128SpiP$Resource$default$granted(uint8_t id)
#line 339
{
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void Atm128SpiP$Resource$granted(uint8_t arg_0x7dee4628){
#line 92
  switch (arg_0x7dee4628) {
#line 92
    case 0U:
#line 92
      CC2420SpiP$SpiResource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      Atm128SpiP$Resource$default$granted(arg_0x7dee4628);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 335 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline  void Atm128SpiP$ResourceArbiter$granted(uint8_t id)
#line 335
{
  Atm128SpiP$Resource$granted(id);
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(uint8_t arg_0x7de02730){
#line 92
  Atm128SpiP$ResourceArbiter$granted(arg_0x7de02730);
#line 92
}
#line 92
# 154 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static inline  void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask(void)
#line 154
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 155
    {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$reqResId;
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_BUSY;
    }
#line 158
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ResourceConfigure$configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$granted(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId);
}

# 71 "/opt/tinyos-2.x/tos/interfaces/SpiPacket.nc"
inline static   void Atm128SpiP$SpiPacket$sendDone(uint8_t *arg_0x7df65030, uint8_t *arg_0x7df651d8, uint16_t arg_0x7df65368, error_t arg_0x7df65500){
#line 71
  CC2420SpiP$SpiPacket$sendDone(arg_0x7df65030, arg_0x7df651d8, arg_0x7df65368, arg_0x7df65500);
#line 71
}
#line 71
# 207 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline  void Atm128SpiP$zeroTask$runTask(void)
#line 207
{
  uint8_t *rx;
  uint8_t *tx;
  uint16_t myLen;

#line 211
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 211
    {
      rx = Atm128SpiP$rxBuffer;
      tx = Atm128SpiP$txBuffer;
      myLen = Atm128SpiP$len;
      Atm128SpiP$rxBuffer = (void *)0;
      Atm128SpiP$txBuffer = (void *)0;
      Atm128SpiP$len = 0;
      Atm128SpiP$pos = 0;
      Atm128SpiP$SpiPacket$sendDone(tx, rx, myLen, SUCCESS);
    }
#line 220
    __nesc_atomic_end(__nesc_atomic); }
}

# 430 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$TXFIFO$readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 431
{
}

# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420ReceiveP$SpiResource$release(void){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420SpiP$Resource$release(/*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ReceiveP$CSN$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t CC2420ReceiveP$receiveDone_task$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC2420ReceiveP$receiveDone_task);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 47 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static   cc2420_metadata_t *CC2420TransmitP$CC2420PacketBody$getMetadata(message_t *arg_0x7e3bccf8){
#line 47
  nx_struct cc2420_metadata_t *result;
#line 47

#line 47
  result = CC2420PacketC$CC2420PacketBody$getMetadata(arg_0x7e3bccf8);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 139 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$CompareA$stop(void)
#line 139
{
#line 139
  * (volatile uint8_t *)(0x37 + 0x20) &= ~(1 << 4);
}

# 59 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop(void){
#line 59
  HplAtm128Timer1P$CompareA$stop();
#line 59
}
#line 59
# 65 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$stop(void)
#line 65
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop();
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$stop(void){
#line 62
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$stop();
#line 62
}
#line 62
# 91 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$stop(void)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$stop();
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void CC2420TransmitP$BackoffTimer$stop(void){
#line 62
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$stop();
#line 62
}
#line 62
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static   cc2420_header_t *CC2420TransmitP$CC2420PacketBody$getHeader(message_t *arg_0x7e3bc7a8){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketC$CC2420PacketBody$getHeader(arg_0x7e3bc7a8);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 332 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$CC2420Receive$receive(uint8_t type, message_t *ack_msg)
#line 332
{
  cc2420_header_t *ack_header;
  cc2420_header_t *msg_header;
  cc2420_metadata_t *msg_metadata;
  uint8_t *ack_buf;
  uint8_t length;

  if (type == IEEE154_TYPE_ACK) {
      ack_header = CC2420TransmitP$CC2420PacketBody$getHeader(ack_msg);
      msg_header = CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg);


      if (CC2420TransmitP$m_state == CC2420TransmitP$S_ACK_WAIT && __nesc_ntoh_leuint8((unsigned char *)&msg_header->dsn) == __nesc_ntoh_leuint8((unsigned char *)&ack_header->dsn)) {
          CC2420TransmitP$BackoffTimer$stop();

          msg_metadata = CC2420TransmitP$CC2420PacketBody$getMetadata(CC2420TransmitP$m_msg);
          ack_buf = (uint8_t *)ack_header;
          length = __nesc_ntoh_leuint8((unsigned char *)&ack_header->length);

          __nesc_hton_int8((unsigned char *)&msg_metadata->ack, TRUE);
          __nesc_hton_uint8((unsigned char *)&msg_metadata->rssi, ack_buf[length - 1]);
          __nesc_hton_uint8((unsigned char *)&msg_metadata->lqi, ack_buf[length] & 0x7f);
          CC2420TransmitP$signalDone(SUCCESS);
        }
    }
}

# 61 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static   void CC2420ReceiveP$CC2420Receive$receive(uint8_t arg_0x7dd51708, message_t *arg_0x7dd518b8){
#line 61
  CC2420TransmitP$CC2420Receive$receive(arg_0x7dd51708, arg_0x7dd518b8);
#line 61
}
#line 61
# 209 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline   error_t CC2420SpiP$Fifo$continueRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 210
{
  return CC2420SpiP$SpiPacket$send((void *)0, data, len);
}

# 62 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static   error_t CC2420ReceiveP$RXFIFO$continueRead(uint8_t *arg_0x7df8bd30, uint8_t arg_0x7df8beb8){
#line 62
  unsigned char result;
#line 62

#line 62
  result = CC2420SpiP$Fifo$continueRead(CC2420_RXFIFO, arg_0x7df8bd30, arg_0x7df8beb8);
#line 62

#line 62
  return result;
#line 62
}
#line 62
#line 51
inline static   cc2420_status_t CC2420ReceiveP$RXFIFO$beginRead(uint8_t *arg_0x7df8b598, uint8_t arg_0x7df8b720){
#line 51
  unsigned char result;
#line 51

#line 51
  result = CC2420SpiP$Fifo$beginRead(CC2420_RXFIFO, arg_0x7df8b598, arg_0x7df8b720);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ReceiveP$CSN$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static   cc2420_status_t CC2420ReceiveP$SACK$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_SACK);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 264 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   uint16_t CC2420ControlP$CC2420Config$getShortAddr(void)
#line 264
{
  /* atomic removed: atomic calls only */
#line 265
  {
    unsigned int __nesc_temp = 
#line 265
    CC2420ControlP$m_short_addr;

#line 265
    return __nesc_temp;
  }
}

# 64 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static   uint16_t CC2420ReceiveP$CC2420Config$getShortAddr(void){
#line 64
  unsigned int result;
#line 64

#line 64
  result = CC2420ControlP$CC2420Config$getShortAddr();
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 331 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   bool CC2420ControlP$CC2420Config$isHwAutoAckDefault(void)
#line 331
{
  /* atomic removed: atomic calls only */
#line 332
  {
    unsigned char __nesc_temp = 
#line 332
    CC2420ControlP$hwAutoAckDefault;

#line 332
    return __nesc_temp;
  }
}

# 96 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static   bool CC2420ReceiveP$CC2420Config$isHwAutoAckDefault(void){
#line 96
  unsigned char result;
#line 96

#line 96
  result = CC2420ControlP$CC2420Config$isHwAutoAckDefault();
#line 96

#line 96
  return result;
#line 96
}
#line 96
# 338 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   bool CC2420ControlP$CC2420Config$isAutoAckEnabled(void)
#line 338
{
  /* atomic removed: atomic calls only */
#line 339
  {
    unsigned char __nesc_temp = 
#line 339
    CC2420ControlP$autoAckEnabled;

#line 339
    return __nesc_temp;
  }
}

# 101 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static   bool CC2420ReceiveP$CC2420Config$isAutoAckEnabled(void){
#line 101
  unsigned char result;
#line 101

#line 101
  result = CC2420ControlP$CC2420Config$isAutoAckEnabled();
#line 101

#line 101
  return result;
#line 101
}
#line 101
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get(void)
#line 45
{
#line 45
  return (* (volatile uint8_t *)33U & (1 << 6)) != 0;
}

# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   bool CC2420ReceiveP$FIFOP$get(void){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP$38$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$get(void)
#line 45
{
#line 45
  return (* (volatile uint8_t *)54U & (1 << 7)) != 0;
}

# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   bool CC2420ReceiveP$FIFO$get(void){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP$15$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 189 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline   void CC2420ReceiveP$RXFIFO$readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error)
#line 190
{
  cc2420_header_t *header = CC2420ReceiveP$CC2420PacketBody$getHeader(CC2420ReceiveP$m_p_rx_buf);
  cc2420_metadata_t *metadata = CC2420ReceiveP$CC2420PacketBody$getMetadata(CC2420ReceiveP$m_p_rx_buf);
  uint8_t *buf = (uint8_t *)header;

#line 194
  CC2420ReceiveP$rxFrameLength = buf[0];

  switch (CC2420ReceiveP$m_state) {

      case CC2420ReceiveP$S_RX_LENGTH: 
        CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_FCF;
      if (CC2420ReceiveP$rxFrameLength + 1 > CC2420ReceiveP$m_bytes_left) {

          CC2420ReceiveP$flush();
        }
      else {
          if (!CC2420ReceiveP$FIFO$get() && !CC2420ReceiveP$FIFOP$get()) {
              CC2420ReceiveP$m_bytes_left -= CC2420ReceiveP$rxFrameLength + 1;
            }

          if (CC2420ReceiveP$rxFrameLength <= MAC_PACKET_SIZE) {
              if (CC2420ReceiveP$rxFrameLength > 0) {
                  if (CC2420ReceiveP$rxFrameLength > CC2420ReceiveP$SACK_HEADER_LENGTH) {

                      CC2420ReceiveP$RXFIFO$continueRead(buf + 1, CC2420ReceiveP$SACK_HEADER_LENGTH);
                    }
                  else {

                      CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_PAYLOAD;
                      CC2420ReceiveP$RXFIFO$continueRead(buf + 1, CC2420ReceiveP$rxFrameLength);
                    }
                }
              else {
                  /* atomic removed: atomic calls only */
                  CC2420ReceiveP$receivingPacket = FALSE;
                  CC2420ReceiveP$CSN$set();
                  CC2420ReceiveP$SpiResource$release();
                  CC2420ReceiveP$waitForNextPacket();
                }
            }
          else {

              CC2420ReceiveP$flush();
            }
        }
      break;

      case CC2420ReceiveP$S_RX_FCF: 
        CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_PAYLOAD;










      if (CC2420ReceiveP$CC2420Config$isAutoAckEnabled() && !CC2420ReceiveP$CC2420Config$isHwAutoAckDefault()) {



          if (((__nesc_ntoh_leuint16((unsigned char *)&
#line 249
          header->fcf) >> IEEE154_FCF_ACK_REQ) & 0x01) == 1
           && (__nesc_ntoh_leuint16((unsigned char *)&header->dest) == CC2420ReceiveP$CC2420Config$getShortAddr()
           || __nesc_ntoh_leuint16((unsigned char *)&header->dest) == AM_BROADCAST_ADDR)
           && ((__nesc_ntoh_leuint16((unsigned char *)&header->fcf) >> IEEE154_FCF_FRAME_TYPE) & 7) == IEEE154_TYPE_DATA) {

              CC2420ReceiveP$CSN$set();
              CC2420ReceiveP$CSN$clr();
              CC2420ReceiveP$SACK$strobe();
              CC2420ReceiveP$CSN$set();
              CC2420ReceiveP$CSN$clr();
              CC2420ReceiveP$RXFIFO$beginRead(buf + 1 + CC2420ReceiveP$SACK_HEADER_LENGTH, 
              CC2420ReceiveP$rxFrameLength - CC2420ReceiveP$SACK_HEADER_LENGTH);
              return;
            }
        }


      CC2420ReceiveP$RXFIFO$continueRead(buf + 1 + CC2420ReceiveP$SACK_HEADER_LENGTH, 
      CC2420ReceiveP$rxFrameLength - CC2420ReceiveP$SACK_HEADER_LENGTH);
      break;

      case CC2420ReceiveP$S_RX_PAYLOAD: 
        CC2420ReceiveP$CSN$set();

      if (!CC2420ReceiveP$m_missed_packets) {

          CC2420ReceiveP$SpiResource$release();
        }

      if (CC2420ReceiveP$m_timestamp_size) {
          if (CC2420ReceiveP$rxFrameLength > 10) {
              __nesc_hton_uint16((unsigned char *)&metadata->time, CC2420ReceiveP$m_timestamp_queue[CC2420ReceiveP$m_timestamp_head]);
              CC2420ReceiveP$m_timestamp_head = (CC2420ReceiveP$m_timestamp_head + 1) % CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE;
              CC2420ReceiveP$m_timestamp_size--;
            }
        }
      else 
#line 284
        {
          __nesc_hton_uint16((unsigned char *)&metadata->time, 0xffff);
        }



      if (buf[CC2420ReceiveP$rxFrameLength] >> 7 && rx_buf) {
          uint8_t type = (__nesc_ntoh_leuint16((unsigned char *)&header->fcf) >> IEEE154_FCF_FRAME_TYPE) & 7;

#line 292
          CC2420ReceiveP$CC2420Receive$receive(type, CC2420ReceiveP$m_p_rx_buf);
          if (type == IEEE154_TYPE_DATA) {
              CC2420ReceiveP$receiveDone_task$postTask();
              return;
            }
        }

      CC2420ReceiveP$waitForNextPacket();
      break;

      default: /* atomic removed: atomic calls only */
        CC2420ReceiveP$receivingPacket = FALSE;
      CC2420ReceiveP$CSN$set();
      CC2420ReceiveP$SpiResource$release();
      break;
    }
}

# 368 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline    void CC2420SpiP$Fifo$default$readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error)
#line 368
{
}

# 71 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static   void CC2420SpiP$Fifo$readDone(uint8_t arg_0x7df70d40, uint8_t *arg_0x7df894f8, uint8_t arg_0x7df89680, error_t arg_0x7df89808){
#line 71
  switch (arg_0x7df70d40) {
#line 71
    case CC2420_TXFIFO:
#line 71
      CC2420TransmitP$TXFIFO$readDone(arg_0x7df894f8, arg_0x7df89680, arg_0x7df89808);
#line 71
      break;
#line 71
    case CC2420_RXFIFO:
#line 71
      CC2420ReceiveP$RXFIFO$readDone(arg_0x7df894f8, arg_0x7df89680, arg_0x7df89808);
#line 71
      break;
#line 71
    default:
#line 71
      CC2420SpiP$Fifo$default$readDone(arg_0x7df70d40, arg_0x7df894f8, arg_0x7df89680, arg_0x7df89808);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static   cc2420_status_t CC2420ReceiveP$SFLUSHRX$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_SFLUSHRX);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 102 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline   error_t CC2420SpiP$ChipSpiResource$attemptRelease(void)
#line 102
{
  return CC2420SpiP$attemptRelease();
}

# 39 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static   error_t CC2420TransmitP$ChipSpiResource$attemptRelease(void){
#line 39
  unsigned char result;
#line 39

#line 39
  result = CC2420SpiP$ChipSpiResource$attemptRelease();
#line 39

#line 39
  return result;
#line 39
}
#line 39
# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$get(void){
#line 53
  unsigned long result;
#line 53

#line 53
  result = /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$get();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 75 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow(void)
{
  return /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$get();
}

#line 146
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type dt)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$getNow(), dt);
}

# 55 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$BackoffTimer$size_type arg_0x7e3298c8){
#line 55
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(arg_0x7e3298c8);
#line 55
}
#line 55
# 284 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline    void CC2420CsmaP$RadioBackoff$default$requestInitialBackoff(am_id_t amId, 
message_t *msg)
#line 285
{
}

# 81 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static   void CC2420CsmaP$RadioBackoff$requestInitialBackoff(am_id_t arg_0x7e37d4e0, message_t *arg_0x7e3dc0a8){
#line 81
    CC2420CsmaP$RadioBackoff$default$requestInitialBackoff(arg_0x7e37d4e0, arg_0x7e3dc0a8);
#line 81
}
#line 81
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static   uint16_t CC2420CsmaP$Random$rand16(void){
#line 41
  unsigned int result;
#line 41

#line 41
  result = RandomMlcgP$Random$rand16();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 221 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$RadioBackoff$setInitialBackoff(uint16_t backoffTime)
#line 221
{
  CC2420TransmitP$myInitialBackoff = backoffTime + 1;
}

# 60 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static   void CC2420CsmaP$SubBackoff$setInitialBackoff(uint16_t arg_0x7e3dd010){
#line 60
  CC2420TransmitP$RadioBackoff$setInitialBackoff(arg_0x7e3dd010);
#line 60
}
#line 60
# 217 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline   void CC2420CsmaP$SubBackoff$requestInitialBackoff(message_t *msg)
#line 217
{
  CC2420CsmaP$SubBackoff$setInitialBackoff(CC2420CsmaP$Random$rand16()
   % (0x1F * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP$RadioBackoff$requestInitialBackoff(__nesc_ntoh_leuint8((unsigned char *)&((cc2420_header_t *)(msg->data - 
  sizeof(cc2420_header_t )))->type), msg);
}

# 81 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static   void CC2420TransmitP$RadioBackoff$requestInitialBackoff(message_t *arg_0x7e3dc0a8){
#line 81
  CC2420CsmaP$SubBackoff$requestInitialBackoff(arg_0x7e3dc0a8);
#line 81
}
#line 81
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420TransmitP$SpiResource$release(void){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420SpiP$Resource$release(/*CC2420TransmitC.Spi*/CC2420SpiC$3$CLIENT_ID);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 616 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP$releaseSpiResource(void)
#line 616
{
  CC2420TransmitP$SpiResource$release();
  return SUCCESS;
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t CC2420CsmaP$sendDone_task$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC2420CsmaP$sendDone_task);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 199 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline   void CC2420CsmaP$CC2420Transmit$sendDone(message_t *p_msg, error_t err)
#line 199
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 200
    CC2420CsmaP$sendErr = err;
#line 200
    __nesc_atomic_end(__nesc_atomic); }
  CC2420CsmaP$sendDone_task$postTask();
}

# 73 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Transmit.nc"
inline static   void CC2420TransmitP$Send$sendDone(message_t *arg_0x7e36c558, error_t arg_0x7e36c6e0){
#line 73
  CC2420CsmaP$CC2420Transmit$sendDone(arg_0x7e36c558, arg_0x7e36c6e0);
#line 73
}
#line 73
# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420TransmitP$CSN$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static   cc2420_status_t CC2420TransmitP$SFLUSHTX$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_SFLUSHTX);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420TransmitP$CSN$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 398 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$TXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 399
{

  CC2420TransmitP$CSN$set();
  if (CC2420TransmitP$m_state == CC2420TransmitP$S_CANCEL) {
      /* atomic removed: atomic calls only */
#line 403
      {
        CC2420TransmitP$CSN$clr();
        CC2420TransmitP$SFLUSHTX$strobe();
        CC2420TransmitP$CSN$set();
      }
      CC2420TransmitP$releaseSpiResource();
      CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
      CC2420TransmitP$Send$sendDone(CC2420TransmitP$m_msg, ECANCEL);
    }
  else {
#line 412
    if (!CC2420TransmitP$m_cca) {
        /* atomic removed: atomic calls only */
#line 413
        {
          CC2420TransmitP$m_state = CC2420TransmitP$S_BEGIN_TRANSMIT;
        }
        CC2420TransmitP$attemptSend();
      }
    else {
        CC2420TransmitP$releaseSpiResource();
        /* atomic removed: atomic calls only */
#line 420
        {
          CC2420TransmitP$m_state = CC2420TransmitP$S_SAMPLE_CCA;
        }

        CC2420TransmitP$RadioBackoff$requestInitialBackoff(CC2420TransmitP$m_msg);
        CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$myInitialBackoff);
      }
    }
}

# 312 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline   void CC2420ReceiveP$RXFIFO$writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 312
{
}

# 371 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline    void CC2420SpiP$Fifo$default$writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 371
{
}

# 91 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static   void CC2420SpiP$Fifo$writeDone(uint8_t arg_0x7df70d40, uint8_t *arg_0x7df88610, uint8_t arg_0x7df88798, error_t arg_0x7df88920){
#line 91
  switch (arg_0x7df70d40) {
#line 91
    case CC2420_TXFIFO:
#line 91
      CC2420TransmitP$TXFIFO$writeDone(arg_0x7df88610, arg_0x7df88798, arg_0x7df88920);
#line 91
      break;
#line 91
    case CC2420_RXFIFO:
#line 91
      CC2420ReceiveP$RXFIFO$writeDone(arg_0x7df88610, arg_0x7df88798, arg_0x7df88920);
#line 91
      break;
#line 91
    default:
#line 91
      CC2420SpiP$Fifo$default$writeDone(arg_0x7df70d40, arg_0x7df88610, arg_0x7df88798, arg_0x7df88920);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static   cc2420_status_t CC2420TransmitP$STXONCCA$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_STXONCCA);
#line 45

#line 45
  return result;
#line 45
}
#line 45
inline static   cc2420_status_t CC2420TransmitP$STXON$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_STXON);
#line 45

#line 45
  return result;
#line 45
}
#line 45
inline static   cc2420_status_t CC2420TransmitP$SNOP$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_SNOP);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 288 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline    void CC2420CsmaP$RadioBackoff$default$requestCongestionBackoff(am_id_t amId, 
message_t *msg)
#line 289
{
}

# 88 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static   void CC2420CsmaP$RadioBackoff$requestCongestionBackoff(am_id_t arg_0x7e37d4e0, message_t *arg_0x7e3dc660){
#line 88
    CC2420CsmaP$RadioBackoff$default$requestCongestionBackoff(arg_0x7e37d4e0, arg_0x7e3dc660);
#line 88
}
#line 88
# 229 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$RadioBackoff$setCongestionBackoff(uint16_t backoffTime)
#line 229
{
  CC2420TransmitP$myCongestionBackoff = backoffTime + 1;
}

# 66 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static   void CC2420CsmaP$SubBackoff$setCongestionBackoff(uint16_t arg_0x7e3dd590){
#line 66
  CC2420TransmitP$RadioBackoff$setCongestionBackoff(arg_0x7e3dd590);
#line 66
}
#line 66
# 225 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline   void CC2420CsmaP$SubBackoff$requestCongestionBackoff(message_t *msg)
#line 225
{
  CC2420CsmaP$SubBackoff$setCongestionBackoff(CC2420CsmaP$Random$rand16()
   % (0x7 * CC2420_BACKOFF_PERIOD) + CC2420_MIN_BACKOFF);

  CC2420CsmaP$RadioBackoff$requestCongestionBackoff(__nesc_ntoh_leuint8((unsigned char *)&((cc2420_header_t *)(msg->data - 
  sizeof(cc2420_header_t )))->type), msg);
}

# 88 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/RadioBackoff.nc"
inline static   void CC2420TransmitP$RadioBackoff$requestCongestionBackoff(message_t *arg_0x7e3dc660){
#line 88
  CC2420CsmaP$SubBackoff$requestCongestionBackoff(arg_0x7e3dc660);
#line 88
}
#line 88
# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   uint16_t HplAtm128Timer1P$Timer$get(void)
#line 49
{
#line 49
  return * (volatile uint16_t *)(0x2C + 0x20);
}

# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$get(void){
#line 52
  unsigned int result;
#line 52

#line 52
  result = HplAtm128Timer1P$Timer$get();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 41 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   /*CounterOne16C.NCounter*/Atm128CounterC$0$timer_size /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$get(void)
{
  return /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$get();
}

# 53 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$get(void){
#line 53
  unsigned int result;
#line 53

#line 53
  result = /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$get();
#line 53

#line 53
  return result;
#line 53
}
#line 53
# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static   Atm128_TIFR_t HplAtm128Timer1P$Timer0Ctrl$getInterruptFlag(void){
#line 44
  union __nesc_unnamed4272 result;
#line 44

#line 44
  result = HplAtm128Timer0AsyncP$TimerCtrl$getInterruptFlag();
#line 44

#line 44
  return result;
#line 44
}
#line 44
# 144 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   bool HplAtm128Timer1P$Timer$test(void)
#line 144
{
  return HplAtm128Timer1P$Timer0Ctrl$getInterruptFlag().bits.tov1;
}

# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$test(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = HplAtm128Timer1P$Timer$test();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 46 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   bool /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$isOverflowPending(void)
{
  return /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$test();
}

# 60 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   bool /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$isOverflowPending(void){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$isOverflowPending();
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 133 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$CompareA$start(void)
#line 133
{
#line 133
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 4;
}

# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$start(void){
#line 56
  HplAtm128Timer1P$CompareA$start();
#line 56
}
#line 56
# 127 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$CompareA$reset(void)
#line 127
{
#line 127
  * (volatile uint8_t *)(0x36 + 0x20) = 1 << 4;
}

# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset(void){
#line 53
  HplAtm128Timer1P$CompareA$reset();
#line 53
}
#line 53
# 183 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$CompareA$set(uint16_t t)
#line 183
{
#line 183
  * (volatile uint16_t *)(0x2A + 0x20) = t;
}

# 45 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$size_type arg_0x7e266e78){
#line 45
  HplAtm128Timer1P$CompareA$set(arg_0x7e266e78);
#line 45
}
#line 45
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$timer_size /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$get(void){
#line 52
  unsigned int result;
#line 52

#line 52
  result = HplAtm128Timer1P$Timer$get();
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 74 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size dt)
#line 74
{
  /* atomic removed: atomic calls only */






  {
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size now;
#line 83
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size elapsed;
#line 83
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$timer_size expires;

    ;


    now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$get();
    elapsed = now + 3 - t0;
    if (elapsed >= dt) {
      expires = now + 3;
      }
    else {
#line 93
      expires = t0 + dt;
      }



    if (expires == 0) {
      expires = 1;
      }



    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$set(expires - 1);
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$reset();
    /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$start();
  }
}

# 92 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type arg_0x7e3289e0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$size_type arg_0x7e328b70){
#line 92
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$startAt(arg_0x7e3289e0, arg_0x7e328b70);
#line 92
}
#line 92
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static   cc2420_status_t CC2420ControlP$RXCTRL1$write(uint16_t arg_0x7e3187f0){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_RXCTRL1, arg_0x7e3187f0);
#line 55

#line 55
  return result;
#line 55
}
#line 55
inline static   cc2420_status_t CC2420ControlP$IOCFG0$write(uint16_t arg_0x7e3187f0){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_IOCFG0, arg_0x7e3187f0);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static   cc2420_status_t CC2420ControlP$SXOSCON$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_SXOSCON);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t HplCC2420InterruptsP$CCATask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(HplCC2420InterruptsP$CCATask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get(void)
#line 45
{
#line 45
  return (* (volatile uint8_t *)48U & (1 << 6)) != 0;
}

# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   bool HplCC2420InterruptsP$CC_CCA$get(void){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 89 "/opt/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline   error_t HplCC2420InterruptsP$CCA$enableRisingEdge(void)
#line 89
{
  /* atomic removed: atomic calls only */
#line 90
  HplCC2420InterruptsP$ccaWaitForState = TRUE;
  /* atomic removed: atomic calls only */
#line 91
  HplCC2420InterruptsP$ccaCheckDisabled = FALSE;
  HplCC2420InterruptsP$ccaLastState = HplCC2420InterruptsP$CC_CCA$get();
  HplCC2420InterruptsP$CCATask$postTask();
  return SUCCESS;
}

# 42 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   error_t CC2420ControlP$InterruptCCA$enableRisingEdge(void){
#line 42
  unsigned char result;
#line 42

#line 42
  result = HplCC2420InterruptsP$CCA$enableRisingEdge();
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static   cc2420_status_t CC2420ControlP$IOCFG1$write(uint16_t arg_0x7e3187f0){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_IOCFG1, arg_0x7e3187f0);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 192 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   error_t CC2420ControlP$CC2420Power$startOscillator(void)
#line 192
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 193
    {
      if (CC2420ControlP$m_state != CC2420ControlP$S_VREG_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 195
            FAIL;

            {
#line 195
              __nesc_atomic_end(__nesc_atomic); 
#line 195
              return __nesc_temp;
            }
          }
        }
#line 198
      CC2420ControlP$m_state = CC2420ControlP$S_XOSC_STARTING;
      CC2420ControlP$IOCFG1$write(CC2420_SFDMUX_XOSC16M_STABLE << 
      CC2420_IOCFG1_CCAMUX);

      CC2420ControlP$InterruptCCA$enableRisingEdge();
      CC2420ControlP$SXOSCON$strobe();

      CC2420ControlP$IOCFG0$write((1 << CC2420_IOCFG0_FIFOP_POLARITY) | (
      127 << CC2420_IOCFG0_FIFOP_THR));

      CC2420ControlP$writeFsctrl();
      CC2420ControlP$writeMdmctrl0();

      CC2420ControlP$RXCTRL1$write(((((((1 << CC2420_RXCTRL1_RXBPF_LOCUR) | (
      1 << CC2420_RXCTRL1_LOW_LOWGAIN)) | (
      1 << CC2420_RXCTRL1_HIGH_HGM)) | (
      1 << CC2420_RXCTRL1_LNA_CAP_ARRAY)) | (
      1 << CC2420_RXCTRL1_RXMIX_TAIL)) | (
      1 << CC2420_RXCTRL1_RXMIX_VCM)) | (
      2 << CC2420_RXCTRL1_RXMIX_CURRENT));
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 71 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static   error_t CC2420CsmaP$CC2420Power$startOscillator(void){
#line 71
  unsigned char result;
#line 71

#line 71
  result = CC2420ControlP$CC2420Power$startOscillator();
#line 71

#line 71
  return result;
#line 71
}
#line 71
# 208 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline  void CC2420CsmaP$Resource$granted(void)
#line 208
{
  CC2420CsmaP$CC2420Power$startOscillator();
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void CC2420ControlP$Resource$granted(void){
#line 92
  CC2420CsmaP$Resource$granted();
#line 92
}
#line 92
# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$CSN$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$clr();
#line 30
}
#line 30
# 362 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline  void CC2420ControlP$SpiResource$granted(void)
#line 362
{
  CC2420ControlP$CSN$clr();
  CC2420ControlP$Resource$granted();
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t CC2420ControlP$syncDone$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC2420ControlP$syncDone);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420ControlP$SyncResource$release(void){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420SpiP$Resource$release(/*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$CLIENT_ID);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$CSN$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$set();
#line 29
}
#line 29
# 45 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static   cc2420_status_t CC2420ControlP$SRXON$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_SRXON);
#line 45

#line 45
  return result;
#line 45
}
#line 45
inline static   cc2420_status_t CC2420ControlP$SRFOFF$strobe(void){
#line 45
  unsigned char result;
#line 45

#line 45
  result = CC2420SpiP$Strobe$strobe(CC2420_SRFOFF);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 348 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline  void CC2420ControlP$SyncResource$granted(void)
#line 348
{
  CC2420ControlP$CSN$clr();
  CC2420ControlP$SRFOFF$strobe();
  CC2420ControlP$writeFsctrl();
  CC2420ControlP$writeMdmctrl0();
  CC2420ControlP$writeId();
  CC2420ControlP$CSN$set();
  CC2420ControlP$CSN$clr();
  CC2420ControlP$SRXON$strobe();
  CC2420ControlP$CSN$set();
  CC2420ControlP$SyncResource$release();
  CC2420ControlP$syncDone$postTask();
}

#line 478
static inline   void CC2420ControlP$ReadRssi$default$readDone(error_t error, uint16_t data)
#line 478
{
}

# 63 "/opt/tinyos-2.x/tos/interfaces/Read.nc"
inline static  void CC2420ControlP$ReadRssi$readDone(error_t arg_0x7e335cd8, CC2420ControlP$ReadRssi$val_t arg_0x7e335e60){
#line 63
  CC2420ControlP$ReadRssi$default$readDone(arg_0x7e335cd8, arg_0x7e335e60);
#line 63
}
#line 63
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420ControlP$RssiResource$release(void){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420SpiP$Resource$release(/*CC2420ControlC.RssiResource*/CC2420SpiC$2$CLIENT_ID);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 285 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline   cc2420_status_t CC2420SpiP$Reg$read(uint8_t addr, uint16_t *data)
#line 285
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 289
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 291
            status;

            {
#line 291
              __nesc_atomic_end(__nesc_atomic); 
#line 291
              return __nesc_temp;
            }
          }
        }
    }
#line 295
    __nesc_atomic_end(__nesc_atomic); }
#line 295
  status = CC2420SpiP$SpiByte$write(addr | 0x40);
  *data = (uint16_t )CC2420SpiP$SpiByte$write(0) << 8;
  *data |= CC2420SpiP$SpiByte$write(0);

  return status;
}

# 47 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static   cc2420_status_t CC2420ControlP$RSSI$read(uint16_t *arg_0x7e318280){
#line 47
  unsigned char result;
#line 47

#line 47
  result = CC2420SpiP$Reg$read(CC2420_RSSI, arg_0x7e318280);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 367 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline  void CC2420ControlP$RssiResource$granted(void)
#line 367
{
  uint16_t data;

#line 369
  CC2420ControlP$CSN$clr();
  CC2420ControlP$RSSI$read(&data);
  CC2420ControlP$CSN$set();

  CC2420ControlP$RssiResource$release();
  data += 0x7f;
  data &= 0x00ff;
  CC2420ControlP$ReadRssi$readDone(SUCCESS, data);
}

# 360 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline  void CC2420TransmitP$SpiResource$granted(void)
#line 360
{
  uint8_t cur_state;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 363
    {
      cur_state = CC2420TransmitP$m_state;
    }
#line 365
    __nesc_atomic_end(__nesc_atomic); }

  switch (cur_state) {
      case CC2420TransmitP$S_LOAD: 
        CC2420TransmitP$loadTXFIFO();
      break;

      case CC2420TransmitP$S_BEGIN_TRANSMIT: 
        CC2420TransmitP$attemptSend();
      break;

      case CC2420TransmitP$S_CANCEL: 
        CC2420TransmitP$CSN$clr();
      CC2420TransmitP$SFLUSHTX$strobe();
      CC2420TransmitP$CSN$set();
      CC2420TransmitP$releaseSpiResource();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 381
        {
          CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
        }
#line 383
        __nesc_atomic_end(__nesc_atomic); }
      CC2420TransmitP$Send$sendDone(CC2420TransmitP$m_msg, ECANCEL);
      break;

      default: 
        CC2420TransmitP$releaseSpiResource();
      break;
    }
}

# 180 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline  void CC2420ReceiveP$SpiResource$granted(void)
#line 180
{
  CC2420ReceiveP$receive();
}

# 365 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline   void CC2420SpiP$Resource$default$granted(uint8_t id)
#line 365
{
}

# 92 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static  void CC2420SpiP$Resource$granted(uint8_t arg_0x7df703e0){
#line 92
  switch (arg_0x7df703e0) {
#line 92
    case /*CC2420ControlC.Spi*/CC2420SpiC$0$CLIENT_ID:
#line 92
      CC2420ControlP$SpiResource$granted();
#line 92
      break;
#line 92
    case /*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$CLIENT_ID:
#line 92
      CC2420ControlP$SyncResource$granted();
#line 92
      break;
#line 92
    case /*CC2420ControlC.RssiResource*/CC2420SpiC$2$CLIENT_ID:
#line 92
      CC2420ControlP$RssiResource$granted();
#line 92
      break;
#line 92
    case /*CC2420TransmitC.Spi*/CC2420SpiC$3$CLIENT_ID:
#line 92
      CC2420TransmitP$SpiResource$granted();
#line 92
      break;
#line 92
    case /*CC2420ReceiveC.Spi*/CC2420SpiC$4$CLIENT_ID:
#line 92
      CC2420ReceiveP$SpiResource$granted();
#line 92
      break;
#line 92
    default:
#line 92
      CC2420SpiP$Resource$default$granted(arg_0x7df703e0);
#line 92
      break;
#line 92
    }
#line 92
}
#line 92
# 356 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline  void CC2420SpiP$grant$runTask(void)
#line 356
{
  uint8_t holder;

#line 358
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 358
    {
      holder = CC2420SpiP$m_holder;
    }
#line 360
    __nesc_atomic_end(__nesc_atomic); }
  CC2420SpiP$Resource$granted(holder);
}

# 55 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static   cc2420_status_t CC2420ControlP$FSCTRL$write(uint16_t arg_0x7e3187f0){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_FSCTRL, arg_0x7e3187f0);
#line 55

#line 55
  return result;
#line 55
}
#line 55
inline static   cc2420_status_t CC2420ControlP$MDMCTRL0$write(uint16_t arg_0x7e3187f0){
#line 55
  unsigned char result;
#line 55

#line 55
  result = CC2420SpiP$Reg$write(CC2420_MDMCTRL0, arg_0x7e3187f0);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 260 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline   cc2420_status_t CC2420SpiP$Ram$write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len)
#line 262
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 266
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 268
            status;

            {
#line 268
              __nesc_atomic_end(__nesc_atomic); 
#line 268
              return __nesc_temp;
            }
          }
        }
    }
#line 272
    __nesc_atomic_end(__nesc_atomic); }
#line 272
  addr += offset;

  status = CC2420SpiP$SpiByte$write(addr | 0x80);
  CC2420SpiP$SpiByte$write((addr >> 1) & 0xc0);
  for (; len; len--) {
      CC2420SpiP$SpiByte$write(* data++);
    }

  return status;
}

# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static   cc2420_status_t CC2420ControlP$PANID$write(uint8_t arg_0x7e31b248, uint8_t *arg_0x7e31b3f0, uint8_t arg_0x7e31b578){
#line 63
  unsigned char result;
#line 63

#line 63
  result = CC2420SpiP$Ram$write(CC2420_RAM_PANID, arg_0x7e31b248, arg_0x7e31b3f0, arg_0x7e31b578);
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t CC2420CsmaP$startDone_task$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC2420CsmaP$startDone_task);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 212 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline   void CC2420CsmaP$CC2420Power$startOscillatorDone(void)
#line 212
{
  CC2420CsmaP$startDone_task$postTask();
}

# 76 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static   void CC2420ControlP$CC2420Power$startOscillatorDone(void){
#line 76
  CC2420CsmaP$CC2420Power$startOscillatorDone();
#line 76
}
#line 76
# 105 "/opt/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline   error_t HplCC2420InterruptsP$CCA$disable(void)
#line 105
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 106
    HplCC2420InterruptsP$ccaCheckDisabled = TRUE;
#line 106
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   error_t CC2420ControlP$InterruptCCA$disable(void){
#line 50
  unsigned char result;
#line 50

#line 50
  result = HplCC2420InterruptsP$CCA$disable();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 390 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   void CC2420ControlP$InterruptCCA$fired(void)
#line 390
{
  CC2420ControlP$m_state = CC2420ControlP$S_XOSC_STARTED;
  CC2420ControlP$InterruptCCA$disable();
  CC2420ControlP$IOCFG1$write(0);
  CC2420ControlP$writeId();
  CC2420ControlP$CSN$set();
  CC2420ControlP$CSN$clr();
  CC2420ControlP$CC2420Power$startOscillatorDone();
}

# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   void HplCC2420InterruptsP$CCA$fired(void){
#line 57
  CC2420ControlP$InterruptCCA$fired();
#line 57
}
#line 57
# 69 "/opt/tinyos-2.x/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline  void HplCC2420InterruptsP$CCATask$runTask(void)
#line 69
{
  uint8_t CCAState;

#line 71
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 71
    {
      if (HplCC2420InterruptsP$ccaCheckDisabled) {
          {
#line 73
            __nesc_atomic_end(__nesc_atomic); 
#line 73
            return;
          }
        }
    }
#line 76
    __nesc_atomic_end(__nesc_atomic); }

  CCAState = HplCC2420InterruptsP$CC_CCA$get();
  if (HplCC2420InterruptsP$ccaLastState != HplCC2420InterruptsP$ccaWaitForState && CCAState == HplCC2420InterruptsP$ccaWaitForState) {
      HplCC2420InterruptsP$CCA$fired();
    }



  HplCC2420InterruptsP$ccaLastState = CCAState;
  HplCC2420InterruptsP$CCATask$postTask();
}

# 181 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  void CC2420ActiveMessageP$CC2420Config$syncDone(error_t error)
#line 181
{
}

# 335 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline  void CC2420ReceiveP$CC2420Config$syncDone(error_t error)
#line 335
{
}

# 53 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Config.nc"
inline static  void CC2420ControlP$CC2420Config$syncDone(error_t arg_0x7e3b8800){
#line 53
  CC2420ReceiveP$CC2420Config$syncDone(arg_0x7e3b8800);
#line 53
  CC2420ActiveMessageP$CC2420Config$syncDone(arg_0x7e3b8800);
#line 53
}
#line 53
# 418 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline  void CC2420ControlP$syncDone$runTask(void)
#line 418
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 419
    CC2420ControlP$m_sync_busy = FALSE;
#line 419
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP$CC2420Config$syncDone(SUCCESS);
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420ControlP$SyncResource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC2420SpiP$Resource$request(/*CC2420ControlC.SyncSpiC*/CC2420SpiC$1$CLIENT_ID);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 285 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline  error_t CC2420ControlP$CC2420Config$sync(void)
#line 285
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 286
    {
      if (CC2420ControlP$m_sync_busy) {
          {
            unsigned char __nesc_temp = 
#line 288
            FAIL;

            {
#line 288
              __nesc_atomic_end(__nesc_atomic); 
#line 288
              return __nesc_temp;
            }
          }
        }
#line 291
      CC2420ControlP$m_sync_busy = TRUE;
      if (CC2420ControlP$m_state == CC2420ControlP$S_XOSC_STARTED) {
          CC2420ControlP$SyncResource$request();
        }
      else 
#line 294
        {
          CC2420ControlP$syncDone$postTask();
        }
    }
#line 297
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

#line 414
static inline  void CC2420ControlP$sync$runTask(void)
#line 414
{
  CC2420ControlP$CC2420Config$sync();
}

# 181 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static inline  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(am_id_t id, message_t *msg, error_t err)
#line 181
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current >= 2) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current, msg, err);
    }
  else {
      ;
    }
}

# 99 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  void CC2420ActiveMessageP$AMSend$sendDone(am_id_t arg_0x7e3ca6b8, message_t *arg_0x7eb750a8, error_t arg_0x7eb75230){
#line 99
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$sendDone(arg_0x7e3ca6b8, arg_0x7eb750a8, arg_0x7eb75230);
#line 99
}
#line 99
# 160 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  void CC2420ActiveMessageP$SubSend$sendDone(message_t *msg, error_t result)
#line 160
{
  CC2420ActiveMessageP$AMSend$sendDone(CC2420ActiveMessageP$AMPacket$type(msg), msg, result);
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void UniqueSendP$Send$sendDone(message_t *arg_0x7e3c1598, error_t arg_0x7e3c1720){
#line 89
  CC2420ActiveMessageP$SubSend$sendDone(arg_0x7e3c1598, arg_0x7e3c1720);
#line 89
}
#line 89
# 104 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline  void UniqueSendP$SubSend$sendDone(message_t *msg, error_t error)
#line 104
{
  UniqueSendP$State$toIdle();
  UniqueSendP$Send$sendDone(msg, error);
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  void CC2420CsmaP$Send$sendDone(message_t *arg_0x7e3c1598, error_t arg_0x7e3c1720){
#line 89
  UniqueSendP$SubSend$sendDone(arg_0x7e3c1598, arg_0x7e3c1720);
#line 89
}
#line 89
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t CC2420CsmaP$stopDone_task$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(CC2420CsmaP$stopDone_task);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 6;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$RSTN$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$set();
#line 29
}
#line 29
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)59U &= ~(1 << 5);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$VREN$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$clr();
#line 30
}
#line 30
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)59U &= ~(1 << 6);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$RSTN$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$clr();
#line 30
}
#line 30
# 184 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   error_t CC2420ControlP$CC2420Power$stopVReg(void)
#line 184
{
  CC2420ControlP$m_state = CC2420ControlP$S_VREG_STOPPED;
  CC2420ControlP$RSTN$clr();
  CC2420ControlP$VREN$clr();
  CC2420ControlP$RSTN$set();
  return SUCCESS;
}

# 63 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static   error_t CC2420CsmaP$CC2420Power$stopVReg(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = CC2420ControlP$CC2420Power$stopVReg();
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 43 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$disable(void)
#line 43
{
#line 43
  * (volatile uint8_t *)(0x39 + 0x20) &= ~(1 << 6);
}

# 40 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable(void){
#line 40
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$disable();
#line 40
}
#line 40
# 33 "/opt/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline   error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$disable(void)
#line 33
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable();
  return SUCCESS;
}

# 50 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   error_t CC2420ReceiveP$InterruptFIFOP$disable(void){
#line 50
  unsigned char result;
#line 50

#line 50
  result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$disable();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 128 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline  error_t CC2420ReceiveP$StdControl$stop(void)
#line 128
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 129
    {
      CC2420ReceiveP$m_state = CC2420ReceiveP$S_STOPPED;
      CC2420ReceiveP$reset_state();
      CC2420ReceiveP$CSN$set();
      CC2420ReceiveP$InterruptFIFOP$disable();
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 138 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$Capture$stop(void)
#line 138
{
#line 138
  * (volatile uint8_t *)(0x37 + 0x20) &= ~(1 << 5);
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$stop(void){
#line 61
  HplAtm128Timer1P$Capture$stop();
#line 61
}
#line 61
# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$disable(void)
#line 60
{
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$stop();
}

# 55 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static   void CC2420TransmitP$CaptureSFD$disable(void){
#line 55
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$disable();
#line 55
}
#line 55
# 157 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline  error_t CC2420TransmitP$StdControl$stop(void)
#line 157
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 158
    {
      CC2420TransmitP$m_state = CC2420TransmitP$S_STOPPED;
      CC2420TransmitP$BackoffTimer$stop();
      CC2420TransmitP$CaptureSFD$disable();
      CC2420TransmitP$SpiResource$release();
      CC2420TransmitP$CSN$set();
    }
#line 164
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 84 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t CC2420CsmaP$SubControl$stop(void){
#line 84
  unsigned char result;
#line 84

#line 84
  result = CC2420TransmitP$StdControl$stop();
#line 84
  result = ecombine(result, CC2420ReceiveP$StdControl$stop());
#line 84

#line 84
  return result;
#line 84
}
#line 84
# 270 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline void CC2420CsmaP$shutdown(void)
#line 270
{
  CC2420CsmaP$SubControl$stop();
  CC2420CsmaP$CC2420Power$stopVReg();
  CC2420CsmaP$stopDone_task$postTask();
}

#line 239
static inline  void CC2420CsmaP$sendDone_task$runTask(void)
#line 239
{
  error_t packetErr;

#line 241
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 241
    packetErr = CC2420CsmaP$sendErr;
#line 241
    __nesc_atomic_end(__nesc_atomic); }
  if (CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STOPPING)) {
      CC2420CsmaP$shutdown();
    }
  else {
      CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_STARTED);
    }

  CC2420CsmaP$Send$sendDone(CC2420CsmaP$m_msg, packetErr);
}

# 124 "UnicastCountToLedsC.nc"
static inline  void UnicastCountToLedsC$AMControl$stopDone(error_t err)
#line 124
{
}

# 239 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline  void PacketEngineP$RadioControl$stopDone(error_t err)
#line 239
{
  if (err == SUCCESS) {
      PacketEngineP$radioOn = FALSE;
    }
}

# 117 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void CC2420CsmaP$SplitControl$stopDone(error_t arg_0x7eb526e8){
#line 117
  PacketEngineP$RadioControl$stopDone(arg_0x7eb526e8);
#line 117
  UnicastCountToLedsC$AMControl$stopDone(arg_0x7eb526e8);
#line 117
}
#line 117
# 260 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline  void CC2420CsmaP$stopDone_task$runTask(void)
#line 260
{
  CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_STOPPED);
  CC2420CsmaP$SplitControl$stopDone(SUCCESS);
}

# 83 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  error_t UnicastCountToLedsC$AMControl$start(void){
#line 83
  unsigned char result;
#line 83

#line 83
  result = CC2420CsmaP$SplitControl$start();
#line 83

#line 83
  return result;
#line 83
}
#line 83
# 142 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline  void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$TimerFrom$getNow(), dt, FALSE);
}

# 53 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static  void UnicastCountToLedsC$MilliTimer$startPeriodic(uint32_t arg_0x7eb70010){
#line 53
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startPeriodic(2U, arg_0x7eb70010);
#line 53
}
#line 53
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t UnicastCountToLedsC$AMPacket$address(void){
#line 57
  unsigned int result;
#line 57

#line 57
  result = CC2420ActiveMessageP$AMPacket$address();
#line 57

#line 57
  return result;
#line 57
}
#line 57
# 113 "UnicastCountToLedsC.nc"
static inline  void UnicastCountToLedsC$AMControl$startDone(error_t err)
#line 113
{
  if (err == SUCCESS) {

      if (UnicastCountToLedsC$AMPacket$address() == 0) {
        UnicastCountToLedsC$MilliTimer$startPeriodic(250);
        }
    }
  else 
#line 119
    {
      UnicastCountToLedsC$AMControl$start();
    }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t PacketEngineP$msgAdded$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(PacketEngineP$msgAdded);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 213 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline  error_t PacketEngineP$StdControl$start(void)
#line 213
{
  PacketEngineP$running = TRUE;

  if (PacketEngineP$nextAddedPkt < PacketEngineP$BUFFER_SIZE) {
    PacketEngineP$msgAdded$postTask();
    }
#line 218
  if (PacketEngineP$nextActionPkt < PacketEngineP$BUFFER_SIZE) {
    PacketEngineP$msgAction$postTask();
    }
#line 220
  return SUCCESS;
}








static inline  void PacketEngineP$RadioControl$startDone(error_t err)
#line 230
{
  if (err == SUCCESS) {
      PacketEngineP$radioOn = TRUE;
      PacketEngineP$StdControl$start();
      if (PacketEngineP$nextActionPkt < PacketEngineP$BUFFER_SIZE) {
        PacketEngineP$msgAction$postTask();
        }
    }
}

# 92 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static  void CC2420CsmaP$SplitControl$startDone(error_t arg_0x7eb54af0){
#line 92
  PacketEngineP$RadioControl$startDone(arg_0x7eb54af0);
#line 92
  UnicastCountToLedsC$AMControl$startDone(arg_0x7eb54af0);
#line 92
}
#line 92
# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420ControlP$SpiResource$release(void){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420SpiP$Resource$release(/*CC2420ControlC.Spi*/CC2420SpiC$0$CLIENT_ID);
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 164 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   error_t CC2420ControlP$Resource$release(void)
#line 164
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 165
    {
      CC2420ControlP$CSN$set();
      {
        unsigned char __nesc_temp = 
#line 167
        CC2420ControlP$SpiResource$release();

        {
#line 167
          __nesc_atomic_end(__nesc_atomic); 
#line 167
          return __nesc_temp;
        }
      }
    }
#line 170
    __nesc_atomic_end(__nesc_atomic); }
}

# 110 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420CsmaP$Resource$release(void){
#line 110
  unsigned char result;
#line 110

#line 110
  result = CC2420ControlP$Resource$release();
#line 110

#line 110
  return result;
#line 110
}
#line 110
# 234 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   error_t CC2420ControlP$CC2420Power$rxOn(void)
#line 234
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 235
    {
      if (CC2420ControlP$m_state != CC2420ControlP$S_XOSC_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 237
            FAIL;

            {
#line 237
              __nesc_atomic_end(__nesc_atomic); 
#line 237
              return __nesc_temp;
            }
          }
        }
#line 239
      CC2420ControlP$SRXON$strobe();
    }
#line 240
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 90 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static   error_t CC2420CsmaP$CC2420Power$rxOn(void){
#line 90
  unsigned char result;
#line 90

#line 90
  result = CC2420ControlP$CC2420Power$rxOn();
#line 90

#line 90
  return result;
#line 90
}
#line 90
# 42 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$enable(void)
#line 42
{
#line 42
  * (volatile uint8_t *)(0x39 + 0x20) |= 1 << 6;
}

# 35 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$enable(void){
#line 35
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$enable();
#line 35
}
#line 35
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(bool low_to_high)
#line 47
{
  * (volatile uint8_t *)90U |= 1 << 5;

  if (low_to_high) {
    * (volatile uint8_t *)90U |= 1 << 4;
    }
  else {
#line 53
    * (volatile uint8_t *)90U &= ~(1 << 4);
    }
}

# 59 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(bool arg_0x7e024728){
#line 59
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$edge(arg_0x7e024728);
#line 59
}
#line 59
# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$clear(void)
#line 41
{
#line 41
  * (volatile uint8_t *)(0x38 + 0x20) = 1 << 6;
}

# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$clear(void){
#line 45
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$clear();
#line 45
}
#line 45
# 15 "/opt/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$enable(bool rising)
#line 15
{
  /* atomic removed: atomic calls only */
#line 16
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$clear();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$edge(rising);
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$enable();
  }
  return SUCCESS;
}





static inline   error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge(void)
#line 29
{
  return /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$enable(FALSE);
}

# 43 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   error_t CC2420ReceiveP$InterruptFIFOP$enableFallingEdge(void){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$enableFallingEdge();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 118 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline  error_t CC2420ReceiveP$StdControl$start(void)
#line 118
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 119
    {
      CC2420ReceiveP$reset_state();
      CC2420ReceiveP$m_state = CC2420ReceiveP$S_STARTED;
      CC2420ReceiveP$receivingPacket = FALSE;
      CC2420ReceiveP$InterruptFIFOP$enableFallingEdge();
    }
#line 124
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline   error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureRisingEdge(void)
#line 52
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$enableCapture(TRUE);
}

# 42 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static   error_t CC2420TransmitP$CaptureSFD$captureRisingEdge(void){
#line 42
  unsigned char result;
#line 42

#line 42
  result = /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureRisingEdge();
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 146 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline  error_t CC2420TransmitP$StdControl$start(void)
#line 146
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 147
    {
      CC2420TransmitP$CaptureSFD$captureRisingEdge();
      CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
      CC2420TransmitP$m_receiving = FALSE;
      CC2420TransmitP$abortSpiRelease = FALSE;
      CC2420TransmitP$m_tx_power = 0;
    }
#line 153
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 74 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static  error_t CC2420CsmaP$SubControl$start(void){
#line 74
  unsigned char result;
#line 74

#line 74
  result = CC2420TransmitP$StdControl$start();
#line 74
  result = ecombine(result, CC2420ReceiveP$StdControl$start());
#line 74

#line 74
  return result;
#line 74
}
#line 74
# 252 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline  void CC2420CsmaP$startDone_task$runTask(void)
#line 252
{
  CC2420CsmaP$SubControl$start();
  CC2420CsmaP$CC2420Power$rxOn();
  CC2420CsmaP$Resource$release();
  CC2420CsmaP$SplitControlState$forceState(CC2420CsmaP$S_STARTED);
  CC2420CsmaP$SplitControl$startDone(SUCCESS);
}

# 122 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$Capture$setEdge(bool up)
#line 122
{
#line 122
  if (up) {
#line 122
    * (volatile uint8_t *)(0x2E + 0x20) |= 1 << 6;
    }
  else {
#line 122
    * (volatile uint8_t *)(0x2E + 0x20) &= ~(1 << 6);
    }
}

# 79 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$setEdge(bool arg_0x7e26bb48){
#line 79
  HplAtm128Timer1P$Capture$setEdge(arg_0x7e26bb48);
#line 79
}
#line 79
# 132 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$Capture$start(void)
#line 132
{
#line 132
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 5;
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$start(void){
#line 58
  HplAtm128Timer1P$Capture$start();
#line 58
}
#line 58
# 45 "/opt/tinyos-2.x/tos/interfaces/State.nc"
inline static   error_t CC2420CsmaP$SplitControlState$requestState(uint8_t arg_0x7e844ad0){
#line 45
  unsigned char result;
#line 45

#line 45
  result = StateImplP$State$requestState(1U, arg_0x7e844ad0);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 55 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void CC2420ControlP$StartupTimer$start(CC2420ControlP$StartupTimer$size_type arg_0x7e3298c8){
#line 55
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$start(arg_0x7e3298c8);
#line 55
}
#line 55
# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$set(void)
#line 46
{
#line 46
  * (volatile uint8_t *)59U |= 1 << 5;
}

# 29 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$VREN$set(void){
#line 29
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$set();
#line 29
}
#line 29
# 172 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   error_t CC2420ControlP$CC2420Power$startVReg(void)
#line 172
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 173
    {
      if (CC2420ControlP$m_state != CC2420ControlP$S_VREG_STOPPED) {
          {
            unsigned char __nesc_temp = 
#line 175
            FAIL;

            {
#line 175
              __nesc_atomic_end(__nesc_atomic); 
#line 175
              return __nesc_temp;
            }
          }
        }
#line 177
      CC2420ControlP$m_state = CC2420ControlP$S_VREG_STARTING;
    }
#line 178
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP$VREN$set();
  CC2420ControlP$StartupTimer$start(CC2420_TIME_VREN);
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static   error_t CC2420CsmaP$CC2420Power$startVReg(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = CC2420ControlP$CC2420Power$startVReg();
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 56 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static   error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$postTask(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = SchedulerBasicP$TaskBasic$postTask(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 267 "../../../tos/lib/data/queue/PriorityQueueP.nc"
static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTree(void)
#line 267
{
}

#line 150
static inline  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$moveUp(priority_queue_id_t m)
#line 150
{
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$moveUpPos(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[m]);
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTree();
}

# 87 "../../../tos/lib/data/queue/PriorityQueue.nc"
inline static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$moveUp(priority_queue_id_t arg_0x7e518c20){
#line 87
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$moveUp(arg_0x7e518c20);
#line 87
}
#line 87
#line 72
inline static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$insert(priority_queue_id_t arg_0x7e519c68){
#line 72
  unsigned char result;
#line 72

#line 72
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$insert(arg_0x7e519c68);
#line 72

#line 72
  return result;
#line 72
}
#line 72
# 65 "../../../tos/lib/data/graph/GraphEdgeUnitWeightC.nc"
static inline  graph_edge_unit_weight_t GraphEdgeUnitWeightC$GraphEdgeWeight$weight(graph_edge_id_t m)
#line 65
{
  return 1;
}

# 55 "../../../tos/lib/data/graph/GraphEdgeWeight.nc"
inline static  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeWeight$weight_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeWeight$weight(graph_edge_id_t arg_0x7e5ac3f0){
#line 55
  unsigned char result;
#line 55

#line 55
  result = GraphEdgeUnitWeightC$GraphEdgeWeight$weight(arg_0x7e5ac3f0);
#line 55

#line 55
  return result;
#line 55
}
#line 55
# 276 "../../../tos/lib/data/graph/GraphSparseP.nc"
static inline  graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdge$dest(graph_edge_id_t m)
#line 276
{
  return /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[m].dest;
}

# 54 "../../../tos/lib/data/graph/GraphEdge.nc"
inline static  graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdge$dest(graph_edge_id_t arg_0x7e5b5120){
#line 54
  unsigned char result;
#line 54

#line 54
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdge$dest(arg_0x7e5b5120);
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 288 "../../../tos/lib/data/graph/GraphSparseP.nc"
static inline  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$next(graph_edge_id_t m)
#line 288
{
  return /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[m].next;
}

# 48 "../../../tos/interfaces/IndexedIterator.nc"
inline static  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$iterator_item_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$next(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$iterator_item_t arg_0x7ea441d8){
#line 48
  unsigned char result;
#line 48

#line 48
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$next(arg_0x7ea441d8);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 298 "../../../tos/lib/data/graph/GraphSparseP.nc"
static inline  iterator_end_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$end(graph_edge_id_t m)
#line 298
{
  return m == 50;
}

# 56 "../../../tos/interfaces/IndexedIterator.nc"
inline static  iterator_end_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$end(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$iterator_item_t arg_0x7ea448a8){
#line 56
  unsigned char result;
#line 56

#line 56
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$GraphEdgeList$end(arg_0x7ea448a8);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 253 "../../../tos/lib/data/graph/GraphSparseP.nc"
static inline  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edgeList(graph_vertex_id_t s)
#line 253
{
  return /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[s];
}

# 136 "../../../tos/lib/data/graph/Graph.nc"
inline static  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$edgeList(graph_vertex_id_t arg_0x7e5e3e50){
#line 136
  unsigned char result;
#line 136

#line 136
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edgeList(arg_0x7e5e3e50);
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 206 "../../../tos/lib/data/queue/PriorityQueueP.nc"
static inline  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$clear(void)
#line 206
{
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$clearData();
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTree();
}

# 122 "../../../tos/lib/data/queue/PriorityQueue.nc"
inline static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$clear(void){
#line 122
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$clear();
#line 122
}
#line 122
# 285 "../../../tos/lib/data/graph/SourceShortestPathP.nc"
static inline  int16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Compare$test(graph_vertex_id_t a, graph_vertex_id_t b)
#line 285
{
  return /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[b] - /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[a];
}

# 49 "../../../tos/interfaces/Compare.nc"
inline static  int16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$test(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$compare_t arg_0x7e511090, /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$compare_t arg_0x7e511220){
#line 49
  int result;
#line 49

#line 49
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Compare$test(arg_0x7e511090, arg_0x7e511220);
#line 49

#line 49
  return result;
#line 49
}
#line 49
# 234 "../../../tos/lib/data/queue/PriorityQueueP.nc"
static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$moveDownPos(priority_queue_id_t a, priority_queue_id_t curSize)
#line 234
{
  priority_queue_id_t c;

#line 236
  ;
  while ((c = 2 * a + 1) < curSize) {
      if (c + 1 < curSize && /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$test(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[c + 1], /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[c]) > 0) {
        c++;
        }
#line 240
      if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$test(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[a], /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[c]) > 0) {
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
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$flip(0, --/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size);
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$moveDownPos(0, /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size);
  ;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTree();
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size]] = 20;
  return /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size];
}

# 117 "../../../tos/lib/data/queue/PriorityQueue.nc"
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
# 105 "../../../tos/lib/data/graph/SourceShortestPathP.nc"
static inline  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildTree(graph_vertex_id_t src)
#line 105
{
  return /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildTreeTo(src, 20);
}

# 47 "../../../tos/lib/data/graph/SourceShortestPath.nc"
inline static  error_t SimpleLinkCacheP$SourceShortestPath$buildTree(graph_vertex_id_t arg_0x7e5d91c0){
#line 47
  unsigned char result;
#line 47

#line 47
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildTree(arg_0x7e5d91c0);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 152 "../../../tos/lib/data/graph/SourceShortestPathP.nc"
static inline  bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$rebuildNeeded(graph_vertex_id_t src)
#line 152
{
  return /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded || src != /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc;
}

# 82 "../../../tos/lib/data/graph/SourceShortestPath.nc"
inline static  bool SimpleLinkCacheP$SourceShortestPath$rebuildNeeded(graph_vertex_id_t arg_0x7e5d7408){
#line 82
  unsigned char result;
#line 82

#line 82
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$rebuildNeeded(arg_0x7e5d7408);
#line 82

#line 82
  return result;
#line 82
}
#line 82
# 97 "../../../tos/lib/netarch/dsr/RouteCache.nc"
inline static  void SimpleLinkCacheP$RouteCache$routeUpdate(route_cache_node_id_t arg_0x7e701bf0, route_cache_node_id_t arg_0x7e701d88, route_cache_link_id_t arg_0x7e700010){
#line 97
  /*DsrP.DsrControlP*/DsrControlP$0$RouteCache$routeUpdate(arg_0x7e701bf0, arg_0x7e701d88, arg_0x7e700010);
#line 97
  /*DsrP.DsrControlP*/DsrControlP$0$SalvageRouteCache$routeUpdate(arg_0x7e701bf0, arg_0x7e701d88, arg_0x7e700010);
#line 97
}
#line 97
# 55 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$getMask(uint16_t bitnum)
{
  return 1 << bitnum % /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$ELEMENT_SIZE;
}

#line 50
static inline uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$getIndex(uint16_t bitnum)
{
  return bitnum / /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$ELEMENT_SIZE;
}

#line 86
static inline   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$BitVector$clear(uint16_t bitnum)
{
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$m_bits[/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$getIndex(bitnum)] &= ~/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$getMask(bitnum);
}

# 58 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   void SimpleLinkCacheP$Track$clear(uint16_t arg_0x7e6e5850){
#line 58
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$BitVector$clear(arg_0x7e6e5850);
#line 58
}
#line 58
# 100 "../../../tos/lib/data/graph/SourceShortestPath.nc"
inline static  graph_edge_id_t SimpleLinkCacheP$SourceShortestPath$edgeCount(graph_vertex_id_t arg_0x7e5d5178){
#line 100
  unsigned char result;
#line 100

#line 100
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$edgeCount(arg_0x7e5d5178);
#line 100

#line 100
  return result;
#line 100
}
#line 100
# 46 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   bool SimpleLinkCacheP$Track$get(uint16_t arg_0x7e6e6df8){
#line 46
  unsigned char result;
#line 46

#line 46
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$BitVector$get(arg_0x7e6e6df8);
#line 46

#line 46
  return result;
#line 46
}
#line 46
# 55 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$getMask(uint16_t bitnum)
{
  return 1 << bitnum % /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$ELEMENT_SIZE;
}

#line 50
static inline uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$getIndex(uint16_t bitnum)
{
  return bitnum / /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$ELEMENT_SIZE;
}

#line 86
static inline   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$BitVector$clear(uint16_t bitnum)
{
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$m_bits[/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$getIndex(bitnum)] &= ~/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$getMask(bitnum);
}

# 58 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   void SimpleLinkCacheP$Initial$clear(uint16_t arg_0x7e6e5850){
#line 58
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$BitVector$clear(arg_0x7e6e5850);
#line 58
}
#line 58
#line 46
inline static   bool SimpleLinkCacheP$Initial$get(uint16_t arg_0x7e6e6df8){
#line 46
  unsigned char result;
#line 46

#line 46
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$BitVector$get(arg_0x7e6e6df8);
#line 46

#line 46
  return result;
#line 46
}
#line 46
# 104 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline   uint16_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$BitVector$size(void)
{
  return 20;
}

# 77 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   uint16_t SimpleLinkCacheP$Track$size(void){
#line 77
  unsigned int result;
#line 77

#line 77
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$BitVector$size();
#line 77

#line 77
  return result;
#line 77
}
#line 77
# 166 "../../../tos/lib/netarch/dsr/SimpleLinkCacheP.nc"
static inline  void SimpleLinkCacheP$SourceShortestPath$builtTree(graph_vertex_id_t src)
#line 166
{
  route_cache_node_id_t dest;
  route_cache_link_id_t numLinks;

  for (dest = 0; dest < SimpleLinkCacheP$Track$size(); dest++) {
      if (SimpleLinkCacheP$Initial$get(dest)) {
          SimpleLinkCacheP$Initial$clear(dest);
          numLinks = SimpleLinkCacheP$SourceShortestPath$edgeCount(dest);
          if (numLinks > 0) {
            SimpleLinkCacheP$Track$clear(dest);
            }
          SimpleLinkCacheP$RouteCache$routeUpdate(src, dest, numLinks);
        }
      else {
#line 178
        if (SimpleLinkCacheP$Track$get(dest) && (
        numLinks = SimpleLinkCacheP$SourceShortestPath$edgeCount(dest)) > 0) {
            SimpleLinkCacheP$Track$clear(dest);
            SimpleLinkCacheP$RouteCache$routeUpdate(src, dest, numLinks);
          }
        }
    }
  if (SimpleLinkCacheP$SourceShortestPath$rebuildNeeded(src)) {
    SimpleLinkCacheP$SourceShortestPath$buildTree(src);
    }
}

# 54 "../../../tos/lib/data/graph/SourceShortestPath.nc"
inline static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$builtTree(graph_vertex_id_t arg_0x7e5d9920){
#line 54
  SimpleLinkCacheP$SourceShortestPath$builtTree(arg_0x7e5d9920);
#line 54
}
#line 54
# 195 "../../../tos/lib/netarch/dsr/SimpleLinkCacheP.nc"
static inline  void SimpleLinkCacheP$SourceShortestPath$builtTreeTo(graph_vertex_id_t src, graph_vertex_id_t dest, 
error_t pathResult)
#line 196
{
}

# 72 "../../../tos/lib/data/graph/SourceShortestPath.nc"
inline static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$builtTreeTo(graph_vertex_id_t arg_0x7e5d8968, graph_vertex_id_t arg_0x7e5d8b00, error_t arg_0x7e5d8ca0){
#line 72
  SimpleLinkCacheP$SourceShortestPath$builtTreeTo(arg_0x7e5d8968, arg_0x7e5d8b00, arg_0x7e5d8ca0);
#line 72
}
#line 72
# 338 "../../../tos/lib/data/graph/SourceShortestPathP.nc"
static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$printPaths(void)
#line 338
{
}

# 87 "../../../tos/lib/data/queue/PriorityQueueP.nc"
static inline  bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$empty(void)
#line 87
{
  return !/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size;
}

# 47 "../../../tos/lib/data/queue/PriorityQueue.nc"
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
# 226 "../../../tos/lib/data/graph/SourceShortestPathP.nc"
static inline  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$runTask(void)
#line 226
{
  if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$empty()) {
      if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest != 20) {
          if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$foundDest == SUCCESS) {
            ;
            }
          else {
            ;
            }
        }
#line 235
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree = FALSE;
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$printPaths();
      if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest != 20) {
        /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$builtTreeTo(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc, /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest, /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$foundDest);
        }
      else {
#line 240
        /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$builtTree(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc);
        }
    }
  else 
#line 241
    {

      graph_edge_id_t e;
      graph_vertex_id_t s = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$removeBest();

#line 245
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[s] = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[s];
      if (s == /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest) {
          /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$foundDest = SUCCESS;
          /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$clear();
          /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$postTask();
        }
      ;
      for (e = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$edgeList(s); !/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$end(e); 
      e = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeList$next(e)) {
          graph_vertex_id_t d = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdge$dest(e);
          /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$graph_edge_weight_t eWeight = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[s] + /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$GraphEdgeWeight$weight(e);

#line 256
          if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[d] == 20) {

              ;

              /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[d] = eWeight;
              /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$insert(d);
              /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[d] = s;
            }
          else {
#line 263
            if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[d] == 20 && eWeight < /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[d]) {

                ;

                /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[d] = eWeight;
                /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$moveUp(d);
                /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[d] = s;
              }
            }
        }
#line 272
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$postTask();
    }
}

#line 216
static inline  iterator_end_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$end(graph_vertex_id_t dest)
#line 216
{
  return /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[dest] == 20 || /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[dest] == dest;
}

# 114 "../../../tos/lib/data/timer/DataTimerP.nc"
static inline  error_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$stop(/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data_timer_data_t stopData)
#line 114
{
  uint8_t i;

#line 116
  for (i = 0; i < /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size; i++) {
      if (/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data[i] == stopData) {
          /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$removeTimer(i);
          if (i == 0 && /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size > 0) {
              /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$adjustTimer();
              /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$startTimer();
            }
          return SUCCESS;
        }
    }
  return EINVAL;
}

# 61 "../../../tos/lib/data/timer/DataTimer.nc"
inline static  error_t /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutTimer$stop(/*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutTimer$data_t arg_0x7e6f1168){
#line 61
  unsigned char result;
#line 61

#line 61
  result = /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$DataTimer$stop(arg_0x7e6f1168);
#line 61

#line 61
  return result;
#line 61
}
#line 61
# 66 "../../../tos/lib/data/cache/DataCache.nc"
inline static  /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutCache$item_t */*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutCache$lookup(/*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutCache$item_t *arg_0x7e855360){
#line 66
  struct __nesc_unnamed4312 *result;
#line 66

#line 66
  result = /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$lookup(arg_0x7e855360);
#line 66

#line 66
  return result;
#line 66
}
#line 66
# 1300 "../../../tos/lib/netarch/dsr/DsrControlP.nc"
static inline void /*DsrP.DsrControlP*/DsrControlP$0$resetRouteRequestOutCache(am_addr_t dest)
#line 1300
{
  dsr_route_request_out_t outEntry = { dest, DSR_HOP_LIMIT, 0 };
  dsr_route_request_out_t *outCache;

#line 1303
  outCache = /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutCache$lookup(&outEntry);
  if (outCache != (void *)0 && outCache->rreqsSinceRrep > 0) {
      outCache->rreqsSinceRrep = 0;
      /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutTimer$stop(dest);
      ;
    }
}

# 389 "../../../tos/lib/netarch/tlv/TlvP.nc"
static inline  iterator_end_t TlvP$TlvList$end(uint8_t type, void *block, tlv_key_t key)
#line 389
{
  tlv_block_t *blk = (tlv_block_t *)block;

#line 391
  return key >= __nesc_ntoh_uint8((unsigned char *)&blk->len);
}

#line 125
static inline  uint8_t TlvP$TlvSingle$length(uint8_t type, void *block)
#line 125
{
  tlv_key_t key = TlvP$TlvList$next(type, block, TlvP$TLV_FIRST_KEY);

#line 127
  if (TlvP$TlvList$end(type, block, key)) {
    return 0;
    }
#line 129
  return TlvP$TlvMultiple$length(type, block, key);
}

# 50 "../../../tos/lib/netarch/tlv/TlvSingle.nc"
inline static  uint8_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSingle$length(uint8_t arg_0x7e9945d0, void *arg_0x7e997010){
#line 50
  unsigned char result;
#line 50

#line 50
  result = TlvP$TlvSingle$length(arg_0x7e9945d0, arg_0x7e997010);
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 403 "../../../tos/lib/netarch/tlv/TlvP.nc"
static inline tlv_t *TlvP$tlvAt(void *block, tlv_key_t key)
#line 403
{
  return (tlv_t *)(block + sizeof(tlv_block_t ) + key);
}

# 93 "../../../tos/lib/data/cache/LruDataCacheP.nc"
static inline void /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$printCache(void)
#line 93
{
}

#line 119
static inline void /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$remove(uint8_t i)
#line 119
{
  uint8_t j;

#line 121
  if (i >= /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count) {
    return;
    }
#line 123
  if (i == 0) {

      /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first = (/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first + 1) % 8;
    }
  else 
#line 126
    {

      for (j = i; j < /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count; j++) 
        memcpy(&/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$cache[(j + /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first) % 8], 
        &/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$cache[(j + /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first + 1) % 8], 
        sizeof(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t ));
    }
  /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count--;
}

# 812 "../../../tos/lib/netarch/dsr/DsrControlP.nc"
static inline  void /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutCache$evicted(dsr_route_request_out_t *item)
#line 812
{
}

# 57 "../../../tos/lib/data/cache/DataCache.nc"
inline static  void /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$evicted(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$item_t *arg_0x7e856cc0){
#line 57
  /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutCache$evicted(arg_0x7e856cc0);
#line 57
}
#line 57
# 168 "../../../tos/lib/data/cache/LruDataCacheP.nc"
static inline  /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t */*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$insert(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t *item)
#line 168
{
  uint8_t i = /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$lookup(item);

#line 170
  if (i != /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count) {
    memcpy(item, &/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$cache[(i + /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first) % 8], sizeof(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t ));
    }
  else {
#line 172
    if (/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count == 8) {
      /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$evicted(&/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$cache[/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first]);
      }
    }
#line 174
  if (/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count == 8 || i != /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count) {





      /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$remove(i % /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count);
    }

  memcpy(&/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$cache[(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first + /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count) % 8], item, sizeof(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t ));
  item = &/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$cache[(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first + /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count++) % 8];
  /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$printCache();
  return item;
}

# 47 "../../../tos/lib/data/cache/DataCache.nc"
inline static  /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutCache$item_t */*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutCache$insert(/*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutCache$item_t *arg_0x7e8566e8){
#line 47
  struct __nesc_unnamed4312 *result;
#line 47

#line 47
  result = /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$insert(arg_0x7e8566e8);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 150 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  uint8_t CC2420ActiveMessageP$Packet$maxPayloadLength(void)
#line 150
{
  return 36;
}

# 95 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$maxPayloadLength(void){
#line 95
  unsigned char result;
#line 95

#line 95
  result = CC2420ActiveMessageP$Packet$maxPayloadLength();
#line 95

#line 95
  return result;
#line 95
}
#line 95
# 451 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
static inline uint8_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$maxLen(void)
#line 451
{
  return /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$maxPayloadLength();
}

# 79 "../../../tos/lib/netarch/tlv/TlvP.nc"
static inline  error_t TlvP$TlvBlock$add(void *block, uint8_t trailLen, uint8_t maxLen)
#line 79
{
  tlv_block_t *blk = (tlv_block_t *)block;
  uint8_t diff = sizeof(tlv_block_t );

#line 82
  if (trailLen + diff > maxLen) {
      ;
      return ESIZE;
    }
  memmove(block + diff, block, trailLen);
  __nesc_hton_uint8((unsigned char *)&blk->len, 0);
  return SUCCESS;
}

# 51 "../../../tos/lib/netarch/tlv/TlvBlock.nc"
inline static  error_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvBlock$add(void *arg_0x7e9a5a40, uint8_t arg_0x7e9a5bd0, uint8_t arg_0x7e9a5d58){
#line 51
  unsigned char result;
#line 51

#line 51
  result = TlvP$TlvBlock$add(arg_0x7e9a5a40, arg_0x7e9a5bd0, arg_0x7e9a5d58);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 81 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
static inline  error_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvBlockPacket$add(message_t *pkt)
#line 81
{
  uint8_t trailLen = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$payloadLength(pkt);
  void *data = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$getPayload(pkt, trailLen);
  error_t err;

#line 85
  if ((err = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvBlock$add(data, trailLen, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$maxLen())) != SUCCESS) {
    return err;
    }
#line 87
  /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$postLengthChange(pkt, data, trailLen);
  return SUCCESS;
}

# 50 "../../../tos/lib/netarch/tlv/TlvBlockPacket.nc"
inline static  error_t /*DsrP.DsrControlP*/DsrControlP$0$DsrHeader$add(message_t *arg_0x7ea12cc0){
#line 50
  unsigned char result;
#line 50

#line 50
  result = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvBlockPacket$add(arg_0x7ea12cc0);
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 185 "../../../tos/lib/netarch/tlv/TlvP.nc"
static inline  error_t TlvP$TlvSingle$add(uint8_t type, void *block, uint8_t len, 
uint8_t trailLen, uint8_t maxLen)
#line 186
{
  if (!TlvP$TlvList$end(type, block, TlvP$TlvList$next(type, block, TlvP$TLV_FIRST_KEY))) {
    return EALREADY;
    }
#line 189
  return TlvP$TlvMultiple$add(type, block, (void *)0, len, trailLen, maxLen);
}

# 95 "../../../tos/lib/netarch/tlv/TlvSingle.nc"
inline static  error_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSingle$add(uint8_t arg_0x7e9945d0, void *arg_0x7e995010, uint8_t arg_0x7e995198, uint8_t arg_0x7e995338, uint8_t arg_0x7e9954c0){
#line 95
  unsigned char result;
#line 95

#line 95
  result = TlvP$TlvSingle$add(arg_0x7e9945d0, arg_0x7e995010, arg_0x7e995198, arg_0x7e995338, arg_0x7e9954c0);
#line 95

#line 95
  return result;
#line 95
}
#line 95
# 162 "../../../tos/lib/netarch/tlv/TlvP.nc"
static inline  void *TlvP$TlvSingle$value(uint8_t type, void *block)
#line 162
{
  tlv_key_t key = TlvP$TlvList$next(type, block, TlvP$TLV_FIRST_KEY);

#line 164
  if (TlvP$TlvList$end(type, block, key)) {
    return (void *)0;
    }
#line 166
  return TlvP$TlvMultiple$value(type, block, key);
}

# 77 "../../../tos/lib/netarch/tlv/TlvSingle.nc"
inline static  void */*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSingle$value(uint8_t arg_0x7e9945d0, void *arg_0x7e996838){
#line 77
  void *result;
#line 77

#line 77
  result = TlvP$TlvSingle$value(arg_0x7e9945d0, arg_0x7e996838);
#line 77

#line 77
  return result;
#line 77
}
#line 77
# 203 "../../../tos/lib/data/graph/SourceShortestPathP.nc"
static inline  graph_vertex_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$next(graph_vertex_id_t dest)
#line 203
{
  if (dest >= 20) {
    return 20;
    }
#line 206
  return /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[dest];
}

# 48 "../../../tos/interfaces/IndexedIterator.nc"
inline static  /*DsrP.DsrControlP*/DsrControlP$0$RouteNodeList$iterator_item_t /*DsrP.DsrControlP*/DsrControlP$0$RouteNodeList$next(/*DsrP.DsrControlP*/DsrControlP$0$RouteNodeList$iterator_item_t arg_0x7ea441d8){
#line 48
  unsigned char result;
#line 48

#line 48
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$next(arg_0x7ea441d8);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 171 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
inline static  packet_id_t /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$waitList(void){
#line 171
  unsigned char result;
#line 171

#line 171
  result = PacketEngineP$PacketEngine$waitList(48);
#line 171

#line 171
  return result;
#line 171
}
#line 171
# 908 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline  iterator_end_t PacketEngineP$PacketWaitList$end(am_id_t lowerId, packet_id_t m)
#line 908
{
  return m == PacketEngineP$BUFFER_SIZE;
}

# 56 "../../../tos/interfaces/IndexedIterator.nc"
inline static  iterator_end_t /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketWaitList$end(/*DsrP.DsrControlP*/DsrControlP$0$DsrPacketWaitList$iterator_item_t arg_0x7ea448a8){
#line 56
  unsigned char result;
#line 56

#line 56
  result = PacketEngineP$PacketWaitList$end(48, arg_0x7ea448a8);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 55 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline uint16_t /*DsrP.SalvageC*/BitVectorC$1$getMask(uint16_t bitnum)
{
  return 1 << bitnum % /*DsrP.SalvageC*/BitVectorC$1$ELEMENT_SIZE;
}

#line 50
static inline uint16_t /*DsrP.SalvageC*/BitVectorC$1$getIndex(uint16_t bitnum)
{
  return bitnum / /*DsrP.SalvageC*/BitVectorC$1$ELEMENT_SIZE;
}

#line 76
static inline   bool /*DsrP.SalvageC*/BitVectorC$1$BitVector$get(uint16_t bitnum)
{
  return /*DsrP.SalvageC*/BitVectorC$1$m_bits[/*DsrP.SalvageC*/BitVectorC$1$getIndex(bitnum)] & /*DsrP.SalvageC*/BitVectorC$1$getMask(bitnum) ? TRUE : FALSE;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   bool /*DsrP.DsrControlP*/DsrControlP$0$Salvage$get(uint16_t arg_0x7e6e6df8){
#line 46
  unsigned char result;
#line 46

#line 46
  result = /*DsrP.SalvageC*/BitVectorC$1$BitVector$get(arg_0x7e6e6df8);
#line 46

#line 46
  return result;
#line 46
}
#line 46
# 48 "../../../tos/interfaces/IndexedIterator.nc"
inline static  /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketWaitList$iterator_item_t /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketWaitList$next(/*DsrP.DsrControlP*/DsrControlP$0$DsrPacketWaitList$iterator_item_t arg_0x7ea441d8){
#line 48
  unsigned char result;
#line 48

#line 48
  result = PacketEngineP$PacketWaitList$next(48, arg_0x7ea441d8);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 58 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   void /*DsrP.DsrControlP*/DsrControlP$0$Salvage$clear(uint16_t arg_0x7e6e5850){
#line 58
  /*DsrP.SalvageC*/BitVectorC$1$BitVector$clear(arg_0x7e6e5850);
#line 58
}
#line 58
# 66 "../../../tos/lib/netarch/tlv/TlvSinglePacket.nc"
inline static  error_t /*DsrP.DsrControlP*/DsrControlP$0$SourceRoute$setLength(message_t *arg_0x7ea02510, uint8_t arg_0x7ea02698){
#line 66
  unsigned char result;
#line 66

#line 66
  result = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSinglePacket$setLength(DSR_SOURCE_ROUTE_TYPE, arg_0x7ea02510, arg_0x7ea02698);
#line 66

#line 66
  return result;
#line 66
}
#line 66
# 147 "../../../tos/lib/netarch/tlv/TlvP.nc"
static inline  error_t TlvP$TlvSingle$setLength(uint8_t type, void *block, uint8_t len, 
uint8_t trailLen, uint8_t maxLen)
#line 148
{
  tlv_key_t key = TlvP$TlvList$next(type, block, TlvP$TLV_FIRST_KEY);

#line 150
  if (TlvP$TlvList$end(type, block, key)) {
    return EINVAL;
    }
#line 152
  return TlvP$TlvMultiple$setLength(type, block, key, len, trailLen, maxLen);
}

# 67 "../../../tos/lib/netarch/tlv/TlvSingle.nc"
inline static  error_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSingle$setLength(uint8_t arg_0x7e9945d0, void *arg_0x7e997780, uint8_t arg_0x7e997908, uint8_t arg_0x7e997aa8, uint8_t arg_0x7e997c30){
#line 67
  unsigned char result;
#line 67

#line 67
  result = TlvP$TlvSingle$setLength(arg_0x7e9945d0, arg_0x7e997780, arg_0x7e997908, arg_0x7e997aa8, arg_0x7e997c30);
#line 67

#line 67
  return result;
#line 67
}
#line 67
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

#line 258
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




static __inline uint16_t __nesc_ntoh_uint16(const void *source)
#line 264
{
  const uint8_t *base = source;

#line 266
  return ((uint16_t )base[0] << 8) | base[1];
}

# 100 "../../../tos/lib/netarch/tlv/TlvSinglePacket.nc"
inline static  error_t /*DsrP.DsrControlP*/DsrControlP$0$RouteRequest$remove(message_t *arg_0x7ea00288){
#line 100
  unsigned char result;
#line 100

#line 100
  result = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSinglePacket$remove(DSR_ROUTE_REQUEST_TYPE, arg_0x7ea00288);
#line 100

#line 100
  return result;
#line 100
}
#line 100
# 89 "../../../tos/lib/netarch/single/SinglePacket.nc"
inline static  bool /*DsrP.DsrControlP*/DsrControlP$0$SinglePacket$isForMe(message_t *arg_0x7eaa0288){
#line 89
  unsigned char result;
#line 89

#line 89
  result = SinglePacketP$SinglePacket$isForMe(arg_0x7eaa0288);
#line 89

#line 89
  return result;
#line 89
}
#line 89
# 51 "../../../tos/lib/netarch/tlv/TlvSinglePacket.nc"
inline static  uint8_t /*DsrP.DsrControlP*/DsrControlP$0$RouteRequest$length(message_t *arg_0x7ea03d50){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSinglePacket$length(DSR_ROUTE_REQUEST_TYPE, arg_0x7ea03d50);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 136 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_id_t /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$type(message_t *arg_0x7eb33da0){
#line 136
  unsigned char result;
#line 136

#line 136
  result = CC2420ActiveMessageP$AMPacket$type(arg_0x7eb33da0);
#line 136

#line 136
  return result;
#line 136
}
#line 136
# 58 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   void /*DsrP.DsrControlP*/DsrControlP$0$Compose$clear(uint16_t arg_0x7e6e5850){
#line 58
  /*DsrP.ComposeC*/BitVectorC$0$BitVector$clear(arg_0x7e6e5850);
#line 58
}
#line 58
# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t SinglePacketP$SubPacket$payloadLength(message_t *arg_0x7eb45938){
#line 67
  unsigned char result;
#line 67

#line 67
  result = PacketEngineP$Packet$payloadLength(arg_0x7eb45938);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 384 "../../../tos/lib/netarch/single/SinglePacketP.nc"
static inline  uint8_t SinglePacketP$Packet$payloadLength(message_t *msg)
#line 384
{
  return SinglePacketP$SubPacket$payloadLength(msg) - sizeof(single_packet_header_t );
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t /*DsrP.DsrControlP*/DsrControlP$0$ComposePacket$payloadLength(message_t *arg_0x7eb45938){
#line 67
  unsigned char result;
#line 67

#line 67
  result = SinglePacketP$Packet$payloadLength(arg_0x7eb45938);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t /*DsrP.DsrControlP*/DsrControlP$0$Send$send(am_addr_t arg_0x7eb81d30, message_t *arg_0x7eb81ee0, uint8_t arg_0x7eb80088){
#line 69
  unsigned char result;
#line 69

#line 69
  result = SinglePacketP$Send$send(/*DsrC.DsrSendC*/SingleProcessorSenderC$0$PACKET_ENGINE_CLIENT_ID, arg_0x7eb81d30, arg_0x7eb81ee0, arg_0x7eb80088);
#line 69

#line 69
  return result;
#line 69
}
#line 69
# 46 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   bool /*DsrP.DsrControlP*/DsrControlP$0$Compose$get(uint16_t arg_0x7e6e6df8){
#line 46
  unsigned char result;
#line 46

#line 46
  result = /*DsrP.ComposeC*/BitVectorC$0$BitVector$get(arg_0x7e6e6df8);
#line 46

#line 46
  return result;
#line 46
}
#line 46
# 934 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline  packet_id_t pidCombine(packet_id_t a, packet_id_t b)
#line 934
{
  return PacketEngineP$pidCombineInternal(a, b);
}

# 171 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
inline static  packet_id_t /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$waitList(void){
#line 171
  unsigned char result;
#line 171

#line 171
  result = PacketEngineP$PacketEngine$waitList(4);
#line 171
  result = pidCombine(result, PacketEngineP$PacketEngine$waitList(48));
#line 171

#line 171
  return result;
#line 171
}
#line 171
# 94 "../../../tos/lib/netarch/single/SinglePacketP.nc"
static inline  am_addr_t SinglePacketP$SinglePacket$destination(message_t *msg)
#line 94
{
  return __nesc_ntoh_uint16((unsigned char *)&((single_packet_header_t *)SinglePacketP$SubPacket$getPayload(msg, sizeof(single_packet_header_t )))->dest);
}

# 67 "../../../tos/lib/netarch/single/SinglePacket.nc"
inline static  am_addr_t /*DsrP.DsrControlP*/DsrControlP$0$SinglePacket$destination(message_t *arg_0x7eaa1140){
#line 67
  unsigned int result;
#line 67

#line 67
  result = SinglePacketP$SinglePacket$destination(arg_0x7eaa1140);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 87 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
inline static  message_t */*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$packet(packet_id_t arg_0x7ea643e8){
#line 87
  nx_struct message_t *result;
#line 87

#line 87
  result = PacketEngineP$PacketEngine$packet(4, arg_0x7ea643e8);
#line 87

#line 87
  return result;
#line 87
}
#line 87
#line 146
inline static  error_t /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(packet_id_t arg_0x7ea60088){
#line 146
  unsigned char result;
#line 146

#line 146
  result = PacketEngineP$PacketEngine$drop(48, arg_0x7ea60088);
#line 146

#line 146
  return result;
#line 146
}
#line 146
#line 158
inline static  error_t /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$upperSendDone(packet_id_t arg_0x7ea60870, error_t arg_0x7ea609f8){
#line 158
  unsigned char result;
#line 158

#line 158
  result = PacketEngineP$PacketEngine$upperSendDone(48, arg_0x7ea60870, arg_0x7ea609f8);
#line 158

#line 158
  return result;
#line 158
}
#line 158
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$address(void){
#line 57
  unsigned int result;
#line 57

#line 57
  result = CC2420ActiveMessageP$AMPacket$address();
#line 57

#line 57
  return result;
#line 57
}
#line 57
# 78 "../../../tos/lib/netarch/dsr/RouteCache.nc"
inline static  void /*DsrP.DsrControlP*/DsrControlP$0$SalvageRouteCache$checkRoute(route_cache_node_id_t arg_0x7e701320, route_cache_node_id_t arg_0x7e7014b8){
#line 78
  SimpleLinkCacheP$RouteCache$checkRoute(arg_0x7e701320, arg_0x7e7014b8);
#line 78
}
#line 78
# 81 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline   void /*DsrP.SalvageC*/BitVectorC$1$BitVector$set(uint16_t bitnum)
{
  /*DsrP.SalvageC*/BitVectorC$1$m_bits[/*DsrP.SalvageC*/BitVectorC$1$getIndex(bitnum)] |= /*DsrP.SalvageC*/BitVectorC$1$getMask(bitnum);
}

# 52 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   void /*DsrP.DsrControlP*/DsrControlP$0$Salvage$set(uint16_t arg_0x7e6e5350){
#line 52
  /*DsrP.SalvageC*/BitVectorC$1$BitVector$set(arg_0x7e6e5350);
#line 52
}
#line 52
# 42 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420PacketBody.nc"
inline static   cc2420_header_t *CC2420ActiveMessageP$CC2420PacketBody$getHeader(message_t *arg_0x7e3bc7a8){
#line 42
  nx_struct cc2420_header_t *result;
#line 42

#line 42
  result = CC2420PacketC$CC2420PacketBody$getHeader(arg_0x7e3bc7a8);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 89 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static inline  am_addr_t CC2420ActiveMessageP$AMPacket$destination(message_t *amsg)
#line 89
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 91
  return __nesc_ntoh_leuint16((unsigned char *)&header->dest);
}

# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$destination(message_t *arg_0x7eb35888){
#line 67
  unsigned int result;
#line 67

#line 67
  result = CC2420ActiveMessageP$AMPacket$destination(arg_0x7eb35888);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 85 "../../../tos/lib/netarch/tlv/TlvMultiple.nc"
inline static  void */*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiple$value(uint8_t arg_0x7e983970, void *arg_0x7e987ed8, tlv_key_t arg_0x7e986088){
#line 85
  void *result;
#line 85

#line 85
  result = TlvP$TlvMultiple$value(arg_0x7e983970, arg_0x7e987ed8, arg_0x7e986088);
#line 85

#line 85
  return result;
#line 85
}
#line 85
# 244 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
static inline  void */*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiplePacket$value(uint8_t type, message_t *pkt, tlv_key_t key)
#line 244
{
  return /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiple$value(type, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$getPayload(pkt, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$payloadLength(pkt)), key);
}

# 82 "../../../tos/lib/netarch/tlv/TlvMultiplePacket.nc"
inline static  void */*DsrP.DsrControlP*/DsrControlP$0$RouteError$value(message_t *arg_0x7e9f2bf0, tlv_key_t arg_0x7e9f2d80){
#line 82
  void *result;
#line 82

#line 82
  result = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiplePacket$value(DSR_ROUTE_ERROR_TYPE, arg_0x7e9f2bf0, arg_0x7e9f2d80);
#line 82

#line 82
  return result;
#line 82
}
#line 82
# 103 "../../../tos/lib/netarch/tlv/TlvMultiple.nc"
inline static  error_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiple$add(uint8_t arg_0x7e983970, void *arg_0x7e986850, tlv_key_t *arg_0x7e986a00, uint8_t arg_0x7e986b98, uint8_t arg_0x7e986d28, uint8_t arg_0x7e986eb0){
#line 103
  unsigned char result;
#line 103

#line 103
  result = TlvP$TlvMultiple$add(arg_0x7e983970, arg_0x7e986850, arg_0x7e986a00, arg_0x7e986b98, arg_0x7e986d28, arg_0x7e986eb0);
#line 103

#line 103
  return result;
#line 103
}
#line 103
# 262 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
static inline  error_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiplePacket$add(uint8_t type, message_t *pkt, tlv_key_t *key, 
uint8_t len)
#line 263
{
  uint8_t trailLen;
  void *data = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$preLengthChange(pkt, &trailLen);
  error_t err = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiple$add(type, data, key, len, trailLen, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$maxLen());

#line 267
  /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$postLengthChange(pkt, data, trailLen);
  return err;
}

# 98 "../../../tos/lib/netarch/tlv/TlvMultiplePacket.nc"
inline static  error_t /*DsrP.DsrControlP*/DsrControlP$0$RouteError$add(message_t *arg_0x7e9f1588, tlv_key_t *arg_0x7e9f1738, uint8_t arg_0x7e9f18d0){
#line 98
  unsigned char result;
#line 98

#line 98
  result = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiplePacket$add(DSR_ROUTE_ERROR_TYPE, arg_0x7e9f1588, arg_0x7e9f1738, arg_0x7e9f18d0);
#line 98

#line 98
  return result;
#line 98
}
#line 98
# 52 "../../../tos/lib/netarch/tlv/TlvMultiple.nc"
inline static  uint8_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiple$length(uint8_t arg_0x7e983970, void *arg_0x7e990510, tlv_key_t arg_0x7e9906a0){
#line 52
  unsigned char result;
#line 52

#line 52
  result = TlvP$TlvMultiple$length(arg_0x7e983970, arg_0x7e990510, arg_0x7e9906a0);
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 206 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
static inline  uint8_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiplePacket$length(uint8_t type, message_t *pkt, tlv_key_t key)
#line 206
{
  return /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiple$length(type, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$getPayload(pkt, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$payloadLength(pkt)), key);
}

# 52 "../../../tos/lib/netarch/tlv/TlvMultiplePacket.nc"
inline static  uint8_t /*DsrP.DsrControlP*/DsrControlP$0$RouteError$length(message_t *arg_0x7e9f35a0, tlv_key_t arg_0x7e9f3730){
#line 52
  unsigned char result;
#line 52

#line 52
  result = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiplePacket$length(DSR_ROUTE_ERROR_TYPE, arg_0x7e9f35a0, arg_0x7e9f3730);
#line 52

#line 52
  return result;
#line 52
}
#line 52
# 51 "../../../tos/interfaces/StaticVoidIndexedIterator.nc"
inline static  /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvList$iterator_item_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvList$next(uint8_t arg_0x7e977de8, void *arg_0x7e980cb0, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvList$iterator_item_t arg_0x7e980e40){
#line 51
  unsigned char result;
#line 51

#line 51
  result = TlvP$TlvList$next(arg_0x7e977de8, arg_0x7e980cb0, arg_0x7e980e40);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 309 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
static inline  tlv_key_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvListPacket$next(uint8_t type, message_t *pkt, tlv_key_t key)
#line 309
{
  return /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvList$next(type, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$getPayload(pkt, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$payloadLength(pkt)), key);
}

# 51 "../../../tos/interfaces/StaticIndexedIterator.nc"
inline static  /*DsrP.DsrControlP*/DsrControlP$0$RouteErrorList$iterator_item_t /*DsrP.DsrControlP*/DsrControlP$0$RouteErrorList$next(/*DsrP.DsrControlP*/DsrControlP$0$RouteErrorList$data_source_t *arg_0x7e9e2358, /*DsrP.DsrControlP*/DsrControlP$0$RouteErrorList$iterator_item_t arg_0x7e9e24e8){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvListPacket$next(DSR_ROUTE_ERROR_TYPE, arg_0x7e9e2358, arg_0x7e9e24e8);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 60 "../../../tos/interfaces/StaticVoidIndexedIterator.nc"
inline static  iterator_end_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvList$end(uint8_t arg_0x7e977de8, void *arg_0x7e977600, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvList$iterator_item_t arg_0x7e977790){
#line 60
  unsigned char result;
#line 60

#line 60
  result = TlvP$TlvList$end(arg_0x7e977de8, arg_0x7e977600, arg_0x7e977790);
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 320 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
static inline  iterator_end_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvListPacket$end(uint8_t type, message_t *pkt, tlv_key_t key)
#line 320
{
  return /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvList$end(type, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$getPayload(pkt, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$payloadLength(pkt)), key);
}

# 60 "../../../tos/interfaces/StaticIndexedIterator.nc"
inline static  iterator_end_t /*DsrP.DsrControlP*/DsrControlP$0$RouteErrorList$end(/*DsrP.DsrControlP*/DsrControlP$0$RouteErrorList$data_source_t *arg_0x7e9e2c28, /*DsrP.DsrControlP*/DsrControlP$0$RouteErrorList$iterator_item_t arg_0x7e9e2db8){
#line 60
  unsigned char result;
#line 60

#line 60
  result = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvListPacket$end(DSR_ROUTE_ERROR_TYPE, arg_0x7e9e2c28, arg_0x7e9e2db8);
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 120 "../../../tos/lib/netarch/tlv/TlvMultiplePacket.nc"
inline static  tlv_key_t /*DsrP.DsrControlP*/DsrControlP$0$RouteError$list(message_t *arg_0x7e9f0b50){
#line 120
  unsigned char result;
#line 120

#line 120
  result = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiplePacket$list(DSR_ROUTE_ERROR_TYPE, arg_0x7e9f0b50);
#line 120

#line 120
  return result;
#line 120
}
#line 120
# 70 "../../../tos/lib/netarch/single/SinglePacketP.nc"
static inline  am_addr_t SinglePacketP$SinglePacket$source(message_t *msg)
#line 70
{
  return __nesc_ntoh_uint16((unsigned char *)&((single_packet_header_t *)SinglePacketP$SubPacket$getPayload(msg, sizeof(single_packet_header_t )))->src);
}

# 47 "../../../tos/lib/netarch/single/SinglePacket.nc"
inline static  am_addr_t /*DsrP.DsrControlP*/DsrControlP$0$SinglePacket$source(message_t *arg_0x7eaa3010){
#line 47
  unsigned int result;
#line 47

#line 47
  result = SinglePacketP$SinglePacket$source(arg_0x7eaa3010);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 75 "../../../tos/lib/netarch/tlv/TlvSinglePacket.nc"
inline static  void */*DsrP.DsrControlP*/DsrControlP$0$SourceRoute$value(message_t *arg_0x7ea01010){
#line 75
  void *result;
#line 75

#line 75
  result = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSinglePacket$value(DSR_SOURCE_ROUTE_TYPE, arg_0x7ea01010);
#line 75

#line 75
  return result;
#line 75
}
#line 75
#line 51
inline static  uint8_t /*DsrP.DsrControlP*/DsrControlP$0$SourceRoute$length(message_t *arg_0x7ea03d50){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSinglePacket$length(DSR_SOURCE_ROUTE_TYPE, arg_0x7ea03d50);
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 48 "/opt/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
inline static   error_t /*DsrP.DsrControlP*/DsrControlP$0$Acks$requestAck(message_t *arg_0x7ea35010){
#line 48
  unsigned char result;
#line 48

#line 48
  result = CC2420PacketC$Acks$requestAck(arg_0x7ea35010);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 92 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$setDestination(message_t *arg_0x7eb34490, am_addr_t arg_0x7eb34620){
#line 92
  CC2420ActiveMessageP$AMPacket$setDestination(arg_0x7eb34490, arg_0x7eb34620);
#line 92
}
#line 92
# 91 "../../../tos/lib/netarch/tlv/TlvSinglePacket.nc"
inline static  error_t /*DsrP.DsrControlP*/DsrControlP$0$SourceRoute$add(message_t *arg_0x7ea017c0, uint8_t arg_0x7ea01948){
#line 91
  unsigned char result;
#line 91

#line 91
  result = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSinglePacket$add(DSR_SOURCE_ROUTE_TYPE, arg_0x7ea017c0, arg_0x7ea01948);
#line 91

#line 91
  return result;
#line 91
}
#line 91
#line 75
inline static  void */*DsrP.DsrControlP*/DsrControlP$0$RouteRequest$value(message_t *arg_0x7ea01010){
#line 75
  void *result;
#line 75

#line 75
  result = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSinglePacket$value(DSR_ROUTE_REQUEST_TYPE, arg_0x7ea01010);
#line 75

#line 75
  return result;
#line 75
}
#line 75
# 87 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
inline static  message_t */*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$packet(packet_id_t arg_0x7ea643e8){
#line 87
  nx_struct message_t *result;
#line 87

#line 87
  result = PacketEngineP$PacketEngine$packet(48, arg_0x7ea643e8);
#line 87

#line 87
  return result;
#line 87
}
#line 87
# 48 "../../../tos/interfaces/IndexedIterator.nc"
inline static  /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketWaitList$iterator_item_t /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketWaitList$next(/*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketWaitList$iterator_item_t arg_0x7ea441d8){
#line 48
  unsigned char result;
#line 48

#line 48
  result = PacketEngineP$PacketWaitList$next(4, arg_0x7ea441d8);
#line 48
  result = pidCombine(result, PacketEngineP$PacketWaitList$next(48, arg_0x7ea441d8));
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 41 "../../../tos/types/Iterator.h"
static inline iterator_end_t iteratorEndCombine(iterator_end_t a, iterator_end_t b)
#line 41
{
  return a && b;
}

# 56 "../../../tos/interfaces/IndexedIterator.nc"
inline static  iterator_end_t /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketWaitList$end(/*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketWaitList$iterator_item_t arg_0x7ea448a8){
#line 56
  unsigned char result;
#line 56

#line 56
  result = PacketEngineP$PacketWaitList$end(4, arg_0x7ea448a8);
#line 56
  result = iteratorEndCombine(result, PacketEngineP$PacketWaitList$end(48, arg_0x7ea448a8));
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void SinglePacketP$SubPacket$setPayloadLength(message_t *arg_0x7eb44010, uint8_t arg_0x7eb44198){
#line 83
  PacketEngineP$Packet$setPayloadLength(arg_0x7eb44010, arg_0x7eb44198);
#line 83
}
#line 83
# 401 "../../../tos/lib/netarch/single/SinglePacketP.nc"
static inline  void SinglePacketP$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 401
{
  SinglePacketP$SubPacket$setPayloadLength(msg, len + sizeof(single_packet_header_t ));
}

# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void /*DsrP.DsrControlP*/DsrControlP$0$ComposePacket$setPayloadLength(message_t *arg_0x7eb44010, uint8_t arg_0x7eb44198){
#line 83
  SinglePacketP$Packet$setPayloadLength(arg_0x7eb44010, arg_0x7eb44198);
#line 83
}
#line 83
# 151 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$setType(message_t *arg_0x7eb31350, am_id_t arg_0x7eb314d8){
#line 151
  CC2420ActiveMessageP$AMPacket$setType(arg_0x7eb31350, arg_0x7eb314d8);
#line 151
}
#line 151
# 900 "../../../tos/lib/netarch/dsr/DsrControlP.nc"
static inline  void /*DsrP.DsrControlP*/DsrControlP$0$composePkt$runTask(void)
#line 900
{
  packet_id_t pid;
  message_t *inPkt;
  uint8_t optLen;
  message_t outPktBuf;
  message_t *outPkt = &outPktBuf;
  am_addr_t outSingleDest = /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$address();
  bool outReady = FALSE;

#line 908
  /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$setType(outPkt, AM_SINGLE);
  /*DsrP.DsrControlP*/DsrControlP$0$ComposePacket$setPayloadLength(outPkt, 0);

  pid = /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$waitList();
  while (!/*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketWaitList$end(pid)) {

      if (!/*DsrP.DsrControlP*/DsrControlP$0$Compose$get(pid)) {
          pid = /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketWaitList$next(pid);
          continue;
        }
      if ((inPkt = /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$packet(pid)) != (void *)0) {
          if ((optLen = /*DsrP.DsrControlP*/DsrControlP$0$RouteRequest$length(inPkt)) != 0) {

              if (!/*DsrP.DsrControlP*/DsrControlP$0$SinglePacket$isForMe(inPkt)) {
                  ;

                  /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(pid);
                  /*DsrP.DsrControlP*/DsrControlP$0$Compose$clear(pid);
                  pid = /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$waitList();
                  continue;
                }
              else 
#line 928
                {
                  dsr_route_request_t *inRreq = (dsr_route_request_t *)/*DsrP.DsrControlP*/DsrControlP$0$RouteRequest$value(inPkt);
                  uint8_t numAddrRreq = (optLen - sizeof(dsr_route_request_t )) / sizeof(nx_am_addr_t );
                  dsr_source_route_t *outSr;
                  uint8_t curAddr;

#line 933
                  ;
                  outSingleDest = /*DsrP.DsrControlP*/DsrControlP$0$SinglePacket$source(inPkt);

                  ;
                  if (/*DsrP.DsrControlP*/DsrControlP$0$addDsrHeader(pid, outPkt) == FAIL) {
                      /*DsrP.DsrControlP*/DsrControlP$0$Compose$clear(pid);
                      pid = /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$waitList();
                      continue;
                    }

                  if (
#line 942
                  /*DsrP.DsrControlP*/DsrControlP$0$SourceRoute$add(outPkt, sizeof(dsr_source_route_t ) + 
                  numAddrRreq * sizeof(nx_am_addr_t )) != SUCCESS) {
                      ;

                      /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(pid);
                      /*DsrP.DsrControlP*/DsrControlP$0$Compose$clear(pid);
                      pid = /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$waitList();
                      continue;
                    }
                  outSr = (dsr_source_route_t *)/*DsrP.DsrControlP*/DsrControlP$0$SourceRoute$value(outPkt);
                  if (outSr == (void *)0) {
                      ;

                      /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(pid);
                      /*DsrP.DsrControlP*/DsrControlP$0$Compose$clear(pid);
                      pid = /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$waitList();
                      continue;
                    }

                  __nesc_htonbf_uint8((unsigned char *)&(*outSr), 0, 1, TRUE);
                  __nesc_htonbf_uint8((unsigned char *)&(*outSr), 1, 3, 0);
                  __nesc_htonbf_uint8((unsigned char *)&(*outSr), 4, 4, numAddrRreq);

                  for (curAddr = 0; curAddr < numAddrRreq; curAddr++) 
                    __nesc_hton_uint16((unsigned char *)&outSr->addr[curAddr], __nesc_ntoh_uint16((unsigned char *)&inRreq->addr[numAddrRreq - curAddr - 1]));

                  if (numAddrRreq > 0) {
                    /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$setDestination(outPkt, __nesc_ntoh_uint16((unsigned char *)&outSr->addr[0]));
                    }
                  else {
#line 971
                    /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$setDestination(outPkt, outSingleDest);
                    }
#line 972
                  ;

                  /*DsrP.DsrControlP*/DsrControlP$0$Acks$requestAck(outPkt);
                  outReady = TRUE;
                  break;
                }
            }
          else {
#line 978
            if ((optLen = /*DsrP.DsrControlP*/DsrControlP$0$SourceRoute$length(inPkt)) != 0) {

                dsr_source_route_t *inSr = (dsr_source_route_t *)/*DsrP.DsrControlP*/DsrControlP$0$SourceRoute$value(inPkt);
                am_addr_t inSrSrc;
                tlv_key_t key;
                dsr_route_error_t *outRerr;
                dsr_node_unreachable_rei_t *outRerrInfo;

                if (__nesc_ntohbf_uint8((unsigned char *)&(*inSr), 1, 3) == 0) {
                  inSrSrc = /*DsrP.DsrControlP*/DsrControlP$0$SinglePacket$source(inPkt);
                  }
                else {
#line 989
                  inSrSrc = __nesc_ntoh_uint16((unsigned char *)&inSr->addr[0]);
                  }
                if (inSrSrc != /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$address()) {

                    outSingleDest = inSrSrc;

                    ;
                    if (/*DsrP.DsrControlP*/DsrControlP$0$addDsrHeader(pid, outPkt) == FAIL) {
                        /*DsrP.DsrControlP*/DsrControlP$0$Compose$clear(pid);
                        pid = /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$waitList();
                        continue;
                      }
                    if (!/*DsrP.DsrControlP*/DsrControlP$0$RouteErrorList$end(inPkt, /*DsrP.DsrControlP*/DsrControlP$0$RouteError$list(inPkt))) {
                        ;

                        for (key = /*DsrP.DsrControlP*/DsrControlP$0$RouteError$list(inPkt); !/*DsrP.DsrControlP*/DsrControlP$0$RouteErrorList$end(inPkt, key); 
                        key = /*DsrP.DsrControlP*/DsrControlP$0$RouteErrorList$next(inPkt, key)) {
                            if ((optLen = /*DsrP.DsrControlP*/DsrControlP$0$RouteError$length(inPkt, key)) != 0) {
                                dsr_route_error_t *rerr = (dsr_route_error_t *)/*DsrP.DsrControlP*/DsrControlP$0$RouteError$value(inPkt, key);

#line 1008
                                if (__nesc_ntoh_uint16((unsigned char *)&rerr->src) == /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$address()) {
                                    ;
                                    break;
                                  }
                              }
                          }
                      }

                    if (
#line 1015
                    /*DsrP.DsrControlP*/DsrControlP$0$RouteError$add(outPkt, &key, sizeof(dsr_route_error_t ) + 
                    sizeof(dsr_node_unreachable_rei_t )) != SUCCESS) {
                        ;

                        /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(pid);
                        /*DsrP.DsrControlP*/DsrControlP$0$Compose$clear(pid);
                        pid = /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$waitList();
                        continue;
                      }
                    if ((outRerr = (dsr_route_error_t *)/*DsrP.DsrControlP*/DsrControlP$0$RouteError$value(outPkt, key)) == (void *)0) {
                        ;

                        /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(pid);
                        /*DsrP.DsrControlP*/DsrControlP$0$Compose$clear(pid);
                        pid = /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$waitList();
                        continue;
                      }
                    outRerrInfo = (dsr_node_unreachable_rei_t *)& outRerr->info;
                    __nesc_htonbf_uint8((unsigned char *)&(*outRerr), 0, 4, DSR_NODE_UNREACHABLE_RET);
                    __nesc_htonbf_uint8((unsigned char *)&(*outRerr), 4, 4, __nesc_ntohbf_uint8((unsigned char *)&(*inSr), 1, 3));
                    __nesc_hton_uint16((unsigned char *)&outRerrInfo->addr, /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$destination(inPkt));
                    __nesc_hton_uint16((unsigned char *)&outRerr->src, /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$address());
                    __nesc_hton_uint16((unsigned char *)&outRerr->dest, outSingleDest);








                    ;

                    outReady = TRUE;

                    ;
                    if (__nesc_ntohbf_uint8((unsigned char *)&(*inSr), 0, 1)) {
                        ;
                        /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$upperSendDone(pid, FAIL);
                        /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(pid);
                      }
                    else {
#line 1055
                      if (__nesc_ntohbf_uint8((unsigned char *)&(*inSr), 1, 3) >= DSR_MAX_SALVAGE_COUNT) {
                          ;

                          /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$upperSendDone(pid, FAIL);
                          /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(pid);
                        }
                      else 
#line 1060
                        {
                          /*DsrP.DsrControlP*/DsrControlP$0$Salvage$set(pid);
                          ;

                          /*DsrP.DsrControlP*/DsrControlP$0$SalvageRouteCache$checkRoute(/*DsrP.DsrControlP*/DsrControlP$0$AMPacket$address(), 
                          /*DsrP.DsrControlP*/DsrControlP$0$SinglePacket$destination(inPkt));
                        }
                      }
                  }
                else 
#line 1067
                  {
                    ;
                    /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$upperSendDone(pid, FAIL);
                    /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(pid);
                  }
                if (outReady) {
                  break;
                  }
                else 
#line 1074
                  {
                    /*DsrP.DsrControlP*/DsrControlP$0$Compose$clear(pid);
                    pid = /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$waitList();
                  }
              }
            else 
#line 1078
              {

                outSingleDest = /*DsrP.DsrControlP*/DsrControlP$0$SinglePacket$destination(inPkt);
                ;


                memcpy(outPkt, inPkt, sizeof(message_t ));
                if (/*DsrP.DsrControlP*/DsrControlP$0$addRouteRequest(pid, outPkt, outSingleDest) == FAIL) {
                    ;
                    /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(pid);
                    /*DsrP.DsrControlP*/DsrControlP$0$Compose$clear(pid);
                    pid = /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$waitList();
                    continue;
                  }
                ;
                outReady = TRUE;
                break;
              }
            }
        }
      else {
#line 1096
        if ((inPkt = /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$packet(pid)) != (void *)0) {

            outSingleDest = /*DsrP.DsrControlP*/DsrControlP$0$SinglePacket$destination(inPkt);
            ;


            memcpy(outPkt, inPkt, sizeof(message_t ));
            if (/*DsrP.DsrControlP*/DsrControlP$0$addDsrHeader(pid, outPkt) == FAIL || 
            /*DsrP.DsrControlP*/DsrControlP$0$addRouteRequest(pid, outPkt, outSingleDest) == FAIL) {
                ;
                /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$drop(pid);
                /*DsrP.DsrControlP*/DsrControlP$0$Compose$clear(pid);
                pid = /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$waitList();
                continue;
              }
            ;
            outReady = TRUE;
            break;
          }
        else 
#line 1114
          {
            ;
            /*DsrP.DsrControlP*/DsrControlP$0$Compose$clear(pid);
            pid = /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$waitList();
            continue;
          }
        }
    }
#line 1121
  if (outReady) {
      if (!/*DsrP.DsrControlP*/DsrControlP$0$Compose$get(pid)) {
        ;
        }
      switch (/*DsrP.DsrControlP*/DsrControlP$0$Send$send(outSingleDest, &outPktBuf, 
      /*DsrP.DsrControlP*/DsrControlP$0$ComposePacket$payloadLength(&outPktBuf))) {
          case SUCCESS: {
              ;
              /*DsrP.DsrControlP*/DsrControlP$0$Compose$clear(pid);
              break;
            }
#line 1131
          case EBUSY: {

              ;
              return;
            }
#line 1135
          case EOFF: {

              ;

              return;
            }
#line 1140
          case ESIZE: {

              ;
              /*DsrP.DsrControlP*/DsrControlP$0$Compose$clear(pid);
              /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$drop(pid);
              /*DsrP.DsrControlP*/DsrControlP$0$composePkt$postTask();
              return;
            }
        }
      if (/*DsrP.DsrControlP*/DsrControlP$0$AMPacket$type(inPkt) == AM_DSR) {

          if ((optLen = /*DsrP.DsrControlP*/DsrControlP$0$RouteRequest$length(inPkt)) != 0) {
              if (/*DsrP.DsrControlP*/DsrControlP$0$SinglePacket$isForMe(inPkt)) {
                  /*DsrP.DsrControlP*/DsrControlP$0$RouteRequest$remove(inPkt);

                  /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$receiveAdded(pid, inPkt);
                }
            }
        }
    }
}

# 349 "../../../tos/lib/netarch/tlv/TlvP.nc"
static inline  tlv_key_t TlvP$TlvMultiple$list(uint8_t type, void *block)
#line 349
{
  return TlvP$TlvList$next(type, block, TlvP$TLV_FIRST_KEY);
}

# 126 "../../../tos/lib/netarch/tlv/TlvMultiple.nc"
inline static  tlv_key_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiple$list(uint8_t arg_0x7e983970, void *arg_0x7e983360){
#line 126
  unsigned char result;
#line 126

#line 126
  result = TlvP$TlvMultiple$list(arg_0x7e983970, arg_0x7e983360);
#line 126

#line 126
  return result;
#line 126
}
#line 126
# 161 "../../../tos/lib/data/graph/SourceShortestPathP.nc"
static inline  bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildingTree(void)
#line 161
{
  return /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree;
}

# 89 "../../../tos/lib/data/graph/SourceShortestPath.nc"
inline static  bool SimpleLinkCacheP$SourceShortestPath$buildingTree(void){
#line 89
  unsigned char result;
#line 89

#line 89
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildingTree();
#line 89

#line 89
  return result;
#line 89
}
#line 89
# 81 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$BitVector$set(uint16_t bitnum)
{
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$m_bits[/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$getIndex(bitnum)] |= /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$getMask(bitnum);
}

# 52 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   void SimpleLinkCacheP$Initial$set(uint16_t arg_0x7e6e5350){
#line 52
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$BitVector$set(arg_0x7e6e5350);
#line 52
}
#line 52
# 91 "../../../tos/lib/netarch/tlv/TlvSinglePacket.nc"
inline static  error_t /*DsrP.DsrControlP*/DsrControlP$0$RouteRequest$add(message_t *arg_0x7ea017c0, uint8_t arg_0x7ea01948){
#line 91
  unsigned char result;
#line 91

#line 91
  result = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSinglePacket$add(DSR_ROUTE_REQUEST_TYPE, arg_0x7ea017c0, arg_0x7ea01948);
#line 91

#line 91
  return result;
#line 91
}
#line 91
# 60 "/opt/tinyos-2.x/tos/interfaces/PacketAcknowledgements.nc"
inline static   error_t /*DsrP.DsrControlP*/DsrControlP$0$Acks$noAck(message_t *arg_0x7ea35720){
#line 60
  unsigned char result;
#line 60

#line 60
  result = CC2420PacketC$Acks$noAck(arg_0x7ea35720);
#line 60

#line 60
  return result;
#line 60
}
#line 60
# 337 "../../../tos/lib/netarch/tlv/TlvP.nc"
static inline  error_t TlvP$TlvMultiple$remove(uint8_t type, void *block, tlv_key_t key, uint8_t trailLen)
#line 337
{
  return TlvP$TlvMultiple$setLength(type, block, key, 0, trailLen, 0);
}

#line 200
static inline  error_t TlvP$TlvSingle$remove(uint8_t type, void *block, uint8_t trailLen)
#line 200
{
  return TlvP$TlvMultiple$remove(type, block, TlvP$TlvList$next(type, block, TlvP$TLV_FIRST_KEY), 
  trailLen);
}

# 106 "../../../tos/lib/netarch/tlv/TlvSingle.nc"
inline static  error_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSingle$remove(uint8_t arg_0x7e9945d0, void *arg_0x7e995e50, uint8_t arg_0x7e994010){
#line 106
  unsigned char result;
#line 106

#line 106
  result = TlvP$TlvSingle$remove(arg_0x7e9945d0, arg_0x7e995e50, arg_0x7e994010);
#line 106

#line 106
  return result;
#line 106
}
#line 106
# 57 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t SimpleLinkCacheP$AMPacket$address(void){
#line 57
  unsigned int result;
#line 57

#line 57
  result = CC2420ActiveMessageP$AMPacket$address();
#line 57

#line 57
  return result;
#line 57
}
#line 57
# 105 "../../../tos/lib/data/graph/Graph.nc"
inline static  graph_edge_id_t SimpleLinkCacheP$Graph$insert(graph_vertex_id_t arg_0x7e5e4178, graph_vertex_id_t arg_0x7e5e4310){
#line 105
  unsigned char result;
#line 105

#line 105
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$insert(arg_0x7e5e4178, arg_0x7e5e4310);
#line 105

#line 105
  return result;
#line 105
}
#line 105
# 72 "../../../tos/lib/netarch/dsr/SimpleLinkCacheP.nc"
static inline  void SimpleLinkCacheP$RouteCache$addPath(route_cache_node_id_t nodes[], route_cache_link_id_t numLinks, 
bool reverse)
#line 73
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

# 49 "../../../tos/lib/netarch/dsr/RouteCache.nc"
inline static  void /*DsrP.DsrControlP*/DsrControlP$0$RouteCache$addPath(route_cache_node_id_t arg_0x7e704338[], route_cache_link_id_t arg_0x7e7044d8, bool arg_0x7e704660){
#line 49
  SimpleLinkCacheP$RouteCache$addPath(arg_0x7e704338, arg_0x7e7044d8, arg_0x7e704660);
#line 49
}
#line 49
# 233 "../../../tos/lib/data/graph/GraphSparseP.nc"
static inline  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edge(graph_vertex_id_t s, graph_vertex_id_t d)
#line 233
{
  graph_edge_id_t curEdge;

#line 235
  for (curEdge = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[s]; curEdge != 50; curEdge = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[curEdge].next) {

      if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[curEdge].dest == d) {

          return curEdge;
        }
    }
  return 50;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$get(uint16_t arg_0x7e6e6df8){
#line 46
  unsigned char result;
#line 46

#line 46
  result = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$BitVector$get(arg_0x7e6e6df8);
#line 46

#line 46
  return result;
#line 46
}
#line 46
# 157 "../../../tos/lib/data/alloc/IndexedAllocBitsP.nc"
static inline void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$findFree(void)
#line 157
{
  if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$size == 50) {
    return;
    }
#line 160
  while (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$get(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free)) {
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free++;
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free %= 50;
    }
}

# 81 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$BitVector$set(uint16_t bitnum)
{
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$m_bits[/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$getIndex(bitnum)] |= /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$getMask(bitnum);
}

# 52 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$set(uint16_t arg_0x7e6e5350){
#line 52
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$BitVector$set(arg_0x7e6e5350);
#line 52
}
#line 52
# 112 "../../../tos/lib/data/alloc/IndexedAllocBitsP.nc"
static inline  indexed_alloc_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$IndexedAlloc$alloc(void)
#line 112
{
  indexed_alloc_id_t m;

#line 114
  if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$size == 50) {
    return 50;
    }
#line 116
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$set(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free);
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$size++;
  m = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$findFree();
  return m;
}

# 79 "../../../tos/lib/data/alloc/IndexedAlloc.nc"
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
# 150 "../../../tos/lib/netarch/dsr/SimpleLinkCacheP.nc"
static inline  void SimpleLinkCacheP$Graph$inserted(graph_edge_id_t m)
#line 150
{
}

# 296 "../../../tos/lib/data/graph/SourceShortestPathP.nc"
static inline  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$inserted(graph_edge_id_t m)
#line 296
{
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded = TRUE;
}

# 143 "../../../tos/lib/data/graph/Graph.nc"
inline static  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$inserted(graph_edge_id_t arg_0x7e5e1640){
#line 143
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Graph$inserted(arg_0x7e5e1640);
#line 143
  SimpleLinkCacheP$Graph$inserted(arg_0x7e5e1640);
#line 143
}
#line 143
# 93 "../../../tos/lib/data/cache/LruDataCacheP.nc"
static inline void /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$printCache(void)
#line 93
{
}

#line 119
static inline void /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$remove(uint8_t i)
#line 119
{
  uint8_t j;

#line 121
  if (i >= /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count) {
    return;
    }
#line 123
  if (i == 0) {

      /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first = (/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first + 1) % 8;
    }
  else 
#line 126
    {

      for (j = i; j < /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count; j++) 
        memcpy(&/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$cache[(j + /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first) % 8], 
        &/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$cache[(j + /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first + 1) % 8], 
        sizeof(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t ));
    }
  /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count--;
}

# 786 "../../../tos/lib/netarch/dsr/DsrControlP.nc"
static inline  void /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestInCache$evicted(dsr_route_request_in_t *item)
#line 786
{
}

# 57 "../../../tos/lib/data/cache/DataCache.nc"
inline static  void /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$DataCache$evicted(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$DataCache$item_t *arg_0x7e856cc0){
#line 57
  /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestInCache$evicted(arg_0x7e856cc0);
#line 57
}
#line 57
# 798 "../../../tos/lib/netarch/dsr/DsrControlP.nc"
static inline  bool /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestInEqual$test(dsr_route_request_in_t *a, dsr_route_request_in_t *b)
#line 798
{
  return a->node == b->node;
}

# 48 "../../../tos/interfaces/Equal.nc"
inline static  bool /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$Equal$test(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$Equal$equal_t arg_0x7e868d30, /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$Equal$equal_t arg_0x7e868eb8){
#line 48
  unsigned char result;
#line 48

#line 48
  result = /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestInEqual$test(arg_0x7e868d30, arg_0x7e868eb8);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 107 "../../../tos/lib/data/cache/LruDataCacheP.nc"
static inline uint8_t /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$lookup(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t *item)
#line 107
{
  uint8_t i;
  /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t *cachedItem;

#line 110
  for (i = 0; i < /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count; i++) {
      cachedItem = &/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$cache[(i + /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first) % 8];
      if (/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$Equal$test(cachedItem, item)) {
        break;
        }
    }
#line 115
  return i;
}

#line 168
static inline  /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t */*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$DataCache$insert(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t *item)
#line 168
{
  uint8_t i = /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$lookup(item);

#line 170
  if (i != /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count) {
    memcpy(item, &/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$cache[(i + /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first) % 8], sizeof(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t ));
    }
  else {
#line 172
    if (/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count == 8) {
      /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$DataCache$evicted(&/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$cache[/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first]);
      }
    }
#line 174
  if (/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count == 8 || i != /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count) {





      /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$remove(i % /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count);
    }

  memcpy(&/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$cache[(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first + /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count) % 8], item, sizeof(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$data_cache_item_t ));
  item = &/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$cache[(/*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first + /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count++) % 8];
  /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$printCache();
  return item;
}

# 47 "../../../tos/lib/data/cache/DataCache.nc"
inline static  /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestInCache$item_t */*DsrP.DsrControlP*/DsrControlP$0$RouteRequestInCache$insert(/*DsrP.DsrControlP*/DsrControlP$0$RouteRequestInCache$item_t *arg_0x7e8566e8){
#line 47
  struct __nesc_unnamed4313 *result;
#line 47

#line 47
  result = /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$DataCache$insert(arg_0x7e8566e8);
#line 47

#line 47
  return result;
#line 47
}
#line 47
# 66 "../../../tos/lib/netarch/tlv/TlvSinglePacket.nc"
inline static  error_t /*DsrP.DsrControlP*/DsrControlP$0$RouteRequest$setLength(message_t *arg_0x7ea02510, uint8_t arg_0x7ea02698){
#line 66
  unsigned char result;
#line 66

#line 66
  result = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSinglePacket$setLength(DSR_ROUTE_REQUEST_TYPE, arg_0x7ea02510, arg_0x7ea02698);
#line 66

#line 66
  return result;
#line 66
}
#line 66
# 125 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  bool /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$isForMe(message_t *arg_0x7eb33670){
#line 125
  unsigned char result;
#line 125

#line 125
  result = CC2420ActiveMessageP$AMPacket$isForMe(arg_0x7eb33670);
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 48 "../../../tos/interfaces/IndexedIterator.nc"
inline static  /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketWaitList$iterator_item_t /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketWaitList$next(/*DsrP.DsrControlP*/DsrControlP$0$SinglePacketWaitList$iterator_item_t arg_0x7ea441d8){
#line 48
  unsigned char result;
#line 48

#line 48
  result = PacketEngineP$PacketWaitList$next(4, arg_0x7ea441d8);
#line 48

#line 48
  return result;
#line 48
}
#line 48








inline static  iterator_end_t /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketWaitList$end(/*DsrP.DsrControlP*/DsrControlP$0$SinglePacketWaitList$iterator_item_t arg_0x7ea448a8){
#line 56
  unsigned char result;
#line 56

#line 56
  result = PacketEngineP$PacketWaitList$end(4, arg_0x7ea448a8);
#line 56

#line 56
  return result;
#line 56
}
#line 56
# 171 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
inline static  packet_id_t /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$waitList(void){
#line 171
  unsigned char result;
#line 171

#line 171
  result = PacketEngineP$PacketEngine$waitList(4);
#line 171

#line 171
  return result;
#line 171
}
#line 171
# 1170 "../../../tos/lib/netarch/dsr/DsrControlP.nc"
static inline packet_id_t /*DsrP.DsrControlP*/DsrControlP$0$findSinglePktTo(am_addr_t dest)
#line 1170
{
  packet_id_t pid;

#line 1172
  for (pid = /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$waitList(); !/*DsrP.DsrControlP*/DsrControlP$0$SinglePacketWaitList$end(pid); 
  pid = /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketWaitList$next(pid)) {
      if (/*DsrP.DsrControlP*/DsrControlP$0$SinglePacket$destination(/*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$packet(pid)) == dest) {
        return pid;
        }
    }
#line 1177
  return pid;
}

# 158 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
inline static  error_t /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$upperSendDone(packet_id_t arg_0x7ea60870, error_t arg_0x7ea609f8){
#line 158
  unsigned char result;
#line 158

#line 158
  result = PacketEngineP$PacketEngine$upperSendDone(4, arg_0x7ea60870, arg_0x7ea609f8);
#line 158

#line 158
  return result;
#line 158
}
#line 158
#line 146
inline static  error_t /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$drop(packet_id_t arg_0x7ea60088){
#line 146
  unsigned char result;
#line 146

#line 146
  result = PacketEngineP$PacketEngine$drop(4, arg_0x7ea60088);
#line 146

#line 146
  return result;
#line 146
}
#line 146
# 100 "../../../tos/lib/netarch/tlv/TlvSinglePacket.nc"
inline static  error_t /*DsrP.DsrControlP*/DsrControlP$0$SourceRoute$remove(message_t *arg_0x7ea00288){
#line 100
  unsigned char result;
#line 100

#line 100
  result = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSinglePacket$remove(DSR_SOURCE_ROUTE_TYPE, arg_0x7ea00288);
#line 100

#line 100
  return result;
#line 100
}
#line 100
# 758 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline  error_t PacketEngineP$PacketEngine$sendIntercept(am_id_t lowerId, packet_id_t pid)
#line 758
{
  if ((pid >= PacketEngineP$BUFFER_SIZE || PacketEngineP$msgBuffer[pid].state != PacketEngineP$PKT_WAIT) || 
  PacketEngineP$lid(PacketEngineP$msgBuffer[pid].msg) != lowerId) {
    return EINVAL;
    }
#line 762
  ;
  PacketEngineP$markPacket(pid, PacketEngineP$PKT_SEND_INTERCEPT);
  return SUCCESS;
}

# 124 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
inline static  error_t /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$sendIntercept(packet_id_t arg_0x7ea61010){
#line 124
  unsigned char result;
#line 124

#line 124
  result = PacketEngineP$PacketEngine$sendIntercept(48, arg_0x7ea61010);
#line 124

#line 124
  return result;
#line 124
}
#line 124
#line 135
inline static  error_t /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$receive(packet_id_t arg_0x7ea61860){
#line 135
  unsigned char result;
#line 135

#line 135
  result = PacketEngineP$PacketEngine$receive(48, arg_0x7ea61860);
#line 135

#line 135
  return result;
#line 135
}
#line 135
# 286 "../../../tos/lib/netarch/single/SinglePacketP.nc"
static inline   message_t *SinglePacketP$Snoop$default$receive(am_id_t upperId, message_t *msg, void *payload, uint8_t len)
#line 286
{
  ;
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *SinglePacketP$Snoop$receive(am_id_t arg_0x7d9f4a90, message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
    result = SinglePacketP$Snoop$default$receive(arg_0x7d9f4a90, arg_0x7eb845c8, arg_0x7eb84768, arg_0x7eb848f0);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 98 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led2Off(void)
#line 98
{
  LedsP$Led2$set();
  ;
#line 100
  ;
}

# 83 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void UnicastCountToLedsC$Leds$led2Off(void){
#line 83
  LedsP$Leds$led2Off();
#line 83
}
#line 83
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)59U &= ~(1 << 0);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led2$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP$0$IO$clr();
#line 30
}
#line 30
# 93 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led2On(void)
#line 93
{
  LedsP$Led2$clr();
  ;
#line 95
  ;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void UnicastCountToLedsC$Leds$led2On(void){
#line 78
  LedsP$Leds$led2On();
#line 78
}
#line 78
# 83 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led1Off(void)
#line 83
{
  LedsP$Led1$set();
  ;
#line 85
  ;
}

# 66 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void UnicastCountToLedsC$Leds$led1Off(void){
#line 66
  LedsP$Leds$led1Off();
#line 66
}
#line 66
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)59U &= ~(1 << 1);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led1$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP$1$IO$clr();
#line 30
}
#line 30
# 78 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led1On(void)
#line 78
{
  LedsP$Led1$clr();
  ;
#line 80
  ;
}

# 61 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void UnicastCountToLedsC$Leds$led1On(void){
#line 61
  LedsP$Leds$led1On();
#line 61
}
#line 61
# 68 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led0Off(void)
#line 68
{
  LedsP$Led0$set();
  ;
#line 70
  ;
}

# 50 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void UnicastCountToLedsC$Leds$led0Off(void){
#line 50
  LedsP$Leds$led0Off();
#line 50
}
#line 50
# 47 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr(void)
#line 47
{
#line 47
  * (volatile uint8_t *)59U &= ~(1 << 2);
}

# 30 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void LedsP$Led0$clr(void){
#line 30
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP$2$IO$clr();
#line 30
}
#line 30
# 63 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline   void LedsP$Leds$led0On(void)
#line 63
{
  LedsP$Led0$clr();
  ;
#line 65
  ;
}

# 45 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static   void UnicastCountToLedsC$Leds$led0On(void){
#line 45
  LedsP$Leds$led0On();
#line 45
}
#line 45
# 139 "UnicastCountToLedsC.nc"
static inline  message_t *UnicastCountToLedsC$Receive$receive(message_t *bufPtr, 
void *payload, uint8_t len)
#line 140
{
  ;
  if (len != sizeof(unicast_count_msg_t )) {
    return bufPtr;
    }
  else 
#line 144
    {

      unicast_count_msg_t *rcm = (unicast_count_msg_t *)payload;

      if (__nesc_ntoh_uint16((unsigned char *)&rcm->counter) & 0x1) {
        UnicastCountToLedsC$Leds$led0On();
        }
      else {
#line 151
        UnicastCountToLedsC$Leds$led0Off();
        }
      if (__nesc_ntoh_uint16((unsigned char *)&rcm->counter) & 0x2) {
        UnicastCountToLedsC$Leds$led1On();
        }
      else {
#line 156
        UnicastCountToLedsC$Leds$led1Off();
        }
      if (__nesc_ntoh_uint16((unsigned char *)&rcm->counter) & 0x4) {
        UnicastCountToLedsC$Leds$led2On();
        }
      else {
#line 161
        UnicastCountToLedsC$Leds$led2Off();
        }
      return bufPtr;
    }
}

# 270 "../../../tos/lib/netarch/single/SinglePacketP.nc"
static inline   message_t *SinglePacketP$Receive$default$receive(am_id_t upperId, message_t *msg, void *payload, uint8_t len)
#line 270
{
  ;
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *SinglePacketP$Receive$receive(am_id_t arg_0x7d9f44b8, message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x7d9f44b8) {
#line 67
    case 6:
#line 67
      result = UnicastCountToLedsC$Receive$receive(arg_0x7eb845c8, arg_0x7eb84768, arg_0x7eb848f0);
#line 67
      break;
#line 67
    default:
#line 67
      result = SinglePacketP$Receive$default$receive(arg_0x7d9f44b8, arg_0x7eb845c8, arg_0x7eb84768, arg_0x7eb848f0);
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
# 329 "../../../tos/lib/netarch/single/SinglePacketP.nc"
static inline  message_t *SinglePacketP$SubReceive$receive(am_id_t upperId, message_t *msg, void *payload, uint8_t len)
#line 329
{
  len = SinglePacketP$Packet$payloadLength(msg);
  if (SinglePacketP$SinglePacket$isForMe(msg)) {
      ;

      return SinglePacketP$Receive$receive(upperId, msg, SinglePacketP$Packet$getPayload(msg, len), len);
    }
  else 
#line 335
    {
      ;

      return SinglePacketP$Snoop$receive(upperId, msg, SinglePacketP$Packet$getPayload(msg, len), len);
    }
}

# 436 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   message_t *PacketEngineP$Receive$default$receive(am_id_t upperId, message_t *msg, void *payload, uint8_t len)
#line 436
{
  ;
  return msg;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static  message_t *PacketEngineP$Receive$receive(am_id_t arg_0x7e884ad0, message_t *arg_0x7eb845c8, void *arg_0x7eb84768, uint8_t arg_0x7eb848f0){
#line 67
  nx_struct message_t *result;
#line 67

#line 67
  switch (arg_0x7e884ad0) {
#line 67
    case 6:
#line 67
      result = SinglePacketP$SubReceive$receive(6, arg_0x7eb845c8, arg_0x7eb84768, arg_0x7eb848f0);
#line 67
      break;
#line 67
    default:
#line 67
      result = PacketEngineP$Receive$default$receive(arg_0x7e884ad0, arg_0x7eb845c8, arg_0x7eb84768, arg_0x7eb848f0);
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
# 1167 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline void PacketEngineP$moveActionIndex(void)
#line 1167
{
  PacketEngineP$moveIndex(&PacketEngineP$nextActionPkt, PacketEngineP$PKT_SEND | PacketEngineP$PKT_SEND_INTERCEPT);
}

#line 588
static inline  uint8_t PacketEngineP$Packet$maxPayloadLength(void)
#line 588
{


  return 36;
}

# 67 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  uint8_t PacketEngineP$SubSendPacket$payloadLength(message_t *arg_0x7eb45938){
#line 67
  unsigned char result;
#line 67

#line 67
  result = CC2420ActiveMessageP$Packet$payloadLength(arg_0x7eb45938);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  am_addr_t PacketEngineP$AMPacket$destination(message_t *arg_0x7eb35888){
#line 67
  unsigned int result;
#line 67

#line 67
  result = CC2420ActiveMessageP$AMPacket$destination(arg_0x7eb35888);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 64 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static  error_t /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$Send$send(message_t *arg_0x7e3c2340, uint8_t arg_0x7e3c24c8){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(0U, arg_0x7e3c2340, arg_0x7e3c24c8);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 151 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setType(message_t *arg_0x7eb31350, am_id_t arg_0x7eb314d8){
#line 151
  CC2420ActiveMessageP$AMPacket$setType(arg_0x7eb31350, arg_0x7eb314d8);
#line 151
}
#line 151
#line 92
inline static  void /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMPacket$setDestination(message_t *arg_0x7eb34490, am_addr_t arg_0x7eb34620){
#line 92
  CC2420ActiveMessageP$AMPacket$setDestination(arg_0x7eb34490, arg_0x7eb34620);
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
inline static  error_t /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$Send$send(message_t *arg_0x7e3c2340, uint8_t arg_0x7e3c24c8){
#line 64
  unsigned char result;
#line 64

#line 64
  result = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(1U, arg_0x7e3c2340, arg_0x7e3c24c8);
#line 64

#line 64
  return result;
#line 64
}
#line 64
# 151 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  void /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setType(message_t *arg_0x7eb31350, am_id_t arg_0x7eb314d8){
#line 151
  CC2420ActiveMessageP$AMPacket$setType(arg_0x7eb31350, arg_0x7eb314d8);
#line 151
}
#line 151
#line 92
inline static  void /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMPacket$setDestination(message_t *arg_0x7eb34490, am_addr_t arg_0x7eb34620){
#line 92
  CC2420ActiveMessageP$AMPacket$setDestination(arg_0x7eb34490, arg_0x7eb34620);
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

# 491 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   error_t PacketEngineP$SubSend$default$send(am_id_t lowerId, am_addr_t addr, message_t *msg, uint8_t len)
#line 491
{
  return FAIL;
}

# 69 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static  error_t PacketEngineP$SubSend$send(am_id_t arg_0x7e8714e0, am_addr_t arg_0x7eb81d30, message_t *arg_0x7eb81ee0, uint8_t arg_0x7eb80088){
#line 69
  unsigned char result;
#line 69

#line 69
  switch (arg_0x7e8714e0) {
#line 69
    case 4:
#line 69
      result = /*SingleProtocolC.TransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$1$AMSend$send(arg_0x7eb81d30, arg_0x7eb81ee0, arg_0x7eb80088);
#line 69
      break;
#line 69
    case 48:
#line 69
      result = /*DsrC.DsrTransceiverC.AMSenderC.AMQueueEntryP*/AMQueueEntryP$0$AMSend$send(arg_0x7eb81d30, arg_0x7eb81ee0, arg_0x7eb80088);
#line 69
      break;
#line 69
    default:
#line 69
      result = PacketEngineP$SubSend$default$send(arg_0x7e8714e0, arg_0x7eb81d30, arg_0x7eb81ee0, arg_0x7eb80088);
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
inline static   error_t PacketEngineP$SendState$requestState(uint8_t arg_0x7e844ad0){
#line 45
  unsigned char result;
#line 45

#line 45
  result = StateImplP$State$requestState(4U, arg_0x7e844ad0);
#line 45

#line 45
  return result;
#line 45
}
#line 45
# 951 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   bool PacketEngineP$Intercept$default$forward(am_id_t upperId, message_t *msg, void *payload, uint16_t len)
#line 951
{
  return TRUE;
}

# 31 "/opt/tinyos-2.x/tos/interfaces/Intercept.nc"
inline static  bool PacketEngineP$Intercept$forward(am_id_t arg_0x7e875ee8, message_t *arg_0x7e875528, void *arg_0x7e8756c8, uint16_t arg_0x7e875858){
#line 31
  unsigned char result;
#line 31

#line 31
    result = PacketEngineP$Intercept$default$forward(arg_0x7e875ee8, arg_0x7e875528, arg_0x7e8756c8, arg_0x7e875858);
#line 31

#line 31
  return result;
#line 31
}
#line 31
# 1005 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline  void PacketEngineP$msgAction$runTask(void)
#line 1005
{
  if (!PacketEngineP$running) {
    return;
    }
#line 1008
  if (PacketEngineP$nextActionPkt == PacketEngineP$BUFFER_SIZE) {
      ;
      return;
    }
  if (PacketEngineP$msgBuffer[PacketEngineP$nextActionPkt].state & (PacketEngineP$PKT_SEND | PacketEngineP$PKT_SEND_INTERCEPT)) {
      message_t *msg = PacketEngineP$msgBuffer[PacketEngineP$nextActionPkt].msg;
      uint8_t len = PacketEngineP$Packet$payloadLength(msg);
      void *payload = PacketEngineP$Packet$getPayload(msg, len);

#line 1016
      ;

      switch (PacketEngineP$msgBuffer[PacketEngineP$nextActionPkt].state) {
          case PacketEngineP$PKT_SEND_INTERCEPT: {
              if (!PacketEngineP$Intercept$forward(PacketEngineP$uid(msg), msg, payload, len)) {

                  ;

                  break;
                }
            }
          case PacketEngineP$PKT_SEND: {
              if (!PacketEngineP$radioOn) {
                  ;
                  return;
                }
              if (PacketEngineP$SendState$requestState(PacketEngineP$S_SENDING) == FAIL) {

                  ;
                  return;
                }
              switch (PacketEngineP$SubSend$send(PacketEngineP$lid(msg), PacketEngineP$AMPacket$destination(msg), msg, 
              PacketEngineP$SubSendPacket$payloadLength(msg))) {
                  case SUCCESS: {
                      ;
                      return;
                    }
#line 1042
                  case FAIL: {

                      ;
                      PacketEngineP$SendState$toIdle();
                      break;
                    }
#line 1047
                  case EINVAL: {

                      ;
                      PacketEngineP$SendState$toIdle();
                      break;
                    }
#line 1052
                  case EBUSY: {

                      ;
                      PacketEngineP$SendState$toIdle();
                      return;
                    }
#line 1057
                  case EOFF: {

                      ;
                      PacketEngineP$radioOn = FALSE;
                      PacketEngineP$SendState$toIdle();
                      return;
                    }
#line 1063
                  case ESIZE: {

                      ;
                      PacketEngineP$SendState$toIdle();
                      PacketEngineP$Packet$setPayloadLength(msg, PacketEngineP$Packet$maxPayloadLength());
                      PacketEngineP$msgAction$postTask();
                      return;
                    }
                }
#line 1071
              break;
            }
        }
    }
  else {
#line 1074
    ;
    }

  PacketEngineP$removePacket(PacketEngineP$nextActionPkt);
  PacketEngineP$moveActionIndex();
  if (PacketEngineP$nextActionPkt < PacketEngineP$BUFFER_SIZE) {
    PacketEngineP$msgAction$postTask();
    }
  else {
#line 1082
    ;
    }
}

# 83 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static  void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(message_t *arg_0x7eb44010, uint8_t arg_0x7eb44198){
#line 83
  CC2420ActiveMessageP$Packet$setPayloadLength(arg_0x7eb44010, arg_0x7eb44198);
#line 83
}
#line 83
# 1151 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline void PacketEngineP$moveAddedIndex(void)
#line 1151
{
  PacketEngineP$moveIndex(&PacketEngineP$nextAddedPkt, PacketEngineP$PKT_ADDED);
}

# 220 "../../../tos/lib/netarch/dsr/DsrControlP.nc"
static inline  void /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$snoopAdded(packet_id_t pid, message_t *msg)
#line 220
{
  ;
  /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$receiveAdded(pid, msg);
}

#line 526
static inline  void /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$snoopAdded(packet_id_t pid, message_t *msg)
#line 526
{
}

#line 470
static inline  void /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$snoopAdded(packet_id_t pid, message_t *msg)
#line 470
{
  ;
  /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$receiveAdded(pid, msg);
}

# 694 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   void PacketEngineP$PacketEngine$default$snoopAdded(am_id_t lowerId, packet_id_t pid, message_t *msg)
#line 694
{
  ;
  PacketEngineP$PacketEngine$drop(lowerId, pid);
}

# 79 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
inline static  void PacketEngineP$PacketEngine$snoopAdded(am_id_t arg_0x7e877b78, packet_id_t arg_0x7ea659b0, message_t *arg_0x7ea65b60){
#line 79
  switch (arg_0x7e877b78) {
#line 79
    case 4:
#line 79
      /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$snoopAdded(arg_0x7ea659b0, arg_0x7ea65b60);
#line 79
      /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$snoopAdded(arg_0x7ea659b0, arg_0x7ea65b60);
#line 79
      break;
#line 79
    case 48:
#line 79
      /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$snoopAdded(arg_0x7ea659b0, arg_0x7ea65b60);
#line 79
      /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$snoopAdded(arg_0x7ea659b0, arg_0x7ea65b60);
#line 79
      break;
#line 79
    default:
#line 79
      PacketEngineP$PacketEngine$default$snoopAdded(arg_0x7e877b78, arg_0x7ea659b0, arg_0x7ea65b60);
#line 79
      break;
#line 79
    }
#line 79
}
#line 79
# 515 "../../../tos/lib/netarch/dsr/DsrControlP.nc"
static inline  void /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$receiveAdded(packet_id_t pid, message_t *msg)
#line 515
{
}

# 683 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   void PacketEngineP$PacketEngine$default$receiveAdded(am_id_t lowerId, packet_id_t pid, message_t *msg)
#line 683
{
  ;
  PacketEngineP$PacketEngine$drop(lowerId, pid);
}

# 68 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
inline static  void PacketEngineP$PacketEngine$receiveAdded(am_id_t arg_0x7e877b78, packet_id_t arg_0x7ea65010, message_t *arg_0x7ea651c0){
#line 68
  switch (arg_0x7e877b78) {
#line 68
    case 4:
#line 68
      /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$receiveAdded(arg_0x7ea65010, arg_0x7ea651c0);
#line 68
      /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$receiveAdded(arg_0x7ea65010, arg_0x7ea651c0);
#line 68
      break;
#line 68
    case 48:
#line 68
      /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$receiveAdded(arg_0x7ea65010, arg_0x7ea651c0);
#line 68
      /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$receiveAdded(arg_0x7ea65010, arg_0x7ea651c0);
#line 68
      break;
#line 68
    default:
#line 68
      PacketEngineP$PacketEngine$default$receiveAdded(arg_0x7e877b78, arg_0x7ea65010, arg_0x7ea651c0);
#line 68
      break;
#line 68
    }
#line 68
}
#line 68
# 125 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
inline static  bool PacketEngineP$AMPacket$isForMe(message_t *arg_0x7eb33670){
#line 125
  unsigned char result;
#line 125

#line 125
  result = CC2420ActiveMessageP$AMPacket$isForMe(arg_0x7eb33670);
#line 125

#line 125
  return result;
#line 125
}
#line 125
# 70 "../../../tos/lib/netarch/dsr/RouteCache.nc"
inline static  void /*DsrP.DsrControlP*/DsrControlP$0$RouteCache$trackRoute(route_cache_node_id_t arg_0x7e7029e8, route_cache_node_id_t arg_0x7e702b80){
#line 70
  SimpleLinkCacheP$RouteCache$trackRoute(arg_0x7e7029e8, arg_0x7e702b80);
#line 70
}
#line 70
# 98 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
inline static  error_t /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$send(packet_id_t arg_0x7ea64b60){
#line 98
  unsigned char result;
#line 98

#line 98
  result = PacketEngineP$PacketEngine$send(4, arg_0x7ea64b60);
#line 98

#line 98
  return result;
#line 98
}
#line 98
# 179 "../../../tos/lib/netarch/dsr/DsrControlP.nc"
static inline  void /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$sendAdded(packet_id_t pid, message_t *msg)
#line 179
{
  if (/*DsrP.DsrControlP*/DsrControlP$0$SinglePacket$destination(msg) == AM_BROADCAST_ADDR) {
      ;
      /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$setDestination(msg, AM_BROADCAST_ADDR);
      /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$send(pid);
    }
  else 
#line 184
    {
      ;

      ;

      /*DsrP.DsrControlP*/DsrControlP$0$RouteCache$trackRoute(/*DsrP.DsrControlP*/DsrControlP$0$AMPacket$address(), /*DsrP.DsrControlP*/DsrControlP$0$SinglePacket$destination(msg));
    }
}

#line 504
static inline  void /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$sendAdded(packet_id_t pid, message_t *msg)
#line 504
{
}

# 98 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
inline static  error_t /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$send(packet_id_t arg_0x7ea64b60){
#line 98
  unsigned char result;
#line 98

#line 98
  result = PacketEngineP$PacketEngine$send(48, arg_0x7ea64b60);
#line 98

#line 98
  return result;
#line 98
}
#line 98
# 83 "../../../tos/lib/netarch/multihop/PacketEngine.h"
static inline packet_am_id_t pamidCombine(packet_am_id_t a, packet_am_id_t b)
#line 83
{
  if (a == AM_INVALID_TYPE) {
    return b;
    }
#line 86
  return a;
}

# 179 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
inline static  packet_am_id_t /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$upperType(packet_id_t arg_0x7ea569a8){
#line 179
  unsigned char result;
#line 179

#line 179
  result = PacketEngineP$PacketEngine$upperType(4, arg_0x7ea569a8);
#line 179
  result = pamidCombine(result, PacketEngineP$PacketEngine$upperType(48, arg_0x7ea569a8));
#line 179

#line 179
  return result;
#line 179
}
#line 179
# 852 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline  void PacketEngineP$PacketEngine$setUpperType(am_id_t lowerId, packet_id_t pid, am_id_t newUid)
#line 852
{
  if (PacketEngineP$lid(PacketEngineP$msgBuffer[pid].msg) != lowerId) {
    return;
    }
#line 855
  PacketEngineP$setUid(PacketEngineP$msgBuffer[pid].msg, newUid);
}

# 187 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
inline static  void /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$setUpperType(packet_id_t arg_0x7ea55100, am_id_t arg_0x7ea55288){
#line 187
  PacketEngineP$PacketEngine$setUpperType(48, arg_0x7ea55100, arg_0x7ea55288);
#line 187
}
#line 187
# 254 "../../../tos/lib/netarch/dsr/DsrControlP.nc"
static inline  void /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$sendAdded(packet_id_t pid, message_t *msg)
#line 254
{
  am_addr_t singleDest = /*DsrP.DsrControlP*/DsrControlP$0$SinglePacket$destination(msg);

#line 256
  if (/*DsrP.DsrControlP*/DsrControlP$0$RouteRequest$length(msg) != 0) {

      packet_id_t rreqPid = /*DsrP.DsrControlP*/DsrControlP$0$findSingleDsrPktTo(singleDest);

#line 259
      if (!/*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketWaitList$end(rreqPid)) {
          /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$setUpperType(pid, /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$upperType(rreqPid));
          ;
        }
      else {
#line 263
        ;
        }
    }
  else {
#line 266
    if (/*DsrP.DsrControlP*/DsrControlP$0$SourceRoute$length(msg) == 0) {
        ;
        /*DsrP.DsrControlP*/DsrControlP$0$RouteCache$trackRoute(/*DsrP.DsrControlP*/DsrControlP$0$AMPacket$address(), singleDest);
        return;
      }
    }
#line 271
  ;
  /*DsrP.DsrControlP*/DsrControlP$0$retriesLeft[pid] = DSR_MAX_RETRIES;
  /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$send(pid);
}

# 672 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline   void PacketEngineP$PacketEngine$default$sendAdded(am_id_t lowerId, packet_id_t pid, message_t *msg)
#line 672
{
  ;
  PacketEngineP$PacketEngine$drop(lowerId, pid);
}

# 57 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
inline static  void PacketEngineP$PacketEngine$sendAdded(am_id_t arg_0x7e877b78, packet_id_t arg_0x7ea66618, message_t *arg_0x7ea667c8){
#line 57
  switch (arg_0x7e877b78) {
#line 57
    case 4:
#line 57
      /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$sendAdded(arg_0x7ea66618, arg_0x7ea667c8);
#line 57
      /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$sendAdded(arg_0x7ea66618, arg_0x7ea667c8);
#line 57
      break;
#line 57
    case 48:
#line 57
      /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$sendAdded(arg_0x7ea66618, arg_0x7ea667c8);
#line 57
      /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$sendAdded(arg_0x7ea66618, arg_0x7ea667c8);
#line 57
      break;
#line 57
    default:
#line 57
      PacketEngineP$PacketEngine$default$sendAdded(arg_0x7e877b78, arg_0x7ea66618, arg_0x7ea667c8);
#line 57
      break;
#line 57
    }
#line 57
}
#line 57
# 1202 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline void PacketEngineP$printIndices(void)
#line 1202
{
  ;

  ;
  ;
}

#line 960
static inline  void PacketEngineP$msgAdded$runTask(void)
#line 960
{
  if (!PacketEngineP$running) {
    return;
    }
#line 963
  if (PacketEngineP$nextAddedPkt == PacketEngineP$BUFFER_SIZE) {
      ;
      return;
    }
  if (PacketEngineP$msgBuffer[PacketEngineP$nextAddedPkt].state == PacketEngineP$PKT_ADDED) {
      message_t *msg = PacketEngineP$msgBuffer[PacketEngineP$nextAddedPkt].msg;

#line 969
      ;
      PacketEngineP$msgBuffer[PacketEngineP$nextAddedPkt].state = PacketEngineP$PKT_WAIT;
      if (PacketEngineP$nextWaitPkt == PacketEngineP$BUFFER_SIZE) {

          ;
          PacketEngineP$nextWaitPkt = PacketEngineP$nextAddedPkt;
          ;
          PacketEngineP$printIndices();
        }

      if (PacketEngineP$msgBuffer[PacketEngineP$nextAddedPkt].srcLayer == PacketEngineP$PKT_UPPER_LAYER) {
          ;
          PacketEngineP$PacketEngine$sendAdded(PacketEngineP$lid(msg), PacketEngineP$nextAddedPkt, msg);
        }
      else 
#line 982
        {
          if (PacketEngineP$AMPacket$isForMe(msg)) {
              ;
              PacketEngineP$PacketEngine$receiveAdded(PacketEngineP$lid(msg), PacketEngineP$nextAddedPkt, msg);
            }
          else 
#line 986
            {
              ;
              PacketEngineP$PacketEngine$snoopAdded(PacketEngineP$lid(msg), PacketEngineP$nextAddedPkt, msg);
            }
        }
    }
  else {
#line 992
    ;
    }
  PacketEngineP$moveAddedIndex();
  if (PacketEngineP$nextAddedPkt < PacketEngineP$BUFFER_SIZE) {
    PacketEngineP$msgAdded$postTask();
    }
  else {
#line 998
    ;
    }
}

# 81 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$BitVector$set(uint16_t bitnum)
{
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$m_bits[/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$getIndex(bitnum)] |= /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$getMask(bitnum);
}

# 52 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   void SimpleLinkCacheP$Track$set(uint16_t arg_0x7e6e5350){
#line 52
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$BitVector$set(arg_0x7e6e5350);
#line 52
}
#line 52
# 135 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
inline static  error_t /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$receive(packet_id_t arg_0x7ea61860){
#line 135
  unsigned char result;
#line 135

#line 135
  result = PacketEngineP$PacketEngine$receive(4, arg_0x7ea61860);
#line 135

#line 135
  return result;
#line 135
}
#line 135
# 44 "/opt/tinyos-2.x/tos/system/RandomMlcgP.nc"
static inline  error_t RandomMlcgP$Init$init(void)
#line 44
{
  /* atomic removed: atomic calls only */
#line 45
  RandomMlcgP$seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 67 "../../../tos/lib/data/graph/GraphSparseP.nc"
static inline  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Init$init(void)
#line 67
{
  graph_vertex_id_t i;

#line 69
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$vSize = 0;
  for (i = 0; i < 20; i++) 
    /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[i] = 50;
  return SUCCESS;
}

# 66 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$BitVector$clearAll(void)
{
  memset(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$m_bits, 0, sizeof /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$m_bits);
}

#line 60
static inline  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$Init$init(void)
{
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$BitVector$clearAll();
  return SUCCESS;
}

# 88 "../../../tos/lib/data/graph/SourceShortestPathP.nc"
static inline  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Init$init(void)
#line 88
{
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree = FALSE;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc = 20;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded = TRUE;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$initTree();
  return SUCCESS;
}

# 75 "../../../tos/lib/data/queue/PriorityQueueP.nc"
static inline  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Init$init(void)
#line 75
{
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$clearData();
  return SUCCESS;
}

# 82 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static inline   am_group_t ActiveMessageAddressC$ActiveMessageAddress$amGroup(void)
#line 82
{
  am_group_t myGroup;

  /* atomic removed: atomic calls only */
#line 84
  myGroup = ActiveMessageAddressC$group;
  return myGroup;
}

# 55 "/opt/tinyos-2.x/tos/interfaces/ActiveMessageAddress.nc"
inline static   am_group_t CC2420ControlP$ActiveMessageAddress$amGroup(void){
#line 55
  unsigned char result;
#line 55

#line 55
  result = ActiveMessageAddressC$ActiveMessageAddress$amGroup();
#line 55

#line 55
  return result;
#line 55
}
#line 55
#line 50
inline static   am_addr_t CC2420ControlP$ActiveMessageAddress$amAddress(void){
#line 50
  unsigned int result;
#line 50

#line 50
  result = ActiveMessageAddressC$ActiveMessageAddress$amAddress();
#line 50

#line 50
  return result;
#line 50
}
#line 50
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 5;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$VREN$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP$5$IO$makeOutput();
#line 35
}
#line 35
# 52 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput(void)
#line 52
{
#line 52
  * (volatile uint8_t *)58U |= 1 << 6;
}

# 35 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420ControlP$RSTN$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP$6$IO$makeOutput();
#line 35
}
#line 35
inline static   void CC2420ControlP$CSN$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput();
#line 35
}
#line 35
# 116 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline  error_t CC2420ControlP$Init$init(void)
#line 116
{
  CC2420ControlP$CSN$makeOutput();
  CC2420ControlP$RSTN$makeOutput();
  CC2420ControlP$VREN$makeOutput();

  CC2420ControlP$m_short_addr = CC2420ControlP$ActiveMessageAddress$amAddress();
  CC2420ControlP$m_pan = CC2420ControlP$ActiveMessageAddress$amGroup();
  CC2420ControlP$m_tx_power = 31;
  CC2420ControlP$m_channel = 26;




  CC2420ControlP$autoAckEnabled = TRUE;





  CC2420ControlP$hwAutoAckDefault = FALSE;





  CC2420ControlP$addressRecognition = TRUE;


  return SUCCESS;
}

# 81 "/opt/tinyos-2.x/tos/system/StateImplP.nc"
static inline  error_t StateImplP$Init$init(void)
#line 81
{
  int i;

#line 83
  for (i = 0; i < 5U; i++) {
      StateImplP$state[i] = StateImplP$S_IDLE;
    }
  return SUCCESS;
}

# 45 "/opt/tinyos-2.x/tos/system/FcfsResourceQueueC.nc"
static inline  error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init(void)
#line 45
{
  memset(/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$NO_ENTRY, sizeof /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$resQ);
  return SUCCESS;
}

# 22 "/opt/tinyos-2.x/tos/system/NoInitC.nc"
static inline  error_t NoInitC$Init$init(void)
#line 22
{
  return SUCCESS;
}

# 50 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)49U &= ~(1 << 4);
}

# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420TransmitP$SFD$makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$makeInput();
#line 33
}
#line 33


inline static   void CC2420TransmitP$CSN$makeOutput(void){
#line 35
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP$8$IO$makeOutput();
#line 35
}
#line 35
# 50 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput(void)
#line 50
{
#line 50
  * (volatile uint8_t *)49U &= ~(1 << 6);
}

# 33 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   void CC2420TransmitP$CCA$makeInput(void){
#line 33
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$makeInput();
#line 33
}
#line 33
# 138 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline  error_t CC2420TransmitP$Init$init(void)
#line 138
{
  CC2420TransmitP$CCA$makeInput();
  CC2420TransmitP$CSN$makeOutput();
  CC2420TransmitP$SFD$makeInput();
  return SUCCESS;
}

# 112 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline  error_t CC2420ReceiveP$Init$init(void)
#line 112
{
  CC2420ReceiveP$m_p_rx_buf = &CC2420ReceiveP$m_rx_buf;
  return SUCCESS;
}

# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static   uint16_t UniqueSendP$Random$rand16(void){
#line 41
  unsigned int result;
#line 41

#line 41
  result = RandomMlcgP$Random$rand16();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 62 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueSendP.nc"
static inline  error_t UniqueSendP$Init$init(void)
#line 62
{
  UniqueSendP$localSendId = UniqueSendP$Random$rand16();
  return SUCCESS;
}

# 71 "/opt/tinyos-2.x/tos/chips/cc2420/unique/UniqueReceiveP.nc"
static inline  error_t UniqueReceiveP$Init$init(void)
#line 71
{
  int i;

#line 73
  for (i = 0; i < 4; i++) {
      UniqueReceiveP$receivedMessages[i].source = (am_addr_t )0xFFFF;
      UniqueReceiveP$receivedMessages[i].dsn = 0;
    }
  return SUCCESS;
}

# 85 "../../../tos/lib/data/cache/LruDataCacheP.nc"
static inline  error_t /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$Init$init(void)
#line 85
{
  /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$first = 0;
  /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$count = 0;
  return SUCCESS;
}

#line 85
static inline  error_t /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$Init$init(void)
#line 85
{
  /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first = 0;
  /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count = 0;
  return SUCCESS;
}

# 71 "../../../tos/lib/data/timer/DataTimerP.nc"
static inline  error_t /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Init$init(void)
#line 71
{
  /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size = 0;
  return SUCCESS;
}

# 122 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline   void HplAtm128Timer0AsyncP$Compare$start(void)
#line 122
{
#line 122
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 1;
}

# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$start(void){
#line 56
  HplAtm128Timer0AsyncP$Compare$start();
#line 56
}
#line 56
# 76 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline   void HplAtm128Timer0AsyncP$TimerCtrl$setControl(Atm128TimerControl_t x)
#line 76
{
  * (volatile uint8_t *)(0x33 + 0x20) = x.flat;
}

# 37 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$TimerCtrl$setControl(Atm128TimerControl_t arg_0x7e249948){
#line 37
  HplAtm128Timer0AsyncP$TimerCtrl$setControl(arg_0x7e249948);
#line 37
}
#line 37
# 198 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline   void HplAtm128Timer0AsyncP$TimerAsync$setTimer0Asynchronous(void)
#line 198
{
  * (volatile uint8_t *)(0x30 + 0x20) |= 1 << 3;
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

# 199 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static inline  error_t PacketEngineP$Init$init(void)
#line 199
{
  packet_id_t i;

#line 201
  for (i = 0; i < PacketEngineP$BUFFER_SIZE; i++) 
    PacketEngineP$msgBuffer[i].state = PacketEngineP$PKT_FREE;
  PacketEngineP$nextFreePkt = 0;
  PacketEngineP$nextAddedPkt = PacketEngineP$BUFFER_SIZE;
  PacketEngineP$nextWaitPkt = PacketEngineP$BUFFER_SIZE;
  PacketEngineP$nextActionPkt = PacketEngineP$BUFFER_SIZE;
  PacketEngineP$running = FALSE;
  return SUCCESS;
}

# 85 "../../../tos/lib/data/cache/LruDataCacheP.nc"
static inline  error_t /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$Init$init(void)
#line 85
{
  /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$first = 0;
  /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$count = 0;
  return SUCCESS;
}

# 65 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static inline  error_t /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Init$init(void)
#line 65
{
  int i;

#line 67
  for (i = 0; i < 10; i++) {
      /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$queue[i] = &/*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$pool[i];
    }
  /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$free = 10;
  /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$index = 0;
  return SUCCESS;
}

#line 65
static inline  error_t /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$Init$init(void)
#line 65
{
  int i;

#line 67
  for (i = 0; i < 10; i++) {
      /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$queue[i] = &/*PacketEngineC.SendPoolC.PoolP*/PoolP$1$pool[i];
    }
  /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$free = 10;
  /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$index = 0;
  return SUCCESS;
}

# 51 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static  error_t RealMainP$SoftwareInit$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$Init$init();
#line 51
  result = ecombine(result, /*PacketEngineC.ReceivePoolC.PoolP*/PoolP$0$Init$init());
#line 51
  result = ecombine(result, /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$Init$init());
#line 51
  result = ecombine(result, PacketEngineP$Init$init());
#line 51
  result = ecombine(result, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Init$init());
#line 51
  result = ecombine(result, /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Init$init());
#line 51
  result = ecombine(result, /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$Init$init());
#line 51
  result = ecombine(result, /*DsrP.RouteRequestInCacheC.CacheP*/LruDataCacheP$0$Init$init());
#line 51
  result = ecombine(result, UniqueReceiveP$Init$init());
#line 51
  result = ecombine(result, UniqueSendP$Init$init());
#line 51
  result = ecombine(result, CC2420ReceiveP$Init$init());
#line 51
  result = ecombine(result, CC2420TransmitP$Init$init());
#line 51
  result = ecombine(result, NoInitC$Init$init());
#line 51
  result = ecombine(result, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC$0$Init$init());
#line 51
  result = ecombine(result, StateImplP$Init$init());
#line 51
  result = ecombine(result, CC2420ControlP$Init$init());
#line 51
  result = ecombine(result, /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Init$init());
#line 51
  result = ecombine(result, /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$Init$init());
#line 51
  result = ecombine(result, /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$Init$init());
#line 51
  result = ecombine(result, /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Init$init());
#line 51
  result = ecombine(result, RandomMlcgP$Init$init());
#line 51

#line 51
  return result;
#line 51
}
#line 51
# 108 "UnicastCountToLedsC.nc"
static inline  void UnicastCountToLedsC$Boot$booted(void)
#line 108
{

  UnicastCountToLedsC$AMControl$start();
}

# 66 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline   void /*DsrP.SalvageC*/BitVectorC$1$BitVector$clearAll(void)
{
  memset(/*DsrP.SalvageC*/BitVectorC$1$m_bits, 0, sizeof /*DsrP.SalvageC*/BitVectorC$1$m_bits);
}

# 34 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   void /*DsrP.DsrControlP*/DsrControlP$0$Salvage$clearAll(void){
#line 34
  /*DsrP.SalvageC*/BitVectorC$1$BitVector$clearAll();
#line 34
}
#line 34
# 66 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static inline   void /*DsrP.ComposeC*/BitVectorC$0$BitVector$clearAll(void)
{
  memset(/*DsrP.ComposeC*/BitVectorC$0$m_bits, 0, sizeof /*DsrP.ComposeC*/BitVectorC$0$m_bits);
}

# 34 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   void /*DsrP.DsrControlP*/DsrControlP$0$Compose$clearAll(void){
#line 34
  /*DsrP.ComposeC*/BitVectorC$0$BitVector$clearAll();
#line 34
}
#line 34
# 41 "/opt/tinyos-2.x/tos/interfaces/Random.nc"
inline static   uint16_t /*DsrP.DsrControlP*/DsrControlP$0$Random$rand16(void){
#line 41
  unsigned int result;
#line 41

#line 41
  result = RandomMlcgP$Random$rand16();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 162 "../../../tos/lib/netarch/dsr/DsrControlP.nc"
static inline  void /*DsrP.DsrControlP*/DsrControlP$0$Boot$booted(void)
#line 162
{
  /*DsrP.DsrControlP*/DsrControlP$0$nextIdent = /*DsrP.DsrControlP*/DsrControlP$0$Random$rand16();
  /*DsrP.DsrControlP*/DsrControlP$0$Compose$clearAll();
  /*DsrP.DsrControlP*/DsrControlP$0$Salvage$clearAll();
}

# 34 "/opt/tinyos-2.x/tos/interfaces/BitVector.nc"
inline static   void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$clearAll(void){
#line 34
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$BitVector$clearAll();
#line 34
}
#line 34
# 63 "../../../tos/lib/data/alloc/IndexedAllocBitsP.nc"
static inline  void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$Boot$booted(void)
#line 63
{
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$clearAll();
}

# 49 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
inline static  void RealMainP$Boot$booted(void){
#line 49
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$Boot$booted();
#line 49
  /*DsrP.DsrControlP*/DsrControlP$0$Boot$booted();
#line 49
  UnicastCountToLedsC$Boot$booted();
#line 49
}
#line 49
# 155 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline   mcu_power_t HplAtm128Timer0AsyncP$McuPowerOverride$lowestState(void)
#line 155
{
  uint8_t diff;


  if (* (volatile uint8_t *)(0x37 + 0x20) & ((1 << 1) | (1 << 0))) {




      while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
        ;
      diff = * (volatile uint8_t *)(0x31 + 0x20) - * (volatile uint8_t *)(0x32 + 0x20);
      if (diff < EXT_STANDBY_T0_THRESHOLD || 
      * (volatile uint8_t *)(0x32 + 0x20) > 256 - EXT_STANDBY_T0_THRESHOLD) {
        return ATM128_POWER_EXT_STANDBY;
        }
#line 170
      return ATM128_POWER_SAVE;
    }
  else {
      return ATM128_POWER_DOWN;
    }
}

# 54 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
inline static   mcu_power_t McuSleepC$McuPowerOverride$lowestState(void){
#line 54
  unsigned char result;
#line 54

#line 54
  result = HplAtm128Timer0AsyncP$McuPowerOverride$lowestState();
#line 54

#line 54
  return result;
#line 54
}
#line 54
# 66 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline mcu_power_t McuSleepC$getPowerState(void)
#line 66
{





  if (* (volatile uint8_t *)(0x37 + 0x20) & ~((((1 << 1) | (1 << 0)) | (1 << 2)) | (1 << 6)) || 
  * (volatile uint8_t *)0x7D & ~(1 << 2)) {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x0D + 0x20) & (1 << 6)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if ((* (volatile uint8_t *)(0x0A + 0x20) | * (volatile uint8_t *)0x9A) & ((1 << 6) | (1 << 7))) {
          return ATM128_POWER_IDLE;
        }
      else {
        if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x74 & (1 << 2)) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x06 + 0x20) & (1 << 7)) {
              return ATM128_POWER_ADC_NR;
            }
          else {
              return ATM128_POWER_DOWN;
            }
          }
        }
      }
    }
}

# 134 "/opt/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 134
{
  return m1 < m2 ? m1 : m2;
}

# 97 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline   void McuSleepC$McuSleep$sleep(void)
#line 97
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC$getPowerState(), McuSleepC$McuPowerOverride$lowestState());
  * (volatile uint8_t *)(0x35 + 0x20) = ((
  * (volatile uint8_t *)(0x35 + 0x20) & 0xe3) | (1 << 5)) | ({
#line 102
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC$atm128PowerBits[powerState];
#line 102
    uint8_t __result;

#line 102
     __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
  }
  );
#line 104
   __asm volatile ("sei");
   __asm volatile ("sleep");
   __asm volatile ("cli");}

# 59 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
inline static   void SchedulerBasicP$McuSleep$sleep(void){
#line 59
  McuSleepC$McuSleep$sleep();
#line 59
}
#line 59
# 67 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP$popTask(void)
{
  if (SchedulerBasicP$m_head != SchedulerBasicP$NO_TASK) 
    {
      uint8_t id = SchedulerBasicP$m_head;

#line 72
      SchedulerBasicP$m_head = SchedulerBasicP$m_next[SchedulerBasicP$m_head];
      if (SchedulerBasicP$m_head == SchedulerBasicP$NO_TASK) 
        {
          SchedulerBasicP$m_tail = SchedulerBasicP$NO_TASK;
        }
      SchedulerBasicP$m_next[id] = SchedulerBasicP$NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP$NO_TASK;
    }
}

#line 138
static inline  void SchedulerBasicP$Scheduler$taskLoop(void)
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP$popTask()) == SchedulerBasicP$NO_TASK) 
            {
              SchedulerBasicP$McuSleep$sleep();
            }
        }
#line 150
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP$TaskBasic$runTask(nextTask);
    }
}

# 61 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static  void RealMainP$Scheduler$taskLoop(void){
#line 61
  SchedulerBasicP$Scheduler$taskLoop();
#line 61
}
#line 61
# 140 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static __inline void HplAtm128Timer0AsyncP$stabiliseTimer0(void)
#line 140
{
  * (volatile uint8_t *)(0x33 + 0x20) = * (volatile uint8_t *)(0x33 + 0x20);
  while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 0)) 
    ;
}

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
# 82 "/opt/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt(void)
#line 82
{
   __asm volatile ("sei");}

# 132 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline   uint8_t HplAtm128Timer0AsyncP$Compare$get(void)
#line 132
{
#line 132
  return * (volatile uint8_t *)(0x31 + 0x20);
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


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base;
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
# 230 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow(void)
#line 230
{
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void HplAtm128Timer0AsyncP$Timer$overflow(void){
#line 61
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$overflow();
#line 61
}
#line 61
# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420ControlP$SpiResource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC2420SpiP$Resource$request(/*CC2420ControlC.Spi*/CC2420SpiC$0$CLIENT_ID);
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 156 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   error_t CC2420ControlP$Resource$request(void)
#line 156
{
  return CC2420ControlP$SpiResource$request();
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Resource.nc"
inline static   error_t CC2420CsmaP$Resource$request(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC2420ControlP$Resource$request();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 204 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static inline   void CC2420CsmaP$CC2420Power$startVRegDone(void)
#line 204
{
  CC2420CsmaP$Resource$request();
}

# 56 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Power.nc"
inline static   void CC2420ControlP$CC2420Power$startVRegDone(void){
#line 56
  CC2420CsmaP$CC2420Power$startVRegDone();
#line 56
}
#line 56
# 380 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static inline   void CC2420ControlP$StartupTimer$fired(void)
#line 380
{
  if (CC2420ControlP$m_state == CC2420ControlP$S_VREG_STARTING) {
      CC2420ControlP$m_state = CC2420ControlP$S_VREG_STARTED;
      CC2420ControlP$RSTN$clr();
      CC2420ControlP$RSTN$set();
      CC2420ControlP$CC2420Power$startVRegDone();
    }
}

# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   bool CC2420TransmitP$CCA$get(void){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP$30$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 442 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$BackoffTimer$fired(void)
#line 442
{
  /* atomic removed: atomic calls only */
#line 443
  {
    switch (CC2420TransmitP$m_state) {

        case CC2420TransmitP$S_SAMPLE_CCA: 


          if (CC2420TransmitP$CCA$get()) {
              CC2420TransmitP$m_state = CC2420TransmitP$S_BEGIN_TRANSMIT;
              CC2420TransmitP$BackoffTimer$start(CC2420_TIME_ACK_TURNAROUND);
            }
          else {
              CC2420TransmitP$congestionBackoff();
            }
        break;

        case CC2420TransmitP$S_BEGIN_TRANSMIT: 
          case CC2420TransmitP$S_CANCEL: 
            if (CC2420TransmitP$acquireSpiResource() == SUCCESS) {
                CC2420TransmitP$attemptSend();
              }
        break;

        case CC2420TransmitP$S_ACK_WAIT: 
          CC2420TransmitP$signalDone(SUCCESS);
        break;

        case CC2420TransmitP$S_SFD: 


          CC2420TransmitP$SFLUSHTX$strobe();
        CC2420TransmitP$CaptureSFD$captureRisingEdge();
        CC2420TransmitP$releaseSpiResource();
        CC2420TransmitP$signalDone(ERETRY);
        break;

        default: 
          break;
      }
  }
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$fired(void){
#line 67
  CC2420TransmitP$BackoffTimer$fired();
#line 67
  CC2420ControlP$StartupTimer$fired();
#line 67
}
#line 67
# 151 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$fired(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt == 0) 
        {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$fired();
        }
      else 
        {
          /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$set_alarm();
        }
    }
#line 163
    __nesc_atomic_end(__nesc_atomic); }
}

# 67 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$fired(void){
#line 67
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$fired();
#line 67
}
#line 67
# 110 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired(void)
#line 110
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$stop();
  ;
  __nesc_enable_interrupt();
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$Alarm$fired();
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm128Timer1P$CompareA$fired(void){
#line 49
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Compare$fired();
#line 49
}
#line 49
# 198 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline    void HplAtm128Timer1P$CompareB$default$fired(void)
#line 198
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm128Timer1P$CompareB$fired(void){
#line 49
  HplAtm128Timer1P$CompareB$default$fired();
#line 49
}
#line 49
# 202 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline    void HplAtm128Timer1P$CompareC$default$fired(void)
#line 202
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static   void HplAtm128Timer1P$CompareC$fired(void){
#line 49
  HplAtm128Timer1P$CompareC$default$fired();
#line 49
}
#line 49
# 152 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline   void CC2420ReceiveP$CC2420Receive$sfd_dropped(void)
#line 152
{
  if (CC2420ReceiveP$m_timestamp_size) {
      CC2420ReceiveP$m_timestamp_size--;
    }
}

# 53 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static   void CC2420TransmitP$CC2420Receive$sfd_dropped(void){
#line 53
  CC2420ReceiveP$CC2420Receive$sfd_dropped();
#line 53
}
#line 53
# 45 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline   bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get(void)
#line 45
{
#line 45
  return (* (volatile uint8_t *)48U & (1 << 4)) != 0;
}

# 32 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static   bool CC2420TransmitP$SFD$get(void){
#line 32
  unsigned char result;
#line 32

#line 32
  result = /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP$28$IO$get();
#line 32

#line 32
  return result;
#line 32
}
#line 32
# 143 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline   void CC2420ReceiveP$CC2420Receive$sfd(uint16_t time)
#line 143
{
  if (CC2420ReceiveP$m_timestamp_size < CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE) {
      uint8_t tail = (CC2420ReceiveP$m_timestamp_head + CC2420ReceiveP$m_timestamp_size) % 
      CC2420ReceiveP$TIMESTAMP_QUEUE_SIZE;

#line 147
      CC2420ReceiveP$m_timestamp_queue[tail] = time;
      CC2420ReceiveP$m_timestamp_size++;
    }
}

# 47 "/opt/tinyos-2.x/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static   void CC2420TransmitP$CC2420Receive$sfd(uint16_t arg_0x7dd55de8){
#line 47
  CC2420ReceiveP$CC2420Receive$sfd(arg_0x7dd55de8);
#line 47
}
#line 47
# 675 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline    void CC2420TransmitP$TimeStamp$default$receivedSFD(uint16_t time)
#line 675
{
}

# 50 "/opt/tinyos-2.x/tos/interfaces/RadioTimeStamping.nc"
inline static   void CC2420TransmitP$TimeStamp$receivedSFD(uint16_t arg_0x7dd803f8){
#line 50
  CC2420TransmitP$TimeStamp$default$receivedSFD(arg_0x7dd803f8);
#line 50
}
#line 50
# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline   error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureFallingEdge(void)
#line 56
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$enableCapture(FALSE);
}

# 43 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static   error_t CC2420TransmitP$CaptureSFD$captureFallingEdge(void){
#line 43
  unsigned char result;
#line 43

#line 43
  result = /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captureFallingEdge();
#line 43

#line 43
  return result;
#line 43
}
#line 43
# 672 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline    void CC2420TransmitP$TimeStamp$default$transmittedSFD(uint16_t time, message_t *p_msg)
#line 672
{
}

# 39 "/opt/tinyos-2.x/tos/interfaces/RadioTimeStamping.nc"
inline static   void CC2420TransmitP$TimeStamp$transmittedSFD(uint16_t arg_0x7dd83d00, message_t *arg_0x7dd83eb0){
#line 39
  CC2420TransmitP$TimeStamp$default$transmittedSFD(arg_0x7dd83d00, arg_0x7dd83eb0);
#line 39
}
#line 39
# 251 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static inline   void CC2420TransmitP$CaptureSFD$captured(uint16_t time)
#line 251
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 252
    {
      switch (CC2420TransmitP$m_state) {

          case CC2420TransmitP$S_SFD: 
            CC2420TransmitP$m_state = CC2420TransmitP$S_EFD;
          CC2420TransmitP$sfdHigh = TRUE;
          CC2420TransmitP$CaptureSFD$captureFallingEdge();
          CC2420TransmitP$TimeStamp$transmittedSFD(time, CC2420TransmitP$m_msg);
          if (__nesc_ntoh_leuint16((unsigned char *)&CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg)->fcf) & (1 << IEEE154_FCF_ACK_REQ)) {

              CC2420TransmitP$abortSpiRelease = TRUE;
            }
          CC2420TransmitP$releaseSpiResource();
          CC2420TransmitP$BackoffTimer$stop();


          if (((__nesc_ntoh_leuint16((unsigned char *)&CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg)->fcf) >> IEEE154_FCF_FRAME_TYPE) & 7) == IEEE154_TYPE_DATA) {
              __nesc_hton_uint16((unsigned char *)&CC2420TransmitP$CC2420PacketBody$getMetadata(CC2420TransmitP$m_msg)->time, time);
            }

          if (CC2420TransmitP$SFD$get()) {
              break;
            }


          case CC2420TransmitP$S_EFD: 
            CC2420TransmitP$sfdHigh = FALSE;
          CC2420TransmitP$CaptureSFD$captureRisingEdge();

          if (__nesc_ntoh_leuint16((unsigned char *)&CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg)->fcf) & (1 << IEEE154_FCF_ACK_REQ)) {
              CC2420TransmitP$m_state = CC2420TransmitP$S_ACK_WAIT;
              CC2420TransmitP$BackoffTimer$start(CC2420_ACK_WAIT_DELAY);
            }
          else 
#line 284
            {
              CC2420TransmitP$signalDone(SUCCESS);
            }

          if (!CC2420TransmitP$SFD$get()) {
              break;
            }


          default: 
            if (!CC2420TransmitP$m_receiving) {
                CC2420TransmitP$sfdHigh = TRUE;
                CC2420TransmitP$CaptureSFD$captureFallingEdge();
                CC2420TransmitP$TimeStamp$receivedSFD(time);
                CC2420TransmitP$CC2420Receive$sfd(time);
                CC2420TransmitP$m_receiving = TRUE;
                CC2420TransmitP$m_prev_time = time;
                if (CC2420TransmitP$SFD$get()) {
                    {
                      __nesc_atomic_end(__nesc_atomic); 
#line 303
                      return;
                    }
                  }
              }
          CC2420TransmitP$sfdHigh = FALSE;
          CC2420TransmitP$CaptureSFD$captureRisingEdge();
          CC2420TransmitP$m_receiving = FALSE;
          if (time - CC2420TransmitP$m_prev_time < 10) {
              CC2420TransmitP$CC2420Receive$sfd_dropped();
            }
          break;
        }
    }
#line 315
    __nesc_atomic_end(__nesc_atomic); }
}

# 50 "/opt/tinyos-2.x/tos/interfaces/GpioCapture.nc"
inline static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captured(uint16_t arg_0x7e047d80){
#line 50
  CC2420TransmitP$CaptureSFD$captured(arg_0x7e047d80);
#line 50
}
#line 50
# 126 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline   void HplAtm128Timer1P$Capture$reset(void)
#line 126
{
#line 126
  * (volatile uint8_t *)(0x36 + 0x20) = 1 << 5;
}

# 55 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$reset(void){
#line 55
  HplAtm128Timer1P$Capture$reset();
#line 55
}
#line 55
# 64 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline   void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(uint16_t time)
#line 64
{
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$reset();
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Capture$captured(time);
}

# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static   void HplAtm128Timer1P$Capture$captured(HplAtm128Timer1P$Capture$size_type arg_0x7e26c540){
#line 51
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$captured(arg_0x7e26c540);
#line 51
}
#line 51
# 117 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow(void)
#line 117
{
}

# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline   void /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow(void)
#line 51
{
}

# 166 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static inline   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$overflow(void)
{
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$overflow(void){
#line 71
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$overflow();
#line 71
}
#line 71
# 122 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline   void /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$overflow(void)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform32*/TransformCounterC$0$m_upper++;
      if ((/*Counter32khz32C.Transform32*/TransformCounterC$0$m_upper & /*Counter32khz32C.Transform32*/TransformCounterC$0$OVERFLOW_MASK) == 0) {
        /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$overflow();
        }
    }
#line 130
    __nesc_atomic_end(__nesc_atomic); }
}

# 71 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static   void /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$overflow(void){
#line 71
  /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$overflow();
#line 71
}
#line 71
# 56 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline   void /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$overflow(void)
{
  /*CounterOne16C.NCounter*/Atm128CounterC$0$Counter$overflow();
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static   void HplAtm128Timer1P$Timer$overflow(void){
#line 61
  /*CounterOne16C.NCounter*/Atm128CounterC$0$Timer$overflow();
#line 61
  /*InitOneP.InitOne*/Atm128TimerInitC$0$Timer$overflow();
#line 61
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC$0$HplAtm128Timer$overflow();
#line 61
}
#line 61
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$Irq$fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig0$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP$0$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$Irq$fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig1$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP$1$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$Irq$fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig2$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP$2$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$Irq$fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig3$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP$3$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$Irq$fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig4$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP$4$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$Irq$fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig5$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP$5$IrqSignal$fired();
#line 41
}
#line 41
# 169 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static inline   void CC2420ReceiveP$InterruptFIFOP$fired(void)
#line 169
{
  if (CC2420ReceiveP$m_state == CC2420ReceiveP$S_STARTED) {
      CC2420ReceiveP$beginReceive();
    }
  else {
      CC2420ReceiveP$m_missed_packets++;
    }
}

# 57 "/opt/tinyos-2.x/tos/interfaces/GpioInterrupt.nc"
inline static   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$fired(void){
#line 57
  CC2420ReceiveP$InterruptFIFOP$fired();
#line 57
}
#line 57
# 38 "/opt/tinyos-2.x/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline   void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired(void)
#line 38
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Interrupt$fired();
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$fired(void){
#line 64
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC$0$Atm128Interrupt$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$Irq$fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig6$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP$6$IrqSignal$fired();
#line 41
}
#line 41
# 63 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline    void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired(void)
#line 63
{
}

# 64 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$fired(void){
#line 64
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$default$fired();
#line 64
}
#line 64
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline   void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired(void)
#line 61
{
#line 61
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$Irq$fired();
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static   void HplAtm128InterruptSigP$IntSig7$fired(void){
#line 41
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP$7$IrqSignal$fired();
#line 41
}
#line 41
# 99 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline   uint8_t HplAtm128SpiP$SPI$read(void)
#line 99
{
#line 99
  return * (volatile uint8_t *)(0x0F + 0x20);
}

# 80 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   uint8_t Atm128SpiP$Spi$read(void){
#line 80
  unsigned char result;
#line 80

#line 80
  result = HplAtm128SpiP$SPI$read();
#line 80

#line 80
  return result;
#line 80
}
#line 80
#line 96
inline static   void Atm128SpiP$Spi$enableInterrupt(bool arg_0x7decea68){
#line 96
  HplAtm128SpiP$SPI$enableInterrupt(arg_0x7decea68);
#line 96
}
#line 96
# 264 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline   void Atm128SpiP$Spi$dataReady(uint8_t data)
#line 264
{
  bool again;

  /* atomic removed: atomic calls only */
#line 267
  {
    if (Atm128SpiP$rxBuffer != (void *)0) {
        Atm128SpiP$rxBuffer[Atm128SpiP$pos] = data;
      }

    Atm128SpiP$pos++;
  }
  Atm128SpiP$Spi$enableInterrupt(FALSE);
  /* atomic removed: atomic calls only */
  {
    again = Atm128SpiP$pos < Atm128SpiP$len;
  }

  if (again) {
      Atm128SpiP$sendNextPart();
    }
  else {
      uint8_t *rx;
      uint8_t *tx;
      uint16_t myLen;
      uint8_t discard;

      /* atomic removed: atomic calls only */
#line 289
      {
        rx = Atm128SpiP$rxBuffer;
        tx = Atm128SpiP$txBuffer;
        myLen = Atm128SpiP$len;
        Atm128SpiP$rxBuffer = (void *)0;
        Atm128SpiP$txBuffer = (void *)0;
        Atm128SpiP$len = 0;
        Atm128SpiP$pos = 0;
      }
      discard = Atm128SpiP$Spi$read();

      Atm128SpiP$SpiPacket$sendDone(tx, rx, myLen, SUCCESS);
    }
}

# 92 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128Spi.nc"
inline static   void HplAtm128SpiP$SPI$dataReady(uint8_t arg_0x7dece520){
#line 92
  Atm128SpiP$Spi$dataReady(arg_0x7dece520);
#line 92
}
#line 92
# 52 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
  int main(void)
#line 52
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 60
      ;

      RealMainP$Scheduler$init();





      RealMainP$PlatformInit$init();
      while (RealMainP$Scheduler$runNextTask()) ;





      RealMainP$SoftwareInit$init();
      while (RealMainP$Scheduler$runNextTask()) ;
    }
#line 77
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP$Boot$booted();


  RealMainP$Scheduler$taskLoop();




  return -1;
}

# 123 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static  bool SchedulerBasicP$Scheduler$runNextTask(void)
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 127
  {
    nextTask = SchedulerBasicP$popTask();
    if (nextTask == SchedulerBasicP$NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 131
          FALSE;

#line 131
          return __nesc_temp;
        }
      }
  }
#line 134
  SchedulerBasicP$TaskBasic$runTask(nextTask);
  return TRUE;
}

#line 164
static   void SchedulerBasicP$TaskBasic$default$runTask(uint8_t id)
{
}

# 64 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static  void SchedulerBasicP$TaskBasic$runTask(uint8_t arg_0x7f071c40){
#line 64
  switch (arg_0x7f071c40) {
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
    case /*DsrP.DsrControlP*/DsrControlP$0$composePkt:
#line 64
      /*DsrP.DsrControlP*/DsrControlP$0$composePkt$runTask();
#line 64
      break;
#line 64
    case /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask:
#line 64
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$runTask();
#line 64
      break;
#line 64
    case CC2420CsmaP$startDone_task:
#line 64
      CC2420CsmaP$startDone_task$runTask();
#line 64
      break;
#line 64
    case CC2420CsmaP$stopDone_task:
#line 64
      CC2420CsmaP$stopDone_task$runTask();
#line 64
      break;
#line 64
    case CC2420CsmaP$sendDone_task:
#line 64
      CC2420CsmaP$sendDone_task$runTask();
#line 64
      break;
#line 64
    case CC2420ControlP$sync:
#line 64
      CC2420ControlP$sync$runTask();
#line 64
      break;
#line 64
    case CC2420ControlP$syncDone:
#line 64
      CC2420ControlP$syncDone$runTask();
#line 64
      break;
#line 64
    case HplCC2420InterruptsP$CCATask:
#line 64
      HplCC2420InterruptsP$CCATask$runTask();
#line 64
      break;
#line 64
    case CC2420SpiP$grant:
#line 64
      CC2420SpiP$grant$runTask();
#line 64
      break;
#line 64
    case Atm128SpiP$zeroTask:
#line 64
      Atm128SpiP$zeroTask$runTask();
#line 64
      break;
#line 64
    case /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask:
#line 64
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$grantedTask$runTask();
#line 64
      break;
#line 64
    case CC2420ReceiveP$receiveDone_task:
#line 64
      CC2420ReceiveP$receiveDone_task$runTask();
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
      SchedulerBasicP$TaskBasic$default$runTask(arg_0x7f071c40);
#line 64
      break;
#line 64
    }
#line 64
}
#line 64
# 505 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static  void PacketEngineP$SubSend$sendDone(am_id_t lowerId, message_t *msg, error_t error)
#line 505
{
  packet_send_action_t sendAct = PacketEngineP$PacketEngine$sendDone(lowerId, PacketEngineP$nextActionPkt, msg, error);

#line 507
  PacketEngineP$SendState$toIdle();
  if (sendAct == PKT_SEND_RETRY) {

      ;
      PacketEngineP$startSendBackoff(SEND_RETRY_WINDOW, SEND_RETRY_OFFSET);
    }
  else 
#line 512
    {
      if (sendAct == PKT_SEND_DONE) {
          ;
          PacketEngineP$removePacket(PacketEngineP$nextActionPkt);
        }
      else 
#line 516
        {
          ;
          PacketEngineP$msgBuffer[PacketEngineP$nextActionPkt].state = PacketEngineP$PKT_WAIT;

          ;
          PacketEngineP$nextWaitPkt = PacketEngineP$nextActionPkt;
          ;
          PacketEngineP$printIndices();
        }

      PacketEngineP$startSendBackoff(SEND_DONE_WINDOW, SEND_DONE_OFFSET);
      PacketEngineP$moveActionIndex();
      if (PacketEngineP$nextActionPkt < PacketEngineP$BUFFER_SIZE) {
        PacketEngineP$msgAction$postTask();
        }
      else {
#line 531
        ;
        }
    }
}

# 541 "../../../tos/lib/netarch/dsr/DsrControlP.nc"
static  packet_send_action_t /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$sendDone(packet_id_t pid, message_t *msg, 
error_t result)
#line 542
{
  if (result == FAIL) {
    ;
    }
  else {
#line 545
    if (result == SUCCESS && /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$destination(msg) != AM_BROADCAST_ADDR && 
    !/*DsrP.DsrControlP*/DsrControlP$0$Acks$wasAcked(msg)) {
        ;
        if (/*DsrP.DsrControlP*/DsrControlP$0$retriesLeft[pid] > 0) {
            ;
            /*DsrP.DsrControlP*/DsrControlP$0$retriesLeft[pid]--;
            /*DsrP.DsrControlP*/DsrControlP$0$Acks$requestAck(msg);
            return PKT_SEND_RETRY;
          }
        else 
#line 553
          {
            ;
            ;

            /*DsrP.DsrControlP*/DsrControlP$0$RouteCache$removeLink(/*DsrP.DsrControlP*/DsrControlP$0$AMPacket$address(), 
            /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$destination(msg), TRUE);
            if (/*DsrP.DsrControlP*/DsrControlP$0$AMPacket$type(msg) == AM_DSR) {
                /*DsrP.DsrControlP*/DsrControlP$0$Compose$set(pid);
                /*DsrP.DsrControlP*/DsrControlP$0$composePkt$postTask();
                return PKT_SEND_WAIT;
              }
          }
      }
    }
#line 566
  ;
  /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$upperSendDone(pid, SUCCESS);
  return PKT_SEND_DONE;
}

# 56 "/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketC.nc"
static   error_t CC2420PacketC$Acks$requestAck(message_t *p_msg)
#line 56
{
  unsigned char *__nesc_temp50;

#line 57
  (__nesc_temp50 = (unsigned char *)&CC2420PacketC$CC2420PacketBody$getHeader(p_msg)->fcf, __nesc_hton_leuint16(__nesc_temp50, __nesc_ntoh_leuint16(__nesc_temp50) | (1 << IEEE154_FCF_ACK_REQ)));
  return SUCCESS;
}

# 95 "../../../tos/lib/netarch/dsr/SimpleLinkCacheP.nc"
static  void SimpleLinkCacheP$RouteCache$removeLink(route_cache_node_id_t src, route_cache_node_id_t dest, 
bool reverse)
#line 96
{
  SimpleLinkCacheP$Graph$remove(src, dest);
  if (reverse) {
    SimpleLinkCacheP$Graph$remove(dest, src);
    }
  SimpleLinkCacheP$SourceShortestPath$buildTree(SimpleLinkCacheP$AMPacket$address());
}

# 185 "../../../tos/lib/data/graph/GraphSparseP.nc"
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$remove(graph_vertex_id_t s, graph_vertex_id_t d)
#line 185
{
  graph_edge_id_t curEdge;
#line 186
  graph_edge_id_t nextEdge;

#line 187
  ;
  if (s >= 20 || d >= 20) {
      ;
      return ESIZE;
    }

  curEdge = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[s];
  if (curEdge != 50) {
      if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[curEdge].dest == d) {

          /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[s] = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[curEdge].next;
          /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$IndexedAlloc$free(curEdge);
          if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[s] == 50) {
            /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$vSize--;
            }
#line 201
          /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$removed(curEdge);
          /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$printGraph();
          return SUCCESS;
        }

      while (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[curEdge].next != 50) {

          nextEdge = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[curEdge].next;
          if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[nextEdge].dest == d) {

              /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[curEdge].next = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[nextEdge].next;
              /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$IndexedAlloc$free(nextEdge);
              /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$removed(nextEdge);
              /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$printGraph();
              return SUCCESS;
            }
          curEdge = nextEdge;
        }
    }
  ;
  return EINVAL;
}

# 130 "../../../tos/lib/data/alloc/IndexedAllocBitsP.nc"
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$IndexedAlloc$free(indexed_alloc_id_t m)
#line 130
{
  if (m >= 50) {
    return ESIZE;
    }
#line 133
  if (!/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$get(m)) {
    return EALREADY;
    }
#line 135
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$clear(m);
  if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$BitVector$get(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free)) {
    /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$free = m;
    }
#line 138
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.IndexedBits*/IndexedAllocBitsP$0$size--;
  return SUCCESS;
}

# 76 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static   bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$BitVector$get(uint16_t bitnum)
{
  return /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$m_bits[/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$getIndex(bitnum)] & /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.IndexedAllocC.IndexedBits.Bits*/BitVectorC$4$getMask(bitnum) ? TRUE : FALSE;
}

# 117 "../../../tos/lib/data/graph/SourceShortestPathP.nc"
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$buildTreeTo(graph_vertex_id_t src, 
graph_vertex_id_t dest)
#line 118
{
  if (src >= 20 || dest > 20) {


    return ESIZE;
    }
#line 123
  if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree) {
    return EBUSY;
    }
#line 125
  if (src == /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc && dest == /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest && !/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded) {
      ;
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$postTask();
      return SUCCESS;
    }
  ;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildingTree = TRUE;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastSrc = src;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$lastDest = dest;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$rebuildNeeded = FALSE;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$initTree();

  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$weight[src] = 0;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$insert(src);
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[src] = src;

  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$buildTreeTask$postTask();
  return SUCCESS;
}

# 159 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static   error_t SchedulerBasicP$TaskBasic$postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 161
    {
#line 161
      {
        unsigned char __nesc_temp = 
#line 161
        SchedulerBasicP$pushTask(id) ? SUCCESS : EBUSY;

        {
#line 161
          __nesc_atomic_end(__nesc_atomic); 
#line 161
          return __nesc_temp;
        }
      }
    }
#line 164
    __nesc_atomic_end(__nesc_atomic); }
}

# 325 "../../../tos/lib/data/graph/SourceShortestPathP.nc"
static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$initTree(void)
#line 325
{
  graph_vertex_id_t i;

#line 327
  for (i = 0; i < 20; i++) {
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[i] = 20;
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$fringe[i] = 20;
    }
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PriorityQueue$clear();
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$foundDest = FAIL;
}

# 312 "../../../tos/lib/data/queue/PriorityQueueP.nc"
static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$clearData(void)
#line 312
{
  priority_queue_id_t i;

#line 314
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size = 0;
  for (i = 0; i < 20; i++) 
    /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[i] = 20;
}

#line 118
static  error_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$PriorityQueue$insert(priority_queue_id_t m)
#line 118
{
  if (m >= 20) {
    return ESIZE;
    }
#line 121
  if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size == 20) {
      ;
      return FAIL;
    }
  if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[m] != 20) {
    return EALREADY;
    }
#line 127
  ;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size] = m;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[m] = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$moveUpPos(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$size++);
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$printTree();
  return SUCCESS;
}

#line 218
static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$moveUpPos(priority_queue_id_t a)
#line 218
{
  priority_queue_id_t p;

#line 220
  ;
  while (a > 0 && /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$Compare$test(/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[a], /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[p = (a - 1) / 2]) > 0) {
      /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$flip(a, p);
      a = p;
    }
}

#line 253
static void /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$flip(priority_queue_id_t a, priority_queue_id_t b)
#line 253
{

  priority_queue_id_t temp = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[a];

#line 256
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[a] = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[b];
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[b] = temp;

  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[a]] = a;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$hp[/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.PriorityQueueC.PriorityQueueP*/PriorityQueueP$0$ai[b]] = b;
  ;
}

# 95 "/opt/tinyos-2.x/tos/system/ActiveMessageAddressC.nc"
static   am_addr_t ActiveMessageAddressC$amAddress(void)
#line 95
{
  am_addr_t myAddr;

#line 97
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 97
    myAddr = ActiveMessageAddressC$addr;
#line 97
    __nesc_atomic_end(__nesc_atomic); }
  return myAddr;
}

# 114 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static  am_id_t CC2420ActiveMessageP$AMPacket$type(message_t *amsg)
#line 114
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 116
  return __nesc_ntoh_leuint8((unsigned char *)&header->type);
}

# 158 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
static  error_t /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$upperSendDone(packet_id_t arg_0x7ea60870, error_t arg_0x7ea609f8){
#line 158
  unsigned char result;
#line 158

#line 158
  result = PacketEngineP$PacketEngine$upperSendDone(4, arg_0x7ea60870, arg_0x7ea609f8);
#line 158
  result = ecombine(result, PacketEngineP$PacketEngine$upperSendDone(48, arg_0x7ea60870, arg_0x7ea609f8));
#line 158

#line 158
  return result;
#line 158
}
#line 158
# 868 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static  error_t PacketEngineP$PacketEngine$upperSendDone(am_id_t lowerId, packet_id_t pid, error_t result)
#line 868
{
  packet_send_entry_t sendEntry = { .pid = pid, .cid = PacketEngineP$SEND_CLIENT_SIZE };
  packet_send_entry_t *sendQueue;

#line 871
  if (PacketEngineP$lid(PacketEngineP$msgBuffer[pid].msg) != lowerId || 
  PacketEngineP$msgBuffer[pid].srcLayer != PacketEngineP$PKT_UPPER_LAYER) {
    return EINVAL;
    }
#line 874
  sendQueue = PacketEngineP$SendQueue$lookup(&sendEntry);
  if (sendQueue != (void *)0 && sendQueue->cid != PacketEngineP$SEND_CLIENT_SIZE) {
    PacketEngineP$Send$sendDone(sendQueue->cid, PacketEngineP$msgBuffer[pid].msg, result);
    }
  else 
#line 877
    {
      ;
      return FAIL;
    }
  return SUCCESS;
}

# 107 "../../../tos/lib/data/cache/LruDataCacheP.nc"
static uint8_t /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$lookup(/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$data_cache_item_t *item)
#line 107
{
  uint8_t i;
  /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$data_cache_item_t *cachedItem;

#line 110
  for (i = 0; i < /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$count; i++) {
      cachedItem = &/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$cache[(i + /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$first) % 10];
      if (/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$Equal$test(cachedItem, item)) {
        break;
        }
    }
#line 115
  return i;
}

# 1277 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static void PacketEngineP$startSendBackoff(uint16_t mask, uint16_t offset)
#line 1277
{
  uint16_t r = PacketEngineP$Random$rand16();

#line 1279
  r &= mask;
  r += offset;
  PacketEngineP$SendBackoff$startOneShot(r);
  PacketEngineP$SendState$forceState(PacketEngineP$S_BACKOFF);
  ;
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
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgP$seed;
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgP$seed = mlcg;
    }
#line 73
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 132 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

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


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Compare$get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Timer$get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 1256 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static void PacketEngineP$removePacket(packet_id_t pid)
#line 1256
{
  ;
  if (PacketEngineP$msgBuffer[pid].srcLayer == PacketEngineP$PKT_LOWER_LAYER) {

      if (PacketEngineP$ReceivePool$put(PacketEngineP$msgBuffer[pid].msg) == FAIL) {
        ;
        }
    }
  else 
#line 1262
    {
      packet_send_entry_t sendEntry = { .pid = pid, .cid = PacketEngineP$SEND_CLIENT_SIZE };

      if (PacketEngineP$SendPool$put(PacketEngineP$msgBuffer[pid].msg) == FAIL) {
        ;
        }
      if (PacketEngineP$SendQueue$remove(&sendEntry) != SUCCESS) {
        ;
        }
    }
#line 1271
  PacketEngineP$msgBuffer[pid].state = PacketEngineP$PKT_FREE;
}

# 100 "/opt/tinyos-2.x/tos/system/PoolP.nc"
static  error_t /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$Pool$put(/*PacketEngineC.SendPoolC.PoolP*/PoolP$1$pool_t *newVal)
#line 100
{
  if (/*PacketEngineC.SendPoolC.PoolP*/PoolP$1$free >= 10) {
      return FAIL;
    }
  else {
      uint8_t emptyIndex = /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$index + /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$free;

#line 106
      if (emptyIndex >= 10) {
          emptyIndex -= 10;
        }
      /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$queue[emptyIndex] = newVal;
      /*PacketEngineC.SendPoolC.PoolP*/PoolP$1$free++;
      return SUCCESS;
    }
}

# 119 "../../../tos/lib/data/cache/LruDataCacheP.nc"
static void /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$remove(uint8_t i)
#line 119
{
  uint8_t j;

#line 121
  if (i >= /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$count) {
    return;
    }
#line 123
  if (i == 0) {

      /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$first = (/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$first + 1) % 10;
    }
  else 
#line 126
    {

      for (j = i; j < /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$count; j++) 
        memcpy(&/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$cache[(j + /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$first) % 10], 
        &/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$cache[(j + /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$first + 1) % 10], 
        sizeof(/*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$data_cache_item_t ));
    }
  /*PacketEngineC.SendQueueC.CacheP*/LruDataCacheP$2$count--;
}

# 1180 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static void PacketEngineP$moveIndex(packet_id_t *idx, uint8_t state)
#line 1180
{
  packet_id_t count;
  packet_id_t tmpIndex = *idx;

#line 1183
  for (count = 0; count < PacketEngineP$BUFFER_SIZE; count++) {
      tmpIndex++;
      tmpIndex %= PacketEngineP$BUFFER_SIZE;
      if (PacketEngineP$msgBuffer[tmpIndex].state & state) {
          ;
          *idx = tmpIndex;
          PacketEngineP$printIndices();
          return;
        }
    }

  ;
  *idx = PacketEngineP$BUFFER_SIZE;
  PacketEngineP$printIndices();
}

# 155 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$sendDone(uint8_t last, message_t *msg, error_t err)
#line 155
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$sendDone(last, msg, err);
}

# 67 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static  am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(message_t *arg_0x7eb35888){
#line 67
  unsigned int result;
#line 67

#line 67
  result = CC2420ActiveMessageP$AMPacket$destination(arg_0x7eb35888);
#line 67

#line 67
  return result;
#line 67
}
#line 67
# 142 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static  uint8_t CC2420ActiveMessageP$Packet$payloadLength(message_t *msg)
#line 142
{
  return __nesc_ntoh_leuint8((unsigned char *)&CC2420ActiveMessageP$CC2420PacketBody$getHeader(msg)->length) - CC2420ActiveMessageP$CC2420_SIZE;
}

#line 61
static  error_t CC2420ActiveMessageP$AMSend$send(am_id_t id, am_addr_t addr, 
message_t *msg, 
uint8_t len)
#line 63
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(msg);

#line 65
  __nesc_hton_leuint8((unsigned char *)&header->type, id);
  __nesc_hton_leuint16((unsigned char *)&header->dest, addr);
  __nesc_hton_leuint16((unsigned char *)&header->destpan, CC2420ActiveMessageP$CC2420Config$getPanAddr());

  return CC2420ActiveMessageP$SubSend$send(msg, len + CC2420ActiveMessageP$CC2420_SIZE);
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
      if (reqState == StateImplP$S_IDLE || StateImplP$state[id] == StateImplP$S_IDLE) {
          StateImplP$state[id] = reqState;
          returnVal = SUCCESS;
        }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return returnVal;
}

#line 133
static   bool StateImplP$State$isState(uint8_t id, uint8_t myState)
#line 133
{
  bool isState;

#line 135
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 135
    isState = StateImplP$state[id] == myState;
#line 135
    __nesc_atomic_end(__nesc_atomic); }
  return isState;
}

# 608 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static error_t CC2420TransmitP$acquireSpiResource(void)
#line 608
{
  error_t error = CC2420TransmitP$SpiResource$immediateRequest();

#line 610
  if (error != SUCCESS) {
      CC2420TransmitP$SpiResource$request();
    }
  return error;
}

# 126 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static   error_t CC2420SpiP$Resource$immediateRequest(uint8_t id)
#line 126
{
  error_t error;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 129
    {
      if (CC2420SpiP$WorkingState$requestState(CC2420SpiP$S_BUSY) != SUCCESS) {
          {
            unsigned char __nesc_temp = 
#line 131
            EBUSY;

            {
#line 131
              __nesc_atomic_end(__nesc_atomic); 
#line 131
              return __nesc_temp;
            }
          }
        }
      if (CC2420SpiP$SpiResource$isOwner()) {
          CC2420SpiP$m_holder = id;
          error = SUCCESS;
        }
      else {
#line 139
        if ((error = CC2420SpiP$SpiResource$immediateRequest()) == SUCCESS) {
            CC2420SpiP$m_holder = id;
          }
        else {
            CC2420SpiP$WorkingState$toIdle();
          }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 146
  return error;
}

# 147 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static   uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$Resource$isOwner(uint8_t id)
#line 147
{
  /* atomic removed: atomic calls only */
#line 148
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$resId == id && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_BUSY) {
        unsigned char __nesc_temp = 
#line 149
        TRUE;

#line 149
        return __nesc_temp;
      }
    else 
#line 150
      {
        unsigned char __nesc_temp = 
#line 150
        FALSE;

#line 150
        return __nesc_temp;
      }
  }
}

# 106 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static void Atm128SpiP$startSpi(void)
#line 106
{
  Atm128SpiP$Spi$enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 108
  {
    Atm128SpiP$Spi$initMaster();
    Atm128SpiP$Spi$enableInterrupt(FALSE);
    Atm128SpiP$Spi$setMasterDoubleSpeed(TRUE);
    Atm128SpiP$Spi$setClockPolarity(FALSE);
    Atm128SpiP$Spi$setClockPhase(FALSE);
    Atm128SpiP$Spi$setClock(0);
    Atm128SpiP$Spi$enableSpi(TRUE);
  }
  Atm128SpiP$McuPowerState$update();
}

# 131 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static   void HplAtm128SpiP$SPI$enableSpi(bool enabled)
#line 131
{
  if (enabled) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 6;
      HplAtm128SpiP$Mcu$update();
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 6);
      HplAtm128SpiP$Mcu$update();
    }
}

#line 116
static   void HplAtm128SpiP$SPI$enableInterrupt(bool enabled)
#line 116
{
  if (enabled) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 7;
      HplAtm128SpiP$Mcu$update();
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 7);
      HplAtm128SpiP$Mcu$update();
    }
}

# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static   void CC2420SpiP$WorkingState$toIdle(void){
#line 56
  StateImplP$State$toIdle(0U);
#line 56
}
#line 56
# 107 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static   error_t CC2420SpiP$Resource$request(uint8_t id)
#line 107
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (CC2420SpiP$WorkingState$requestState(CC2420SpiP$S_BUSY) == SUCCESS) {
          CC2420SpiP$m_holder = id;
          if (CC2420SpiP$SpiResource$isOwner()) {
              CC2420SpiP$grant$postTask();
            }
          else {
              CC2420SpiP$SpiResource$request();
            }
        }
      else {
          CC2420SpiP$m_requests |= 1 << id;
        }
    }
#line 122
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 123 "/opt/tinyos-2.x/tos/system/SimpleArbiterP.nc"
static   bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$ArbiterInfo$inUse(void)
#line 123
{
  /* atomic removed: atomic calls only */
#line 124
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP$0$RES_IDLE) 
      {
        unsigned char __nesc_temp = 
#line 126
        FALSE;

#line 126
        return __nesc_temp;
      }
  }
#line 128
  return TRUE;
}

# 638 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP$loadTXFIFO(void)
#line 638
{
  cc2420_header_t *header = CC2420TransmitP$CC2420PacketBody$getHeader(CC2420TransmitP$m_msg);
  uint8_t tx_power = __nesc_ntoh_uint8((unsigned char *)&CC2420TransmitP$CC2420PacketBody$getMetadata(CC2420TransmitP$m_msg)->tx_power);

  if (!tx_power) {
      tx_power = 31;
    }

  CC2420TransmitP$CSN$clr();

  if (CC2420TransmitP$m_tx_power != tx_power) {
      CC2420TransmitP$TXCTRL$write((((2 << CC2420_TXCTRL_TXMIXBUF_CUR) | (
      3 << CC2420_TXCTRL_PA_CURRENT)) | (
      1 << CC2420_TXCTRL_RESERVED)) | ((
      tx_power & 0x1F) << CC2420_TXCTRL_PA_LEVEL));
    }

  CC2420TransmitP$m_tx_power = tx_power;

  CC2420TransmitP$TXFIFO$write((uint8_t *)header, __nesc_ntoh_leuint8((unsigned char *)&header->length) - 1);
}

# 303 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static   cc2420_status_t CC2420SpiP$Reg$write(uint8_t addr, uint16_t data)
#line 303
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 304
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 306
            0;

            {
#line 306
              __nesc_atomic_end(__nesc_atomic); 
#line 306
              return __nesc_temp;
            }
          }
        }
    }
#line 310
    __nesc_atomic_end(__nesc_atomic); }
#line 309
  CC2420SpiP$SpiByte$write(addr);
  CC2420SpiP$SpiByte$write(data >> 8);
  return CC2420SpiP$SpiByte$write(data & 0xff);
}

# 129 "/opt/tinyos-2.x/tos/chips/atm128/spi/Atm128SpiP.nc"
static   uint8_t Atm128SpiP$SpiByte$write(uint8_t tx)
#line 129
{
  Atm128SpiP$Spi$enableSpi(TRUE);
  Atm128SpiP$McuPowerState$update();
  Atm128SpiP$Spi$write(tx);
  while (!(* (volatile uint8_t *)(0x0E + 0x20) & 0x80)) ;
  return Atm128SpiP$Spi$read();
}

#line 240
static   error_t Atm128SpiP$SpiPacket$send(uint8_t *writeBuf, 
uint8_t *readBuf, 
uint16_t bufLen)
#line 242
{
  uint8_t discard;

#line 244
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 244
    {
      Atm128SpiP$txBuffer = writeBuf;
      Atm128SpiP$rxBuffer = readBuf;
      Atm128SpiP$len = bufLen;
      Atm128SpiP$pos = 0;
    }
#line 249
    __nesc_atomic_end(__nesc_atomic); }
  if (bufLen > 0) {
      discard = Atm128SpiP$Spi$read();
      return Atm128SpiP$sendNextPart();
    }
  else {
      Atm128SpiP$zeroTask$postTask();
      return SUCCESS;
    }
}

#line 164
static error_t Atm128SpiP$sendNextPart(void)
#line 164
{
  uint16_t end;
  uint16_t tmpPos;
  uint8_t *tx;
  uint8_t *rx;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 170
    {
      tx = Atm128SpiP$txBuffer;
      rx = Atm128SpiP$rxBuffer;
      tmpPos = Atm128SpiP$pos;
      end = Atm128SpiP$pos + Atm128SpiP$SPI_ATOMIC_SIZE;
      end = end > Atm128SpiP$len ? Atm128SpiP$len : end;
    }
#line 176
    __nesc_atomic_end(__nesc_atomic); }

  for (; tmpPos < end - 1; tmpPos++) {
      uint8_t val;

#line 180
      if (tx != (void *)0) {
        val = Atm128SpiP$SpiByte$write(tx[tmpPos]);
        }
      else {
#line 183
        val = Atm128SpiP$SpiByte$write(0);
        }
      if (rx != (void *)0) {
          rx[tmpPos] = val;
        }
    }



  Atm128SpiP$Spi$enableInterrupt(TRUE);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 193
    {
      if (tx != (void *)0) {
        Atm128SpiP$Spi$write(tx[tmpPos]);
        }
      else {
#line 197
        Atm128SpiP$Spi$write(0);
        }
      Atm128SpiP$pos = tmpPos;
    }
#line 200
    __nesc_atomic_end(__nesc_atomic); }


  return SUCCESS;
}

# 56 "/opt/tinyos-2.x/tos/interfaces/State.nc"
static   void UniqueSendP$State$toIdle(void){
#line 56
  StateImplP$State$toIdle(2U);
#line 56
}
#line 56
# 62 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$fireTimers(uint32_t now)
{
  uint8_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$m_timers[num];

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

# 208 "../../../tos/lib/netarch/single/SinglePacketP.nc"
static  void *SinglePacketP$Send$getPayload(packet_client_id_t clientId, message_t *msg, uint8_t len)
#line 208
{
  uint8_t *payload = SinglePacketP$SubSend$getPayload(clientId, msg, len + sizeof(single_packet_header_t ));

#line 210
  if (payload != (void *)0) {
    payload += sizeof(single_packet_header_t );
    }
#line 212
  return payload;
}

# 1128 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static void PacketEngineP$setIds(message_t *msg, packet_client_id_t clientId)
#line 1128
{
  if (PacketEngineP$PacketEngineClient$upperType(clientId) == AM_RECOVER_TYPE) {
      am_id_t actualId = PacketEngineP$lid(msg);

#line 1131
      PacketEngineP$setLid(msg, PacketEngineP$PacketEngineClient$defaultLowerType(clientId));
      PacketEngineP$setUid(msg, actualId);
    }
  else 
#line 1133
    {
      PacketEngineP$setLid(msg, PacketEngineP$PacketEngineClient$defaultLowerType(clientId));
      PacketEngineP$setUid(msg, PacketEngineP$PacketEngineClient$upperType(clientId));
    }
}

# 119 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static  void CC2420ActiveMessageP$AMPacket$setType(message_t *amsg, am_id_t type)
#line 119
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 121
  __nesc_hton_leuint8((unsigned char *)&header->type, type);
}

# 1101 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static void PacketEngineP$setUid(message_t *msg, am_id_t newUid)
#line 1101
{
  * (am_id_t *)PacketEngineP$SubPacket$getPayload(PacketEngineP$lid(msg), msg, sizeof(am_id_t )) = newUid;
}

# 402 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
static  void */*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$Packet$getPayload(message_t *pkt, uint8_t len)
#line 402
{
  uint8_t *payload = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$getPayload(pkt, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$payloadLength(pkt));
  uint8_t blockLen;

#line 405
  if (payload == (void *)0) {
    return (void *)0;
    }
#line 407
  blockLen = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvBlock$length(payload);

  payload = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$getPayload(pkt, len + blockLen);
  if (payload != (void *)0) {
    payload += blockLen;
    }
#line 412
  return payload;
}

# 115 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static  void */*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$getPayload(message_t *arg_0x7eb44d60, uint8_t arg_0x7eb44ee8){
#line 115
  void *result;
#line 115

#line 115
  result = CC2420ActiveMessageP$Packet$getPayload(arg_0x7eb44d60, arg_0x7eb44ee8);
#line 115

#line 115
  return result;
#line 115
}
#line 115
# 611 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static  void *PacketEngineP$Packet$getPayload(message_t *msg, uint8_t len)
#line 611
{
  uint8_t *payload = PacketEngineP$SubPacket$getPayload(PacketEngineP$lid(msg), msg, len + sizeof(am_id_t ));

#line 613
  if (payload != (void *)0) {
    payload += sizeof(am_id_t );
    }
#line 615
  return payload;
}

# 145 "../../../tos/lib/netarch/single/SinglePacketP.nc"
static  error_t SinglePacketP$Send$send(packet_client_id_t clientId, am_addr_t addr, message_t *msg, 
uint8_t len)
#line 146
{
  ;

  SinglePacketP$SinglePacket$setSource(msg, SinglePacketP$AMPacket$address());
  SinglePacketP$SinglePacket$setDestination(msg, addr);
  SinglePacketP$Packet$setPayloadLength(msg, len);
  return SinglePacketP$SubSend$send(clientId, addr, msg, SinglePacketP$SubPacket$payloadLength(msg));
}

# 574 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static  void PacketEngineP$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 574
{
  PacketEngineP$SubPacket$setPayloadLength(PacketEngineP$lid(msg), msg, len + sizeof(am_id_t ));
}

# 146 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static  void CC2420ActiveMessageP$Packet$setPayloadLength(message_t *msg, uint8_t len)
#line 146
{
  __nesc_hton_leuint8((unsigned char *)&CC2420ActiveMessageP$CC2420PacketBody$getHeader(msg)->length, len + CC2420ActiveMessageP$CC2420_SIZE);
}

# 265 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static  error_t PacketEngineP$Send$send(packet_client_id_t clientId, am_addr_t addr, message_t *msg, 
uint8_t len)
#line 266
{
  packet_send_entry_t sendEntry = { .pid = PacketEngineP$BUFFER_SIZE, .cid = clientId };
  packet_send_entry_t *sendQueue;
  message_t *poolPkt;

#line 270
  if (!PacketEngineP$running) {
    return EOFF;
    }







  if (len > PacketEngineP$Packet$maxPayloadLength()) {
      ;
      return ESIZE;
    }

  sendQueue = PacketEngineP$SendQueue$insert(&sendEntry);
  if (PacketEngineP$SendPool$empty()) {
      ;
      return EBUSY;
    }
  if (PacketEngineP$msgBuffer[PacketEngineP$nextFreePkt].state != PacketEngineP$PKT_FREE) {

      ;
      return EBUSY;
    }

  poolPkt = PacketEngineP$SendPool$get();
  memcpy(poolPkt, msg, sizeof(message_t ));

  sendQueue->pid = PacketEngineP$nextFreePkt;

  PacketEngineP$Packet$setPayloadLength(poolPkt, len);

  PacketEngineP$setIds(poolPkt, clientId);

  ;
  PacketEngineP$msgBuffer[PacketEngineP$nextFreePkt].srcLayer = PacketEngineP$PKT_UPPER_LAYER;
  PacketEngineP$addPacket(poolPkt);
  return SUCCESS;
}

#line 1215
static void PacketEngineP$addPacket(message_t *msg)
#line 1215
{
  PacketEngineP$msgBuffer[PacketEngineP$nextFreePkt].msg = msg;
  PacketEngineP$msgBuffer[PacketEngineP$nextFreePkt].state = PacketEngineP$PKT_ADDED;
  if (PacketEngineP$nextAddedPkt == PacketEngineP$BUFFER_SIZE) {

      ;
      PacketEngineP$nextAddedPkt = PacketEngineP$nextFreePkt;
      ;
      PacketEngineP$printIndices();
    }
  PacketEngineP$moveFreeIndex();
  PacketEngineP$msgAdded$postTask();
}

#line 557
static  uint8_t PacketEngineP$Packet$payloadLength(message_t *msg)
#line 557
{
  return PacketEngineP$SubPacket$payloadLength(PacketEngineP$lid(msg), msg) - sizeof(am_id_t );
}

# 172 "../../../tos/lib/data/timer/DataTimerP.nc"
static void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$adjustTimer(void)
#line 172
{
  uint32_t stopTime = /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$getNow();
  uint8_t i;
  uint32_t elapsed = stopTime - /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$startTime;

#line 176
  /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$stop();
  for (i = 0; i < /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size; i++) 
    /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$delay[i] -= elapsed;
  /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$startTime = stopTime;
}

# 837 "../../../tos/lib/netarch/dsr/DsrControlP.nc"
static  void /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutTimer$expired(am_addr_t dest)
#line 837
{
  packet_id_t pid = /*DsrP.DsrControlP*/DsrControlP$0$findSingleDsrPktTo(dest);
  dsr_route_request_out_t outEntry = { dest, DSR_HOP_LIMIT, 0 };
  dsr_route_request_out_t *outCache;

#line 841
  outCache = /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutCache$lookup(&outEntry);
  if (outCache == (void *)0) {
      ;

      return;
    }
  if (/*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketWaitList$end(pid)) {

      ;

      return;
    }
  if (outCache->rreqsSinceRrep < DSR_MAX_REQUEST_ATTMEPTS) {

      /*DsrP.DsrControlP*/DsrControlP$0$updateRouteRequestOutTimer(dest, outCache->rreqsSinceRrep);

      outCache->rreqsSinceRrep++;

      ;

      /*DsrP.DsrControlP*/DsrControlP$0$Compose$set(pid);
      /*DsrP.DsrControlP*/DsrControlP$0$composePkt$postTask();
    }
  else 
#line 863
    {
      ;


      outCache->rreqsSinceRrep = 0;
      while (!/*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketWaitList$end(pid)) {
          /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$upperSendDone(pid, FAIL);
          /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$drop(pid);
          pid = /*DsrP.DsrControlP*/DsrControlP$0$findSingleDsrPktTo(dest);
        }
    }
}

#line 1186
static packet_id_t /*DsrP.DsrControlP*/DsrControlP$0$findSingleDsrPktTo(am_addr_t dest)
#line 1186
{
  packet_id_t pid;

#line 1188
  for (pid = /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$waitList(); !/*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketWaitList$end(pid); 
  pid = /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketWaitList$next(pid)) {
      message_t *msg;

#line 1191
      if ((msg = /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$packet(pid)) == (void *)0) {
        msg = /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$packet(pid);
        }
#line 1193
      if (/*DsrP.DsrControlP*/DsrControlP$0$SinglePacket$destination(msg) == dest) {
        return pid;
        }
    }
#line 1196
  return pid;
}

# 824 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static  packet_id_t PacketEngineP$PacketEngine$waitList(am_id_t lowerId)
#line 824
{
  packet_id_t pid = PacketEngineP$nextWaitPkt;

  if (pid < PacketEngineP$BUFFER_SIZE && PacketEngineP$lid(PacketEngineP$msgBuffer[pid].msg) != lowerId) {
    pid = PacketEngineP$PacketWaitList$next(lowerId, pid);
    }
#line 829
  return pid;
}

#line 892
static  packet_id_t PacketEngineP$PacketWaitList$next(am_id_t lowerId, packet_id_t m)
#line 892
{
  if (m < PacketEngineP$BUFFER_SIZE) {
      for (m = ++m % PacketEngineP$BUFFER_SIZE; m != PacketEngineP$nextWaitPkt; m = ++m % PacketEngineP$BUFFER_SIZE) {
          if (PacketEngineP$msgBuffer[m].state == PacketEngineP$PKT_WAIT && PacketEngineP$lid(PacketEngineP$msgBuffer[m].msg) == lowerId) {
            return m;
            }
        }
    }
#line 899
  return PacketEngineP$BUFFER_SIZE;
}

#line 921
static packet_id_t PacketEngineP$pidCombineInternal(packet_id_t a, packet_id_t b)
#line 921
{
  packet_id_t unwrappedA = a < PacketEngineP$nextWaitPkt ? a + PacketEngineP$BUFFER_SIZE : a;
  packet_id_t unwrappedB = b < PacketEngineP$nextWaitPkt ? b + PacketEngineP$BUFFER_SIZE : b;

#line 924
  if (a == PacketEngineP$BUFFER_SIZE) {
    return b;
    }
#line 926
  if (b == PacketEngineP$BUFFER_SIZE) {
    return a;
    }
#line 928
  return unwrappedA < unwrappedB ? a : b;
}

#line 705
static  message_t *PacketEngineP$PacketEngine$packet(am_id_t lowerId, packet_id_t pid)
#line 705
{
  if ((pid >= PacketEngineP$BUFFER_SIZE || PacketEngineP$msgBuffer[pid].state == PacketEngineP$PKT_FREE) || 
  PacketEngineP$lid(PacketEngineP$msgBuffer[pid].msg) != lowerId) {
    return (void *)0;
    }
#line 709
  return PacketEngineP$msgBuffer[pid].msg;
}

# 153 "../../../tos/lib/data/cache/LruDataCacheP.nc"
static  /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t */*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$DataCache$lookup(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t *item)
#line 153
{
  uint8_t i = /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$lookup(item);

#line 155
  /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$printCache();
  if (i == /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count) {
    return (void *)0;
    }
#line 158
  return &/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$cache[(i + /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first) % 8];
}

#line 107
static uint8_t /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$lookup(/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t *item)
#line 107
{
  uint8_t i;
  /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$data_cache_item_t *cachedItem;

#line 110
  for (i = 0; i < /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$count; i++) {
      cachedItem = &/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$cache[(i + /*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$first) % 8];
      if (/*DsrP.RouteRequestOutCacheC.CacheP*/LruDataCacheP$1$Equal$test(cachedItem, item)) {
        break;
        }
    }
#line 115
  return i;
}

# 62 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static  void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$Timer$startOneShot(uint32_t arg_0x7eb705e0){
#line 62
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC$0$Timer$startOneShot(0U, arg_0x7eb705e0);
#line 62
}
#line 62
# 146 "../../../tos/lib/netarch/multihop/PacketEngine.nc"
static  error_t /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$drop(packet_id_t arg_0x7ea60088){
#line 146
  unsigned char result;
#line 146

#line 146
  result = PacketEngineP$PacketEngine$drop(4, arg_0x7ea60088);
#line 146
  result = ecombine(result, PacketEngineP$PacketEngine$drop(48, arg_0x7ea60088));
#line 146

#line 146
  return result;
#line 146
}
#line 146
# 802 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static  error_t PacketEngineP$PacketEngine$drop(am_id_t lowerId, packet_id_t pid)
#line 802
{
  if ((pid >= PacketEngineP$BUFFER_SIZE || PacketEngineP$msgBuffer[pid].state != PacketEngineP$PKT_WAIT) || 
  PacketEngineP$lid(PacketEngineP$msgBuffer[pid].msg) != lowerId) {
    return EINVAL;
    }
#line 806
  ;
  PacketEngineP$removePacket(pid);
  if (PacketEngineP$nextWaitPkt == pid) {
    PacketEngineP$moveWaitIndex();
    }
#line 810
  return SUCCESS;
}

# 159 "../../../tos/lib/data/timer/DataTimerP.nc"
static void /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$removeTimer(uint8_t i)
#line 159
{
  if (i >= /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size) {
    return;
    }
#line 162
  ;
  for (/*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size--; i < /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$size; i++) {
      /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data[i] = /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$data[i + 1];
      /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$delay[i] = /*DsrP.RouteRequestOutTimerC.DataTimerP*/DataTimerP$0$delay[i + 1];
    }
}

# 212 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static   void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Alarm$startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0 = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt = ndt;
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
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) || tifr & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MINDT) {
              ;
            }
          else {
              ;
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$Counter$get();

#line 120
          ;

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$set = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$dt - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP$0$base;

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

# 109 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static  bool CC2420ActiveMessageP$AMPacket$isForMe(message_t *amsg)
#line 109
{
  return CC2420ActiveMessageP$AMPacket$destination(amsg) == CC2420ActiveMessageP$AMPacket$address() || 
  CC2420ActiveMessageP$AMPacket$destination(amsg) == AM_BROADCAST_ADDR;
}

# 455 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static  message_t *PacketEngineP$SubReceive$receive(am_id_t lowerId, message_t *msg, void *payload, uint8_t len)
#line 455
{
  message_t *poolPkt;

#line 457
  if (!PacketEngineP$running) {
    return msg;
    }
#line 459
  if (PacketEngineP$nextFreePkt == PacketEngineP$BUFFER_SIZE) {
      ;
      return msg;
    }
  if (PacketEngineP$ReceivePool$empty()) {
      ;
      return msg;
    }
  if (PacketEngineP$msgBuffer[PacketEngineP$nextFreePkt].state != PacketEngineP$PKT_FREE) {

      ;
      return msg;
    }

  poolPkt = PacketEngineP$ReceivePool$get();

  ;
  PacketEngineP$msgBuffer[PacketEngineP$nextFreePkt].srcLayer = PacketEngineP$PKT_LOWER_LAYER;
  PacketEngineP$addPacket(msg);
  return poolPkt;
}

# 387 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP$waitForNextPacket(void)
#line 387
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 388
    {
      if (CC2420ReceiveP$m_state == CC2420ReceiveP$S_STOPPED) {
          CC2420ReceiveP$SpiResource$release();
          {
#line 391
            __nesc_atomic_end(__nesc_atomic); 
#line 391
            return;
          }
        }
      CC2420ReceiveP$receivingPacket = FALSE;
      if ((CC2420ReceiveP$m_missed_packets && CC2420ReceiveP$FIFO$get()) || !CC2420ReceiveP$FIFOP$get()) {

          if (CC2420ReceiveP$m_missed_packets) {
              CC2420ReceiveP$m_missed_packets--;
            }

          CC2420ReceiveP$beginReceive();
        }
      else {

          CC2420ReceiveP$m_state = CC2420ReceiveP$S_STARTED;
          CC2420ReceiveP$m_missed_packets = 0;
          CC2420ReceiveP$SpiResource$release();
        }
    }
#line 409
    __nesc_atomic_end(__nesc_atomic); }
}

# 149 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static   error_t CC2420SpiP$Resource$release(uint8_t id)
#line 149
{
  uint8_t i;

#line 151
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    {
      if (CC2420SpiP$m_holder != id) {
          {
            unsigned char __nesc_temp = 
#line 153
            FAIL;

            {
#line 153
              __nesc_atomic_end(__nesc_atomic); 
#line 153
              return __nesc_temp;
            }
          }
        }
#line 156
      CC2420SpiP$m_holder = CC2420SpiP$NO_HOLDER;
      if (!CC2420SpiP$m_requests) {
          CC2420SpiP$WorkingState$toIdle();
          CC2420SpiP$attemptRelease();
        }
      else {
          for (i = CC2420SpiP$m_holder + 1; ; i++) {
              i %= CC2420SpiP$RESOURCE_COUNT;

              if (CC2420SpiP$m_requests & (1 << i)) {
                  CC2420SpiP$m_holder = i;
                  CC2420SpiP$m_requests &= ~(1 << i);
                  CC2420SpiP$grant$postTask();
                  {
                    unsigned char __nesc_temp = 
#line 169
                    SUCCESS;

                    {
#line 169
                      __nesc_atomic_end(__nesc_atomic); 
#line 169
                      return __nesc_temp;
                    }
                  }
                }
            }
        }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
#line 175
  return SUCCESS;
}

#line 337
static error_t CC2420SpiP$attemptRelease(void)
#line 337
{


  if ((
#line 338
  CC2420SpiP$m_requests > 0
   || CC2420SpiP$m_holder != CC2420SpiP$NO_HOLDER)
   || !CC2420SpiP$WorkingState$isIdle()) {
      return FAIL;
    }
  /* atomic removed: atomic calls only */
  CC2420SpiP$release = TRUE;
  CC2420SpiP$ChipSpiResource$releasing();
  /* atomic removed: atomic calls only */
#line 346
  {
    if (CC2420SpiP$release) {
        CC2420SpiP$SpiResource$release();
        {
          unsigned char __nesc_temp = 
#line 349
          SUCCESS;

#line 349
          return __nesc_temp;
        }
      }
  }
  return EBUSY;
}

# 342 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP$beginReceive(void)
#line 342
{
  CC2420ReceiveP$m_state = CC2420ReceiveP$S_RX_LENGTH;
  /* atomic removed: atomic calls only */
  CC2420ReceiveP$receivingPacket = TRUE;
  if (CC2420ReceiveP$SpiResource$isOwner()) {
      CC2420ReceiveP$receive();
    }
  else {
#line 349
    if (CC2420ReceiveP$SpiResource$immediateRequest() == SUCCESS) {
        CC2420ReceiveP$receive();
      }
    else {
        CC2420ReceiveP$SpiResource$request();
      }
    }
}

#line 377
static void CC2420ReceiveP$receive(void)
#line 377
{
  CC2420ReceiveP$CSN$clr();
  CC2420ReceiveP$RXFIFO$beginRead((uint8_t *)CC2420ReceiveP$CC2420PacketBody$getHeader(CC2420ReceiveP$m_p_rx_buf), 1);
}

# 189 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static   cc2420_status_t CC2420SpiP$Fifo$beginRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 190
{

  cc2420_status_t status = 0;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 194
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 196
            status;

            {
#line 196
              __nesc_atomic_end(__nesc_atomic); 
#line 196
              return __nesc_temp;
            }
          }
        }
    }
#line 200
    __nesc_atomic_end(__nesc_atomic); }
#line 200
  CC2420SpiP$m_addr = addr | 0x40;

  status = CC2420SpiP$SpiByte$write(CC2420SpiP$m_addr);
  CC2420SpiP$Fifo$continueRead(addr, data, len);

  return status;
}

#line 327
static   void CC2420SpiP$SpiPacket$sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error)
#line 328
{
  if (CC2420SpiP$m_addr & 0x40) {
      CC2420SpiP$Fifo$readDone(CC2420SpiP$m_addr & ~0x40, rx_buf, len, error);
    }
  else 
#line 331
    {
      CC2420SpiP$Fifo$writeDone(CC2420SpiP$m_addr, tx_buf, len, error);
    }
}

# 360 "/opt/tinyos-2.x/tos/chips/cc2420/receive/CC2420ReceiveP.nc"
static void CC2420ReceiveP$flush(void)
#line 360
{
  CC2420ReceiveP$reset_state();
  CC2420ReceiveP$CSN$set();
  CC2420ReceiveP$CSN$clr();
  CC2420ReceiveP$SFLUSHRX$strobe();
  CC2420ReceiveP$SFLUSHRX$strobe();
  CC2420ReceiveP$CSN$set();
  CC2420ReceiveP$SpiResource$release();
  CC2420ReceiveP$waitForNextPacket();
}

#line 415
static void CC2420ReceiveP$reset_state(void)
#line 415
{
  CC2420ReceiveP$m_bytes_left = CC2420ReceiveP$RXFIFO_SIZE;
  /* atomic removed: atomic calls only */
#line 417
  CC2420ReceiveP$receivingPacket = FALSE;
  CC2420ReceiveP$m_timestamp_head = 0;
  CC2420ReceiveP$m_timestamp_size = 0;
  CC2420ReceiveP$m_missed_packets = 0;
}

# 316 "/opt/tinyos-2.x/tos/chips/cc2420/spi/CC2420SpiP.nc"
static   cc2420_status_t CC2420SpiP$Strobe$strobe(uint8_t addr)
#line 316
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 317
    {
      if (CC2420SpiP$WorkingState$isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 319
            0;

            {
#line 319
              __nesc_atomic_end(__nesc_atomic); 
#line 319
              return __nesc_temp;
            }
          }
        }
    }
#line 323
    __nesc_atomic_end(__nesc_atomic); }
#line 323
  return CC2420SpiP$SpiByte$write(addr);
}

# 660 "/opt/tinyos-2.x/tos/chips/cc2420/transmit/CC2420TransmitP.nc"
static void CC2420TransmitP$signalDone(error_t err)
#line 660
{
  /* atomic removed: atomic calls only */
#line 661
  CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
  CC2420TransmitP$abortSpiRelease = FALSE;
  CC2420TransmitP$ChipSpiResource$attemptRelease();
  CC2420TransmitP$Send$sendDone(CC2420TransmitP$m_msg, err);
}

#line 559
static void CC2420TransmitP$attemptSend(void)
#line 559
{
  uint8_t status;
  bool congestion = TRUE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 563
    {
      if (CC2420TransmitP$m_state == CC2420TransmitP$S_CANCEL) {
          CC2420TransmitP$SFLUSHTX$strobe();
          CC2420TransmitP$releaseSpiResource();
          CC2420TransmitP$CSN$set();
          CC2420TransmitP$m_state = CC2420TransmitP$S_STARTED;
          CC2420TransmitP$Send$sendDone(CC2420TransmitP$m_msg, ECANCEL);
          {
#line 570
            __nesc_atomic_end(__nesc_atomic); 
#line 570
            return;
          }
        }

      CC2420TransmitP$CSN$clr();

      status = CC2420TransmitP$m_cca ? CC2420TransmitP$STXONCCA$strobe() : CC2420TransmitP$STXON$strobe();
      if (!(status & CC2420_STATUS_TX_ACTIVE)) {
          status = CC2420TransmitP$SNOP$strobe();
          if (status & CC2420_STATUS_TX_ACTIVE) {
              congestion = FALSE;
            }
        }

      CC2420TransmitP$m_state = congestion ? CC2420TransmitP$S_SAMPLE_CCA : CC2420TransmitP$S_SFD;
      CC2420TransmitP$CSN$set();
    }
#line 586
    __nesc_atomic_end(__nesc_atomic); }

  if (congestion) {
      CC2420TransmitP$totalCcaChecks = 0;
      CC2420TransmitP$releaseSpiResource();
      CC2420TransmitP$congestionBackoff();
    }
  else 
#line 592
    {
      CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$CC2420_ABORT_PERIOD);
    }
}





static void CC2420TransmitP$congestionBackoff(void)
#line 601
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 602
    {
      CC2420TransmitP$RadioBackoff$requestCongestionBackoff(CC2420TransmitP$m_msg);
      CC2420TransmitP$BackoffTimer$start(CC2420TransmitP$myCongestionBackoff);
    }
#line 605
    __nesc_atomic_end(__nesc_atomic); }
}

# 136 "/opt/tinyos-2.x/tos/lib/timer/TransformAlarmC.nc"
static   void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Alarm$startAt(/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type t0, /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type dt)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 = t0;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt = dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$set_alarm();
    }
#line 143
    __nesc_atomic_end(__nesc_atomic); }
}

#line 96
static void /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$set_alarm(void)
{
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type now = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$Counter$get();
#line 98
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type expires;
#line 98
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type remaining;




  expires = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt;


  remaining = (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$to_size_type )(expires - now);


  if (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 <= now) 
    {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 121
  if (remaining > /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY) 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 = now + /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt = remaining - /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY;
      remaining = /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$MAX_DELAY;
    }
  else 
    {
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_t0 += /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt;
      /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$m_dt = 0;
    }
  /*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$AlarmFrom$startAt((/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type )now << 0, 
  (/*AlarmMultiplexC.Alarm.Alarm32khz32C.Transform32*/TransformAlarmC$0$from_size_type )remaining << 0);
}

# 69 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static   /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type /*Counter32khz32C.Transform32*/TransformCounterC$0$Counter$get(void)
{
  /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type rv = 0;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform32*/TransformCounterC$0$upper_count_type high = /*Counter32khz32C.Transform32*/TransformCounterC$0$m_upper;
      /*Counter32khz32C.Transform32*/TransformCounterC$0$from_size_type low = /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$get();

#line 76
      if (/*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$isOverflowPending()) 
        {






          high++;
          low = /*Counter32khz32C.Transform32*/TransformCounterC$0$CounterFrom$get();
        }
      {
        /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type high_to = high;
        /*Counter32khz32C.Transform32*/TransformCounterC$0$to_size_type low_to = low >> /*Counter32khz32C.Transform32*/TransformCounterC$0$LOW_SHIFT_RIGHT;

#line 90
        rv = (high_to << /*Counter32khz32C.Transform32*/TransformCounterC$0$HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 92
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 428 "/opt/tinyos-2.x/tos/chips/cc2420/control/CC2420ControlP.nc"
static void CC2420ControlP$writeFsctrl(void)
#line 428
{
  uint8_t channel;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 431
    {
      channel = CC2420ControlP$m_channel;
    }
#line 433
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP$FSCTRL$write((1 << CC2420_FSCTRL_LOCK_THR) | (((
  channel - 11) * 5 + 357) << CC2420_FSCTRL_FREQ));
}




static void CC2420ControlP$writeMdmctrl0(void)
#line 442
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 443
    {
      CC2420ControlP$MDMCTRL0$write((((((((1 << CC2420_MDMCTRL0_RESERVED_FRAME_MODE) | (
      CC2420ControlP$addressRecognition << CC2420_MDMCTRL0_ADR_DECODE)) | (
      2 << CC2420_MDMCTRL0_CCA_HYST)) | (
      3 << CC2420_MDMCTRL0_CCA_MOD)) | (
      1 << CC2420_MDMCTRL0_AUTOCRC)) | ((
      CC2420ControlP$autoAckEnabled && CC2420ControlP$hwAutoAckDefault) << CC2420_MDMCTRL0_AUTOACK)) | (
      0 << CC2420_MDMCTRL0_AUTOACK)) | (
      2 << CC2420_MDMCTRL0_PREAMBLE_LENGTH));
    }
#line 452
    __nesc_atomic_end(__nesc_atomic); }
}







static void CC2420ControlP$writeId(void)
#line 461
{
  nxle_uint16_t id[2];

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 464
    {
      __nesc_hton_leuint16((unsigned char *)&id[0], CC2420ControlP$m_pan);
      __nesc_hton_leuint16((unsigned char *)&id[1], CC2420ControlP$m_short_addr);
    }
#line 467
    __nesc_atomic_end(__nesc_atomic); }

  CC2420ControlP$PANID$write(0, (uint8_t *)&id, sizeof id);
}

# 42 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$enableCapture(uint8_t mode)
#line 42
{
  /* atomic removed: atomic calls only */
#line 43
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$stop();
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$reset();
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$setEdge(mode);
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC$0$Atm128Capture$start();
  }
  return SUCCESS;
}

# 83 "/opt/tinyos-2.x/tos/chips/cc2420/csma/CC2420CsmaP.nc"
static  error_t CC2420CsmaP$SplitControl$start(void)
#line 83
{
  if (CC2420CsmaP$SplitControlState$requestState(CC2420CsmaP$S_STARTING) == SUCCESS) {
      CC2420CsmaP$CC2420Power$startVReg();
      return SUCCESS;
    }
  else {
#line 88
    if (CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STARTED)) {
        return EALREADY;
      }
    else {
#line 91
      if (CC2420CsmaP$SplitControlState$isState(CC2420CsmaP$S_STARTING)) {
          return SUCCESS;
        }
      }
    }
#line 95
  return EBUSY;
}

# 76 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static   bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$BitVector$get(uint16_t bitnum)
{
  return /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$m_bits[/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$getIndex(bitnum)] & /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.InitialC*/BitVectorC$3$getMask(bitnum) ? TRUE : FALSE;
}

# 174 "../../../tos/lib/data/graph/SourceShortestPathP.nc"
static  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$SourceShortestPath$edgeCount(graph_vertex_id_t dest)
#line 174
{
  if (dest >= 20 || /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$spt[dest] == 20) {
    return 0;
    }
  else 
#line 177
    {
      graph_edge_id_t cnt;

#line 179
      for (cnt = 0; !/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$end(dest); 
      dest = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.SourceShortestPathC.SourceShortestPathP*/SourceShortestPathP$0$PathEdgeList$next(dest)) 
        cnt++;
      return cnt;
    }
}

# 590 "../../../tos/lib/netarch/dsr/DsrControlP.nc"
static  void /*DsrP.DsrControlP*/DsrControlP$0$RouteCache$routeUpdate(route_cache_node_id_t src, route_cache_node_id_t dest, 
route_cache_link_id_t numLinks)
#line 591
{
  packet_id_t pid;
  message_t *msg;
  dsr_route_request_out_t outEntry = { dest, DSR_HOP_LIMIT, 0 };
  dsr_route_request_out_t *outCache;

  if (numLinks > 0) {
    /*DsrP.DsrControlP*/DsrControlP$0$resetRouteRequestOutCache(dest);
    }
  pid = /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$waitList();
  while (!/*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketWaitList$end(pid)) {
      if ((msg = /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$packet(pid)) == (void *)0) {
          msg = /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$packet(pid);

          if (/*DsrP.DsrControlP*/DsrControlP$0$SourceRoute$length(msg) != 0) {
              pid = /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketWaitList$next(pid);
              continue;
            }
        }

      if (/*DsrP.DsrControlP*/DsrControlP$0$SinglePacket$destination(msg) != dest) {
          pid = /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketWaitList$next(pid);
          continue;
        }
      if (numLinks == 0) {

          outCache = /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutCache$insert(&outEntry);
          if (outCache->rreqsSinceRrep != 0) {
              ;
              return;
            }

          /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestOutTimer$expired(dest);
          return;
        }
      else 
#line 625
        {
          dsr_source_route_t *sr;
          uint8_t numAddr = numLinks - 1;

          ;
          if (/*DsrP.DsrControlP*/DsrControlP$0$AMPacket$type(msg) != AM_DSR) {
              if (/*DsrP.DsrControlP*/DsrControlP$0$addDsrHeader(pid, msg) == FAIL) {
                  pid = /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$waitList();
                  continue;
                }
            }

          if (
#line 636
          /*DsrP.DsrControlP*/DsrControlP$0$SourceRoute$add(msg, sizeof(dsr_source_route_t ) + 
          numAddr * sizeof(nx_am_addr_t )) != SUCCESS) {
              ;

              /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(pid);
              pid = /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$waitList();
              continue;
            }
          sr = (dsr_source_route_t *)/*DsrP.DsrControlP*/DsrControlP$0$SourceRoute$value(msg);
          if (sr == (void *)0) {
              ;

              /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(pid);
              pid = /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$waitList();
              continue;
            }

          __nesc_htonbf_uint8((unsigned char *)&(*sr), 0, 1, FALSE);
          __nesc_htonbf_uint8((unsigned char *)&(*sr), 1, 3, 0);
          __nesc_htonbf_uint8((unsigned char *)&(*sr), 4, 4, numAddr);
          if (numAddr > 0) {
              uint8_t curAddr = numAddr;

              __nesc_hton_uint16((unsigned char *)&sr->addr[--curAddr], /*DsrP.DsrControlP*/DsrControlP$0$RouteNodeList$next(dest));

              while (curAddr > 0) {
                  __nesc_hton_uint16((unsigned char *)&sr->addr[curAddr - 1], /*DsrP.DsrControlP*/DsrControlP$0$RouteNodeList$next(__nesc_ntoh_uint16((unsigned char *)&sr->addr[curAddr])));
                  curAddr--;
                }
            }

          if (numAddr > 0) {
            /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$setDestination(msg, __nesc_ntoh_uint16((unsigned char *)&sr->addr[0]));
            }
          else {
#line 670
            /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$setDestination(msg, dest);
            }
#line 671
          ;

          /*DsrP.DsrControlP*/DsrControlP$0$Acks$requestAck(msg);
          /*DsrP.DsrControlP*/DsrControlP$0$retriesLeft[pid] = DSR_MAX_RETRIES;
          /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$send(pid);
          pid = /*DsrP.DsrControlP*/DsrControlP$0$SingleDsrPacketEngine$waitList();
        }
    }
}

# 123 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
static  uint8_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSinglePacket$length(uint8_t type, message_t *pkt)
#line 123
{
  return /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSingle$length(type, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$getPayload(pkt, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$payloadLength(pkt)));
}

# 362 "../../../tos/lib/netarch/tlv/TlvP.nc"
static  tlv_key_t TlvP$TlvList$next(uint8_t type, void *block, tlv_key_t key)
#line 362
{
  tlv_t *cur;

#line 364
  if (key == TlvP$TLV_FIRST_KEY) {
    key = 0;
    }
  else 
#line 366
    {
      cur = TlvP$tlvAt(block, key);
      key += sizeof(tlv_t ) + __nesc_ntoh_uint8((unsigned char *)&cur->len);
    }
  while (!TlvP$TlvList$end(type, block, key)) {
      cur = TlvP$tlvAt(block, key);
      if (__nesc_ntoh_uint8((unsigned char *)&cur->type) == type) {
          ;
          return key;
        }
      key += sizeof(tlv_t ) + __nesc_ntoh_uint8((unsigned char *)&cur->len);
    }
  ;
  return key;
}

#line 215
static  uint8_t TlvP$TlvMultiple$length(uint8_t type, void *block, tlv_key_t key)
#line 215
{
  tlv_t *cur = TlvP$tlvAt(block, key);

#line 217
  if (TlvP$TlvList$end(type, block, key) || __nesc_ntoh_uint8((unsigned char *)&cur->type) != type) {
      ;
      return 0;
    }
  return __nesc_ntoh_uint8((unsigned char *)&cur->len);
}

# 1263 "../../../tos/lib/netarch/dsr/DsrControlP.nc"
static error_t /*DsrP.DsrControlP*/DsrControlP$0$addDsrHeader(packet_id_t pid, message_t *msg)
#line 1263
{
  if (/*DsrP.DsrControlP*/DsrControlP$0$AMPacket$type(msg) == AM_DSR) {
      ;
      /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(pid);
      return FAIL;
    }
  if (/*DsrP.DsrControlP*/DsrControlP$0$DsrHeader$add(msg) != SUCCESS) {
      ;
      /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(pid);
      return FAIL;
    }
  /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$setType(msg, AM_DSR);
  return SUCCESS;
}

# 442 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
static void /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$postLengthChange(message_t *pkt, void *data, uint8_t trailLen)
#line 442
{
  /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$setPayloadLength(pkt, trailLen + /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvBlock$length(data));
}

#line 173
static  error_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSinglePacket$add(uint8_t type, message_t *pkt, uint8_t len)
#line 173
{
  uint8_t trailLen;
  void *data = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$preLengthChange(pkt, &trailLen);
  error_t err = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSingle$add(type, data, len, trailLen, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$maxLen());

#line 177
  /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$postLengthChange(pkt, data, trailLen);
  return err;
}

#line 425
static void */*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$preLengthChange(message_t *pkt, uint8_t *trailLen)
#line 425
{
  void *data;

#line 427
  *trailLen = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$payloadLength(pkt);
  data = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$getPayload(pkt, *trailLen);
  *trailLen -= /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvBlock$length(data);
  /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$setPayloadLength(pkt, *trailLen);
  return data;
}

# 307 "../../../tos/lib/netarch/tlv/TlvP.nc"
static  error_t TlvP$TlvMultiple$add(uint8_t type, void *block, tlv_key_t *key, 
uint8_t len, uint8_t trailLen, uint8_t maxLen)
#line 308
{
  unsigned char *__nesc_temp43;
#line 309
  tlv_block_t *blk = (tlv_block_t *)block;
  tlv_t *cur;
  uint8_t diff = sizeof(tlv_t ) + len;

#line 312
  if (TlvP$TlvBlock$length(block) + diff > maxLen) {
      ;
      return ESIZE;
    }
  ;
  cur = (tlv_t *)((void *)blk->tlv + __nesc_ntoh_uint8((unsigned char *)&blk->len));
  memmove((void *)cur + diff, cur, trailLen);

  if (key != (void *)0 && len) {
    *key = __nesc_ntoh_uint8((unsigned char *)&blk->len);
    }
#line 322
  (__nesc_temp43 = (unsigned char *)&blk->len, __nesc_hton_uint8(__nesc_temp43, __nesc_ntoh_uint8(__nesc_temp43) + diff));
  __nesc_hton_uint8((unsigned char *)&cur->type, type);
  __nesc_hton_uint8((unsigned char *)&cur->len, len);
  return SUCCESS;
}

# 155 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
static  void */*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSinglePacket$value(uint8_t type, message_t *pkt)
#line 155
{
  return /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSingle$value(type, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$getPayload(pkt, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$payloadLength(pkt)));
}

# 282 "../../../tos/lib/netarch/tlv/TlvP.nc"
static  void *TlvP$TlvMultiple$value(uint8_t type, void *block, tlv_key_t key)
#line 282
{
  tlv_t *cur = TlvP$tlvAt(block, key);

#line 284
  if (TlvP$TlvList$end(type, block, key) || __nesc_ntoh_uint8((unsigned char *)&cur->type) != type) {
      ;
      return (void *)0;
    }
  return (void *)cur->val;
}

# 99 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420ActiveMessageP.nc"
static  void CC2420ActiveMessageP$AMPacket$setDestination(message_t *amsg, am_addr_t addr)
#line 99
{
  cc2420_header_t *header = CC2420ActiveMessageP$CC2420PacketBody$getHeader(amsg);

#line 101
  __nesc_hton_leuint16((unsigned char *)&header->dest, addr);
}

# 721 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static  error_t PacketEngineP$PacketEngine$send(am_id_t lowerId, packet_id_t pid)
#line 721
{
  if ((pid >= PacketEngineP$BUFFER_SIZE || PacketEngineP$msgBuffer[pid].state != PacketEngineP$PKT_WAIT) || 
  PacketEngineP$lid(PacketEngineP$msgBuffer[pid].msg) != lowerId) {
    return EINVAL;
    }
#line 725
  ;
  PacketEngineP$markPacket(pid, PacketEngineP$PKT_SEND);
  return SUCCESS;
}

#line 1236
static void PacketEngineP$markPacket(packet_id_t pid, uint8_t state)
#line 1236
{
  PacketEngineP$msgBuffer[pid].state = state;
  if (PacketEngineP$nextActionPkt == PacketEngineP$BUFFER_SIZE) {

      ;
      PacketEngineP$nextActionPkt = pid;
      ;
      PacketEngineP$printIndices();
    }
  if (PacketEngineP$nextWaitPkt == pid) {

    PacketEngineP$moveWaitIndex();
    }
#line 1248
  PacketEngineP$msgAction$postTask();
}

# 700 "../../../tos/lib/netarch/dsr/DsrControlP.nc"
static  void /*DsrP.DsrControlP*/DsrControlP$0$SalvageRouteCache$routeUpdate(route_cache_node_id_t src, route_cache_node_id_t dest, 
route_cache_link_id_t numLinks)
#line 701
{
  unsigned char __nesc_temp47;
  unsigned char *__nesc_temp46;
#line 702
  packet_id_t pid;
  message_t *msg;

  pid = /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$waitList();
  while (!/*DsrP.DsrControlP*/DsrControlP$0$DsrPacketWaitList$end(pid)) {
      dsr_source_route_t *sr;

      if (!/*DsrP.DsrControlP*/DsrControlP$0$Salvage$get(pid)) {
          pid = /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketWaitList$next(pid);
          continue;
        }
      msg = /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$packet(pid);

      if (/*DsrP.DsrControlP*/DsrControlP$0$SinglePacket$destination(msg) != dest) {
          pid = /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketWaitList$next(pid);
          continue;
        }

      if (/*DsrP.DsrControlP*/DsrControlP$0$SourceRoute$length(msg) == 0) {
          pid = /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketWaitList$next(pid);
          continue;
        }
      sr = (dsr_source_route_t *)/*DsrP.DsrControlP*/DsrControlP$0$SourceRoute$value(msg);
      if (numLinks == 0) {

          ;

          /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$upperSendDone(pid, FAIL);
          /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(pid);
          /*DsrP.DsrControlP*/DsrControlP$0$Salvage$clear(pid);
          pid = /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$waitList();
        }
      else 
#line 733
        {
          uint8_t numAddr = numLinks;
          uint8_t curAddr;

          ;


          if (
#line 739
          /*DsrP.DsrControlP*/DsrControlP$0$SourceRoute$setLength(msg, sizeof(dsr_source_route_t ) + 
          numAddr * sizeof(nx_am_addr_t )) != SUCCESS) {
              ;

              /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$upperSendDone(pid, FAIL);
              /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(pid);
              /*DsrP.DsrControlP*/DsrControlP$0$Salvage$clear(pid);
              pid = /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$waitList();
              continue;
            }

          (__nesc_temp46 = (unsigned char *)&(*sr), __nesc_htonbf_uint8(__nesc_temp46, 1, 3, (__nesc_temp47 = __nesc_ntohbf_uint8(__nesc_temp46, 1, 3)) + 1), __nesc_temp47);
          __nesc_htonbf_uint8((unsigned char *)&(*sr), 4, 4, numAddr - 1);
          curAddr = numAddr - 1;

          __nesc_hton_uint16((unsigned char *)&sr->addr[curAddr], /*DsrP.DsrControlP*/DsrControlP$0$RouteNodeList$next(dest));

          while (curAddr > 0) {
              __nesc_hton_uint16((unsigned char *)&sr->addr[curAddr - 1], /*DsrP.DsrControlP*/DsrControlP$0$RouteNodeList$next(__nesc_ntoh_uint16((unsigned char *)&sr->addr[curAddr])));
              curAddr--;
            }

          if (numAddr > 1) {
            /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$setDestination(msg, __nesc_ntoh_uint16((unsigned char *)&sr->addr[1]));
            }
          else {
#line 764
            /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$setDestination(msg, dest);
            }
#line 765
          ;

          /*DsrP.DsrControlP*/DsrControlP$0$Acks$requestAck(msg);
          /*DsrP.DsrControlP*/DsrControlP$0$retriesLeft[pid] = DSR_MAX_RETRIES;
          /*DsrP.DsrControlP*/DsrControlP$0$Salvage$clear(pid);
          /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$send(pid);
          pid = /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$waitList();
        }
    }
}

# 86 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static   void /*DsrP.SalvageC*/BitVectorC$1$BitVector$clear(uint16_t bitnum)
{
  /*DsrP.SalvageC*/BitVectorC$1$m_bits[/*DsrP.SalvageC*/BitVectorC$1$getIndex(bitnum)] &= ~/*DsrP.SalvageC*/BitVectorC$1$getMask(bitnum);
}

# 140 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
static  error_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSinglePacket$setLength(uint8_t type, message_t *pkt, uint8_t len)
#line 140
{
  uint8_t trailLen;
  void *data = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$preLengthChange(pkt, &trailLen);
  error_t err = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSingle$setLength(type, data, len, trailLen, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$maxLen());

#line 144
  /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$postLengthChange(pkt, data, trailLen);
  return err;
}

# 243 "../../../tos/lib/netarch/tlv/TlvP.nc"
static  error_t TlvP$TlvMultiple$setLength(uint8_t type, void *block, tlv_key_t key, 
uint8_t len, uint8_t trailLen, 
uint8_t maxLen)
#line 245
{
  unsigned char *__nesc_temp42;
#line 246
  tlv_block_t *blk = (tlv_block_t *)block;
  tlv_t *cur = TlvP$tlvAt(block, key);
  void *trail;
  int16_t diff;
  uint8_t tlvTrailLen;

#line 251
  if (TlvP$TlvList$end(type, block, key) || __nesc_ntoh_uint8((unsigned char *)&cur->type) != type) {
      ;
      return EINVAL;
    }

  diff = len - __nesc_ntoh_uint8((unsigned char *)&cur->len);
  trail = (void *)cur + sizeof(tlv_t ) + __nesc_ntoh_uint8((unsigned char *)&cur->len);

  tlvTrailLen = TlvP$TlvBlock$length(block) - (uint8_t )(trail - block) + trailLen;
  if (!len) {
    diff -= sizeof(tlv_t );
    }
#line 262
  if (diff > 0 && TlvP$TlvBlock$length(block) + diff + trailLen > maxLen) {
      ;
      return ESIZE;
    }
  ;
  (__nesc_temp42 = (unsigned char *)&blk->len, __nesc_hton_uint8(__nesc_temp42, __nesc_ntoh_uint8(__nesc_temp42) + diff));
  memmove(trail + diff, trail, tlvTrailLen);
  if (len) {
    __nesc_hton_uint8((unsigned char *)&cur->len, len);
    }
#line 271
  return SUCCESS;
}

# 76 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static   bool /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$BitVector$get(uint16_t bitnum)
{
  return /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$m_bits[/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$getIndex(bitnum)] & /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.TrackC*/BitVectorC$2$getMask(bitnum) ? TRUE : FALSE;
}

#line 76
static   bool /*DsrP.ComposeC*/BitVectorC$0$BitVector$get(uint16_t bitnum)
{
  return /*DsrP.ComposeC*/BitVectorC$0$m_bits[/*DsrP.ComposeC*/BitVectorC$0$getIndex(bitnum)] & /*DsrP.ComposeC*/BitVectorC$0$getMask(bitnum) ? TRUE : FALSE;
}

# 120 "../../../tos/lib/netarch/single/SinglePacketP.nc"
static  bool SinglePacketP$SinglePacket$isForMe(message_t *msg)
#line 120
{
  return SinglePacketP$SinglePacket$destination(msg) == SinglePacketP$AMPacket$address() || 
  SinglePacketP$SinglePacket$destination(msg) == AM_BROADCAST_ADDR;
}

# 86 "/opt/tinyos-2.x/tos/system/BitVectorC.nc"
static   void /*DsrP.ComposeC*/BitVectorC$0$BitVector$clear(uint16_t bitnum)
{
  /*DsrP.ComposeC*/BitVectorC$0$m_bits[/*DsrP.ComposeC*/BitVectorC$0$getIndex(bitnum)] &= ~/*DsrP.ComposeC*/BitVectorC$0$getMask(bitnum);
}

# 296 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
static  tlv_key_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiplePacket$list(uint8_t type, message_t *pkt)
#line 296
{
  return /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvMultiple$list(type, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$getPayload(pkt, /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$SubPacket$payloadLength(pkt)));
}

# 125 "../../../tos/lib/netarch/dsr/SimpleLinkCacheP.nc"
static  void SimpleLinkCacheP$RouteCache$checkRoute(route_cache_node_id_t src, route_cache_node_id_t dest)
#line 125
{
  route_cache_link_id_t numLinks;

  if (SimpleLinkCacheP$Initial$get(dest)) {
    return;
    }
  if (SimpleLinkCacheP$SourceShortestPath$buildingTree()) {
      SimpleLinkCacheP$Initial$set(dest);
      return;
    }

  numLinks = SimpleLinkCacheP$SourceShortestPath$edgeCount(dest);
  if (numLinks > 0) {
    SimpleLinkCacheP$Track$clear(dest);
    }
  SimpleLinkCacheP$RouteCache$routeUpdate(src, dest, numLinks);
}

# 1237 "../../../tos/lib/netarch/dsr/DsrControlP.nc"
static error_t /*DsrP.DsrControlP*/DsrControlP$0$addRouteRequest(packet_id_t pid, message_t *msg, am_addr_t dest)
#line 1237
{
  dsr_route_request_t *rreq;

#line 1239
  if (/*DsrP.DsrControlP*/DsrControlP$0$RouteRequest$add(msg, sizeof(dsr_route_request_t )) != SUCCESS) {
      ;
      /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(pid);
      return FAIL;
    }
  rreq = (dsr_route_request_t *)/*DsrP.DsrControlP*/DsrControlP$0$RouteRequest$value(msg);
  if (rreq == (void *)0) {
      ;
      /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(pid);
      return FAIL;
    }

  __nesc_hton_uint8((unsigned char *)&rreq->ident, /*DsrP.DsrControlP*/DsrControlP$0$nextIdent++);
  /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$setDestination(msg, AM_BROADCAST_ADDR);
  /*DsrP.DsrControlP*/DsrControlP$0$Acks$noAck(msg);
  return SUCCESS;
}

# 61 "/opt/tinyos-2.x/tos/chips/cc2420/packet/CC2420PacketC.nc"
static   error_t CC2420PacketC$Acks$noAck(message_t *p_msg)
#line 61
{
  unsigned char *__nesc_temp51;

#line 62
  (__nesc_temp51 = (unsigned char *)&CC2420PacketC$CC2420PacketBody$getHeader(p_msg)->fcf, __nesc_hton_leuint16(__nesc_temp51, __nesc_ntoh_leuint16(__nesc_temp51) & ~(1 << IEEE154_FCF_ACK_REQ)));
  return SUCCESS;
}

# 188 "../../../tos/lib/netarch/tlv/TlvPacketP.nc"
static  error_t /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSinglePacket$remove(uint8_t type, message_t *pkt)
#line 188
{
  uint8_t trailLen;
  void *data = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$preLengthChange(pkt, &trailLen);
  error_t err = /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$TlvSingle$remove(type, data, trailLen);

#line 192
  /*DsrOptionsC.TlvC.TlvPacketP*/TlvPacketP$0$postLengthChange(pkt, data, trailLen);
  return err;
}

# 285 "../../../tos/lib/netarch/dsr/DsrControlP.nc"
static  void /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$receiveAdded(packet_id_t pid, message_t *msg)
#line 285
{
  unsigned char __nesc_temp45;
  unsigned char *__nesc_temp44;
#line 286
  uint8_t optLen;
  tlv_key_t key;
  am_addr_t singleSrc = /*DsrP.DsrControlP*/DsrControlP$0$SinglePacket$source(msg);
  am_addr_t singleDest = /*DsrP.DsrControlP*/DsrControlP$0$SinglePacket$destination(msg);

#line 290
  ;
  if ((optLen = /*DsrP.DsrControlP*/DsrControlP$0$RouteRequest$length(msg)) != 0) {

      dsr_route_request_t *rreq = (dsr_route_request_t *)/*DsrP.DsrControlP*/DsrControlP$0$RouteRequest$value(msg);
      uint8_t numAddr = (optLen - sizeof(dsr_route_request_t )) / sizeof(nx_am_addr_t );

#line 295
      ;

      if (/*DsrP.DsrControlP*/DsrControlP$0$SinglePacket$isForMe(msg)) {
          ;

          /*DsrP.DsrControlP*/DsrControlP$0$addPath(singleSrc, rreq->addr, numAddr, /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$address());
          /*DsrP.DsrControlP*/DsrControlP$0$Compose$set(pid);
          /*DsrP.DsrControlP*/DsrControlP$0$composePkt$postTask();
          return;
        }
      else 
#line 304
        {
          uint8_t i;
          dsr_route_request_in_t inEntry = { .node = singleSrc, .next = 0 };
          dsr_route_request_in_t *inCache;

          if (singleSrc == /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$address()) {
              ;

              /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(pid);
              return;
            }
          for (i = 0; i < numAddr; i++) {
              if (__nesc_ntoh_uint16((unsigned char *)&rreq->addr[i]) == /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$address()) {
                  ;

                  /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(pid);
                  return;
                }
            }

          /*DsrP.DsrControlP*/DsrControlP$0$addPath(singleSrc, rreq->addr, numAddr, /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$address());


          for (i = 0; i < DSR_ROUTE_REQUEST_IDS; i++) 
            inEntry.target[i] = /*DsrP.DsrControlP*/DsrControlP$0$NULL_ADDR;
          inCache = /*DsrP.DsrControlP*/DsrControlP$0$RouteRequestInCache$insert(&inEntry);
          for (i = 0; i < DSR_ROUTE_REQUEST_IDS; i++) {
              if (inCache->ident[i] == __nesc_ntoh_uint8((unsigned char *)&rreq->ident) && 
              inCache->target[i] == singleDest) {
                  ;


                  /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(pid);
                  return;
                }
            }
          ;


          inCache->ident[inCache->next] = __nesc_ntoh_uint8((unsigned char *)&rreq->ident);
          inCache->target[inCache->next] = singleDest;
          inCache->next++;
          inCache->next %= DSR_ROUTE_REQUEST_IDS;



          if (
#line 349
          /*DsrP.DsrControlP*/DsrControlP$0$RouteRequest$setLength(msg, /*DsrP.DsrControlP*/DsrControlP$0$RouteRequest$length(msg)
           + sizeof(nx_am_addr_t )) != SUCCESS) {
              ;

              /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(pid);
              return;
            }
          __nesc_hton_uint16((unsigned char *)&rreq->addr[numAddr], /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$address());
          ;
          /*DsrP.DsrControlP*/DsrControlP$0$Acks$noAck(msg);
          /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$send(pid);
        }
    }
  for (key = /*DsrP.DsrControlP*/DsrControlP$0$RouteError$list(msg); !/*DsrP.DsrControlP*/DsrControlP$0$RouteErrorList$end(msg, key); 
  key = /*DsrP.DsrControlP*/DsrControlP$0$RouteErrorList$next(msg, key)) {

      if ((optLen = /*DsrP.DsrControlP*/DsrControlP$0$RouteError$length(msg, key)) != 0) {
          dsr_route_error_t *rerr = (dsr_route_error_t *)/*DsrP.DsrControlP*/DsrControlP$0$RouteError$value(msg, key);

#line 367
          ;

          if (__nesc_ntohbf_uint8((unsigned char *)&(*rerr), 0, 4) == DSR_NODE_UNREACHABLE_RET) {
              dsr_node_unreachable_rei_t *rerrInfo = (dsr_node_unreachable_rei_t *)& rerr->info;

#line 371
              ;

              /*DsrP.DsrControlP*/DsrControlP$0$RouteCache$removeLink(__nesc_ntoh_uint16((unsigned char *)&rerr->src), __nesc_ntoh_uint16((unsigned char *)&rerrInfo->addr), TRUE);
            }
        }
    }
  if ((optLen = /*DsrP.DsrControlP*/DsrControlP$0$SourceRoute$length(msg)) != 0) {

      dsr_source_route_t *sr = (dsr_source_route_t *)/*DsrP.DsrControlP*/DsrControlP$0$SourceRoute$value(msg);
      uint8_t numAddr = (optLen - sizeof(dsr_source_route_t )) / sizeof(nx_am_addr_t );
      am_addr_t pathSrc = singleSrc;
      am_addr_t pathDest = singleDest;
      uint8_t cacheableInterAddr = numAddr;

#line 384
      if (! __nesc_ntohbf_uint8((unsigned char *)&(*sr), 0, 1)) {
        ;
        }
      else {
        ;
        }
      if (__nesc_ntohbf_uint8((unsigned char *)&(*sr), 4, 4) > numAddr) {
          ;

          /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(pid);
          return;
        }

      if (__nesc_ntohbf_uint8((unsigned char *)&(*sr), 1, 3) > 0) {
        pathSrc = /*DsrP.DsrControlP*/DsrControlP$0$NULL_ADDR;
        }
#line 399
      if (__nesc_ntohbf_uint8((unsigned char *)&(*sr), 0, 1) && __nesc_ntohbf_uint8((unsigned char *)&(*sr), 4, 4) > 0) {
          cacheableInterAddr = numAddr - __nesc_ntohbf_uint8((unsigned char *)&(*sr), 4, 4) + 1;
          pathDest = /*DsrP.DsrControlP*/DsrControlP$0$NULL_ADDR;
        }
      /*DsrP.DsrControlP*/DsrControlP$0$addPath(pathSrc, sr->addr, cacheableInterAddr, pathDest);
      if (/*DsrP.DsrControlP*/DsrControlP$0$AMPacket$isForMe(msg)) {

          if (__nesc_ntohbf_uint8((unsigned char *)&(*sr), 4, 4) == 0) {
              ;
              if (__nesc_ntohbf_uint8((unsigned char *)&(*sr), 0, 1)) {
                  packet_id_t rreqPid = /*DsrP.DsrControlP*/DsrControlP$0$findSinglePktTo(singleSrc);

                  if (/*DsrP.DsrControlP*/DsrControlP$0$SinglePacketWaitList$end(rreqPid)) {

                      ;


                      /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(pid);
                      return;
                    }
                  ;

                  /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$upperSendDone(rreqPid, SUCCESS);
                  /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$drop(rreqPid);
                }
              /*DsrP.DsrControlP*/DsrControlP$0$SourceRoute$remove(msg);
            }
          else 
#line 425
            {
              uint8_t nextHop;

              nextHop = numAddr - (__nesc_temp44 = (unsigned char *)&(*sr), __nesc_htonbf_uint8(__nesc_temp44, 4, 4, (__nesc_temp45 = __nesc_ntohbf_uint8(__nesc_temp44, 4, 4) - 1)), __nesc_temp45);


              if (nextHop < numAddr) {
                  if (__nesc_ntoh_uint16((unsigned char *)&sr->addr[nextHop]) == singleDest) {
                      ;

                      /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$drop(pid);
                      return;
                    }
                  /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$setDestination(msg, __nesc_ntoh_uint16((unsigned char *)&sr->addr[nextHop]));
                }
              else {
#line 440
                /*DsrP.DsrControlP*/DsrControlP$0$AMPacket$setDestination(msg, singleDest);
                }
#line 441
              ;

              /*DsrP.DsrControlP*/DsrControlP$0$Acks$requestAck(msg);
              /*DsrP.DsrControlP*/DsrControlP$0$retriesLeft[pid] = DSR_MAX_RETRIES;

              if (! __nesc_ntohbf_uint8((unsigned char *)&(*sr), 0, 1)) {
                /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$sendIntercept(pid);
                }
              else {
#line 449
                /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$send(pid);
                }
#line 450
              return;
            }
        }
      else 
#line 452
        {
        }
    }


  ;
  /*DsrP.DsrControlP*/DsrControlP$0$DsrPacketEngine$receive(pid);
}

#line 1209
static void /*DsrP.DsrControlP*/DsrControlP$0$addPath(am_addr_t src, nx_am_addr_t addr[], uint8_t numAddr, am_addr_t dest)
#line 1209
{
  uint8_t i;
  uint8_t totalAddr = numAddr;
  uint8_t copyDestIdx = 0;
  route_cache_node_id_t path[numAddr + 2];

  if (src != /*DsrP.DsrControlP*/DsrControlP$0$NULL_ADDR) {
      path[0] = src;
      copyDestIdx = 1;
      totalAddr++;
    }
  if (dest != /*DsrP.DsrControlP*/DsrControlP$0$NULL_ADDR) {
    path[totalAddr++] = dest;
    }
  for (i = 0; i < numAddr; i++) 
    path[i + copyDestIdx] = __nesc_ntoh_uint16((unsigned char *)&addr[i]);

  ;
  /*DsrP.DsrControlP*/DsrControlP$0$RouteCache$addPath(path, totalAddr - 1, TRUE);
}

# 152 "../../../tos/lib/data/graph/GraphSparseP.nc"
static  graph_edge_id_t /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$insert(graph_vertex_id_t s, 
graph_vertex_id_t d)
#line 153
{
  graph_edge_id_t newEdge;

#line 155
  if (s >= 20 || d >= 20) {
      ;
      return 50;
    }
  if (!0 && /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$edge(s, d) != 50) {
    return 50;
    }
#line 161
  ;
  newEdge = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$IndexedAlloc$alloc();
  if (newEdge == 50) {
      ;
      return 50;
    }
  if (/*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[s] == 50) {
    /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$vSize++;
    }
#line 169
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[newEdge].next = /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[s];
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$e[newEdge].dest = d;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$v[s] = newEdge;
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$Graph$inserted(newEdge);
  /*DsrP.DsrRouteCacheC.SimpleLinkCacheC.GraphWeightedC.GraphSparseC.GraphSparseP*/GraphSparseP$0$printGraph();
  return newEdge;
}

# 776 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static  error_t PacketEngineP$PacketEngine$receive(am_id_t lowerId, packet_id_t pid)
#line 776
{
  message_t *msg = PacketEngineP$msgBuffer[pid].msg;

#line 778
  if ((pid >= PacketEngineP$BUFFER_SIZE || PacketEngineP$msgBuffer[pid].state != PacketEngineP$PKT_WAIT) || PacketEngineP$lid(msg) != lowerId) {
    return EINVAL;
    }
#line 780
  if (PacketEngineP$uid(msg) != AM_NO_UPPER_DATA) {

      uint8_t len = PacketEngineP$Packet$payloadLength(msg);
      void *payload = PacketEngineP$Packet$getPayload(msg, len);

#line 784
      ;
      PacketEngineP$msgBuffer[pid].msg = PacketEngineP$Receive$receive(PacketEngineP$uid(msg), msg, payload, len);
    }
  PacketEngineP$removePacket(pid);
  if (PacketEngineP$nextWaitPkt == pid) {
    PacketEngineP$moveWaitIndex();
    }
#line 790
  return SUCCESS;
}

#line 1092
static am_id_t PacketEngineP$uid(message_t *msg)
#line 1092
{
  return * (am_id_t *)PacketEngineP$SubPacket$getPayload(PacketEngineP$lid(msg), msg, sizeof(am_id_t ));
}

# 436 "../../../tos/lib/netarch/single/SinglePacketP.nc"
static  void *SinglePacketP$Packet$getPayload(message_t *msg, uint8_t len)
#line 436
{
  uint8_t *payload = SinglePacketP$SubPacket$getPayload(msg, len + sizeof(single_packet_header_t ));

#line 438
  if (payload != (void *)0) {
    payload += sizeof(single_packet_header_t );
    }
#line 440
  return payload;
}

# 82 "/opt/tinyos-2.x/tos/system/AMQueueImplP.nc"
static  error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Send$send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 83
{
  if (clientId >= 2) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg != (void *)0) {
      return EBUSY;
    }
  ;

  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$Packet$setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current >= 2) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMPacket$destination(msg);

      ;
      /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$AMSend$send(amId, dest, msg, len);
      if (err != SUCCESS) {
          ;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$current = 2;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP$0$queue[clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      ;
    }
  return SUCCESS;
}

# 839 "../../../tos/lib/netarch/multihop/PacketEngineP.nc"
static  packet_am_id_t PacketEngineP$PacketEngine$upperType(am_id_t lowerId, packet_id_t pid)
#line 839
{
  if (PacketEngineP$lid(PacketEngineP$msgBuffer[pid].msg) != lowerId) {
    return AM_INVALID_TYPE;
    }
#line 842
  return PacketEngineP$uid(PacketEngineP$msgBuffer[pid].msg);
}

# 111 "../../../tos/lib/netarch/dsr/SimpleLinkCacheP.nc"
static  void SimpleLinkCacheP$RouteCache$trackRoute(route_cache_node_id_t src, route_cache_node_id_t dest)
#line 111
{

  if (SimpleLinkCacheP$Track$get(dest)) {
    return;
    }
#line 115
  SimpleLinkCacheP$Track$set(dest);
  SimpleLinkCacheP$RouteCache$checkRoute(src, dest);
}

# 202 "../../../tos/lib/netarch/dsr/DsrControlP.nc"
static  void /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$receiveAdded(packet_id_t pid, message_t *msg)
#line 202
{
  ;

  /*DsrP.DsrControlP*/DsrControlP$0$addPath(/*DsrP.DsrControlP*/DsrControlP$0$SinglePacket$source(msg), (void *)0, 0, /*DsrP.DsrControlP*/DsrControlP$0$SinglePacket$destination(msg));

  ;
  /*DsrP.DsrControlP*/DsrControlP$0$SinglePacketEngine$receive(pid);
}

# 178 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
__attribute((signal))   void __vector_15(void)
#line 178
{
  HplAtm128Timer0AsyncP$stabiliseTimer0();
  HplAtm128Timer0AsyncP$Compare$fired();
}


__attribute((signal))   void __vector_16(void)
#line 184
{
  HplAtm128Timer0AsyncP$stabiliseTimer0();
  HplAtm128Timer0AsyncP$Timer$overflow();
}

# 195 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
__attribute((interrupt))   void __vector_12(void)
#line 195
{
  HplAtm128Timer1P$CompareA$fired();
}

__attribute((interrupt))   void __vector_13(void)
#line 199
{
  HplAtm128Timer1P$CompareB$fired();
}

__attribute((interrupt))   void __vector_24(void)
#line 203
{
  HplAtm128Timer1P$CompareC$fired();
}

__attribute((interrupt))   void __vector_11(void)
#line 207
{
  HplAtm128Timer1P$Capture$captured(HplAtm128Timer1P$Timer$get());
}

__attribute((interrupt))   void __vector_14(void)
#line 211
{
  HplAtm128Timer1P$Timer$overflow();
}

# 46 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
__attribute((signal))   void __vector_1(void)
#line 46
{
  HplAtm128InterruptSigP$IntSig0$fired();
}


__attribute((signal))   void __vector_2(void)
#line 51
{
  HplAtm128InterruptSigP$IntSig1$fired();
}


__attribute((signal))   void __vector_3(void)
#line 56
{
  HplAtm128InterruptSigP$IntSig2$fired();
}


__attribute((signal))   void __vector_4(void)
#line 61
{
  HplAtm128InterruptSigP$IntSig3$fired();
}


__attribute((signal))   void __vector_5(void)
#line 66
{
  HplAtm128InterruptSigP$IntSig4$fired();
}


__attribute((signal))   void __vector_6(void)
#line 71
{
  HplAtm128InterruptSigP$IntSig5$fired();
}


__attribute((signal))   void __vector_7(void)
#line 76
{
  HplAtm128InterruptSigP$IntSig6$fired();
}


__attribute((signal))   void __vector_8(void)
#line 81
{
  HplAtm128InterruptSigP$IntSig7$fired();
}

# 103 "/opt/tinyos-2.x/tos/chips/atm128/spi/HplAtm128SpiP.nc"
__attribute((signal))   void __vector_17(void)
#line 103
{
  HplAtm128SpiP$SPI$dataReady(HplAtm128SpiP$SPI$read());
}

