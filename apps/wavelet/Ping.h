/**
 * Describes a broadcast ping message used for testing link quality.
 * @author Ryan Stinnett
 */

#ifndef _PING_H
#define _PING_H

#include "MessageType.h"

typedef struct Ping { // Broadcast Ping Msg
  uint16_t seqNum; // Current sequence number
} __attribute__ ((packed)) PingData;

enum {
  //PING_INTERVAL = 30
  PING_INTERVAL = 5
};

#endif // _PING_H
