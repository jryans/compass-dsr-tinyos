/**
 * Broadcasts ping messages for diagnostic purposes.
 * @author Ryan Stinnett
 */

interface PingB {
  
  /**
   * Broadcasts a given number of ping messages.
   */
  command void send(uint16_t num);
  
  /**
   * Sends a given number of ping messages to a specific mote.
   */
  command void sendTo(uint16_t num, uint16_t mDest, uint8_t rRet);
  
}
