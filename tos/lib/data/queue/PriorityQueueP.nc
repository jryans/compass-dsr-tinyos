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
 * Implements a priority queue sitting on top of an index heap.  It be either a
 * min or max heap depending on the implementation of the Compare.test command.
 * Since this is an index heap, none of the priorities are actually stored here.
 * Instead, a component needs only to answer calls of Compare.test (which would
 * typically be based on the priorities in some array owned by that component).
 *
 * @author Ryan Stinnett
 */

#include "PriorityQueue.h"

generic module PriorityQueueP(priority_queue_id_t maxSize) {
  provides {
    interface Init;
    interface PriorityQueue;
  }
  uses interface Compare<priority_queue_id_t>;
}

implementation {

  /********** Variables **********/

  priority_queue_id_t size;

  // Invariant: ai[hp[i]] == hp[ai[i]] == i
  priority_queue_id_t ai[maxSize]; // ai[i] is the array index given to us for the element
                       // position i in the heap.
  priority_queue_id_t hp[maxSize]; // hp[i] is the heap position of the element with an
                       // an array index of i.

  /********** Function Declarations **********/

  void clearData();
  void moveUpPos(priority_queue_id_t a);
  void moveDownPos(priority_queue_id_t a, priority_queue_id_t curSize);
  void flip(priority_queue_id_t a, priority_queue_id_t b);
  void printTree();
  void printTreeChild(priority_queue_id_t n, char *pre);

  /********** Init **********/

  command error_t Init.init() {
    clearData();
    return SUCCESS;
  }

  /********** PriorityQueue **********/

  /**
   * Returns if the priority queue is empty.
   *
   * @return Whether the priority queue is empty.
   */
  command bool PriorityQueue.empty() {
    return !size;
  }

  /**
   * The number of elements currently in the priority queue.
   * Always less than or equal to maxSize().
   *
   * @return The number of elements in the priority queue.
   */
  command priority_queue_id_t PriorityQueue.size() {
    return size;
  }

  /**
   * The maximum number of elements the priority queue can hold.
   *
   * @return The maximum priority queue size.
   */
  command priority_queue_id_t PriorityQueue.maxSize() {
    return maxSize;
  }

  /**
   * Insert the element at index m into the priority queue.
   *
   * @param m Index of the element to insert.
   * @return If the priority queue is full then FAIL, if m is too large for the
   *         queue then ESIZE, if m has already been inserted then EALREADY,
   *         otherwise SUCCESS.
   */
  command error_t PriorityQueue.insert(priority_queue_id_t m) {
    if (m >= maxSize)
      return ESIZE;
    if (size == maxSize) {
      dbgerror("PriorityQueueC", "PQ: Can't insert index %hhu, already full!\n", m);
      return FAIL;
    }
    if (hp[m] != maxSize)
      return EALREADY;
    dbg("PriorityQueueC", "PQ: Inserting index %hhu\n", m);
    ai[size] = m;
    hp[m] = size;
    moveUpPos(size++);
    printTree();
    return SUCCESS;
  }

  /**
   * Checks whether element m has already been inserted.
   *
   * @param m Index of the element to check on.
   * @return TRUE if element m has already been inserted, otherwise FALSE.
   */
  command bool PriorityQueue.inserted(priority_queue_id_t m) {
    return hp[m] != maxSize;
  }

  /**
   * If the priority of element m has improved, move that element up the heap
   * if needed.
   * @param m Index of the element with altered priority.
   */
  command void PriorityQueue.moveUp(priority_queue_id_t m) {
    moveUpPos(hp[m]);
    printTree();
  }

  /**
   * If the priority of element m has worsened, move that element down the heap
   * if needed.
   * @param m Index of the element with altered priority.
   */
  command void PriorityQueue.moveDown(priority_queue_id_t m) {
    moveDownPos(hp[m], size);
    printTree();
  }

  /**
   * If the priority of element m has changed, move that element up or down the
   * heap if needed.
   * @param m Index of the element with altered priority.
   */
  command void PriorityQueue.move(priority_queue_id_t m) {
    moveUpPos(hp[m]);
    moveDownPos(hp[m], size);
    printTree();
  }

  /**
   * Finds the index of the element with the best priority (at the root of the
   * heap), but does not remove it.
   *
   * @return Index of the element with the best priority.
   */
  command priority_queue_id_t PriorityQueue.findBest() {
    dbg("PriorityQueueC", "PQ: Found best, index %hhu\n", ai[0]);
    printTree();
    return ai[0];
  }

  /**
   * Finds the index of the element with the best priority (at the root of the
   * heap) and removes it from the priority queue.
   *
   * @return Index of the element with the best priority.
   */
  command priority_queue_id_t PriorityQueue.removeBest() {
    flip(0, --size); // Flip best element with the one at the end of the heap
    moveDownPos(0, size); // Move the new top to where it really goes
    dbg("PriorityQueueC", "PQ: Removing best, index %hhu\n", ai[size]);
    printTree();
    hp[ai[size]] = maxSize; // Reset
    return ai[size];
  }

  /**
   * Removes all elements from the priority queue.
   */
  command void PriorityQueue.clear() {
    clearData();
    printTree();
  }

  /********** Functions **********/

  /**
   * Moves the element at heap position a up to where it belongs.
   *
   * @param a Heap position of the element to move.
   */
  void moveUpPos(priority_queue_id_t a) {
    priority_queue_id_t p; // Parent
    dbg("PriorityQueueC", "PQ: Moving heap position %hhu up if needed\n", a);
    while (a > 0 && call Compare.test(ai[a], ai[p = (a - 1) / 2]) > 0) {
      flip(a, p); // Better than parent, move up.
      a = p;
    }
  }

  /**
   * Moves the element at heap position a down to where it belongs in a heap
   * that can hold up to size elements.
   *
   * @param a Heap position of the element to move.
   * @param size Number of elements in the heap we are moving down in.
   */
  void moveDownPos(priority_queue_id_t a, priority_queue_id_t curSize) {
    priority_queue_id_t c; // Child
    dbg("PriorityQueueC", "PQ: Moving heap position %hhu down if needed\n", a);
    while ((c = 2 * a + 1) < curSize) {
      if ((c + 1) < curSize && call Compare.test(ai[c + 1], ai[c]) > 0)
        c++; // Right child is better than left.
      if (call Compare.test(ai[a], ai[c]) > 0)
        break; // Both children are worse, don't move.
      flip(a, c); // Child is better, move down.
      a = c;
    }
  }

  /**
   * Flip the elements at heap positions a and b.
   *
   * @param a First position to flip.
   * @param b Second position to flip.
   */
  void flip(priority_queue_id_t a, priority_queue_id_t b) {
    // Switch array indices
    priority_queue_id_t temp = ai[a];
    ai[a] = ai[b];
    ai[b] = temp;
    // Switch heap positions
    hp[ai[a]] = a;
    hp[ai[b]] = b;
    dbg("PriorityQueueC", "PQ: Flipped heap positions %hhu and %hhu\n", a, b);
  }

  /**
   * Prints a binary complete tree in a easy to read form.
   */
  void printTree() {
#ifdef TOSSIM
    dbg("PriorityQueueC", "Current Tree:\n");
    if (!size) {
      dbg_clear("PriorityQueueC", "Empty!\n");
      return;
    }
    dbg_clear("PriorityQueueC", "%hhu\n", ai[0]);
    if (1 < size) {
      printTreeChild(1, "| ");
      dbg_clear("PriorityQueueC", "\n");
    }
    if (2 < size) {
      printTreeChild(2, "  ");
      dbg_clear("PriorityQueueC", "\n");
    }
#endif // TOSSIM
  }

  /**
   * Prints child in a binary complete tree in a easy to read form.
   *
   * @param n Index of current node.
   * @param pre Beginning of the line.
   */
  void printTreeChild(priority_queue_id_t n, char *pre) {
#ifdef TOSSIM
    char cPre[10];
    dbg_clear("PriorityQueueC", "%s%hhu", "|_", ai[n]);
    if (2 * n + 1 < size) {
      dbg_clear("PriorityQueueC", "\n%s", pre);
      sprintf(cPre, "%s%s", pre, "| ");
      printTreeChild(2 * n + 1, cPre);
    }
    if (2 * n + 2 < size) {
      dbg_clear("PriorityQueueC", "\n%s", pre);
      sprintf(cPre, "%s%s", pre, "  ");
      printTreeChild(2 * n + 2, cPre);
    }
#endif // TOSSIM
  }

  /**
   * Resets internal heap structures.
   */
  void clearData() {
    priority_queue_id_t i;
    size = 0;
    for (i = 0; i < maxSize; i++)
      hp[i] = maxSize;
  }

}
