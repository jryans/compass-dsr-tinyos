/**
 * Creates a TOSMsg for use by other components.  Since our
 * networking stack is supported by Transceiver which stores
 * these centrally, we can't just create TOSMsgs wherever
 * we choose.
 * @author Ryan Stinnett
 */

includes AM;

interface CreateMsg
{
  /**
   * Allocates a message for a specific AM type.
   */
  command TOS_MsgPtr create();
  
  /**
   * Allocates a message for a specific AM type, and copies
   * data from a source message into it.
   */
  command TOS_MsgPtr createCopy(TOS_MsgPtr src);
}
