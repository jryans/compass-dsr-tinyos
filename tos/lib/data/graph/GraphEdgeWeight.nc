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
 * Access information about the weight of an edge of the graph.
 *
 * @author Ryan Stinnett
 */
 
interface GraphEdgeWeight<weight_t> {
  
  /**
   * Checks if the graph weights can be changed.  This value should not change 
   * at run-time.
   * 
   * @return TRUE if the graph weights can change, FALSE if they cannot.
   */
  command bool canChangeWeights();

  /**
   * Get the weight of the edge.  If the graph is actually unweighted, a unit
   * weight is always returned.
   * 
   * @param m The key for the edge.
   * @return The weight of the edge.
   */
  command weight_t weight(graph_edge_id_t m);
  
  /**
   * Set the weight of the edge.  If the graph is actually unweighted, no
   * action is taken.
   * 
   * @param m The key for the edge.
   * @param w The updated weight.
   */
  command void setWeight(graph_edge_id_t m, weight_t w);
  
  /**
   * The weight of an edge in the graph changed.
   * 
   * @param m The key for the edge that had its weight changed.
   */
  event void weightChanged(graph_edge_id_t m);
  
}
