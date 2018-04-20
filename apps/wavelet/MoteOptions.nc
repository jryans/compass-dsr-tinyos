/**
 * Notifies applications of changes to mote-wide options.
 * @author Ryan Stinnett
 */

interface MoteOptions {
  
  /**
   * Signaled when an option affecting other applications is received.
   */
  event void receive(uint8_t optMask, uint8_t optValue);
  
  /**
   * Reset sleep countdown.
   */
  command void resetSleep();
  
}
