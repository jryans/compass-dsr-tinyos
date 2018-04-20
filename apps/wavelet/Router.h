/**
 * Describes a message for changing the routing configuration
 * at runtime.
 * @author Ryan Stinnett
 */

#ifndef _ROUTER_H
#define _ROUTER_H

#include "MessageType.h"

typedef struct RouterData {
  bool enable; // TRUE: enable link FALSE: disable link
  uint16_t mote; // ID of mote whose link will be altered
} __attribute__ ((packed)) RouterData;

enum {
  RO_INIT,
  RO_READY
};

#endif // _ROUTER_H
