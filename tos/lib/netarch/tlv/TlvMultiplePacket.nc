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
 * Access data stored in a generalized Type-Length-Value (TLV) block
 * within a packet.  This interface, when used together with the TlvList
 * interface, has no restrictions of the number of instances of a type.
 *
 * @author Ryan Stinnett
 */

#include "Tlv.h"

interface TlvMultiplePacket {

  /**
   * Returns the length of this type instance within the TLV block.  If
   * the type instance is not found in the block, then 0 is returned.
   *
   * @param pkt Pointer to the packet.
   * @param key Key for the TLV type instance.
   * @return Length of this TLV type.
   */
  command uint8_t length(message_t* pkt, tlv_key_t key);

  /**
   * Sets the length of a type instance within the TLV block.  This
   * operation moves data around and should always be performed before
   * storing a value with a different length than the one currently
   * stored.  If the type instance is not found in the block or there
   * is not enough room for the new length, returns ESIZE.
   *
   * Setting the length of a type instance typically invalidates any
   * keys received prior to the change.
   *
   * @param pkt Pointer to the packet.
   * @param key Key for the TLV type instance.
   * @param len Length to set for this TLV type.
   * @return SUCCESS if the type instance was found, enough space was
   *         available, and the length was set, ESIZE if wasn't enough
   *         space, EINVAL if the instance wasn't found.
   */
  command error_t setLength(message_t* pkt, tlv_key_t key,
                            uint8_t len);

  /**
   * Returns the value in this type instance within the TLV block.  If
   * the type instance is not found in the block, then NULL is returned.
   *
   * @param pkt Pointer to the packet.
   * @param key Key for the TLV type instance.
   * @return Pointer to the value in this TLV type.
   */
  command void* value(message_t* pkt, tlv_key_t key);

  /**
   * Adds an instance of a type to the TLV block and sets the initial
   * length of the instance.  This operation moves data around and
   * should always be performed before storing a value of the given
   * type.  The type instance will be added to the block as long as
   * there are at least len + 2 bytes available in the buffer holding
   * the TLV block.
   *
   * @param pkt Pointer to the packet.
   * @param key Pointer to store the key for the TLV type instance.
   * @param len Length to set for this TLV type.
   * @return SUCCESS if enough space was available and the length was
   *         set, ESIZE if there wasn't enough space.
   */
  command error_t add(message_t* pkt, tlv_key_t* key,
                      uint8_t len);

  /**
   * Removes this type instance from the TLV block.
   *
   * @param pkt Pointer to the packet.
   * @param key Key for the TLV type instance.
   * @return SUCCESS if the type instance was found and removed, EINVAL
   *         otherwise.
   */
  command error_t remove(message_t* pkt, tlv_key_t key);

  /**
   * Access a list of all instances of a type within the TLV block.
   * This command gives the key for the first such instance.
   * Traverse the rest of the list with the TlvList interface.
   *
   * @param pkt Pointer to the packet.
   * @return The key for the first instance of a type in the TLV
   *         block.
   */
  command tlv_key_t list(message_t* pkt);

}
