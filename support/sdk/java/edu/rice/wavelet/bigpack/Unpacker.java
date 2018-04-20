/**
 * Chops up the data of a message into multiple packs.
 * @author Ryan Stinnett
 */

package edu.rice.wavelet.bigpack;

import java.io.*;
import java.lang.reflect.*;
import net.tinyos.message.*;
import edu.rice.wavelet.*;
import edu.rice.wavelet.comm.*;

public class Unpacker extends ProtoPacker {

	public Unpacker(PackerHost myOwner) {
		super(myOwner);
		MoteCom.singleton.addMsgReceiver(BigPackHeader.AM_TYPE,
				new SrcReceiveMsg() {
					public void receiveMsg(int src, Message m) {
						if (!busy || src != owner.getID() || !enabled)
							return;
						BigPackHeader bph = (BigPackHeader) m;
						if (curPackNum == HEADER_PACK_NUM && bph.get_requestType() == type) {
							// Store specific details of the request
							storeHeader(bph);
							CompassTools.debugPrintln("Got BP header (0/" + numPacks
									+ ") from mote " + src);
							curPackNum++;
							sendAck(bph); // Send an ACK
						}
					}
				});
		MoteCom.singleton.addMsgReceiver(BigPackData.AM_TYPE, new SrcReceiveMsg() {
			public void receiveMsg(int src, Message m) {
				if (!busy || src != owner.getID() || !enabled)
					return;
				BigPackData bpd = (BigPackData) m;
				if (bpd.get_curPack() == curPackNum) {
					storeMoreData(bpd); // Store new data
					CompassTools.debugPrintln("Got BP data (" + (curPackNum + 1) + "/"
							+ numPacks + ") from mote " + src);
					sendAck(bpd); // Send an ACK
					if (morePacksExist()) {
						curPackNum++;
					} else {
						CompassTools.debugPrintln("BP rcvd from mote " + src + " complete");
						busy = false; // Done!
						// Find the right class, and make it.
						try {
							Class msgClass = BigPack.getClassFromType(type);
							Constructor msgMake = msgClass.getConstructor(new Class[] {
									byte[].class, int.class, int.class });
							owner.unpackerDone((BigPack) msgMake.newInstance(new Object[] {
									stream, new Integer(numBlocks), new Integer(numPtrs) }));
						} catch (Exception e) {
							e.printStackTrace();
						}
					}
				}
			}
		});
	}

	public void newRequest(short mType) {
		if (!busy) {
			busy = true;
			type = mType;
			curPackNum = HEADER_PACK_NUM;
			sendRequest();
		}
	}

	private void sendRequest() {
		BigPackHeader req = new BigPackHeader();
		req.set_requestType(type);
		req.set_packTotal((short) 0);
		try {
			owner.sendMsg(req);
			CompassTools.debugPrintln("Sent BP request to mote " + owner.getID());
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

	private void storeHeader(BigPackHeader h) {
		numPacks = h.get_packTotal();
		numBlocks = h.get_numBlocks();
		numPtrs = h.get_numPtrs();
		stream = new byte[h.get_byteTotal()];
	}

	private void sendAck(Message m) {
		try {
			owner.sendMsg(m);
			CompassTools.debugPrintln("Sent ack to mote " + owner.getID());
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

	private void storeMoreData(BigPackData d) {
		int firstByte = d.get_curPack() * BigPackData.totalSize_data();
		int length = BigPackData.totalSize_data();
		if ((firstByte + length) > stream.length)
			length = stream.length - firstByte;
		System.arraycopy(d.dataGet(), BigPackData.offset_data(0), stream,
				firstByte, length);
	}

}
