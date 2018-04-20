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
 * Interface to a priority queue sitting on top of an index heap.  The meaning
 * of some terms defined here is implementation dependent since either a min or
 * max heap could be used.
 *
 * @author Ryan Stinnett
 */
 
interface PriorityQueue {
  
  /**
   * Checks if the priority queue is empty.
   *
   * @return Whether the priority queue is empty.
   */
  command bool empty();

  /**
   * The number of elements currently in the priority queue.
   * Always less than or equal to maxSize().
   *
   * @return The number of elements in the priority queue.
   */
  command priority_queue_id_t size();

  /**
   * The maximum number of elements the priority queue can hold.
   *
   * @return The maximum priority queue size.
   */
  command priority_queue_id_t maxSize();
  
  /**
   * Insert the element at index m into the priority queue.
   *
   * @param m Index of the element to insert.
   * @return If the priority queue is full then FAIL, if m is too large for the
   *         queue then ESIZE, if m has already been inserted then EALREADY,
   *         otherwise SUCCESS.
   */
  command error_t insert(priority_queue_id_t m);
  
  /**
   * Checks whether element m has already been inserted.
   * 
   * @param m Index of the element to check on.
   * @return TRUE if element m has already been inserted, otherwise FALSE.
   */
  command bool inserted(priority_queue_id_t m);
  
  /**
   * If the priority of element m has improved, move that element up the heap
   * if needed.
   * @param m Index of the element with altered priority.
   */
  command void moveUp(priority_queue_id_t m);
  
  /**
   * If the priority of element m has worsened, move that element down the heap
   * if needed.
   * @param m Index of the element with altered priority.
   */
  command void moveDown(priority_queue_id_t m);
  
  /**
   * If the priority of element m has changed, move that element up or down the 
   * heap if needed.
   * @param m Index of the element with altered priority.
   */
  command void move(priority_queue_id_t m);
  
  /**
   * Finds the index of the element with the best priority (at the root of the
   * heap), but does not remove it.
   * 
   * @return Index of the element with the best priority.
   */
  command priority_queue_id_t findBest();
  
  /**
   * Finds the index of the element with the best priority (at the root of the
   * heap) and removes it from the priority queue.
   * 
   * @return Index of the element with the best priority.
   */
  command priority_queue_id_t removeBest();
  
  /**
   * Removes all elements from the priority queue.
   */
  command void clear();
  
}
