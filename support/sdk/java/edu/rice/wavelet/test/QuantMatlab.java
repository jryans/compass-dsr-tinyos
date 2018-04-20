package edu.rice.wavelet.test;

import java.io.*;
import java.net.*;

import com.thoughtworks.xstream.*;

public class QuantMatlab {

	private static XStream xs = new XStream();

	private QuantMatlab() {
	}

	public static void saveQuant(double[] data, double median) {
		QuantData qData = new QuantData();
		qData.data = data;
		qData.median = median;
		// Get package path
		Class pClass = QuantMatlab.class;
		Package mPackage = pClass.getPackage();
		URL pAddr = pClass.getResource("/" + mPackage.getName().replace('.', '/'));
		// Add file name
		String path = pAddr.getPath() + "/qInput.xml";
		try {
			FileOutputStream fs = new FileOutputStream(path);
			xs.toXML(qData, fs);
			fs.close();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	public static QuantData loadData() {
		QuantData qData = new QuantData();
		// Get package path
		Class pClass = QuantMatlab.class;
		Package mPackage = pClass.getPackage();
		URL pAddr = pClass.getResource("/" + mPackage.getName().replace('.', '/'));
		// Add file name
		String path = pAddr.getPath() + "/qInput.xml";
		try {
			FileInputStream fs = new FileInputStream(path);
			qData = (QuantData) xs.fromXML(fs);
			fs.close();
		} catch (Exception e) {
			e.printStackTrace();
		}
		return qData;
	}

}
