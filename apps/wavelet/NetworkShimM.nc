/**
 * Acts as a layer between applications and routing
 * protocols.
 * @author Ryan Stinnett
 */
 
includes AM;
 
module NetworkShimM {
  // Utilities
  provides interface CreateMsg[uint8_t type];
  // Transceiver
  uses interface Transceiver as IO[uint8_t type];
}

implementation {
  
  // CreateMsg
  
  /**
   * Allocates a message for a specific AM type.
   */
  command TOS_MsgPtr CreateMsg.create[uint8_t type]() {
    return call IO.requestWrite[type]();
  }
  
  /**
   * Allocates a message for a specific AM type, and copies
   * data from a source message into it.
   */
  command TOS_MsgPtr CreateMsg.createCopy[uint8_t type](TOS_MsgPtr src) {
    TOS_MsgPtr tmp = call IO.requestWrite[type]();
    if (tmp == NULL)
      return tmp;
    memcpy(tmp, src, sizeof(TOS_Msg));
    // If the source message didn't have it's type set previously,
    // then the new message won't be able to be sent.
    tmp->type = type;
    return tmp;
  }
  
  // Transceiver
  
  /**
   * A message was sent over radio.
   * @param m - a pointer to the sent message, valid for the duration of the 
   *     event.
   * @param result - SUCCESS or FAIL.
   */
  event result_t IO.radioSendDone[uint8_t type](TOS_MsgPtr m, result_t result) {
    return SUCCESS;
  }
  
  /**
   * A message was sent over UART.
   * @param m - a pointer to the sent message, valid for the duration of the 
   *     event.
   * @param result - SUCCESS or FAIL.
   */
  event result_t IO.uartSendDone[uint8_t type](TOS_MsgPtr m, result_t result) {
    return SUCCESS;
  }
  
  /**
   * Received a message over the radio
   * @param m - the receive message, valid for the duration of the 
   *     event.
   */
  event TOS_MsgPtr IO.receiveRadio[uint8_t type](TOS_MsgPtr m) {
    return m;
  }
  
  /**
   * Received a message over UART
   * @param m - the receive message, valid for the duration of the 
   *     event.
   */
  event TOS_MsgPtr IO.receiveUart[uint8_t type](TOS_MsgPtr m) {
    return m;	
  }
  
}
