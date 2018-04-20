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
 * Access and set the properties of a multihop packet with a single
 * node address based destination.
 *
 * @author Ryan Stinnett
 */

interface SinglePacket {

  /**
   * Returns the address of the source of the multihop packet.
   *
   * @param msg Pointer to the packet.
   * @return The source node of the multihop packet.
   */
  command am_addr_t source(message_t* msg);

  /**
   * Sets the address of the source of the multihop packet.  As with
   * the AM layer, this is set by the multihop layer, and should not
   * need to be used when sending a packet.  However, buffers or other
   * storage components may wish to use it to store the address for
   * later retrieval.
   *
   * @param msg Pointer to the packet.
   * @param src The source node of the multihop packet.
   */
  command void setSource(message_t* msg, am_addr_t src);

  /**
   * Returns the address of the destination of the multihop packet.
   *
   * @param msg Pointer to the packet.
   * @return The destination node of the multihop packet.
   */
  command am_addr_t destination(message_t* msg);

  /**
   * Sets the address of the destination of the multihop packet.  As
   * with the AM layer, this is set by the multihop layer, and should not
   * need to be used when sending a packet.  However, buffers or other
   * storage components may wish to use it to store the address for
   * later retrieval.
   *
   * @param msg Pointer to the packet.
   * @param dest The destination node of the multihop packet.
   */
  command void setDestination(message_t* msg, am_addr_t dest);

  /**
   * As with the AM layer, returns whether this node is the destination
   * for the packet, but can also include special processing for broadcast
   * addresses or similar values.
   *
   * @param msg Pointer to the packet.
   * @return Whether this node is the destination of the multihop packet.
   */
  command bool isForMe(message_t* msg);

}
