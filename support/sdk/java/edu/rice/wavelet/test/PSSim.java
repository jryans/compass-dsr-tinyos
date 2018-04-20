package edu.rice.wavelet.test;

import java.io.*;
import java.util.*;

import com.martiansoftware.jsap.*;

import edu.rice.wavelet.*;
import edu.rice.wavelet.comm.*;

public class PSSim {

	private static PSSim main;
	private JSAPResult config;

	private QuantData inputData;

	private float p;
	private static final int numMarkers = 5;
	private float q[] = new float[numMarkers];
	private int n[] = new int[] { 1, 2, 3, 4, 5 };
	private float nDes[];
	private float dnDes[];
	int numSeen;
	private float dataSum;
	private boolean send;

	private PSSim(String[] args) throws JSAPException {
		SimpleJSAP parser = new SimpleJSAP("PSSim",
				"Simulation of estimating a p-quantile", new Parameter[] {
						new FlaggedOption("p", JSAP.FLOAT_PARSER, "0.5", JSAP.REQUIRED,
								'p', JSAP.NO_LONGFLAG), new Switch("send", 's', "send"),
						new Switch("test", 't', "test") });

		config = parser.parse(args);
		if (parser.messagePrinted())
			System.exit(1);

		if (config.getBoolean("test"))
			sendTest();

		p = config.getFloat("p");
		send = config.getBoolean("send");
		// Calculate dnDes[], which are constant values
		dnDes = new float[] { 0, p / 2, p, (1 + p) / 2, 1 };
		// Initialize nDes[]
		nDes = new float[] { 1, 1 + 2 * p, 1 + 4 * p, 3 + 2 * p, 5 };
	}

	public static void main(String[] args) {
		try {
			main = new PSSim(args);
			main.execute();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	private void execute() {
		dataSum = 0;
		Mote testMote = null;
		UnicastPack pack = null;
		// Load simulated data
		inputData = QuantMatlab.loadData();
		System.out.println("Markers: " + numMarkers + ", p: " + p);
		System.out.println("Input Elements: " + inputData.data.length);
		// Add each input to the summary to simulate a stream
		if (!send) {
			for (numSeen = 0; numSeen < inputData.data.length; numSeen++) {
				addNextElement();
			}
			finalStats();
			System.exit(0);
		} else {
			new Timer().scheduleAtFixedRate(new PingQ(this, inputData, new Mote(0)),
					100, 30);
		}
	}

	public void addNextElement() {
		System.out.println("Adding element " + (numSeen + 1) + ": "
				+ inputData.data[numSeen]);
		newData((float) inputData.data[numSeen]);
		dataSum += inputData.data[numSeen];
	}
	
	public void finalStats() {
		System.out.println("Final stats:");
		System.out.println("  Min: " + min());
		System.out.println("  Max: " + max());
		System.out.println("  Avg: " + dataSum / numSeen);
		System.out.println("  Est. p-quantile: " + pval());
		System.out.println("  Act. p-quantile: " + inputData.median);
		System.out.println("  Error: " + Math.abs(pval() - inputData.median));
	}

	private float min() {
		return q[0];
	}

	private float pval() {
		return q[numMarkers / 2];
	}

	private float max() {
		return q[numMarkers - 1];
	}

	private void newData(float newVal) {
		if (numSeen < 5) {
			// Store first five elements as marker heights and sort them
			q[numSeen] = newVal;
			if (numSeen == 4)
				sort();
		} else {
			// Find markers that the new value fits between
			int k = 6;
			if (newVal < q[0]) {
				q[0] = newVal;
				k = 1;
			} else if (q[0] <= newVal && newVal < q[1]) {
				k = 1;
			} else if (q[1] <= newVal && newVal < q[2]) {
				k = 2;
			} else if (q[2] <= newVal && newVal < q[3]) {
				k = 3;
			} else if (q[3] <= newVal && newVal <= q[4]) {
				k = 4;
			} else if (q[4] < newVal) {
				q[4] = newVal;
				k = 4;
			}
			if (k == 6) {
				System.out.println("Can't find k for new data element!");
				System.exit(1);
			}
			// Increment markers from k + 1 to 5
			for (int i = k; i < 5; i++)
				n[i]++;
			// Update desired positions for all markers
			for (int i = 0; i < 5; i++)
				nDes[i] += dnDes[i];
			// Adjust heights of markers 2 - 4 if needed
			for (int i = 1; i < 4; i++) {
				float d = nDes[i] - n[i];
				if ((d >= 1 && n[i + 1] - n[i] > 1)
						|| (d <= -1 && n[i - 1] - n[i] < -1)) {
					int di = (int) (d / Math.abs(d)); // Equiv: di <- sign(d)
					// Try using parabolic formula
					float qDes = parabolaAdj(di, i);
					// If new value moves marker past another, use linear.
					if (q[i - 1] < qDes && qDes < q[i + 1]) {
						q[i] = qDes;
					} else {
						q[i] = linearAdj(di, i);
					}
					// Adjust marker position
					n[i] += di;
				}
			}
		}
	}

	float parabolaAdj(int d, int i) {
		// Break up formula for my own sanity
		int niminus = n[i] - n[i - 1];
		int niplus = n[i + 1] - n[i];
		float a = (float) d / (niplus + niminus);
		float c = (q[i + 1] - q[i]) / niplus;
		float f = (q[i] - q[i - 1]) / niminus;
		return q[i] + a * (((niminus + d) * c) + ((niplus - d) * f));
	}

	float linearAdj(int d, int i) {
		float a = (q[i + d] - q[i]) / (n[i + d] - n[i]);
		return q[i] + d * a;
	}

	void sort() {
		int mi;
		float m;
		for (int i = 0; i < numMarkers - 1; i++) {
			/* find the minimum */
			mi = i;
			for (int j = i + 1; j < numMarkers; j++) {
				if (q[j] < q[mi]) {
					mi = j;
				}
			}
			m = q[mi];
			/* move elements to the right */
			for (int j = mi; j > i; j--) {
				q[j] = q[j - 1];
			}
			q[i] = m;
		}
	}

	void sendTest() {
		UnicastPack pack = new UnicastPack();
		Mote mote = new Mote(0);
		pack.set_data_type(CompassMote.WAVELETDATA);
		pack.setElement_data_data_wData_value(0, -234);
		try {
			mote.sendPack(pack);
		} catch (IOException e) {
			e.printStackTrace();
		}
		System.exit(0);
	}

}

class PingQ extends TimerTask {

	private QuantData quant;
	private Mote mote;
	private UnicastPack pack = new UnicastPack();
	private PSSim sim;

	public PingQ(PSSim aSim, QuantData q, Mote aMote) {
		sim = aSim;
		sim.numSeen = 0;
		quant = q;
		mote = aMote;
		pack.set_data_type(CompassMote.WAVELETDATA);
	}

	public void run() {
		if (sim.numSeen < quant.data.length) {
			sim.addNextElement();
			System.out.println(sim.numSeen + " pings left!");
			pack.setElement_data_data_wData_value(0, (float) quant.data[sim.numSeen]);
			try {
				mote.sendPack(pack);
			} catch (IOException e) {
				e.printStackTrace();
			}
			sim.numSeen++;
		} else {
			sim.finalStats();
			pack.setElement_data_data_wData_value(0, -234);
			try {
				mote.sendPack(pack);
			} catch (IOException e) {
				e.printStackTrace();
			}
			cancel();
			System.exit(0);
		}
	}

}