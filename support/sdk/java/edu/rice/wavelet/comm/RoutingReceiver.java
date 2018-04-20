/**
 * Based on the TinyOS Receiver, but is more aware of the routing
 * protocols that need to be decoded.
 * @author Ryan Stinnett
 */

/*									tab:4
 * "Copyright (c) 2000-2003 The Regents of the University  of California.  
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
/* Authors:  David Gay  <dgay@intel-research.net>
 *           Intel Research Berkeley Lab
 *
 */

/**
 * @author David Gay <dgay@intel-research.net>
 * @author Intel Research Berkeley Lab
 */

package edu.rice.wavelet.comm;

import net.tinyos.message.*;
import net.tinyos.packet.*;
import java.util.*;
import java.io.*;
import java.lang.reflect.*;
import java.net.*;

public class RoutingReceiver implements net.tinyos.packet.PacketListenerIF {
	public static final boolean DEBUG = false;
	public static final boolean DISPLAY_ERROR_MSGS = true;

	PhoenixSource source;
	MessageFactory messageFactory;

	private Hashtable msgReceivers = new Hashtable();
	private Hashtable classNameByType;

	/**
	 * Create a receiver for messages from forwarder of group id gid and of active
	 * message type m.getType() When such a message is received, a new instance of
	 * m's class is created with the received data and send to
	 * listener.messageReceived
	 * 
	 * @param forwarder
	 *          packet source to listen to
	 */
	public RoutingReceiver(PhoenixSource forwarder) {
		buildClassTransTable();
		source = forwarder;
		forwarder.registerPacketListener(this);
		messageFactory = new MessageFactory(forwarder);
	}

	/**
	 * Adds every Message subclass whose AM type is not -1 to a hashtable for
	 * lookup by type.
	 */
	private void buildClassTransTable() {
		// Make new tables
		classNameByType = new Hashtable();
		// Get directory corresponding to this package
		Class pClass = Message.class;
		Package mPackage = MoteCom.class.getPackage();
		URL pAddr = pClass.getResource("/" + mPackage.getName().replace('.', '/'));
		File pDir = new File(pAddr.getFile());
		// Find all .class files in that directory
		String[] pClasses = pDir.list();
		for (int f = 0; f < pClasses.length; f++) {
			if (pClasses[f].endsWith(".class")) {
				String cName = pClasses[f].substring(0, pClasses[f].length() - 6);
				try {
					Class cClass = Class.forName(mPackage.getName() + "." + cName);
					// Check if this is either this class or a subclass
					if (pClass.isAssignableFrom(cClass)) {
						// Check if amType is not -1
						Field amType = cClass.getDeclaredField("AM_TYPE");
						if (amType.getInt(null) != -1) {
							// Should be registered
							classNameByType.put(new Integer(amType.getInt(null)),
									cClass.getName());
						}
					}
				} catch (Exception e) {
					System.out.println("Unable to build class translation tables!");
					e.printStackTrace();
					System.exit(1);
				}
			}
		}
	}

	private Class getClassFromType(int cType) throws Exception {
		String cName = (String) classNameByType.get(new Integer(cType));
		if (cName == null)
			throw new Exception("Type " + cType + "not registered!");
		return Class.forName(cName);
	}

	public void addMsgReceiver(int mType, SrcReceiveMsg r) {
		Integer type = new Integer(mType);
		try {
			// Make sure we found a message class for this type
			getClassFromType(mType);
		} catch (Exception e) {
			e.printStackTrace();
			return;
		}
		Vector rVec = (Vector) msgReceivers.get(type);
		if (rVec == null)
			rVec = new Vector();
		rVec.add(r);
		msgReceivers.put(type, rVec);
	}

	public void packetReceived(byte[] packet) {
		// XXX: hack: with the new packetsource format, packet does not
		// contain a crc field, so numElements_data() will be wrong. But we
		// access the data area via dataSet/dataGet, so we're ok.

		// this is where the source comes in to create the correct packet

		final TOSMsg msg = messageFactory.createTOSMsg(packet);

		if (DEBUG)
			Dump.dump("Received message", packet);

		// Assumes this is a UnicastPack, which should always be true (unless
		// the data is corrupt). Copies msg into a UnicastPack.
		int amType = msg.get_type();
		UnicastPack p = new UnicastPack(msg.get_length());
		p.amTypeSet(amType);
		p.dataSet(msg.dataGet(), msg.offset_data(0), 0, p.dataLength());
		// Only unicast messages will currently be received!
		if (p.get_h_dest() != MoteCom.NET_UART_ADDR)
			return;
		int src = p.get_h_src();
		// Check for registered receivers
		Vector rVec = (Vector) msgReceivers.get(new Integer(p.amType()));
		if (rVec == null)
			return;
		// Find the right message class, and make it.
		try {
			Class msgClass = getClassFromType(p.amType());
			Constructor msgMake = msgClass.getConstructor(new Class[] {});
			Message dataMsg = (Message) msgMake.newInstance(new Object[] {});
			dataMsg.dataSet(p.dataGet(), UnicastPack.offset_data(0), 0, dataMsg.dataLength());
			// Send a copy of the message to each receiver
			Enumeration rEnum = rVec.elements();
			while (rEnum.hasMoreElements()) {
				SrcReceiveMsg r = (SrcReceiveMsg) rEnum.nextElement();
				r.receiveMsg(src, (Message) dataMsg.clone());
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}
