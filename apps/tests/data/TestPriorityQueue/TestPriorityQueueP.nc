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
 * Simulates use of the PriorityQueueC data structure.
 *
 * @author Ryan Stinnett
 */

#include <PriorityQueue.h>

module TestPriorityQueueP {
  uses {
    interface PriorityQueue as PQ;
    interface Boot;
  }
  provides interface Compare<priority_queue_id_t>;
}

implementation {

  /********** Function Declarations **********/

  void printTree(priority_queue_id_t *tree, priority_queue_id_t len);
  void printTreeChild(priority_queue_id_t *tree, priority_queue_id_t len,
                      priority_queue_id_t n, char *pre);

  /********** Variables **********/

  bool min; // FALSE: max heap, TRUE: min heap

  /********** Boot **********/

  event void Boot.booted() {
    // pq_p[] = {1, 6, 2, 4, 12, 3}
    priority_queue_id_t pq_i[PQ_TEST_SIZE];

    min = TRUE;

    call PQ.insert(5);
    pq_i[0] = 5;
    printTree(pq_i, 1);
    //dbg("TestPriorityQueueP", "Expected: 5\n");

    call PQ.insert(2);
    pq_i[0] = 2; pq_i[1] = 5;
    printTree(pq_i, 2);
    //dbg("TestPriorityQueueP", "Expected: 2 5\n");

    call PQ.insert(3);
    pq_i[2] = 3;
    printTree(pq_i, 3);
    //dbg("TestPriorityQueueP", "Expected: 2 5 3\n");

    call PQ.insert(4);
    pq_i[3] = 4;
    printTree(pq_i, 4);
    //dbg("TestPriorityQueueP", "Expected: 2 5 3 4\n");

    call PQ.insert(1);
    pq_i[3] = 1; pq_i[4] = 4;
    printTree(pq_i, 5);
    //dbg("TestPriorityQueueP", "Expected: 2 5 3 1 4\n");

    call PQ.insert(0);
    pq_i[0] = 0; pq_i[1] = 2; pq_i[2] = 5;
    pq_i[3] = 3; pq_i[4] = 1; pq_i[5] = 4;
    printTree(pq_i, 6);
    //dbg("TestPriorityQueueP", "Expected: 0 2 5 3 1 4\n");

    pq_p[0] = 8;
    // pq_p[] = {8, 6, 2, 4, 12, 3}

    call PQ.moveUp(0);
    printTree(pq_i, 6);
    //dbg("TestPriorityQueueP", "Expected: 0 2 5 3 1 4\n");

    call PQ.moveDown(0);
    pq_i[0] = 2; pq_i[1] = 5; pq_i[2] = 3;
    pq_i[3] = 1; pq_i[4] = 0;
    printTree(pq_i, 6);
    //dbg("TestPriorityQueueP", "Expected: 2 5 3 1 0 4\n");

    call PQ.move(5);
    printTree(pq_i, 6);
    //dbg("TestPriorityQueueP", "Expected: 2 5 3 1 0 4\n");

    dbg("TestPriorityQueueP", "findBest: %hhu Expected: 2\n",
        call PQ.findBest());
    printTree(pq_i, 6);
    //dbg("TestPriorityQueueP", "Expected: 2 5 3 1 0 4\n");

    dbg("TestPriorityQueueP", "removeBest: %hhu Expected: 2\n",
        call PQ.removeBest());
    pq_i[0] = 5; pq_i[1] = 3; pq_i[2] = 1;
    pq_i[3] = 0; pq_i[4] = 4;
    printTree(pq_i, 5);
    //dbg("TestPriorityQueueP", "Expected: 5 3 1 0 4\n");

    pq_p[5] = 7;
    // pq_p[] = {8, 6, 2, 4, 12, 7}

    call PQ.move(5);
    pq_i[0] = 3; pq_i[1] = 1; pq_i[2] = 5;
    printTree(pq_i, 5);
    //dbg("TestPriorityQueueP", "Expected: 3 1 5 0 4\n");

    dbg("TestPriorityQueueP", "removeBest: %hhu Expected: 3\n",
        call PQ.removeBest());
    pq_i[0] = 1; pq_i[1] = 5; pq_i[2] = 0;
    pq_i[3] = 4;
    printTree(pq_i, 4);
    //dbg("TestPriorityQueueP", "Expected: 1 5 0 4\n");

    dbg("TestPriorityQueueP", "inserted: %hhu %hhu %hhu %hhu %hhu %hhu ",
        call PQ.inserted(0), call PQ.inserted(1), call PQ.inserted(2),
        call PQ.inserted(3), call PQ.inserted(4), call PQ.inserted(5));
    dbg_clear("TestPriorityQueueP", "Expected: 1 1 0 0 1 1\n");

    pq_p[2] = 10;
    // pq_p[] = {8, 6, 10, 4, 12, 7}

    call PQ.insert(2);
    pq_i[3] = 2; pq_i[4] = 4;
    printTree(pq_i, 5);
    //dbg("TestPriorityQueueP", "Expected: 1 5 0 2 4\n");

    call PQ.clear();
    printTree(pq_i, 0);
    //dbg("TestPriorityQueueP", "Expected:\n");
  }

  /********** Compare **********/

  /**
   * When Compare.test is called, a component should return TRUE if element a is
   * equal to or better than element b, otherwise FALSE.
   *
   * @param a First item to test.
   * @param b Second item to test.
   * @return TRUE if the condition is met, FALSE otherwise.
   */
  command bool Compare.test(priority_queue_id_t a, priority_queue_id_t b) {
    if (min)
      return pq_p[a] <= pq_p[b];
    else
      return pq_p[a] >= pq_p[b];
  }

  /********** Functions **********/

  /**
   * Prints a binary complete tree in a easy to read form.
   *
   * @param tree Array of values at each node.
   * @param len Length of array tree.
   */
  void printTree(priority_queue_id_t *tree, priority_queue_id_t len) {
#ifdef TOSSIM
    dbg("TestPriorityQueueP", "Expected Tree:\n");
    if (!len) {
      dbg_clear("TestPriorityQueueP", "Empty!\n");
      return;
    }
    dbg_clear("TestPriorityQueueP", "%hhu\n", tree[0]);
    if (1 < len) {
      printTreeChild(tree, len, 1, "| ");
      dbg_clear("TestPriorityQueueP", "\n");
    }
    if (2 < len) {
      printTreeChild(tree, len, 2, "  ");
      dbg_clear("TestPriorityQueueP", "\n");
    }
#endif // TOSSIM
  }

  /**
   * Prints child in a binary complete tree in a easy to read form.
   *
   * @param tree Array of values at each node.
   * @param len Length of array tree.
   * @param n Index of current node.
   * @param pre Beginning of the line.
   */
  void printTreeChild(priority_queue_id_t *tree, priority_queue_id_t len,
                      priority_queue_id_t n, char *pre) {
#ifdef TOSSIM
    char cPre[10];
    dbg_clear("TestPriorityQueueP", "%s%hhu", "|_", tree[n]);
    if (2 * n + 1 < len) {
      dbg_clear("TestPriorityQueueP", "\n%s", pre);
      sprintf(cPre, "%s%s", pre, "| ");
      printTreeChild(tree, len, 2 * n + 1, cPre);
    }
    if (2 * n + 2 < len) {
      dbg_clear("TestPriorityQueueP", "\n%s", pre);
      sprintf(cPre, "%s%s", pre, "  ");
      printTreeChild(tree, len, 2 * n + 2, cPre);
    }
#endif // TOSSIM
  }

}
