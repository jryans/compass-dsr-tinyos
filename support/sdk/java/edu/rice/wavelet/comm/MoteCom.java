/* "Copyright (c) 2000-2003 The Regents of the University  of California.  
 * All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement is
 * hereby granted, provided that the above copyright notice, the following
 * two paragraphs and the author appear in all copies of this software.
 * 
 * IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT
 * OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF THE UNIVERSITY OF
 * CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE UNIVERSITY OF CALIFORNIA HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS."
 *
 * Copyright (c) 2002-2003 Intel Corporation
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached INTEL-LICENSE     
 * file. If you do not find these files, copies can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA, 
 * 94704.  Attention:  Intel License Inquiry.
 */

/**
 * Extends MoteIF to support higher level UnicastPack and BroadcastPack
 * abstractions.  The broadcast implementation is based on BcastInject.
 * @author Ryan Stinnett
 * @author <a href="mailto:szewczyk@sourceforge.net">Robert Szewczyk</a>
 */
package edu.rice.wavelet.comm;

import java.io.*;
import java.util.*;
import edu.rice.wavelet.CompassTools;
import net.tinyos.message.*;

public class MoteCom extends MoteIF {
	public static final int NET_UART_ADDR = 0xfffe;

	public static MoteCom singleton = new MoteCom();
	
	//private RoutingReceiver roRe;
	private Receiver rcv;

	private MoteCom() {
		source.deregisterPacketListener(receiver);
		//roRe = new RoutingReceiver(source);
		rcv = new Receiver(source);
	}

	private void debugMsg(Message msg) {
		CompassTools.debugPrint("Payload: ");
		for (int i = 0; i < msg.dataLength(); i++) {
			CompassTools.debugPrint(Integer.toHexString(msg.dataGet()[i] & 0xff)
					+ " ");
		}
		CompassTools.debugPrintln();
	}

	public void sendMsg(Message m, int dest) throws IOException {
		UnicastPack p = new UnicastPack();
		p.amTypeSet(m.amType()); // Copy AM type
		// Copy data
		p.dataSet(m.dataGet(), 0, UnicastPack.offset_data(0), m.dataLength());
		// Set unicast parameters
		p.set_h_attemptNum((short) 0);
		p.set_h_src(NET_UART_ADDR);
		p.set_h_dest(dest);
		debugMsg(p);
		send(0, p); // Send to base for further routing
	}

	public void broadcastMsg(Message m) throws IOException {
		BroadcastPack p = new BroadcastPack();
		p.amTypeSet(m.amType()); // Copy AM type
		// Copy data
		p.dataSet(m.dataGet(), 0, BroadcastPack.offset_data(0), m.dataLength());
		// Set broadcast parameters
		p.set_h_seqNo(SeqNo.getNext());
		debugMsg(p);
		send(TOS_BCAST_ADDR, p); // Broadcast to all motes		
		SeqNo.write(); // Save updated seq. no
	}

	public void addMsgReceiver(int mType, SrcReceiveMsg r) {
		roRe.addMsgReceiver(mType, r);
	}
}
