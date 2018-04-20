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
 * A compact indexed allocation scheme using only a bit vector to track the
 * elements.  While this is surely slower than a pointer-based system, it uses
 * much less memory.
 *
 * @author Ryan Stinnett
 */

#include "IndexedAlloc.h"

generic module IndexedAllocBitsP(indexed_alloc_id_t maxSize) {
  provides interface IndexedAlloc;
  uses {
    interface Boot;
    interface BitVector;
  }
}

implementation {

  /********** Variables **********/

  indexed_alloc_id_t free;
  indexed_alloc_id_t size = 0;

  /********** Function Declarations **********/

  void findFree();

  /********** Boot **********/

  event void Boot.booted() {
    call BitVector.clearAll();
  }

  /********** IndexedAlloc **********/

  /**
   * Checks if none of the elements are allocated.
   *
   * @return TRUE if none of the elements are allocated, FALSE otherwise.
   */
  command bool IndexedAlloc.none() {
    return !size;
  }

  /**
   * Checks if all of the elements are allocated.
   *
   * @return TRUE if all of the elements are allocated, FALSE otherwise.
   */
  command bool IndexedAlloc.all() {
    return size == maxSize;
  }

  /**
   * The number of elements currently allocated.
   * Always less than or equal to maxSize().
   *
   * @return The number of elements currently allocated.
   */
  command indexed_alloc_id_t IndexedAlloc.size() {
    return size;
  }

  /**
   * The maximum number of elements that can be allocated.
   *
   * @return The maximum size that can be allocated.
   */
  command indexed_alloc_id_t IndexedAlloc.maxSize() {
    return maxSize;
  }

  /**
   * Allocate an index in the set.
   *
   * @return If an index is free, it will be allocated and returned.  Otherwise,
   *         maxSize() is returned to indicate that all elements are allocated.
   */
  command indexed_alloc_id_t IndexedAlloc.alloc() {
    indexed_alloc_id_t m;
    if (size == maxSize)
      return maxSize;
    call BitVector.set(free);
    size++;
    m = free;
    findFree(); // Locate next free index
    return m;
  }

  /**
   * Frees an index in the set.
   *
   * @return If an index is allocated, it will be freed and SUCCESS is returned.
   *         If it was already free, no change is made and EALREADY is returned.
   *         If the index is too large, ESIZE is returned.
   */
  command error_t IndexedAlloc.free(indexed_alloc_id_t m) {
    if (m >= maxSize)
      return ESIZE;
    if (!call BitVector.get(m)) // Already free
      return EALREADY;
    call BitVector.clear(m);
    if (call BitVector.get(free)) // Update free if currently invalid
      free = m;
    size--;
    return SUCCESS;
  }

  /**
   * Checks if an index is currently allocated.
   *
   * @return TRUE if the index is allocated, FALSE if it is not.
   */
  command bool IndexedAlloc.allocated(indexed_alloc_id_t m) {
    return call BitVector.get(m);
  }

  /********** Functions **********/

  /**
   * Locates the next free index by advancing through the possibilities,
   * unless all indices are already allocated.
   */
  void findFree() {
    if (size == maxSize)
      return; // Avoid an infinite loop
    while (call BitVector.get(free)) {
      free++;
      free %= maxSize;
    }
  }

}
