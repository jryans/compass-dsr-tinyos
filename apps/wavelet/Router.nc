/**
 * Allows other components access to various details of the unicast routing layer.
 * Separating the routing layer makes it easy to test different routing strategies.
 * @author Ryan Stinnett
 */
 
interface Router {
  
  /**
   * Reports the current state of the routing layer.  RO_INIT means the layer is
   * starting up and determining the initial routing table.  RO_READY means it
   * has a usable routing table.
   */
  command uint8_t getStatus();
  
  /**
   * Gives the address of the next hop for a given message.
   */
  command uint16_t getNextAddr(uint8_t type, uint16_t dest);
}
