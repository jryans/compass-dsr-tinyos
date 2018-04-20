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
 * Manipulate a packet with a TLV block independent of the types it
 * contains.
 *
 * @author Ryan Stinnett
 */

interface TlvBlockPacket {

  /**
   * Adds a TLV block at the beginning of a given packet.  Other
   * data is moved to accomidate it.  This must be called on any new TLV
   * block before using any other TLV commands.
   *
   * @param pkt Pointer to the packet.
   * @return SUCCESS if the add completed, ESIZE if there wasn't enough
   *         space.
   */
  command error_t add(message_t* pkt);

  /**
   * Removes a TLV block from the beginning of a given packet. Other
   * data is moved to fill the gap.
   *
   * @param pkt Pointer to the packet.
   */
  command void remove(message_t* pkt);

  /**
   * Returns the length of the entire TLV block, including the block
   * length value itself.
   *
   * @param pkt Pointer to the packet.
   * @return Length of the TLV block.
   */
  command uint8_t length(message_t* pkt);

}
