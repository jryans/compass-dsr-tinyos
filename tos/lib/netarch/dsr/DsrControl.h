/*
 * Copyright (c) 2006-2007 Rice University
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the Rice University nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL RICE
 * UNIVERSITY OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef DSRCONTROL_H
#define DSRCONTROL_H

#include <AM.h>

enum {
  AM_DSR                     = 48,
  DSR_ROUTE_REQUEST_OUT_SIZE = 8,
  DSR_ROUTE_REQUEST_IN_SIZE  = 8,
  DSR_ROUTE_REQUEST_IDS      = 4,
  DSR_HOP_LIMIT              = 255,
  DSR_MAX_REQUEST_ATTMEPTS   = 16,
  DSR_MAX_REQUEST_PERIOD     = 10240, // 10 s
  DSR_INIT_REQUEST_PERIOD    = 512,   // 500 ms
  DSR_MAX_RETRIES            = 2,
  DSR_MAX_SALVAGE_COUNT      = 16
};

#define UQ_DSR_SEND_CLIENT "DsrC.Send"

#ifndef DSR_ROUTE_CACHE_MAX_NODES
#define DSR_ROUTE_CACHE_MAX_NODES 9
#endif // DSR_ROUTE_CACHE_MAX_NODES

#ifndef DSR_ROUTE_CACHE_MAX_LINKS
#define DSR_ROUTE_CACHE_MAX_LINKS 64
#endif // DSR_ROUTE_CACHE_MAX_LINKS

typedef struct {
  am_addr_t node;
  uint8_t hopsLeft;
  uint8_t rreqsSinceRrep;
} dsr_route_request_out_t;

typedef struct {
  am_addr_t node;
  uint8_t next;
  uint8_t ident[DSR_ROUTE_REQUEST_IDS];
  am_addr_t target[DSR_ROUTE_REQUEST_IDS];
} dsr_route_request_in_t;

#endif // DSRCONTROL_H
