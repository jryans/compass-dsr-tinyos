/**
 * Describes the broadcast protocol's header.
 * @author Ryan Stinnett
 */

#ifndef _BROADCAST_H
#define _BROADCAST_H

#include <AM.h>

typedef struct {
  int16_t seqNo;
} __attribute__ ((packed)) bHeader;

enum {
  BCAST_REP_DELAY = 200,
  BCAST_REPEATS = 3
};

// External version for PC side code

enum {
  AM_BROADCASTPACK = -1
};

struct BroadcastPack {
  bHeader h;
  uint8_t data[TOSH_DATA_LENGTH - sizeof(bHeader)];
} __attribute__ ((packed));

#endif /* _BROADCAST_H */
