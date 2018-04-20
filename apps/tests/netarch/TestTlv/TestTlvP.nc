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
 * Test cases to verify that TlvP works correctly.
 *
 * @author Ryan Stinnett
 */
 
#include <Tlv.h>
 
module TestTlvP {
  uses {
    interface Boot;
    interface TlvBlock;
    interface Tlv as TlvA;
    interface TlvMultiple as TlvB;
    interface StaticIndexedIterator<tlv_key_t> as TlvListB;
  }
}

implementation {
  
  /********** Variables **********/
  
  enum {
    dataSize = 45,
    memSize = 14
  };
  
  uint8_t tlv[dataSize];
  
  /********** Function Declarations **********/
  
  void printData();
  
  /********** Boot **********/
  
  event void Boot.booted() {
    tlv_key_t b_one, b_two;
    memcpy(tlv, "Don't hurt me!", memSize);
    dbg("TestTlvP", "Adding TLV block\n");
    call TlvBlock.add(tlv, dataSize);
    printData();
    dbg("TestTlvP", "Adding B1 with length 6\n");
    call TlvB.add(tlv, &b_one, 6, dataSize);
    memcpy(call TlvB.value(tlv, b_one), "Hello!", 6);
    printData();
    dbg("TestTlvP", "Adding A with length 8\n");
    call TlvA.add(tlv, 8, dataSize);
    memcpy(call TlvA.value(tlv), "Goodbye!", 8);
    printData();
    dbg("TestTlvP", "Setting length of B1 to 5\n");
    call TlvB.setLength(tlv, b_one, 5, dataSize);
    printData();
    dbg("TestTlvP", "Setting length of A to 7\n");
    call TlvA.setLength(tlv, 7, dataSize);
    printData();
    dbg("TestTlvP", "Size: %hhu, Expected: 17\n", call TlvBlock.length(tlv));
    dbg("TestTlvP", "Setting length of B1 to 7\n");
    call TlvB.setLength(tlv, b_one, 7, dataSize);
    printData();
    dbg("TestTlvP", "Adding B2 with length 10\n");
    call TlvB.add(tlv, &b_two, 10, dataSize);
    memcpy(call TlvB.value(tlv, b_two), "Greetings!", 10);
    printData();
    dbg("TestTlvP", "Removing B1\n");
    call TlvB.remove(tlv, b_one, dataSize);
    printData();
    dbg("TestTlvP", "Setting length of B2 to 6\n");
    b_two = call TlvB.list(tlv);
    call TlvB.setLength(tlv, b_two, 6, dataSize);
    memcpy(call TlvB.value(tlv, b_two), "Really", 6);
    printData();
    dbg("TestTlvP", "Removing TLV block\n");
    call TlvBlock.remove(tlv, dataSize);
    printData();
  }
  
  /********** Functions **********/
  
  /**
   * Displays TLV test data.
   */
  void printData() {
#ifdef TOSSIM
    uint8_t i, d;
    tlv_t* cur;
    char* s;
    tlv_block_t* block = (tlv_block_t*)tlv;
    dbg("TlvP", "TLV: Block Contents:\n");
    for (i = 0; i < block->len; i += sizeof(tlv_t) + cur->len) {
      cur = (tlv_t*)((void*)block->tlv + i); // Move i bytes past the block
      dbg_clear("TlvP", "Type: %hhu, Len: %hhu, Data: ", cur->type, cur->len);
      s = (char*)cur->val;
      // Might not be null-terminated string
      for (d = 0; d < cur->len; d++)
        dbg_clear("TlvP", "%c", s[d]);
      dbg_clear("TlvP", "\n");
    }
    dbg_clear("TlvP", "Msg: ");
    s = (char*)block->tlv;
    for (d = 0; d < memSize; d++)
      dbg_clear("TlvP", "%c", s[d + block->len]);
    dbg_clear("TlvP", "\n");
#endif
  }
    
}
