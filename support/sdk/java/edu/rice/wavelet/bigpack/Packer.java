/**
 * Chops up the data of a message into multiple packs.
 * @author Ryan Stinnett
 */

package edu.rice.wavelet.bigpack;

import java.io.*;
import edu.rice.wavelet.*;
import edu.rice.wavelet.comm.*;
import net.tinyos.message.*;

public class Packer extends ProtoPacker {

	public Packer(PackerHost myOwner) {
		super(myOwner);
		MoteCom.singleton.addMsgReceiver(BigPackHeader.AM_TYPE,
				new SrcReceiveMsg() {
					public void receiveMsg(int src, Message m) {
						if (src != owner.getID() || !enabled)
							return;
						BigPackHeader bph = (BigPackHeader) m;
						// If true, this is the initial request, else an ACK.
						if (!busy && bph.get_packTotal() == 0) {
							CompassTools.debugPrintln("Got BP header request from mote " + src);
							type = bph.get_requestType();
							// Build a new BigPack of the requested type
							BigPack newPack = owner.buildPack(type);
							if (newPack == null) {
								CompassTools.debugPrintln("BP could not be built for mote "
										+ src + "!");
								return;
							}
							newMessage(newPack);
							curPackNum = HEADER_PACK_NUM;
							sendHeader(); // Send BP header
						} else if (busy && bph.get_packTotal() != 0
								&& curPackNum == HEADER_PACK_NUM
								&& bph.get_requestType() == type) {
							CompassTools.debugPrintln("Got BP header ack from mote " + src);
							curPackNum++;
							sendData(); // Send BP data
						}
					}
				});
		MoteCom.singleton.addMsgReceiver(BigPackData.AM_TYPE, new SrcReceiveMsg() {
			public void receiveMsg(int src, Message m) {
				if (src != owner.getID() || !enabled)
					return;
				BigPackData bpd = (BigPackData) m;
				if (busy && bpd.get_curPack() == curPackNum) {
					if (morePacksExist()) {
						CompassTools.debugPrintln("Got BP data ack from mote " + src);
						curPackNum++;
						sendData(); // Send BP data
					} else {
						CompassTools.debugPrintln("BP sent to mote " + src + " complete");
						busy = false;
						owner.packerDone(type); // Done!
					}
				}
			}
		});
	}

	private void newMessage(BigPack msg) {
		if (!busy) {
			stream = msg.dataStream();
			numBlocks = msg.numBlocks();
			numPtrs = msg.numPointers();
			try {
				type = BigPack.getTypeFromClass(msg.getClass()).shortValue();
			} catch (Exception e) {
				return;
			}
			numPacks = stream.length / BigPackData.totalSize_data();
			if (stream.length % BigPackData.totalSize_data() != 0)
				numPacks++;
			busy = true;
		}
	}

	private void sendHeader() {
		BigPackHeader h = new BigPackHeader();
		h.set_requestType(type);
		h.set_packTotal((short) numPacks);
		h.set_byteTotal(stream.length);
		h.set_numBlocks((short) numBlocks);
		h.set_numPtrs((short) numPtrs);
		try {
			owner.sendMsg(h);
			CompassTools.debugPrintln("Sent BP header (0/" + numPacks + ") to mote "
					+ owner.getID());
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

	private void sendData() {
		BigPackData d = new BigPackData();
		d.set_curPack(curPackNum);
		int firstByte = curPackNum * BigPackData.totalSize_data();
		int length = BigPackData.totalSize_data();
		if ((firstByte + length) > stream.length)
			length = stream.length - firstByte;
		d.dataSet(stream, firstByte, BigPackData.offset_data(0), length);
		try {
			owner.sendMsg(d);
			CompassTools.debugPrintln("Sent BP data (" + (curPackNum + 1) + "/"
					+ numPacks + ") to mote " + owner.getID());
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

}
