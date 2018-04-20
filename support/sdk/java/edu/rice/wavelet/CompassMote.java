/**
 * Adds message processing specific to each Compass mote, such as
 * support for reading stats data from a mote.
 * @author Ryan Stinnett
 */

package edu.rice.wavelet;

import java.io.*;
import java.util.*;
import net.tinyos.message.*;
import edu.rice.wavelet.bigpack.*;
import edu.rice.wavelet.comm.*;

public class CompassMote extends PackerMote {

	/* Wavelet Mote States */
	static final short WS_IDLE = 0;
	static final short WS_CONFIGURE = 1;
	static final short WS_START_DATASET = 2;
	static final short WS_READING_SENSORS = 3;
	static final short WS_UPDATING = 4;
	static final short WS_PREDICTING = 5;
	static final short WS_PREDICTED = 7;
	static final short WS_UPDATED = 8;
	static final short WS_SKIP_SCALE = 9;
	static final short WS_TRANSMIT = 10;
	static final short WS_OFFLINE = 11;
	static final short WS_CLEAR_SENSORS = 12;
	static final short WS_RAW = 13;

	/* Wavelet Commands */
	static final short WC_CONFIGURE = 0;
	static final short WC_START_TRANSFORM = 1;
	static final short WC_STOP_TRANSFORM = 2;
	static final short WC_STOP_DATASET = 3;

	private WaveletConf wConf;
	private boolean configDone = false;

	public static CompassMote broadcast = new CompassMote(MoteCom.TOS_BCAST_ADDR);

	public CompassMote(int mID, WaveletConfigData wc) {
		this(mID);
		try {
			wConf = dataTransform(wc);
		} catch (Exception e) {
			e.printStackTrace();
			System.exit(1);
		}
		addPackerApp(WaveletConf.getType(), makeWaveletConfApp(wConf));
	}

	public CompassMote(int mID) {
		super(mID);
		addPackerApp(MoteStats.getType(), makeStatsApp(mID));
	}

	private PackerMoteApp makeStatsApp(final int mote) {
		return new PackerMoteApp() {
			public void unpackerDone(BigPack msg) {
				MoteStats stats = (MoteStats) msg;
				System.out.println("Stats for Mote " + mote + ":");
				stats.printStats();
				CompassTools.saveResult(msg, "stats.xml");
			}
		};
	}

	private PackerMoteApp makeWaveletConfApp(final WaveletConf conf) {
		return new PackerMoteApp() {
			public BigPack buildPack() {
				return conf;
			}

			public void packerDone() {
				setConfigDone(true);
			}
		};
	}

	public static long BMStoMS(long bms) {
		return bms * 1000 / 1024;
	}

	public static long MStoBMS(long ms) {
		return ms * 1024 / 1000;
	}

	public boolean getStats() {
		System.out.println("Requesting stats from mote " + id);
		return requestPack(MoteStats.getType());
	}

	public void sendConfigure() {
		WaveletControl ws = makeWaveletControl();
		ws.cmd(WC_CONFIGURE);
		ws.send();
	}

	public void sendStop() {
		WaveletControl ws = makeWaveletControl();
		ws.cmd(WC_STOP_TRANSFORM);
		ws.send();
	}

