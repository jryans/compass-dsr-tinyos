/**
 * MATLAB uses this class to import stats data.
 */
package edu.rice.wavelet;

import java.io.*;
import java.net.*;
import java.util.*;
import com.thoughtworks.xstream.XStream;

public class StatsMatlab {

	private static XStream xs = new XStream();
	private static Vector vRes;

	private StatsMatlab() {
	}
	
	public static void main(String[] args) {
		loadStats("tests/dist");
	}

	public static Object[] loadStats(String subdir) {
		// Get package path
		Class pClass = StatsMatlab.class;
		Package mPackage = pClass.getPackage();
		URL pAddr = pClass.getResource("/" + mPackage.getName().replace('.', '/'));
		// Add subdirectory
		String path = pAddr.getPath() + "/" + subdir;
		File dir = new File(path);
		vRes = new Vector();
		if (dir.exists()) {
			moveDown(dir, "");
			return vRes.toArray();
		}
		return null;
	}
	
	private static void moveDown(File dir, String prefix) {
		File[] child = dir.listFiles();
		for (int i = 0; i < child.length; i++) {
			if (child[i].isDirectory()) {
				moveDown(child[i], prefix + child[i].getName() + "/");
			} else if (child[i].isFile() && child[i].getName().endsWith(".xml")) {
				Object[] fInfo = new Object[2];
				fInfo[0] = prefix + child[i].getName();
				try {
					FileInputStream fs = new FileInputStream(child[i]);
					fInfo[1] = xs.fromXML(fs);
					fs.close();
				} catch (Exception e) {
					e.printStackTrace();
				}
				vRes.add(fInfo);
			}
		}
	}
}
