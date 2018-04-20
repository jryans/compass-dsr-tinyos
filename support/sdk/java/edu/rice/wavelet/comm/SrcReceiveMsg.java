/**
 * Receivers should create anonymous inner classes that
 * use this interface to receive a certain message type.
 * @author Ryan Stinnett
 */
package edu.rice.wavelet.comm;

import net.tinyos.message.*;

public interface SrcReceiveMsg {
  void receiveMsg(int src, Message m);
}
