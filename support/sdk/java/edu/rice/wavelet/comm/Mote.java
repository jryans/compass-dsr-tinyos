/**
 * Simple functions for sending messages to a specific mote.
 * @author Ryan Stinnett
 */
package edu.rice.wavelet.comm;

import java.io.*;
import net.tinyos.message.*;

public class Mote {

	protected int id;

	public Mote(int mID) {
		id = mID;
	}

	public int getID() {
		return id;
	}

	public void sendMsg(Message m) throws IOException {
		if (id == MoteCom.TOS_BCAST_ADDR)
			MoteCom.singleton.broadcastMsg(m);
		else
			MoteCom.singleton.sendMsg(m, id);
	}

}
