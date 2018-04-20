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
 * Defines generic packets used for transferring multipacket data.
 * @author Ryan Stinnett
 */

#ifndef BIGPACK_H
#define BIGPACK_H

#include <AM.h>

// Constants

enum {
  AM_BIGPACK_HEADER = 22,
  AM_BIGPACK_DATA = 23
};

enum {
  BIGPACK_WAVELETCONF = 0,
  BIGPACK_STATS = 1
};

enum {
  BIGPACK_SENDING = 0,
  BIGPACK_RECEIVING = 1
};

enum {
  BIGPACK_MAX_REQUESTS = 3,
  BIGPACK_DATA_LEN = 20,
  BIGPACK_TIMEOUT = 5120
};

// Transmitted Data

typedef struct bb { // Describes a single struct
  uint16_t start; // Position where this block starts in the data stream
  uint16_t length; // Length of the data block in bytes
} __attribute__ ((packed)) BigPackBlock;

typedef struct bp { // Links one struct to another
  uint8_t addrOfBlock; // Block ID whose address will be the value of the pointer
  uint8_t destBlock; // Block ID that contains the pointer
  uint8_t destOffset; // Pointer's location as an offset from the start of destBlock
  bool blockArray; // TRUE if this points to an array of blocks, rather than just a single block
} __attribute__ ((packed)) BigPackPtr;

typedef struct BigPackHeader { // Initial header packet for BigPack protocol
  uint8_t requestType; // Type of big pack request
  uint8_t packTotal; // Total number of packs
  uint16_t byteTotal; // Length of data in bytes
  uint8_t numBlocks; // Number of data blocks
  uint8_t numPtrs; // Number of pointers that need to be rebuilt
} __attribute__ ((packed)) BigPackHeader;

typedef struct BigPackData { // Data packet for BigPack protocol
  uint8_t curPack; // Current pack number
  uint8_t data[BIGPACK_DATA_LEN]; // Data
} __attribute__ ((packed)) BigPackData;

// Internal Structures

// BigPackServers fill out these details to describe their
// data to BigPackM.
typedef struct {
  BigPackBlock* block; // Array of BigPackBlock
  uint8_t** blockAddr; // Array of block data pointers
  BigPackPtr* ptr; // Array of BigPackPtr
} __attribute__ ((packed)) BigPackEnvelope;

#endif // BIGPACK_H
