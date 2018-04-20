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
 * A general Type-Length-Value (TLV) data processor within a packet.
 * This component does not assume any ordering by type among the TLV
 * types in a block of types.  If at most one instance of a type is
 * allowed, access the type via the TlvSingle interface.  If any number
 * of instances are allowed, access the type via the TlvMultiple and
 * TlvList interfaces.
 *
 * @author Ryan Stinnett
 */

#include "Tlv.h"

generic configuration TlvPacketC() {
  provides {
    interface TlvBlockPacket;
    interface TlvSinglePacket[uint8_t type];
    interface TlvMultiplePacket[uint8_t type];
    interface StaticIndexedIterator<message_t, tlv_key_t> as TlvListPacket[uint8_t type];
    interface Packet;
  }
  uses {
    interface Packet as SubPacket;
  }
}

implementation {

  components new TlvPacketP(), TlvP;

  TlvBlockPacket = TlvPacketP;
  TlvSinglePacket = TlvPacketP;
  TlvMultiplePacket = TlvPacketP;
  TlvListPacket = TlvPacketP;
  Packet = TlvPacketP;
  SubPacket = TlvPacketP;

  TlvPacketP.TlvBlock -> TlvP;
  TlvPacketP.TlvSingle -> TlvP;
  TlvPacketP.TlvMultiple -> TlvP;
  TlvPacketP.TlvList -> TlvP;

}
