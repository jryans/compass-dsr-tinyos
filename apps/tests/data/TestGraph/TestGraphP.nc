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
 * Test cases to verify that GraphWeightWordC works correctly.
 *
 * @author Ryan Stinnett
 */

#include <Graph.h>

module TestGraphP {
  uses {
    interface Boot;
    interface Graph;
    interface GraphEdge;
    interface GraphEdgeWeight<uint8_t>;
    interface IndexedIterator<graph_edge_id_t> as GraphEdgeList;
    interface SourceShortestPath;
    interface IndexedIterator<graph_vertex_id_t> as PathEdgeList;
  }
}

implementation {

  uint8_t test;

  // 5 vertices, 7 edges

  graph_edge_id_t a_b, a_c, b_d, b_e, c_b, c_e, e_d;
  graph_edge_id_t testEdge;

  /********** Boot **********/

  event void Boot.booted() {
    test = 0;
    a_b = call Graph.insert(0, 1);
  }

  /********** Graph **********/

  /**
   * The structure of the graph changed because an edge was inserted.
   *
   * @param m The key for the edge that was inserted.
   */
  event void Graph.inserted(graph_edge_id_t m) {
    dbg("TestGraphP", "Edge %u inserted!\n", m);
    switch (test) {
      case 0: {
        test = 1;
        a_c = call Graph.insert(0, 2);
        break; }
      case 1: {
        test = 2;
        b_d = call Graph.insert(1, 3);
        break; }
      case 2: {
        dbg("TestGraphP", "vertices: %u Expected: 2\n", call Graph.vertices());
        test = 0;
        dbg("TestGraphP", "remove(0, 1): %u Expected: 0\n", call Graph.remove(0, 1));
        break; }
      case 3: {
        test = 4;
        c_b = call Graph.insert(2, 1);
        break; }
      case 4: {
        test = 5;
        c_e = call Graph.insert(2, 4);
        break; }
      case 5: {
        test = 6;
        a_b = call Graph.insert(0, 1);
        break; }
      case 6: {
        test = 7;
        e_d = call Graph.insert(4, 3);
        break; }
      case 7: {
        test = 1;
        dbg("TestGraphP", "Too many edges: %u Expected: 7\n", call Graph.insert(3, 0));
        dbg("TestGraphP", "remove(1, 4): %u Expected: 0\n", call Graph.remove(1, 4));
        break; }
      case 8: {
        test = 0;
        dbg("TestGraphP", "vertices: %u Expected: 4\n", call Graph.vertices());

        dbg("TestGraphP", "edge(0, 2): %u Expected: %u\n", call Graph.edge(0, 2), a_c);

        dbg("TestGraphP", "edgeList(2): ");
        for (testEdge = call Graph.edgeList(2);
             !call GraphEdgeList.end(testEdge);
             testEdge = call GraphEdgeList.next(testEdge)) {
          dbg_clear("TestGraphP", "%u-", call GraphEdge.dest(testEdge));
        }
        dbg_clear("TestGraphP", "| Expected: 4-1-|\n");
        call GraphEdgeWeight.setWeight(a_b, 3);
        break; }
    }
  }

  /**
   * The structure of the graph changed because an edge was removed.
   *
   * @param m The key for the edge that was removed.
   */
  event void Graph.removed(graph_edge_id_t m) {
    dbg("TestGraphP", "Edge %u removed!\n", m);
    switch (test) {
      case 0: {
        test = 3;
        b_e = call Graph.insert(1, 4);
        break; }
      case 1: {
        test = 8;
        dbg("TestGraphP", "remove(3, 0): %u Expected: 6\n", call Graph.remove(3, 0));
        b_e = call Graph.insert(1, 4);
        break; }
    }
  }

  /********** GraphEdgeWeight **********/

  /**
   * The weight of an edge in the graph changed.
   *
   * @param m The key for the edge that had its weight changed.
   */
  event void GraphEdgeWeight.weightChanged(graph_edge_id_t m) {
    dbg("TestGraphP", "Edge %u's weight changed!\n", m);
    switch (test) {
      case 0: {
        test = 1;
        call GraphEdgeWeight.setWeight(a_c, 1);
        break; }
      case 1: {
        test = 2;
        call GraphEdgeWeight.setWeight(b_d, 1);
        break; }
      case 2: {
        test = 3;
        call GraphEdgeWeight.setWeight(b_e, 2);
        break; }
      case 3: {
        test = 4;
        call GraphEdgeWeight.setWeight(c_b, 1);
        break; }
      case 4: {
        test = 5;
        call GraphEdgeWeight.setWeight(c_e, 3);
        break; }
      case 5: {
        test = 6;
        call GraphEdgeWeight.setWeight(e_d, 2);
        break; }
      case 6: {
        test = 0;
        call SourceShortestPath.buildTree(0);
        break; }
    }
  }

  /********** SourceShortestPath **********/

  /**
   * The shortest path tree from vertex src is complete.
   *
   * @param src The source vertex.
   */
  event void SourceShortestPath.builtTree(graph_vertex_id_t src) {
    switch (test) {
      case 0: {
        dbg("TestGraphP", "Expected SPT:\n");
        dbg_clear("TestGraphP", "Dest 0: 0, Cost: 0\n");
        dbg_clear("TestGraphP", "Dest 1: 0-2-1, Cost: 2\n");
        dbg_clear("TestGraphP", "Dest 2: 0-2, Cost: 1\n");
        dbg_clear("TestGraphP", "Dest 3: 0-2-1-3, Cost: 3\n");
        dbg_clear("TestGraphP", "Dest 4: 0-2-4, Cost: 4\n");
        dbg("TestGraphP", "edgeCount(1): %u Expected: 2\n",
            call SourceShortestPath.edgeCount(1));
        dbg("TestGraphP", "edgeCount(2): %u Expected: 1\n",
            call SourceShortestPath.edgeCount(2));
        dbg("TestGraphP", "PEL.next(3): %u Expected: 1\n",
            call PathEdgeList.next(3));
        test = 1;
        call SourceShortestPath.buildTree(0);
        break; }
      case 1: {
        dbg("TestGraphP", "Expected SPT:\n");
        dbg_clear("TestGraphP", "Dest 0: 0, Cost: 0\n");
        dbg_clear("TestGraphP", "Dest 1: 0-2-1, Cost: 2\n");
        dbg_clear("TestGraphP", "Dest 2: 0-2, Cost: 1\n");
        dbg_clear("TestGraphP", "Dest 3: 0-2-1-3, Cost: 3\n");
        dbg_clear("TestGraphP", "Dest 4: 0-2-4, Cost: 4\n");
        test = 2;
        call SourceShortestPath.buildTree(2);
        break; }
      case 2: {
        dbg("TestGraphP", "Expected SPT:\n");
        dbg_clear("TestGraphP", "Dest 0: X\n");
        dbg_clear("TestGraphP", "Dest 1: 2-1, Cost: 1\n");
        dbg_clear("TestGraphP", "Dest 2: 2, Cost: 0\n");
        dbg_clear("TestGraphP", "Dest 3: 2-1-3, Cost: 2\n");
        dbg_clear("TestGraphP", "Dest 4: 2-4, Cost: 3\n");
        dbg("TestGraphP", "PEL.next(0): %u Expected: 5\n",
            call PathEdgeList.next(0));
        test = 0;
        call SourceShortestPath.buildTreeTo(2, 0);
        break; }
    }
  }

  /**
   * The shortest path from vertex src to vertex dest is complete.
   *
   * @param src The source vertex.
   * @param dest The destination vertex.
   */
  event void SourceShortestPath.builtTreeTo(graph_vertex_id_t src, graph_vertex_id_t dest,
                                            error_t pathResult) {
    switch (test) {
      case 0: {
        dbg("TestGraphP", "Expected SPT (Res: %u, Exp: 1):\n", pathResult);
        dbg_clear("TestGraphP", "Dest 0: X\n");
        dbg_clear("TestGraphP", "Dest 1: 2-1, Cost: 1\n");
        dbg_clear("TestGraphP", "Dest 2: 2, Cost: 0\n");
        dbg_clear("TestGraphP", "Dest 3: 2-1-3, Cost: 2\n");
        dbg_clear("TestGraphP", "Dest 4: 2-4, Cost: 3\n");
        test = 1;
        call SourceShortestPath.buildTreeTo(2, 1);
        break; }
      case 1: {
        dbg("TestGraphP", "Expected SPT (Res: %u, Exp: 0):\n", pathResult);
        dbg_clear("TestGraphP", "Dest 0: X\n");
        dbg_clear("TestGraphP", "Dest 1: 2-1, Cost: 1\n");
        dbg_clear("TestGraphP", "Dest 2: 2, Cost: 0\n");
        dbg_clear("TestGraphP", "Dest 3: 2-1-3, Cost: 2\n");
        dbg_clear("TestGraphP", "Dest 4: X\n");
        test = 2;
        call SourceShortestPath.buildTreeTo(2, 1);
        break; }
      case 2: {
        dbg("TestGraphP", "Expected SPT (Res: %u, Exp: 0):\n", pathResult);
        dbg_clear("TestGraphP", "Dest 0: X\n");
        dbg_clear("TestGraphP", "Dest 1: 2-1, Cost: 1\n");
        dbg_clear("TestGraphP", "Dest 2: 2, Cost: 0\n");
        dbg_clear("TestGraphP", "Dest 3: 2-1-3, Cost: 2\n");
        dbg_clear("TestGraphP", "Dest 4: X\n");
        break; }
    }
  }

}
