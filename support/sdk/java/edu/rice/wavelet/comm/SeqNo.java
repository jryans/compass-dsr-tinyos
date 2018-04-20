/**
 * SeqNo provides utilities for working with the broadcast sequence number
 * across instances of CompassTools.
 * @author Ryan Stinnett
 */

package edu.rice.wavelet.comm;

import java.io.*;
import java.util.*;
import edu.rice.wavelet.*;

public class SeqNo {
	private static Properties p = new Properties();
	private static short sequenceNo = 1;
	
	public static short getNext() {
		return sequenceNo++;
	}

	public static void read() {
		try {
			FileInputStream fis = new FileInputStream(CompassTools.packagePath
					+ "bcast.properties");
			p.load(fis);
			sequenceNo = (short) Integer.parseInt(p.getProperty("sequenceNo", "1"));
			fis.close();
		} catch (IOException e) {
			p.setProperty("sequenceNo", "1");
			sequenceNo = 1;
		}
	}
	
	public static void write() {
		try {
			FileOutputStream fos = new FileOutputStream(CompassTools.packagePath
					+ "bcast.properties");
			p.setProperty("sequenceNo", Integer.toString(sequenceNo));
			p.store(fos, "#Properties for BcastInject\n");
		} catch (IOException e) {
			System.err.println("Exception while saving sequence number" + e);
			e.printStackTrace();
		}
	}
}
