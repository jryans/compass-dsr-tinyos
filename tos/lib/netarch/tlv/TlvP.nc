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
 * A general Type-Length-Value (TLV) data processor.  This component
 * does not assume any ordering by type among the TLV types in a
 * block of types.  If at most one instance of a type is allowed,
 * access the type via the TlvSingle interface.  If any number of
 * instances are allowed, access the type via the TlvMultiple and
 * TlvList interfaces.
 *
 * @author Ryan Stinnett
 */

#include "Tlv.h"

module TlvP {
  provides {
    interface TlvBlock;
    interface TlvSingle[uint8_t type];
    interface TlvMultiple[uint8_t type];
    interface StaticVoidIndexedIterator<tlv_key_t> as TlvList[uint8_t type];
  }
}

implementation {

  /********** Variables **********/

  enum {
    TLV_FIRST_KEY = 255
  };

  /********** Function Declarations **********/

  tlv_t* tlvAt(void* block, tlv_key_t key);

  /********** TlvBlock **********/

  /**
   * Adds a TLV block at the beginning of a given data buffer.  Other
   * data is moved to accomidate it.  This must be called on any new TLV
   * block before using any other TLV commands.
   *
   * @param block Pointer to the TLV block.
   * @param trailLen Current length of trailing data.
   * @param maxLen Maximum possible length of TLV block and trailing data.
   * @return SUCCESS if the add completed, ESIZE if there wasn't enough
   *         space.
   */
  command error_t TlvBlock.add(void* block, uint8_t trailLen, uint8_t maxLen) {
    tlv_block_t* blk = (tlv_block_t*)block;
    uint8_t diff = sizeof(tlv_block_t);
    if (trailLen + diff > maxLen) {
      dbgerror("TlvP", "TLV: Not enough room to add TLV block!\n");
      return ESIZE;
    }
    memmove(block + diff, block, trailLen);
    blk->len = 0;
    return SUCCESS;
  }

  /**
   * Removes a TLV block from the beginning of a given data buffer.
   * Other data is moved to fill the gap.
   *
   * @param block Pointer to the TLV block.
   * @param trailLen Current length of trailing data.
   */
  command void TlvBlock.remove(void* block, uint8_t trailLen) {
    tlv_block_t* blk = (tlv_block_t*)block;
    int16_t diff = sizeof(tlv_block_t) + blk->len;
    memmove(block, block + diff, trailLen);
  }

  /**
   * Returns the length of the entire TLV block, including the block
   * length value itself.
   *
   * @param block Pointer to the TLV block.
   * @return Length of the TLV block.
   */
  command uint8_t TlvBlock.length(void* block) {
    tlv_block_t* blk = (tlv_block_t*)block;
    return sizeof(tlv_block_t) + blk->len;
  }

  /********** TlvSingle **********/

  /**
   * Returns the length of this type instance within the TLV block.  If
   * the type instance is not found in the block, then 0 is returned.
   *
   * @param block Pointer to the TLV block.
   * @return Length of this TLV type.
   */
  command uint8_t TlvSingle.length[uint8_t type](void* block) {
    tlv_key_t key = call TlvList.next[type](block, TLV_FIRST_KEY);
    if (call TlvList.end[type](block, key))
      return 0;
    return call TlvMultiple.length[type](block, key);
  }

  /**
   * Sets the length of a type instance within the TLV block.  This
   * operation moves data around and should always be performed before
   * storing a value with a different length than the one currently
   * stored.  If the type instance is not found in the block or there
   * is not enough room for the new length, returns ESIZE.
   *
   * @param block Pointer to the TLV block.
   * @param len Length to set for this TLV type.
   * @param trailLen Current length of trailing data.
   * @param maxLen Maximum possible length of TLV block and trailing data.
   * @return SUCCESS if the type instance was found, enough space was
   *         available, and the length was set, ESIZE if there wasn't
   *         enough space, EINVAL if the instance wasn't found.
   */
  command error_t TlvSingle.setLength[uint8_t type](void* block, uint8_t len,
                                              uint8_t trailLen, uint8_t maxLen) {
    tlv_key_t key = call TlvList.next[type](block, TLV_FIRST_KEY);
    if (call TlvList.end[type](block, key))
      return EINVAL;
    return call TlvMultiple.setLength[type](block, key, len, trailLen, maxLen);
  }

  /**
   * Returns the value in this type instance within the TLV block.  If
   * the type instance is not found in the block, then NULL is returned.
   *
   * @param block Pointer to the TLV block.
   * @return Pointer to the value in this TLV type.
   */
  command void* TlvSingle.value[uint8_t type](void* block) {
    tlv_key_t key = call TlvList.next[type](block, TLV_FIRST_KEY);
    if (call TlvList.end[type](block, key))
      return NULL;
    return call TlvMultiple.value[type](block, key);
  }

  /**
   * Adds an instance of a type to the TLV block and sets the initial
   * length of the instance.  This operation moves data around and
   * should always be performed before storing a value of the given
   * type.  The type instance will be added to the block as long as
   * there are at least len + 2 bytes available in the buffer holding
   * the TLV block.
   *
   * @param block Pointer to the TLV block.
   * @param len Length to set for this TLV type.
   * @param trailLen Current length of trailing data.
   * @param maxLen Maximum possible length of TLV block and trailing data.
   * @return SUCCESS if enough space was available and the length was
   *         set, EALREADY if an instance already exists, ESIZE if
   *         there wasn't enough space.
   */
  command error_t TlvSingle.add[uint8_t type](void* block, uint8_t len,
                                        uint8_t trailLen, uint8_t maxLen) {
    if (!call TlvList.end[type](block, call TlvList.next[type](block, TLV_FIRST_KEY)))
      return EALREADY; // Only one instance allowed
    return call TlvMultiple.add[type](block, NULL, len, trailLen, maxLen);
  }

  /**
   * Removes this type instance from the TLV block.
   *
   * @param block Pointer to the TLV block.
   * @param trailLen Current length of trailing data.
   * @return SUCCESS if the type instance was found and removed, EINVAL
   *         otherwise.
   */
  command error_t TlvSingle.remove[uint8_t type](void* block, uint8_t trailLen) {
    return call TlvMultiple.remove[type](block, call TlvList.next[type](block, TLV_FIRST_KEY),
                                         trailLen);
  }

  /********** TlvMultiple **********/

  /**
   * Returns the length of this type instance within the TLV block.  If
   * the type instance is not found in the block, then 0 is returned.
   *
   * @param block Pointer to the TLV block.
   * @param key Key for the TLV type instance.
   * @return Length of this TLV type.
   */
  command uint8_t TlvMultiple.length[uint8_t type](void* block, tlv_key_t key) {
    tlv_t* cur = tlvAt(block, key);
    if (call TlvList.end[type](block, key) || cur->type != type) {
      dbgerror("TlvP", "TLV: Key too large or type doesn't match!\n");
      return 0;
    }
    return cur->len;
  }

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
   * @param block Pointer to the TLV block.
   * @param key Key for the TLV type instance.
   * @param len Length to set for this TLV type.
   * @param trailLen Current length of trailing data.
   * @param maxLen Maximum possible length of TLV block and trailing data.
   * @return SUCCESS if the type instance was found, enough space was
   *         available, and the length was set, ESIZE if wasn't enough
   *         space, EINVAL if the instance wasn't found.
   */
  command error_t TlvMultiple.setLength[uint8_t type](void* block, tlv_key_t key,
                                                      uint8_t len, uint8_t trailLen,
                                                      uint8_t maxLen) {
    tlv_block_t* blk = (tlv_block_t*)block;
    tlv_t* cur = tlvAt(block, key);
    void* trail;
    int16_t diff;
    uint8_t tlvTrailLen;
    if (call TlvList.end[type](block, key) || cur->type != type) {
      dbgerror("TlvP", "TLV: Key too large or type doesn't match!\n");
      return EINVAL;
    }
    // TLV type found in block, modify length and move data
    diff = len - cur->len;
    trail = (void*)cur + sizeof(tlv_t) + cur->len;
    // Add any following TLV blocks to trailing length
    tlvTrailLen = call TlvBlock.length(block) - (uint8_t)(trail - block) + trailLen;
    if (!len)
      diff -= sizeof(tlv_t); // Remove TLV type
    if (diff > 0 && call TlvBlock.length(block) + diff + trailLen > maxLen) {
      dbgerror("TlvP", "TLV: Not enough room to set length of type %hhu to %hhu!\n", type, len);
      return ESIZE;
    }
    dbg("TlvP", "TLV: Setting length of type %hhu to %hhu\n", type, len);
    blk->len += diff;
    memmove(trail + diff, trail, tlvTrailLen); // Move data
    if (len)
      cur->len = len; // Modify length
    return SUCCESS;
  }

  /**
   * Returns the value in this type instance within the TLV block.  If
   * the type instance is not found in the block, then NULL is returned.
   *
   * @param block Pointer to the TLV block.
   * @param key Key for the TLV type instance.
   * @return Pointer to the value in this TLV type.
   */
  command void* TlvMultiple.value[uint8_t type](void* block, tlv_key_t key) {
    tlv_t* cur = tlvAt(block, key);
    if (call TlvList.end[type](block, key) || cur->type != type) {
      dbgerror("TlvP", "TLV: Key too large or type doesn't match!\n");
      return NULL;
    }
    return (void*)cur->val;
  }

  /**
   * Adds an instance of a type to the TLV block and sets the initial
   * length of the instance.  This operation moves data around and
   * should always be performed before storing a value of the given
   * type.  The type instance will be added to the block as long as
   * there are at least len + 2 bytes available in the buffer holding
   * the TLV block.
   *
   * @param block Pointer to the TLV block.
   * @param key Pointer to store the key for the TLV type instance.
   * @param len Length to set for this TLV type.
   * @param trailLen Current length of trailing data.
   * @param maxLen Maximum possible length of TLV block and trailing data.
   * @return SUCCESS if enough space was available and the length was
   *         set, ESIZE if there wasn't enough space.
   */
  command error_t TlvMultiple.add[uint8_t type](void* block, tlv_key_t* key,
                                                uint8_t len, uint8_t trailLen, uint8_t maxLen) {
    tlv_block_t* blk = (tlv_block_t*)block;
    tlv_t* cur;
    uint8_t diff = sizeof(tlv_t) + len;
    if (call TlvBlock.length(block) + diff > maxLen) {
      dbgerror("TlvP", "TLV: Not enough room to add type %hhu!\n", type);
      return ESIZE;
    }
    dbg("TlvP", "TLV: Adding type %hhu with length %hhu\n", type, len);
    cur = (tlv_t*)((void*)blk->tlv + blk->len); // Point to new TLV
    memmove((void*)cur + diff, cur, trailLen); // Move trailing data
    // Setup new TLV
    if (key != NULL && len)
      *key = blk->len;
    blk->len += diff;
    cur->type = type;
    cur->len = len;
    return SUCCESS;
  }

  /**
   * Removes this type instance from the TLV block.
   *
   * @param block Pointer to the TLV block.
   * @param key Key for the TLV type instance.
   * @param trailLen Current length of trailing data.
   * @return SUCCESS if the type instance was found and removed, EINVAL
   *         otherwise.
   */
  command error_t TlvMultiple.remove[uint8_t type](void* block, tlv_key_t key, uint8_t trailLen) {
    return call TlvMultiple.setLength[type](block, key, 0, trailLen, 0);
  }

  /**
   * Access a list of all instances of a type within the TLV block.
   * This command gives the key for the first such instance.
   * Traverse the rest of the list with the TlvList interface.
   *
   * @return The key for the first instance of a type in the TLV
   *         block.
   */
  command tlv_key_t TlvMultiple.list[uint8_t type](void* block) {
    return call TlvList.next[type](block, TLV_FIRST_KEY);
  }

  /********** TlvList **********/

  /**
   * Locates the next instance of the type within a TLV block.
   *
   * @param block Pointer to the TLV block.
   * @param key Key for the current instance of the type.
   * @return The key for the next instance of a type.
   */
  command tlv_key_t TlvList.next[uint8_t type](void* block, tlv_key_t key) {
    tlv_t* cur;
    if (key == TLV_FIRST_KEY)
      key = 0;
    else {
      cur = tlvAt(block, key); // Move key bytes past the block
      key += sizeof(tlv_t) + cur->len;
    }
    while (!call TlvList.end[type](block, key)) {
      cur = tlvAt(block, key); // Move key bytes past the block
      if (cur->type == type) {
        dbg("TlvP", "TLV: Type %hhu found at byte %hhu\n", type, key);
        return key;
      }
      key += sizeof(tlv_t) + cur->len;
    }
    dbg("TlvP", "TLV: Type %hhu not found\n", type);
    return key;
  }

  /**
   * Checks whether you have already reached the end of the TLV block.
   *
   * @param block Pointer to the TLV block.
   * @param key Key for the current instance of the type.
   * @return TRUE if the current item is the end of the list, FALSE otherwise.
   */
  command iterator_end_t TlvList.end[uint8_t type](void* block, tlv_key_t key) {
    tlv_block_t* blk = (tlv_block_t*)block;
    return key >= blk->len;
  }

  /********** Functions **********/

  /**
   * Returns a pointer to a type instance key bytes into the TLV block.
   *
   * @param block Pointer to the TLV block.
   * @param key Key for the TLV type instance.
   * @return Pointer to a type instance, or NULL if the key is too large.
   */
  tlv_t* tlvAt(void* block, tlv_key_t key) {
    return (tlv_t*)(block + sizeof(tlv_block_t) + key);
  }

}
