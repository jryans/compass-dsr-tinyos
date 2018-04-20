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

/*
 * Describes a modified set of DSR (Dynamic Source Routing) options
 * which are based on the specifications in Section 6 of RFC 4728. Since
 * this DSR implementation is not intended to be compatible with other
 * networks, it uses this modified format which conserves space and
 * removes features that are superfluous in a pure WSN environment.
 *
 * @author Ryan Stinnett
 */

#ifndef DSROPTIONS_H
#define DSROPTIONS_H

/*
 * DSR Options Header
 *
 *  0                   1                   2                   3
 *  0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
 *                                                 +-+-+-+-+-+-+-+-+
 *                                                 |  Options Len  |
 * +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 * .                                                               .
 * .                            Options                            .
 * .                                                               .
 * +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 */

enum dsr_option_types {
	DSR_ROUTE_REQUEST_TYPE = 1,
	DSR_ROUTE_REPLY_TYPE   = 2,
	DSR_ROUTE_ERROR_TYPE   = 3,
	DSR_ACK_REQUEST_TYPE   = 160,
	DSR_ACK_TYPE           = 32,
	DSR_SOURCE_ROUTE_TYPE  = 96
};

/*
 * Route Request Option
 *
 *  0                   1                   2                   3
 *  0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
 *                 +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 *                 |  Option Type  |  Opt Data Len |     Ident     |
 * +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 * |           Address[0]          |              ...              |
 * +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 * |           Address[n]          |
 * +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 */

typedef nx_struct {
	nx_uint8_t ident;
	nx_am_addr_t addr[0];
} dsr_route_request_t;

/*
 * Route Reply Option
 *
 *  0                   1                   2                   3
 *  0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
 * +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 * |  Option Type  |  Opt Data Len |           Address[0]          |
 * +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 * |              ...              |           Address[n]          |
 * +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 */

typedef nx_struct {
	nx_am_addr_t addr[0];
} dsr_route_reply_t;

/*
 * Route Error Option
 *
 *  0                   1                   2                   3
 *  0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
 *                 +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 *                 |  Option Type  |  Opt Data Len |ErrType|Salvage|
 * +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 * |     Error Source Address      |   Error Destination Address   |
 * +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 * .                                                               .
 * .                   Type-Specific Information                   .
 * .                                                               .
 * +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 */

typedef nx_struct {
	nx_uint8_t type    : 4;
	nx_uint8_t salvage : 4;
	nx_am_addr_t src;
	nx_am_addr_t dest;
	nx_uint8_t info[0];
} dsr_route_error_t;

enum dsr_route_error_types {
	DSR_NODE_UNREACHABLE_RET = 1,
	DSR_FLOW_STATE_NOT_SUPPORTED_RET = 2,
	DSR_OPTION_NOT_SUPPORTED_RET = 3
};

typedef nx_struct {
	nx_am_addr_t addr;
} dsr_node_unreachable_rei_t;

typedef nx_struct {
	nx_uint8_t type;
} dsr_option_not_supported_rei_t;

/*
 * Acknowledgement Request Option
 *
 *  0                   1                   2
 *  0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3
 * +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 * |  Option Type  |  Opt Data Len |     Ident     |
 * +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 */

typedef nx_struct {
	nx_uint8_t ident;
} dsr_ack_request_t;

/*
 * Acknowledgement Option
 *
 *  0                   1                   2                   3
 *  0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
 *                 +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 *                 |  Option Type  |  Opt Data Len |     Ident     |
 * +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 * |      ACK Source Address       |    ACK Destination Address    |
 * +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 */

typedef nx_struct {
	nx_uint8_t ident;
	nx_am_addr_t src;
	nx_am_addr_t dest;
} dsr_ack_t;

/*
 * DSR Source Route Option
 *
 *  0                   1                   2                   3
 *  0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
 *                 +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 *                 |  Option Type  |  Opt Data Len |Salvage|SegsRem|
 * +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 * |           Address[0]          |              ...              |
 * +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 * |           Address[n]          |
 * +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 */

typedef nx_struct {
  nx_uint8_t routeReply : 1;
	nx_uint8_t salvage    : 3;
	nx_uint8_t segsLeft   : 4;
	nx_am_addr_t addr[0];
} dsr_source_route_t;

#endif // DSROPTIONS_H
