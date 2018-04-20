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

/**
 * Provides access to the various types of DSR Options.
 *
 * @author Ryan Stinnett
 */

#include "DsrOptions.h"

configuration DsrOptionsC {
  provides {
    interface TlvBlockPacket as DsrHeader;
    interface TlvSinglePacket as RouteRequest;
    interface TlvMultiplePacket as RouteReply;
    interface StaticIndexedIterator<message_t, tlv_key_t> as RouteReplyList;
    interface TlvMultiplePacket as RouteError;
    interface StaticIndexedIterator<message_t, tlv_key_t> as RouteErrorList;
    interface TlvSinglePacket as AckRequest;
    interface TlvMultiplePacket as Ack;
    interface StaticIndexedIterator<message_t, tlv_key_t> as AckList;
    interface TlvSinglePacket as SourceRoute;

    interface Packet;
  }
  uses interface Packet as SubPacket;
}

implementation {

  components new TlvPacketC() as TlvC;

  DsrHeader = TlvC;

  RouteRequest = TlvC.TlvSinglePacket[DSR_ROUTE_REQUEST_TYPE];

  RouteReply = TlvC.TlvMultiplePacket[DSR_ROUTE_REPLY_TYPE];
  RouteReplyList = TlvC.TlvListPacket[DSR_ROUTE_REPLY_TYPE];

  RouteError = TlvC.TlvMultiplePacket[DSR_ROUTE_ERROR_TYPE];
  RouteErrorList = TlvC.TlvListPacket[DSR_ROUTE_ERROR_TYPE];

  AckRequest = TlvC.TlvSinglePacket[DSR_ACK_REQUEST_TYPE];

  Ack = TlvC.TlvMultiplePacket[DSR_ACK_TYPE];
  AckList = TlvC.TlvListPacket[DSR_ACK_TYPE];

  SourceRoute = TlvC.TlvSinglePacket[DSR_SOURCE_ROUTE_TYPE];

  Packet = TlvC;
  SubPacket = TlvC;

}
