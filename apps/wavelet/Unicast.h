/**
 * Describes the unicast protocol's header.
 * @author Ryan Stinnett
 */

#ifndef _UNICAST_H
#define _UNICAST_H

#include <AM.h>

typedef struct {
  uint16_t src;
  uint16_t dest;
  uint8_t attemptNum;
} __attribute__ ((packed)) uHeader;

enum {
  NET_UART_ADDR = 0xfffe,
  NET_BAD_ROUTE = 0xfffd
};

enum {
  UCAST_DEF_MAX_SEND_ATTEMPTS = 5
};

// External version for PC side code

enum {
  AM_UNICASTPACK = -1
};

struct UnicastPack {
  uHeader h;
  uint8_t data[TOSH_DATA_LENGTH - sizeof(uHeader)];
} __attribute__ ((packed));

#endif /* _UNICAST_H */
