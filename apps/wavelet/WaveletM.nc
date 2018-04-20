/**
 * Manages the motes to perform a wavelet transform on incoming sensor data.
 * Uses the State library to manage graceful state transitions.
 * @author Ryan Stinnett (Spring 2006 - Present)
 * @author The Moters (Fall 2005 - Spring 2006)
 */

includes Sensors;
includes Wavelet;

module WaveletM {
  uses {
    // I/O and Hardware
    interface CreateMsg as MakeData;
    interface SendMsg as SendData;
    interface SrcReceiveMsg as RcvData;
    interface SrcReceiveMsg as RcvCntl;
    interface Router;
    interface Leds;
    interface SensorData;
#ifdef BEEP
    interface Beep;
#endif
    interface Stats;
    
    // State Management
    interface State;
    interface Timer as TransmitTimer;
    interface Timer as SampleTimer;
    interface Timer as StateTimer;
    interface Timer as DelayResults;
#ifdef RAW
    interface Timer as DelayRaw;
#endif
    interface Random;
    
    // Wavelet Config
    interface BigPackClient;
  }
  provides interface StdControl;
}
implementation { 
#if 0 // TinyOS Plugin Workaround
  typedef char msgData;
  typedef char WaveletScale;
  typedef char WaveletSample;
  typedef char ExtWaveletConf;
  typedef char ExtWaveletScale;
  typedef char ExtWaveletNeighbor;
#endif
  
  // Variables and Constants
  uint8_t curScale; // The current wavelet transform scale
  uint8_t curSet; // Identifies the current data set number
  
  uint8_t numScales; // Largest scale used (J -> 1), also length of scale array
  WaveletScale *scale; // Array of WaveletScales (describes neighbors)
  uint8_t *state; // State at each transform scale
  uint8_t freeSample; // Index of next free time sample
  WaveletSample *sample; // Array of WaveletSamples
  bool confAlloc; // TRUE is config storage (scale, state) has been allocated, else FALSE.
  
  // Compression
  bool predicted; // True if mote predicts
  uint8_t matchingBand; // Index of first band that this mote's values are above
  uint8_t numBands; // Number of bands in the following array
  float compTarget[WT_MAX_BANDS]; // Array of compression target values for each band

  // Transform Options
  uint32_t sampleTime; // Length of time between samples
  uint8_t transformType; // One of various transform types
  uint8_t resultType; // Controls data sent back to base
  uint8_t numSamples; // Number of time samples
  uint8_t timeScales; // Number of scales of the time transform to perform
  uint8_t maxTimeScale; // Largest time scale possible (J -> 1)
  uint8_t stopAtTimeScale; // Last time scale to use time transform on
  
  // State Management
  uint8_t nextState;
  bool forceNextState;
  bool sampleTimerRunning;
    
  // Function Declarations
  task void runState();
  void scaleDone();
  void sendValuesToNeighbors();
  void networkTransform2D();
  int8_t reflect(int8_t i);
  void timeTransform();
  void delayNextState();
  void clearNeighborState();
  void checkData();
  void waveletFree();
  void sampleFree();
  result_t sampleAlloc(uint8_t sampleCount);
  void sendDelayedMsg();
  uint32_t getTransmitTime();
  
  // State Management
  
  /**
   * This is the heart of the wavelet algorithm's state management.
   * Whenever the state is changed, this task is posted to run whatever
   * functions that state requires.
   */
  task void runState() {
    delayNextState();
    switch (call State.getState()) {
      case WS_CONFIGURE: { // Retrieve wavelet config data
        call Leds.redOn();
        waveletFree();
        call BigPackClient.request();
        break; }
      case WS_CLEAR_SENSORS: {
        if (!sampleTimerRunning) {
          call SampleTimer.start(TIMER_REPEAT, sampleTime);
          sampleTimerRunning = TRUE;
        }
        call State.toIdle();
        break; }
      case WS_READING_SENSORS: {
        // If a message is received while reading the sensors,
        // temperature values will be way off.  Using state delays
        // on both sides of the sensor reading work around this.
        dbg(DBG_USR2, "Wavelet: DS: %i, Reading sensor data for sample %i...\n", curSet + 1, freeSample);
        call SensorData.readSensors();
        break; }
      case WS_START_DATASET: {
        curSet++;
        dbg(DBG_USR2, "Wavelet: DS: %i, Starting data set...\n", curSet);
        call TransmitTimer.start(TIMER_ONE_SHOT, 
             sampleTime - WT_COLLECT_SAMPLE_TIME - getTransmitTime());
        call Leds.redOff();
        call Leds.yellowOn();
        curScale = numScales - 1;
        clearNeighborState();
        timeTransform();
        call State.toIdle();
        break; }      
      case WS_UPDATING: {
        dbg(DBG_USR2, "Update: DS: %i, S: %i, Sending values to predict nodes...\n",
            curSet, curScale + 1);
        sendValuesToNeighbors();
        dbg(DBG_USR2, "Update: DS: %i, S: %i, Waiting to hear from predict nodes...\n",
            curSet, curScale + 1);
        break; }
      case WS_PREDICTING: {
        dbg(DBG_USR2, "Predict: DS: %i, S: %i, Waiting to hear from update nodes...\n",
            curSet, curScale + 1);
        break; }  
      case WS_PREDICTED: {
        networkTransform2D();
        dbg(DBG_USR2, "Predict: DS: %i, S: %i, Sending values to update nodes...\n",
            curSet, curScale + 1);
        sendValuesToNeighbors();
        dbg(DBG_USR2, "Predict: DS: %i, S: %i, Scale done!\n", curSet, curScale + 1);
        checkData();
        scaleDone();
        call State.toIdle();
        break; }
      case WS_UPDATED: {
        networkTransform2D();
        dbg(DBG_USR2, "Update: DS: %i, S: %i, Scale done!\n", curSet, curScale + 1);
        checkData();
        scaleDone();
        call State.toIdle();
        break; }
      case WS_TRANSMIT: {
        sendDelayedMsg();
        call State.toIdle();
        break; }
      case WS_SKIP_SCALE: {
        dbg(DBG_USR2, "Skip: DS: %i, S: %i, Nothing to do, scale done!\n", curSet, curScale + 1);
        scaleDone();
        call State.toIdle();
        break; }
      case WS_OFFLINE: {
        dbg(DBG_USR2, "Wavelet: Offline\n");
        call SampleTimer.stop();
        sampleTimerRunning = FALSE;
        call TransmitTimer.stop();
        call StateTimer.stop();
        call DelayResults.stop();
#ifdef RAW        
        call DelayRaw.stop();
#endif
        curSet = 0;
        freeSample = 0;
        call Leds.redOff();
        call Leds.yellowOff();
        call State.toIdle();
        break; }
    }
  }
  
  /**
   * Deallocates wavelet configuration data.
   */
  void waveletFree() {
    // If there is config data, free it
    if (confAlloc) {
      int8_t s;
      for (s = numScales - 1; s >= 0; s--)
        free(scale[s].nb);
      free(scale);
      free(state);
      confAlloc = FALSE;
    }
  }
  
  /**
   * Deallocates sample data.
   */
  void sampleFree() {
    // If there is sample data, free it
    if (numSamples) {
      free(sample);
      numSamples = 0;
    }
  }
  
  /**
   * Allocates sample data.
   */
  result_t sampleAlloc(uint8_t sampleCount) {
    // If we need a different amount of sample space, free and allocate.
    if (numSamples != sampleCount) {
      sampleFree();
      if ((sample = malloc(sampleCount * sizeof(WaveletSample))) == NULL) {
        dbg(DBG_USR2, "Wavelet: Couldn't allocate sample!\n");
        return FAIL;
      }
      numSamples = sampleCount;
    }
    return SUCCESS;
  }
  
  /**
   * Calculates the delay until the next state change
   * should occur and sets a timer to make it so.
   */
  void delayNextState() {
    uint32_t delay = 0;
    // Defaults to request instead of force
    forceNextState = FALSE; 
    switch (call State.getState()) {
    case WS_CLEAR_SENSORS: {
      nextState = WS_READING_SENSORS;
      delay = WSD_CS_TO_RS;
      break; }
    case WS_READING_SENSORS: {
      if (freeSample + 1 < numSamples) {
        nextState = WS_IDLE;
      } else { 
        nextState = WS_START_DATASET;
      }
      delay = WSD_RS_TO_ANY;
      break; }
    case WS_START_DATASET: {
      nextState = state[numScales - 1];
      (nextState == WS_UPDATING) ? (delay = WSD_SDS_TO_UING)
                                 : (delay = WSD_SDS_TO_OTHER);
      break; }    
    case WS_UPDATING: {
      nextState = WS_UPDATED;
      forceNextState = TRUE;
      delay = WSD_UING_TO_UED;
      break; }
    case WS_PREDICTING: {
      nextState = WS_PREDICTED;
      forceNextState = TRUE;
      delay = WSD_PING_TO_PED;
      break; }
    case WS_PREDICTED: {
      nextState = WS_IDLE;
      delay = WSD_PED_TO_IDLE;
      break; }
    case WS_UPDATED: {
      (curScale == 0) 
        ? (nextState = WS_IDLE)
        : (nextState = state[curScale - 1]);
      if (nextState == WS_UPDATING) {
        delay = WSD_UED_TO_UING;
      } else {
        delay = WSD_UED_TO_OTHER;
      }
      break; }
    case WS_SKIP_SCALE: {
      (curScale == 0) 
        ? (nextState = WS_IDLE)
        : (nextState = state[curScale - 1]);
      if (nextState == WS_UPDATING) {
        delay = WSD_SKIP_TO_UING;
      } else if (nextState == WS_IDLE) {
        delay = WSD_SKIP_TO_IDLE;
      } else {
        delay = WSD_SKIP_TO_OTHER;
      }
      break; }
    }
    if (delay)
      call StateTimer.start(TIMER_ONE_SHOT, delay);
  }
  
  // Helper Functions
  
  /**
   * If this mote is not done, then it moves down to the next wavelet 
   * scale. If it is done and compression is enabled, it determines
   * which band matches its values.
   * Called during WS_UPDATED, WS_PREDICTED, and WS_SKIP_SCALE.
   */ 
  void scaleDone() {
    uint8_t i;
    if (nextState != WS_IDLE) { // More scales to go
      curScale--;
    } else { // Data set complete
      if (resultType & WC_RT_COMP) {
        if (predicted) { 
          // Predicted values are assigned a band based on target values
          for (i = 0; i < numBands; i++) {
            if (value[0] >= compTarget[i])
              break;
          }
          matchingBand = i;
        } else {
          // Scaling values are always transmitted
          matchingBand = 0;
        }  
      }
      dbg(DBG_USR2, "Wavelet: DS: %i, Data set complete!\n", curSet);
    }
  }
  
  /**
   * For each scale where a mote is not skipped or already done,
   * it will be in one of two states:
   * 1. WS_UPDATING: Sends scaling values to predict motes and waits
   * 2. WS_PREDICTED: Sends its newly calculated predict values
   * Called during WS_UPDATED and WS_PREDICTED.
   */ 
  void sendValuesToNeighbors() {
    uint8_t mote, i;
    TOS_Msg baseMsg;
    WaveletData *wd = (WaveletData *)baseMsg.data;
    wd->dataSet = curSet;
    wd->scale = curScale;
    wd->state = call State.getState();
    for (i = 0; i < WT_SENSORS; i++)
      wd->value[i] = value[i];
    for (mote = 0; mote < scale[curScale].nbCount; mote++) {
      TOS_MsgPtr m = call MakeData.createCopy(&baseMsg);
      uint16_t dest = scale[curScale].nb[mote].id;
      if (call State.getState() == WS_UPDATING) { // U nodes sending scaling values
        dbg(DBG_USR2, "Update: DS: %i, S: %i, Sending values to predict node %i...\n",
            curSet, curScale + 1, dest);
      } else { // P nodes sending update values
        dbg(DBG_USR2, "Predict: DS: %i, S: %i, Sending values to update node %i...\n",
            curSet, curScale + 1, dest);
      }
      call SendData.send(dest, sizeof(WaveletData), m);
    }
  }
  
  /**
   * Calculates new data values based on data received from network neighbors.
   * The specific algorithm is either:
   * 1. WS_PREDICTED: Subtracts each neighbor's value multiplied by the coefficient for 
   * that neighbor from this mote's value.
   * 2. WS_UPDATED: Adds each neighbor's value multiplied by the coefficient for 
   * that neighbor to this mote's value.
   * Called during WS_PREDICTED and WS_UPDATED.
   */
  void networkTransform2D() {
    uint8_t mote, sensor;
    float sign;
    dbg(DBG_USR2, "Calc: DS: %i, S: %i, Calculating new values from 2D network transform...\n",
        curSet, curScale + 1);
    (call State.getState() == WS_PREDICTED) ? (sign = -1) : (sign = 1);
    for (mote = 0; mote < scale[curScale].nbCount; mote++) {
      for (sensor = 0; sensor < WT_SENSORS; sensor++)
        value[sensor] += (sign * scale[curScale].nb[mote].coeff
                               * scale[curScale].nb[mote].value[sensor]);
    }
  }
  
  /**
   * Small utility function for the time domain transform that reflects
   * array indices when they move outside the lower and upper bounds of
   * the array.
   */
  inline int8_t reflect(int8_t i) {
    if (i < 0)
      return abs(i);
    else if (i >= numSamples) {
      uint8_t max = numSamples - 1;
      return -abs(i - max) + max;
    } else
      return i;
  }
  
  /**
   * Simplifies indexing the scaling values of the sample array by
   * moving the index calculations to a separate function.
   */
  WaveletSample *scaling(uint8_t j, int8_t l) {
    if (j > maxTimeScale)
      return NULL;
    return &sample[reflect(l * (1 << (maxTimeScale - j)))];
  }
  
  /**
   * Simplifies indexing the detail values of the sample array by
   * moving the index calculations to a separate function.
   */
  WaveletSample *detail(uint8_t j, int8_t l) {
    if (j >= maxTimeScale)
      return NULL;
    return &sample[reflect(l * (1 << (maxTimeScale - j)) 
                          + (1 << (maxTimeScale - j - 1)))];
  }
  
  /**
   * Calculates new values for a set of samples using a 1D wavelet transform
   * in the time domain.  These results will then be passed on to the 2D
   * neighbor transform.  Using the lifting scheme, only the update and
   * predict operators change for different transform types.
   * Called during WS_START_DATASET.
   */
  void timeTransform() {
    int8_t l;
    uint8_t j, sens;
    if (transformType == WC_TT_2DRWAGNER)
      // Nothing to do in the time domain for this case
      return;
    for (j = maxTimeScale - 1; j >= stopAtTimeScale; j--) {
      // Predict odd values from even values
      for (l = 0; l < (1 << j); l++) {
        for (sens = 0; sens < WT_SENSORS; sens++) {
          switch (transformType) {
          case WC_TT_1DHAAR_2DRWAGNER: {
            //sample[2 * s * samp + s].value[sens] -= sample[2 * s * samp].value[sens];
            detail(j, l)->value[sens] -= scaling(j, l)->value[sens];
            break; }
          case WC_TT_1DLINEAR_2DRWAGNER: {
            //sample[2 * s * samp + s].value[sens] -= (sample[2 * s * samp].value[sens] 
            //  + sample[reflect(2 * s * samp + 2 * s)].value[sens]) / 2;
            detail(j, l)->value[sens] -= (scaling(j, l)->value[sens]
              + scaling(j, l + 1)->value[sens]) / 2;
            break; }
          }
        }
      }
      // Update even values from odd values
      for (l = 0; l < (1 << j); l++) {
        for (sens = 0; sens < WT_SENSORS; sens++) {
          switch (transformType) {
          case WC_TT_1DHAAR_2DRWAGNER: {
            //sample[2 * s * samp].value[sens] += sample[2 * s * samp + s].value[sens] / 2;
            scaling(j, l)->value[sens] += detail(j, l)->value[sens] / 2;
            break; }
          case WC_TT_1DLINEAR_2DRWAGNER: {
            //sample[2 * s * samp].value[sens] += (sample[reflect(2 * s * samp - s)].value[sens]
            //  + sample[2 * s * samp + s].value[sens]) / 4;
            scaling(j, l)->value[sens] += (detail(j, l - 1)->value[sens]
              + detail(j, l)->value[sens]) / 4;
            break; }
          }
        }
      }
    }
  }
   
  /**
   * The simple caching system currently used tries to track if
   * we have received a value from each neighbor we're supposed to
   * hear from during this scale.  This is checked via a stale flag
   * for each neighbor, at each scale.  At the beginning of a new data 
   * set, these states are all reset to stale.  
   * Called during WS_START_DATASET.
   */
  void clearNeighborState() {
    int8_t s;
    uint8_t m;
    for (s = numScales - 1; s >= 0; s--) {
      for (m = 0; m < scale[s].nbCount; m++) {
        scale[s].nb[m].stale = TRUE;
      }
    }
  }
  
  /**
   * Reports any cache hits to Stats by checking if each neighbor's
   * stale flag is still set or was cleared, indicatng that
   * new data was received.
   * Called during WS_CACHE.
   */
  void checkData() {
    uint8_t mote;
    StatsReport report;
    for (mote = 0; mote < scale[curScale].nbCount; mote++) {
      if (scale[curScale].nb[mote].stale) {
        report.type = WT_CACHE;
        report.data.cache.scale = curScale;
        report.data.cache.index = mote;
        call Stats.file(report);
      } 
    }
  }
  
  /**
   * Calculates timing information for raw and result messages,
   * and activates timers accordingly.  Bands are determined by
   * compression target values from the sink.  If compression is
   * not used, all messsages are sent in band 0.  If raw messages
   * are to be sent, they are always sent in band 0, even when
   * compression is active.  Within each band, messages are
   * randomly assigned slots.  This serves as a simple, 
   * application-level, MAC-like technique to improve data
   * reception.
   */
  void sendDelayedMsg() {
    uint8_t slot = call Random.rand() & (WT_SLOTS - 1);
    uint32_t delay = slot * WT_SLOT_TIME;
#ifdef RAW
    if (resultType & WC_RT_RAW) {
      // Raw values (if enabled) sent in the first band
      uint8_t rawSlot = call Random.rand() & (WT_SLOTS - 1);
      uint32_t rawDelay = rawSlot * WT_SLOT_TIME;
      dbg(DBG_USR2, "Transmit: Raw:     band 0, slot %i, %i bms\n", rawSlot, rawDelay);
      call DelayRaw.start(TIMER_ONE_SHOT, rawDelay);
    }
#endif
    if (resultType & WC_RT_COMP) {
      if (matchingBand == numBands) {
        dbg(DBG_USR2, "Transmit: Results don't match any bands!\n");
        return;
      }
      delay += matchingBand * WT_BAND_TIME;
      dbg(DBG_USR2, "Transmit: Results: band %i, slot %i, %i bms\n", matchingBand, slot, delay);
      call DelayResults.start(TIMER_ONE_SHOT, delay);
    } else {
      dbg(DBG_USR2, "Transmit: Results: band 0, slot %i, %i bms\n", slot, delay);
      call DelayResults.start(TIMER_ONE_SHOT, delay);
    }
  }
  
  /**
   * Returns the length of the transmit stage.
   */
  uint32_t getTransmitTime() {
    if (resultType & WC_RT_COMP) {        
      return WT_BAND_TIME * numBands;
    }      
    return WT_SLOT_STAGE_TIME;
  }

  // Commands and Events
  
  command result_t StdControl.init() {
    confAlloc = FALSE;
    call Random.init();
    return SUCCESS;
  }
  
  command result_t StdControl.start() {
    call BigPackClient.registerListener();
    call State.forceState(WS_OFFLINE);
    post runState();
    return SUCCESS;
  }
  
  command result_t StdControl.stop() {
    return SUCCESS;
  }
  
  /**
   * After new sensor data has been read, it is stored locally
   * for later use.
   */
  event void SensorData.readDone(float *newVals) {
    uint8_t i;
    for (i = 0; i < WT_SENSORS; i++) {
      sample[freeSample].value[i] = newVals[i];
#ifdef RAW
      sample[freeSample].rawValue[i] = newVals[i];
#endif      
    }
    freeSample = (freeSample + 1) % numSamples;
    call State.toIdle();
  }
  
  /**
   * Once the request is complete, the requester is given a pointer to the main
   * data block.
   */
  event void BigPackClient.requestDone(void *mainBlock, result_t result) {
    if (result == SUCCESS) {
      int8_t s;
      uint8_t i;
      ExtWaveletConf *conf = (ExtWaveletConf *) mainBlock;
      ExtWaveletScale **scl = conf->scale;
      waveletFree();
      dbg(DBG_USR2, "Wavelet: Big Pack Config Test\n");
      predicted = FALSE;
      numScales = conf->numScales;
      if ((scale = malloc(numScales * sizeof(WaveletScale))) == NULL) {
        dbg(DBG_USR2, "Wavelet: Couldn't allocate scale!\n");
        return;
      }
      if ((state = malloc(numScales * sizeof(uint8_t))) == NULL) {
        dbg(DBG_USR2, "Wavelet: Couldn't allocate state!\n");
        return;
      }
      for (s = numScales - 1; s >= 0; s--) {
        dbg(DBG_USR2, "Wavelet: Scale #%i\n", s + 1);
        state[s] = scl[s]->myState;
        dbg(DBG_USR2, "Wavelet:   State: %i\n", state[s]);
        scale[s].nbCount = scl[s]->nbCount;
        if ((scale[s].nb = malloc(scale[s].nbCount * sizeof(WaveletNeighbor))) == NULL) {
          dbg(DBG_USR2, "Wavelet: Couldn't allocate nb for scale #%i!\n", s + 1);
          return;
        }
        for (i = 0; i < scl[s]->nbCount; i++) {
          dbg(DBG_USR2, "Wavelet:   Neighbor #%i\n", i + 1);
          scale[s].nb[i].id = scl[s]->nb[i].id;
          dbg(DBG_USR2, "Wavelet:     ID:    %i\n", scale[s].nb[i].id);
          scale[s].nb[i].coeff = scl[s]->nb[i].coeff;
          dbg(DBG_USR2, "Wavelet:     Coeff: %f\n", scale[s].nb[i].coeff);
        }
        if (!predicted && state[s] == WS_PREDICTING)
          predicted = TRUE;
      }
      confAlloc = TRUE;
      call State.toIdle();
    }
    call BigPackClient.free();
  }
  
  
  // TODO: Could be improved, doesn't respond for all messages.
  event result_t SendData.sendDone(TOS_MsgPtr msg, result_t success) {
    /* switch (call State.getState()) {
        case WS_UPDATING: {
          if (result == FAIL)
            dbg(DBG_USR2, "Update: DS: %i, S: %i, Sending values to predict motes failed!\n",
                curSet, curScale + 1);
          break; }
        case WS_DONE: {
          if (result == SUCCESS) {
            dbg(DBG_USR2, "Done: DS: %i, Sending final values to base successful\n", curSet);
            call State.toIdle();
          } else {
            dbg(DBG_USR2, "Done: DS: %i, Sending final values to base failed!\n", curSet);
          } break; }
      } */
    return SUCCESS;
  }

  event TOS_MsgPtr RcvData.receive(uint16_t src, TOS_MsgPtr m) {
    uint8_t mote, sens;
    WaveletData *wd = (WaveletData *)m->data;
    if (wd->dataSet != curSet || wd->scale != curScale)
      return m; // Rejects data for the wrong data set or scale
    switch (call State.getState()) {
    case WS_PREDICTING: {
      if (wd->state == WS_UPDATING) {
        for (mote = 0; mote < scale[curScale].nbCount; mote++) {
          if (scale[curScale].nb[mote].id == src)
            break;
        }
        if (mote < scale[curScale].nbCount) {
          dbg(DBG_USR2, "Predict: DS: %i, S: %i, Got values from update mote %i\n",
              curSet, curScale + 1, src);
          scale[curScale].nb[mote].stale = FALSE;
          for (sens = 0; sens < WT_SENSORS; sens++)
            scale[curScale].nb[mote].value[sens] = wd->value[sens];
        } else {
          dbg(DBG_USR2, "Predict: DS: %i, S: %i, BAD NEIGHBOR! Got values from update mote %i\n",
              curSet, curScale + 1, src);
        }
      }
      break; }
    case WS_UPDATING: {
      if (wd->state == WS_PREDICTED) {
        for (mote = 0; mote < scale[curScale].nbCount; mote++) {
          if (scale[curScale].nb[mote].id == src)
            break;
        }
        if (mote < scale[curScale].nbCount) {
          dbg(DBG_USR2, "Update: DS: %i, S: %i, Got values from predict mote %i\n",
              curSet, curScale + 1, src);
          scale[curScale].nb[mote].stale = FALSE;
          for (sens = 0; sens < WT_SENSORS; sens++)
            scale[curScale].nb[mote].value[sens] = wd->value[sens];
        } else {
          dbg(DBG_USR2, "Update: DS: %i, S: %i, BAD NEIGHBOR! Got values from predict mote %i\n",
              curSet, curScale + 1, src);
        }
      }
      break; }
    }
    return m;
  }
    
  event TOS_MsgPtr RcvCntl.receive(uint16_t src, TOS_MsgPtr m) {
    WaveletControl *wc = (WaveletControl *)m->data;
    WaveletOpt *wo = &wc->data.opt;
    if (TOS_LOCAL_ADDRESS == 0)
      return m;
    if (wc->mask & WC_TRANSFORMTYPE) {
      dbg(DBG_USR2, "Wavelet: Setting transform type to %i\n", wo->transformType);
      transformType = wo->transformType;
      if (transformType == WC_TT_2DRWAGNER)
        sampleAlloc(1);
    }
    if (wc->mask & WC_RESULTTYPE) {
      dbg(DBG_USR2, "Wavelet: Setting result type to %i\n", wo->resultType);
      resultType = wo->resultType;
    }
    if (wc->mask & WC_TIMEDOMAINLENGTH) {
      dbg(DBG_USR2, "Wavelet: Setting time domain length to %i\n", wo->timeDomainLength);
      sampleAlloc(wo->timeDomainLength);
    }
    if (wc->mask & WC_SAMPLETIME) {
      dbg(DBG_USR2, "Wavelet: Setting sample time to %i\n", wo->sampleTime);
      sampleTime = wo->sampleTime;
    }
    if (wc->mask & WC_COMPTARGET) {
      WaveletComp *wComp = &wc->data.comp;
      dbg(DBG_USR2, "Wavelet: Storing compression band target array\n");
      numBands = wComp->numBands;
      memcpy(compTarget, wComp->compTarget, sizeof(compTarget));
    }
    if (wc->mask & WC_CMD) {
      int8_t newState = -1;
      bool force = FALSE;
      // Ignore start command if we don't have the sample time
      // or haven't allocated the sample storage space.
      if (wc->cmd == WC_START_TRANSFORM && 
          (sampleTime == 0 || numSamples == 0))
        return m;
      switch (wc->cmd) {
      case WC_CONFIGURE: {
        newState = WS_CONFIGURE;
        break; } 
      case WC_START_TRANSFORM: {
        newState = WS_CLEAR_SENSORS;
        break; } 
      case WC_STOP_TRANSFORM: {
        newState = WS_OFFLINE;
        force = TRUE;
        break; } 
      case WC_STOP_DATASET: {
        newState = WS_IDLE;
        call DelayResults.stop();
#ifdef RAW
        call DelayRaw.stop();
#endif       
        break; } 
      }
      // Ignore unsupported commands
      if (newState == -1)
        return m;
      if (call State.requestState(newState) == FAIL) {
        if (force) {
          call State.forceState(newState);
          dbg(DBG_USR1, "Wavelet: Forced to state %i\n", newState);          
        } else {      
          dbg(DBG_USR2, "Wavelet: Failed to process command %i, still in state %i!\n", 
              wc->cmd, call State.getState());
        }
      } else { 
        dbg(DBG_USR1, "Wavelet: Moved to state %i\n", newState);     
      }
      dbg(DBG_USR1, "Wavelet: Processed command %i successfully\n", wc->cmd);
      post runState();
    }
    return m;
  }
  
  // Timers
  
  /**
   * Enforces a synchronized transmit time by moving to the transmit
   * stage when the timer fires.
   */
  event result_t TransmitTimer.fired() {
    if (call State.requestState(WS_TRANSMIT) == FAIL) {
      dbg(DBG_USR2, "Wavelet: Data set %i did not finish in time!\n", curSet);
#ifdef BEEP
      call Beep.play(1, 250);
#endif
    } else {
      post runState();
    }
    return SUCCESS;
  }
  
  /**
   * Fires periodically to collect data samples.  After all
   * samples needed for a full time domain set have been collected,
   * the 2D spatial transform will be started.  Even if the time
   * domain transform is not activated, that is just the same as
   * as a time domain set of length 1.
   */
  event result_t SampleTimer.fired() {
    if (call State.requestState(WS_CLEAR_SENSORS) == FAIL) {
      dbg(DBG_USR2, "Wavelet: Moving to collect sample %i failed!\n", freeSample);
#ifdef BEEP
      call Beep.play(1, 250);
#endif
    } else {
      post runState();
    }
    return SUCCESS;
  }
  
  /**
   * Enforces delays between each state change.
   */
  event result_t StateTimer.fired() {
    if (call State.requestState(nextState) == FAIL) {
      if (forceNextState) {
        call State.forceState(nextState);
        dbg(DBG_USR1, "Wavelet: Forced to state %i\n", nextState);
        post runState();
      } else {      
        dbg(DBG_USR2, "Wavelet: Failed to move to state %i, still in state %i!\n", 
            nextState, call State.getState());
#ifdef BEEP
        call Beep.play(1, 250);
#endif
      }
    } else { 
      dbg(DBG_USR1, "Wavelet: Moved to state %i\n", nextState);
      post runState();      
    }
    return SUCCESS;
  }
  
  /**
   * Once this mote has finished a data set, its results are packaged
   * up and sent to the computer.
   * Fired during WS_TRANSMIT.
   */
  event result_t DelayResults.fired() {
    uint8_t i;
    TOS_MsgPtr m = call MakeData.create();
    WaveletData *wd = (WaveletData *)m->data;
    wd->dataSet = curSet;
    wd->scale = 0;
    wd->state = WS_TRANSMIT;
    for (i = 0; i < WT_SENSORS; i++)
      wd->value[i] = value[i];
    call SendData.send(NET_UART_ADDR, sizeof(WaveletData), m);
    dbg(DBG_USR1, "Transmit: DS: %i, results sent!\n", curSet);
    return SUCCESS;
  }
#ifdef RAW

  /**
   * Once this mote has finished a data set, its raw values are packaged
   * up and sent to the computer.  Only used for testing.
   * Fired during WS_TRANSMIT.
   */
  event result_t DelayRaw.fired() {
    uint8_t i;
    TOS_MsgPtr m = call MakeData.create();
    WaveletData *wd = (WaveletData *)m->data;
    wd->dataSet = curSet;
    wd->scale = 0;
    wd->state = WS_RAW;
    for (i = 0; i < WT_SENSORS; i++)
      wd->value[i] = rawValue[i];
    call SendData.send(NET_UART_ADDR, sizeof(WaveletData), m);
    dbg(DBG_USR1, "Transmit: DS: %i, raw sent!\n", curSet);
    return SUCCESS;
  }
#endif
}