	public void sendPing() {
		Ping p = new Ping();
		try {
			sendMsg(p);
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

	public void sendRouterLink(int mote, boolean enable) {
		RouterData rd = new RouterData();
		rd.set_enable(b2Cs(enable));
		rd.set_mote(mote);
		try {
			sendMsg(rd);
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

	public void getCompileTime() {
		MoteCom.singleton.addMsgReceiver(CompTime.AM_TYPE, new SrcReceiveMsg() {
			public void receiveMsg(int src, Message m) {
				CompTime ct = (CompTime) m;
				if (src == id) {
					System.out.println("Compiled On: " + new Date(ct.get_time() * 1000));
					System.exit(0);
				}
			}
		});
		CompTime ct = new CompTime();
		try {
			sendMsg(ct);
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

	/* C Boolean */
	private static final short C_FALSE = 0;
	private static final short C_TRUE = 1;

	/* C Type Helpers */
	private static short b2Cs(boolean b) {
		if (b)
			return C_TRUE;
		return C_FALSE;
	}

	public MoteOptions makeOptions() {
		return new MoteOptions();
	}

	/**
	 * Controls various mote-wide options
	 */
	public class MoteOptions extends edu.rice.compass.comm.MoteOptions {

		/* Bitmasks */
		private static final short MO_PINGNUM = 0x01;
		private static final short MO_TXPOWER = 0x02;
		private static final short MO_CLEARSTATS = 0x04;
		private static final short MO_RFACK = 0x08;
		private static final short MO_RADIOOFFTIME = 0x10;
		private static final short MO_HPLPM = 0x20;
		private static final short MO_RFCHAN = 0x40;
		private static final short MO_RADIORETRIES = 0x80;

		private MoteOptions() {
		}

		public void pingNum(int num, int dest) {
			set_mask((short) (get_mask() | MO_PINGNUM));
			set_pingNum(num);
			set_radioOffTime(dest);
		}

		public void txPower(int power) {
			set_mask((short) (get_mask() | MO_TXPOWER));
			set_txPower((short) power);
		}

		public void clearStats() {
			set_mask((short) (get_mask() | MO_CLEARSTATS));
		}

		public void rfAck(boolean ack) {
			set_mask((short) (get_mask() | MO_RFACK));
			set_rfAck(b2Cs(ack));
		}

		public void radioOffTime(int time) {
			set_mask((short) (get_mask() | MO_RADIOOFFTIME));
			set_radioOffTime(time);
		}

		public void radioRetries(int retries) {
			set_mask((short) (get_mask() | MO_RADIORETRIES));
			set_radioRetries((short) retries);
		}

		public void hplPM(boolean pm) {
			set_mask((short) (get_mask() | MO_HPLPM));
			set_hplPM(b2Cs(pm));
		}

		public void rfChan(int chan) {
			set_mask((short) (get_mask() | MO_RFCHAN));
			set_rfChan((short) chan);
		}

		public void send() {
			try {
				sendMsg(this);
			} catch (IOException e) {
				e.printStackTrace();
			}
		}

	}

	public PwrControl makePwrControl() {
		return new PwrControl();
	}

	/**
	 * Controls mote power cycle settings
	 */
	public class PwrControl extends edu.rice.compass.comm.PwrControl {

		/* PM Modes */
		private static final short PM_SLEEP_ON_SILENCE = 0;
		private static final short PM_CHECK_SINK = 1;

		/* Defaults */
		private static final int MO_DEF_SLEEP = 2 * 1024;
		private static final int MO_DEF_WAKE = 60 * 1024;

		private PwrControl() {
			set_sleepInterval(MO_DEF_SLEEP);
			set_wakeUpInterval(MO_DEF_WAKE);
		}

		public void pmMode(String mode) {
			if (mode.equals("SOS")) {
				set_pmMode(PM_SLEEP_ON_SILENCE);
			} else if (mode.equals("CS")) {
				set_pmMode(PM_CHECK_SINK);
			}
		}

		public void awake(boolean awake) {
			set_stayAwake(b2Cs(awake));
		}

		public void sleepInterval(int sleep) {
			set_sleepInterval(MStoBMS(sleep));
		}

		public void wakeInterval(int wake) {
			set_wakeUpInterval(MStoBMS(wake));
		}

		public void reboot(boolean reboot) {
			set_reboot(b2Cs(reboot));
		}

		public void send() {
			try {
				sendMsg(this);
			} catch (IOException e) {
				e.printStackTrace();
			}
		}

	}

	public WaveletControl makeWaveletControl() {
		return new WaveletControl();
	}

	/**
	 * Controls wavelet transform state and options
	 */
	public class WaveletControl extends edu.rice.compass.comm.WaveletControl {

		/* Bitmasks */
		private static final short WC_CMD = 0x01;
		private static final short WC_SAMPLETIME = 0x02;
		private static final short WC_TRANSFORMTYPE = 0x04;
		private static final short WC_RESULTTYPE = 0x08;
		private static final short WC_TIMEDOMAINLENGTH = 0x10;
		private static final short WC_COMPTARGET = 0x20;

		/* Result Masks */
		private static final short WC_RT_RAW = 0x01; // Raw values (off|on)
		private static final short WC_RT_COMP = 0x02; // Compression (off|on)

		private WaveletControl() {
		}

		public void cmd(short cmd) {
			set_mask((short) (get_mask() | WC_CMD));
			set_cmd(cmd);
		}

		public void sampleTime(long sampleTime) {
			set_mask((short) (get_mask() | WC_SAMPLETIME));
			set_data_opt_sampleTime(sampleTime);
		}

		public void transformType(short transformType) {
			set_mask((short) (get_mask() | WC_TRANSFORMTYPE));
			set_data_opt_transformType(transformType);
		}

		public void resultType(boolean raw, boolean comp) {
			short type = 0;
			if (raw)
				type |= WC_RT_RAW;
			if (comp)
				type |= WC_RT_COMP;
			resultType(type);
		}

		public void resultType(short resultType) {
			set_mask((short) (get_mask() | WC_RESULTTYPE));
			set_data_opt_resultType(resultType);
		}

		public void timeDomainLength(short timeDomainLength) {
			set_mask((short) (get_mask() | WC_TIMEDOMAINLENGTH));
			set_data_opt_timeDomainLength(timeDomainLength);
		}

		public void compTarget(float compTarget[]) {
			if (compTarget.length <= 5) {
				set_mask((short) (get_mask() | WC_COMPTARGET));
				set_data_comp_numBands((short) compTarget.length);
				set_data_comp_compTarget(compTarget);
			} else {
				System.out.println("Compression target array too large!");
				System.exit(1);
			}
		}

		public void send() {
			try {
				sendMsg(this);
			} catch (IOException e) {
				e.printStackTrace();
			}
		}

	}

	private WaveletConf dataTransform(WaveletConfigData wc) throws Exception {
		WaveletNeighbor neighbors[][];
		// Find the scale at which this mote predicts, if any
		int predScale = (int) wc.mScale[id - 1];
		// Get the largest scale used in this transform
		int maxScale = wc.mUpdNB.length;
		// Create state array with same length as number of scales
		short state[] = new short[maxScale];
		// Initialize all states to WS_CONFIGURE for now (something non-zero)
		for (int s = state.length - 1; s >= 0; s--)
			state[s] = WS_CONFIGURE;
		// If this mote predicts (predScale != 0) then that scale is
		// its last scale. Otherwise, we find the last scale it updates.
		if (predScale != 0) {
			// If it has no neighbors at predScale, then it should really go to idle.
			if (wc.mPredNB[id - 1] != null) {
				state[predScale - 1] = WS_PREDICTING;
			} else {
				state[predScale - 1] = WS_IDLE;
			}
			// All scales lower than predScale should be idle.
			for (int s = predScale - 2; s >= 0; s--)
				state[s] = WS_IDLE;
		} else {
			// Since this mote doesn't predict, find the last scale where it updates.
			int lastUpdScale;
			for (lastUpdScale = 0; lastUpdScale < state.length; lastUpdScale++) {
				// Skip empty arrays marked as NaN
				if (wc.mUpdNB[lastUpdScale] instanceof Double)
					continue;
				Object[] updNb = (Object[]) wc.mUpdNB[lastUpdScale];
				if (updNb[id - 1] != null)
					break;
			}
			// If lastUpdScale is maxScale, then the mote never updates or predicts.
			// Otherwise, we now know how many scales the mote is used in.
			if (lastUpdScale >= state.length) {
				// Mote is idle for all scales
				for (int s = state.length - 1; s >= 0; s--)
					state[s] = WS_IDLE;
			} else {
				state[lastUpdScale] = WS_UPDATING;
				// All scales lower than lastUpdScale should be idle.
				for (int s = predScale - 1; s >= 0; s--)
					state[s] = WS_IDLE;
			}
		}
		// Allocate neighbors array now that the number of states is known
		neighbors = new WaveletNeighbor[state.length][];
		// Now we'll go through and stamp a state on each of the
		// remaining scales and assemble the neighbors array.
		for (int s = state.length - 1; s >= 0; s--) {
			if (state[s] == WS_CONFIGURE) {
				// Skip empty arrays marked as NaN
				if (wc.mUpdNB[s] instanceof Double)
					state[s] = WS_SKIP_SCALE;
				else {
					Object[] updNb = (Object[]) wc.mUpdNB[s];
					if (updNb[id - 1] != null)
						state[s] = WS_UPDATING;
					else
						state[s] = WS_SKIP_SCALE;
				}
			}
			switch (state[s]) {
			/*
			 * case WS_IDLE: case WS_SKIP_SCALE: // First entry about ourselves
			 * neighbors[s] = new WaveletNeighbor[] { new WaveletNeighbor(id, 0) };
			 * break;
			 */
			case WS_UPDATING:
				Object[] updNbAll = (Object[]) wc.mUpdNB[s];
				double[] updNb = forceDoubleArray(updNbAll[id - 1]);
				Object[] updCoeffAll = (Object[]) wc.mUpdCoeff[s];
				double[] updCoeff = forceDoubleArray(updCoeffAll[id - 1]);
				neighbors[s] = new WaveletNeighbor[updNb.length];
				// First entry about ourselves
				// neighbors[s][0] = new WaveletNeighbor(id, WS_UPDATING, 0);
				// Build random indices vector
				Vector randNb = new Vector();
				for (int nb = 0; nb < neighbors[s].length; nb++)
					randNb.add(new Integer(nb));
				// Begin "randomly" iterating
				for (int nb = 0; nb < neighbors[s].length; nb++) {
					// Choose neighbors randomly, to increase chances that other
					// nodes won't have them in the same order.
					Integer curNbObj = (Integer) randNb.remove((int) (Math.random() * randNb.size()));
					int curNb = curNbObj.intValue();
					neighbors[s][nb] = new WaveletNeighbor((int) updNb[curNb],
							(float) updCoeff[curNb]);
				}
				break;
			case WS_PREDICTING:
				double[] predNb = forceDoubleArray(wc.mPredNB[id - 1]);
				double[] predCoeff = forceDoubleArray(wc.mPredCoeff[id - 1]);
				neighbors[s] = new WaveletNeighbor[predNb.length];
				// First entry about ourselves
				// neighbors[s][0] = new WaveletNeighbor(id, WS_PREDICTING, 0);
				// Begin sequential iteration
				for (int nb = 0; nb < neighbors[s].length; nb++)
					neighbors[s][nb] = new WaveletNeighbor((int) predNb[nb],
							(float) predCoeff[nb]);
				break;
			}
		}
		WaveletScale[] scale = new WaveletScale[neighbors.length];
		for (int s = 0; s < scale.length; s++)
			scale[s] = new WaveletScale(neighbors[s], state[s]);
		return new WaveletConf(scale);
	}

	/**
	 * Ensures that you are dealing with a double[] when MATLAB may have produced
	 * a Double, double[], or null.
	 */
	private double[] forceDoubleArray(Object d) throws Exception {
		double[] a;
		if (d instanceof double[])
			a = (double[]) d;
		else if (d instanceof Double) {
			a = new double[] { ((Double) d).doubleValue() };
		} else {
			throw new Exception(
					"Found unknown reference where a Double or double[] was expected!");
		}
		return a;
	}

	public boolean isConfigDone() {
		return configDone;
	}

	private void setConfigDone(boolean configDone) {
		this.configDone = configDone;
	}

}

class UpdateNB {
	int predID;
	int coeffIndex;

	UpdateNB(int predID, int coeffIndex) {
		this.predID = predID;
		this.coeffIndex = coeffIndex;
	}
}
