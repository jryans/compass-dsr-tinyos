/**
 * Defines various datatypes and constants used by the wavelet
 * application, including packets for obtaining configuration
 * data over the network.
 * @author Ryan Stinnett
 */

#ifndef _WAVELET_H
#define _WAVELET_H

#include "MessageType.h"
#include "Sensors.h"

/*** Internal Wavelet Data ***/

typedef struct { // Describes each neighbor mote
  uint16_t id; // ID number of the mote 
  bool stale; // Data cache status (1: stale | 0: recent)
  float coeff; // WT coeff for the mote
	float value[WT_SENSORS];		// Holds one value for each sensor (only two sensors for now)
} __attribute__ ((packed)) WaveletNeighbor;

typedef struct {
  uint8_t nbCount; // Number of neighbors at this scale
  WaveletNeighbor *nb; // Array of WaveletNeighbors
} __attribute__ ((packed)) WaveletScale;

typedef struct {
	float value[WT_SENSORS]; // Working value for each sensor
#ifdef RAW
  float rawValue[WT_SENSORS]; // Raw value for each sensor
#endif
} __attribute__ ((packed)) WaveletSample;

/*** Transmitted Data ***/

typedef struct WaveletData {
  uint8_t dataSet; // Data set this data belongs to
	uint8_t scale; // Wavelet scale this data belongs to
	uint8_t state; // State this mote has at this scale
	float value[][WT_SENSORS]; // Array of values per sensor, per time sample
} __attribute__ ((packed)) WaveletData;

/*** Big Pack Data ***/

typedef struct wn { // Describes each neighbor mote
  uint16_t id; // ID number of the mote 
  float coeff; // WT coeff for the mote
} __attribute__ ((packed)) ExtWaveletNeighbor;

typedef struct ws {
  uint8_t myState; // State this mote has at this scale
  uint8_t nbCount; // Number of neighbors at this scale
  ExtWaveletNeighbor *nb; // Array of ExtWaveletNeighbors
} __attribute__ ((packed)) ExtWaveletScale;

typedef struct wc {
  uint8_t numScales; 
  ExtWaveletScale **scale; // Array of ExtWaveletScales
} __attribute__ ((packed)) ExtWaveletConf;

/*** State Control ***/

enum { // Wavelet Transform States
  WS_IDLE = 0,
  WS_CONFIGURE = 1,
  WS_START_DATASET = 2,
  WS_READING_SENSORS = 3,
  WS_UPDATING = 4,
  WS_PREDICTING = 5,
  WS_CACHE = 6,
  WS_PREDICTED = 7,
  WS_UPDATED = 8,
  WS_SKIP_SCALE = 9,
  WS_TRANSMIT = 10,
  WS_OFFLINE = 11,
  WS_CLEAR_SENSORS = 12,
  WS_RAW = 13
};

// Based on diagram at http://www.gliffy.com/publish/1039648/L
enum { // State Delay Table (bms)
  WSD_CS_TO_RS = 1000,
  WSD_RS_TO_ANY = 500,
  WSD_SDS_TO_UING = 1000,
  WSD_SDS_TO_OTHER = 500,
  WSD_UING_TO_UED = 2000,
  WSD_PING_TO_PED = 1500,
  WSD_PED_TO_IDLE = 500,
  WSD_UED_TO_UING = 1000,
  WSD_UED_TO_OTHER = 500,
  WSD_SKIP_TO_UING = 3500,
  WSD_SKIP_TO_IDLE = 2500,
  WSD_SKIP_TO_OTHER = 3000
};

enum { // Stage Length Table (bms)
  WT_COLLECT_SAMPLE_TIME = WSD_CS_TO_RS + WSD_RS_TO_ANY,
  WT_SCALE_J_TIME = WSD_SDS_TO_OTHER + WSD_SKIP_TO_OTHER,
  WT_SCALE_OTHER_TIME = WSD_SKIP_TO_OTHER
};

typedef struct {
  uint32_t sampleTime; // Length of time between samples
  uint8_t transformType; // One of various transform types
  uint8_t resultType; // Controls data sent back to base
  uint8_t timeDomainLength; // Number of data points collected for TD transform
} __attribute__ ((packed)) WaveletOpt;

enum { // Transmit Options
  WT_SLOTS = 8, // Number of transmit slots (must be power of 2)
  WT_SLOT_TIME = 50, // Length of one slot (bms)
  WT_MAX_BANDS = 5, // Maximum number of compression bands
  WT_SLOT_STAGE_TIME = WT_SLOTS * WT_SLOT_TIME, // Length of entire slot stage (bms)
  // Length of wait time after sending one band of data in compressed mode (bms)
  WT_WAIT_STAGE_TIME = 2000,
  // Length of an entire compression band (bms)                            
  WT_BAND_TIME = WT_SLOT_STAGE_TIME + WT_WAIT_STAGE_TIME
};

typedef struct {
  uint8_t numBands; // Number of bands in the following array
  float compTarget[WT_MAX_BANDS]; // Array of compression target values for each band
} __attribute__ ((packed)) WaveletComp;

typedef struct WaveletControl { 
  uint8_t mask; // Bit mask to mark what settings should be read
  uint8_t cmd; // One of the following commands
  union {
    WaveletOpt opt;
    WaveletComp comp;
  } data;
} __attribute__ ((packed)) WaveletControl;

enum { // Commands
  WC_CONFIGURE = 0,
  WC_START_TRANSFORM = 1,
  WC_STOP_TRANSFORM = 2,
  WC_STOP_DATASET = 3
};

enum { // Bitmasks
  WC_CMD = 0x01,
  WC_SAMPLETIME = 0x02,
  WC_TRANSFORMTYPE = 0x04,
  WC_RESULTTYPE = 0x08,
  WC_TIMEDOMAINLENGTH = 0x10,
  WC_COMPTARGET = 0x20
};

enum { // Transform Types
  WC_TT_2DRWAGNER = 0, // 2D spatial R. Wagner
  WC_TT_1DHAAR_2DRWAGNER = 1, // 1D time Haar -> 2D spatial R. Wagner
  WC_TT_1DLINEAR_2DRWAGNER = 2 // 1D time linear -> 2D spatial R. Wagner
};

enum { // Result Masks
#ifdef RAW
  WC_RT_RAW = 0x01, // Raw values (off|on)
#endif
  WC_RT_COMP = 0x02 // Compression (off|on)
};

#endif // _WAVELET_H
