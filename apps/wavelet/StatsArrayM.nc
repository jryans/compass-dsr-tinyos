/**
 * Computes various statistics on a data stream without
 * storing the data itself.
 * Median algorithm based on:<br />
 * R. Jain and I. Chlamtac. The P^2 algorithm for dynamic
 * calculation of quantile and histograms without storing
 * observations. <i>Communications of the ACM</i>,
 * 28(10):1076-1085, October 1986.
 * @author Ryan Stinnett
 */

module StatsArrayM {
  provides {
    interface StatsArray[uint8_t id];
    interface StdControl;
  }
}

implementation {
 
  enum {
    numMarkers = 5
  };
  
  float p = 0.5; 
  float dnDes[numMarkers];
  
  typedef struct {  
    float q[numMarkers];
    uint16_t n[numMarkers];
    float nDes[numMarkers];
    uint16_t numSeen;
    float dataSum;
  } saInfo;
  
  uint8_t numArrays = uniqueCount("StatsArray");
  saInfo sa[uniqueCount("StatsArray")];
  
  // Internal Functions
  
  /**
   * Resets all internal structures for a given array.
   */
  void clearInfo(uint8_t id) {
    uint8_t i;
    saInfo *s = &sa[id];
    for (i = 0; i < numMarkers; i++) {
      s->n[i] = i + 1;
      s->q[i] = 0;
    }
    s->nDes[0] = 1;
    s->nDes[1] = 1 + 2 * p;
    s->nDes[2] = 1 + 4 * p;
    s->nDes[3] = 3 + 2 * p;
    s->nDes[4] = 5;
    s->dataSum = 0;
    s->numSeen = 0;
  }

  /**
   * Adjusts markers by fitting them to a parabola.
   */
  float parabolaAdj(uint8_t id, int8_t d, uint8_t i) {
    saInfo *s = &sa[id];
    // Break up formula for readability
    uint16_t niminus = s->n[i] - s->n[i - 1];
    uint16_t niplus = s->n[i + 1] - s->n[i];
    float a = (float) d / (niplus + niminus);
    float c = (s->q[i + 1] - s->q[i]) / niplus;
    float f = (s->q[i] - s->q[i - 1]) / niminus;
    return s->q[i] + a * (((niminus + d) * c) + ((niplus - d) * f));
  }

  /**
   * Adjusts markers by fitting them to a line.
   */
  float linearAdj(uint8_t id, int8_t d, uint8_t i) {
    saInfo *s = &sa[id];
    float a = (s->q[i + d] - s->q[i]) / (s->n[i + d] - s->n[i]);
    return s->q[i] + d * a;
  }
  
  /**
   * Sorts the initial data elements such that the markers
   * are in increasing order.
   */
  void sort(uint8_t id) {
    saInfo *s = &sa[id];
    uint8_t mi, i, j;
    float m;
    for (i = 0; i < numMarkers - 1; i++) {
      /* find the minimum */
      mi = i;
      for (j = i + 1; j < numMarkers; j++) {
        if (s->q[j] < s->q[mi]) {
          mi = j;
        }
      }
      m = s->q[mi];
      /* move elements to the right */
      for (j = mi; j > i; j--) {
        s->q[j] = s->q[j - 1];
      }
      s->q[i] = m;
    }
  }
  
  // StdControl
  
  command result_t StdControl.init() {
    uint8_t a;
    dnDes[0] = 0;
    dnDes[1] = p / 2;
    dnDes[2] = p;
    dnDes[3] = (1 + p) / 2;
    dnDes[4] = 1;
    for (a = 0; a < numArrays; a++)
      clearInfo(a);
    return SUCCESS;
  }

  command result_t StdControl.start() {
    return SUCCESS;
  }

  command result_t StdControl.stop() {
    return SUCCESS;
  }
  
  // StatsArray

  /**
   * Adds a new data element to the array.
   */
  command void StatsArray.newData[uint8_t id](float newVal) {
    saInfo *s = &sa[id];
    if (s->numSeen < numMarkers) {
      // Store first five elements as marker heights and sort them
      s->q[s->numSeen] = newVal;
      if (s->numSeen == numMarkers - 1)
        sort(id);
    } else {
      // Find markers that the new value fits between
      uint8_t k = 5;
      uint8_t i;
      if (newVal < s->q[0]) {
        s->q[0] = newVal;
        k = 1;
      } else if (s->q[0] <= newVal && newVal < s->q[1]) {
        k = 1;
      } else if (s->q[1] <= newVal && newVal < s->q[2]) {
        k = 2;
      } else if (s->q[2] <= newVal && newVal < s->q[3]) {
        k = 3;
      } else if (s->q[3] <= newVal && newVal <= s->q[4]) {
        k = 4;
      } else if (s->q[4] < newVal) {
        s->q[4] = newVal;
        k = 4;
      }
      // Increment markers from k + 1 to 5
      for (i = k; i < 5; i++)
        s->n[i]++;
      // Update desired positions for all markers
      for (i = 0; i < 5; i++)
        s->nDes[i] += dnDes[i];
      // Adjust heights of markers 2 - 4 if needed
      for (i = 1; i < 4; i++) {
        float d = s->nDes[i] - s->n[i];
        if ((d >= 1 && s->n[i + 1] - s->n[i] > 1)
            || (d <= -1 && s->n[i - 1] - s->n[i] < -1)) {
          int8_t di;
          float qDes;
          (d > 0) ? (di = 1) : (di = -1); // Equiv: di <- sign(d)
          // Try using parabolic formula
          qDes = parabolaAdj(id, di, i);
          // If new value moves marker past another, use linear.
          if (s->q[i - 1] < qDes && qDes < s->q[i + 1]) {
            s->q[i] = qDes;
          } else {
            s->q[i] = linearAdj(id, di, i);
          }
          // Adjust marker position
          s->n[i] += di;
        }
      }
    }
    // Add to sum and increment count
    s->dataSum += newVal;
    s->numSeen++; 
  }
  
  /**
   * Returns the array's minimum value.
   */
  command float StatsArray.min[uint8_t id]() {
    return sa[id].q[0];
  }
  
  /**
   * Returns the array's maximum value.
   */
  command float StatsArray.max[uint8_t id]() {
    return sa[id].q[numMarkers - 1];
  }
  
  /**
   * Returns the mean of the array.
   */
  command float StatsArray.mean[uint8_t id]() {
    if (sa[id].numSeen == 0)
      return 0;
    return sa[id].dataSum / sa[id].numSeen;
  }
  
  /**
   * Returns the <b>estimated</b> median of the array.
   */
  command float StatsArray.median[uint8_t id]() {
    return sa[id].q[numMarkers / 2];  
  }
  
  /**
   * Removes all data from the array.
   */
  command void StatsArray.clear[uint8_t id]() {
    clearInfo(id);
  }

}
