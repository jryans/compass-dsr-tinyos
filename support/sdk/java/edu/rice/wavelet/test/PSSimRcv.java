package edu.rice.wavelet.test;

import net.tinyos.message.*;
import edu.rice.wavelet.*;
import edu.rice.wavelet.comm.*;

public class PSSimRcv implements MessageListener {

	private static PSSimRcv main;

	public static void main(String[] args) {
		try {
			main = new PSSimRcv();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	private PSSimRcv() {
		MoteCom.singleton.registerListener(new UnicastPack(), this);
	}

	public void messageReceived(int to, Message m) {
		UnicastPack pack = (UnicastPack) m;
		if (pack.get_data_type() == CompassMote.WAVELETDATA) {
			int id = pack.get_data_data_wData_level();
			System.out.println("n" + id + ": " + pack.getElement_data_data_wData_value(0)
					+ ", q" + id + ": " + pack.getElement_data_data_wData_value(1));
		}
	}

}
