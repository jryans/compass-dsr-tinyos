/*
 * "Copyright (c) 2006 The Regents of the University  of California.
 * All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement is
 * hereby granted, provided that the above copyright notice, the following
 * two paragraphs and the author appear in all copies of this software.
 *
 * IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT
 * OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF THE UNIVERSITY OF
 * CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE UNIVERSITY OF CALIFORNIA HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS."
 *
 */

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
 * A LRU data cache that stores data items, where an insert operation
 * indicates "use".  Inserting a data item not in the cache will replace
 * the oldest, and inserting an element already in the cache will refresh
 * its age.  Insert and lookup return a pointer to the cached data.  This
 * component should be wired to an Equal interface to check for equality
 * on the data type used.
 *
 * @author Ryan Stinnett
 * @author Rodrigo Fonseca
 * @author Philip Levis
 */

generic module LruDataCacheP(typedef data_cache_item_t, uint8_t size) {
  provides {
    interface Init;
    interface DataCache<data_cache_item_t>;
  }
  uses interface Equal<data_cache_item_t*>;
}

implementation {

  /********** Variables **********/

  data_cache_item_t cache[size];
  uint8_t first;
  uint8_t count;

  /********** Init **********/

  command error_t Init.init() {
    first = 0;
    count = 0;
    return SUCCESS;
  }

  /********** Functions **********/

  void printCache() {
#ifdef TOSSIM
    uint8_t i;
    dbg("LruDataCacheP", "LRUDC:");
    for (i = 0; i < count; i++) {
      dbg_clear("LruDataCacheP", " %08x", cache[i]);
      if (i == first)
        dbg_clear("LruDataCacheP", "*");
    }
    dbg_clear("LruDataCacheP", "\n");
#endif
  }

  /* if key is in cache returns the index (offset by first), otherwise returns count */
  uint8_t lookup(data_cache_item_t* item) {
    uint8_t i;
    data_cache_item_t* cachedItem;
    for (i = 0; i < count; i++) {
      cachedItem = &cache[(i + first) % size];
      if (call Equal.test(cachedItem, item))
        break;
    }
    return i;
  }

  /* remove the entry with index i (relative to first) */
  void remove(uint8_t i) {
    uint8_t j;
    if (i >= count)
      return;
    if (i == 0) {
      // shift all by moving first
      first = (first + 1) % size;
    } else {
      // shift everyone down
      for (j = i; j < count; j++)
        memcpy(&cache[(j + first) % size],
               &cache[(j + first + 1) % size],
               sizeof(data_cache_item_t));
    }
    count--;
  }

  /********** DataCache **********/

  /**
   * Returns the number of items currently stored in the cache.
   * @return The number of items.
   */
  command uint8_t DataCache.size() {
    return count;
  }

  /**
   * Returns a pointer to the item in the cache by matching various keys or
   * NULL if it was not found.
   *
   * @param item Pointer to the data item to find in the cache.
   * @return A pointer to the item in the cache, or NULL if not found.
   */
  command data_cache_item_t* DataCache.lookup(data_cache_item_t* item) {
    uint8_t i = lookup(item);
    printCache();
    if (i == count)
      return NULL;
    return &cache[(i + first) % size];
  }

  /**
   * Inserts an item in the cache, evicting if necessary.  An atomic lookup
   * after insert should return true.
   *
   * @param item Pointer to the data item to insert into the cache.
   * @return A pointer to the item in the cache.
   */
  command data_cache_item_t* DataCache.insert(data_cache_item_t* item) {
    uint8_t i = lookup(item);
    if (i != count) // Item is in cache, copy current data for reinsertion.
      memcpy(item, &cache[(i + first) % size], sizeof(data_cache_item_t));
    else if (count == size) // Item not in cache, but cache is full, evicting.
      signal DataCache.evicted(&cache[first]);
    if (count == size || i != count) {
      // remove someone. If item not in
      // cache, remove the first item.
      // otherwise remove the item temporarily for
      // reinsertion. This moves the item up in the
      // LRU stack.
      remove(i % count);
    }
    // now count < size
    memcpy(&cache[(first + count) % size], item, sizeof(data_cache_item_t));
    item = &cache[(first + count++) % size];
    printCache();
    return item;
  }

  /**
   * Removes an item from the cache.
   *
   * @param item Pointer to the data item to remove from the cache.
   * @return SUCCESS if found and removed, EINVAL if not found.
   */
  command error_t DataCache.remove(data_cache_item_t* item) {
    uint8_t i = lookup(item);
    if (i == count)
      return EINVAL;
    remove(i);
    printCache();
    return SUCCESS;
  }

  /**
   * Flush the cache of all entries.
   */
  command void DataCache.flush() {
    call Init.init();
    printCache();
  }

}
