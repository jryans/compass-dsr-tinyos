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

/**
 * A data cache.  While this is quite similar to the Cache interface, here a
 * pointer to the element in the cache matching the given input item is
 * returned.  Additional features, such as remove and eviction, are also
 * available.
 *
 * @author Ryan Stinnett
 */

interface DataCache<item_t> {

  /**
   * Returns the number of items currently stored in the cache.
   * @return The number of items.
   */
  command uint8_t size();

  /**
   * Inserts an item in the cache, evicting if necessary.  An atomic lookup
   * after insert should return true.
   *
   * @param item Pointer to the data item to insert into the cache.
   * @return A pointer to the item in the cache.
   */
  command item_t* insert(item_t* item);

  /**
   * Notification that the given item is about to be evicted due to an insert
   * which was requested when the cache was already full.  Note that this is
   * <b>not</b> signaled on calls of remove.  The pointer passed here should
   * not saved, as it will not longer be vaild once this event returns.
   *
   * @param item Pointer to the data item being evicted.
   */
  event void evicted(item_t* item);

  /**
   * Returns a pointer to the item in the cache by matching various keys or
   * NULL if it was not found.
   *
   * @param item Pointer to the data item to find in the cache.
   * @return A pointer to the item in the cache, or NULL if not found.
   */
  command item_t* lookup(item_t* item);

  /**
   * Removes an item from the cache.
   *
   * @param item Pointer to the data item to remove from the cache.
   * @return SUCCESS if found and removed, EINVAL if not found.
   */
  command error_t remove(item_t* item);

  /**
   * Flush the cache of all entries.
   */
  command void flush();

}

