/**
 * MATLAB uses this class to write out its calculated data
 * into XML format for later use by other Java code.
 */
package edu.rice.wavelet;

import java.io.*;
import java.net.*;

import com.thoughtworks.xstream.*;

public class WaveletMatlab {

	private static XStream xs = new XStream();

	private WaveletMatlab() {
	}

	/**
	 * Stores the parameters in a WaveletConfig and writes that out to an XML
	 * file.
	 */
	public static void saveConfig(double[][] coords, double[] scales, Object[] predNB,
			Object[] predCoeff, Object[] updNB, Object[] updCoeff) {
		WaveletConfigData conf = new WaveletConfigData(coords, scales, predNB, predCoeff,
				updNB, updCoeff);
		// Get package path
		Class pClass = WaveletMatlab.class;
		Package mPackage = pClass.getPackage();
		URL pAddr = pClass.getResource("/" + mPackage.getName().replace('.', '/'));
		// Add file name
		String path = pAddr.getPath() + "/waveletConfig.xml";
		try {
			FileOutputStream fs = new FileOutputStream(path);
			xs.toXML(conf, fs);
			fs.close();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	public static float[][][] loadData(String fileName) {
		// Get package path
		Class pClass = WaveletMatlab.class;
		Package mPackage = pClass.getPackage();
		URL pAddr = pClass.getResource("/" + mPackage.getName().replace('.', '/'));
		// Add file name
		String path = pAddr.getPath() + "/" + fileName;
		WaveletDataStore mData = null;
		try {
			FileInputStream fs = new FileInputStream(path);
			mData = (WaveletDataStore) xs.fromXML(fs);
			fs.close();
		} catch (Exception e) {
			e.printStackTrace();
		}
		return mData.value;
	}
}