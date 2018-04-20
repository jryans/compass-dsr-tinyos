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
 * Interface to a component that implements a run-time allocation policy on top
 * of a static size array via indices.  This simplifies component design by
 * moving the policy out of each component, leading to cleaner code.
 *
 * @author Ryan Stinnett
 */

#include "IndexedAlloc.h"

interface IndexedAlloc {

  /**
   * Checks if none of the elements are allocated.
   *
   * @return TRUE if none of the elements are allocated, FALSE otherwise.
   */
  command bool none();

  /**
   * Checks if all of the elements are allocated.
   *
   * @return TRUE if all of the elements are allocated, FALSE otherwise.
   */
  command bool all();

  /**
   * The number of elements currently allocated.
   * Always less than or equal to maxSize().
   *
   * @return The number of elements currently allocated.
   */
  command indexed_alloc_id_t size();

  /**
   * The maximum number of elements that can be allocated.
   *
   * @return The maximum size that can be allocated.
   */
  command indexed_alloc_id_t maxSize();

  /**
   * Allocate an index in the set.
   *
   * @return If an index is free, it will be allocated and returned.  Otherwise,
   *         maxSize() is returned to indicate that all elements are allocated.
   */
  command indexed_alloc_id_t alloc();

  /**
   * Frees an index in the set.
   *
   * @return If an index is allocated, it will be freed and SUCCESS is returned.
   *         If it was already free, no change is made and EALREADY is returned.
   *         If the index is too large, ESIZE is returned.
   */
  command error_t free(indexed_alloc_id_t m);

  /**
   * Checks if an index is currently allocated.
   *
   * @return TRUE if the index is allocated, FALSE if it is not.
   */
  command bool allocated(indexed_alloc_id_t m);

}
