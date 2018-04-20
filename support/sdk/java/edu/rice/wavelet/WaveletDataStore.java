package edu.rice.wavelet;

import java.util.*;

import edu.rice.wavelet.comm.*;
import net.tinyos.message.*;

public class WaveletDataStore {

	/* Sensors */
	private static final short TEMP = 0;
	private static final short LIGHT = 1;
	static final short WT_SENSORS = 2;

	/* Offsets */
	private static final short RAW_OFFSET = 0;
	private static final short WT_OFFSET = 1;

	public float value[][][]; // value[dataset][sensor][mote]
	private DataCheck check;
	private transient int curSet;
	private transient long waitTime;
	private transient boolean timerRunning = false;
	private transient static Timer waitTimer = new Timer();
	private transient WaitTask curWaitTask;
	private transient Notify host;

	public WaveletDataStore(int sets, int motes, long waitTime, Notify host) {
		this.host = host;
		value = new float[sets][2 * WT_SENSORS][motes];
		check = new DataCheck(sets, motes);
		curSet = -1;
		this.waitTime = waitTime;
		MoteCom.singleton.addMsgReceiver(WaveletData.AM_TYPE,
				new SrcReceiveMsg() {
					public void receiveMsg(int src, Message m) {
						WaveletData wd = (WaveletData) m;
						int msgSet = wd.get_dataSet() - 1;
						if (msgSet >= curSet) {
							if (msgSet > curSet)
								beginNewSet(msgSet);
							// Store mote data
							if (wd.get_state() == CompassMote.WS_TRANSMIT) {						
								value[curSet][TEMP * 2 + WT_OFFSET][src - 1] = wd.getElement_value(TEMP);
								value[curSet][LIGHT * 2 + WT_OFFSET][src - 1] = wd.getElement_value(LIGHT);
								System.out.println("Got wavelet data from mote " + src);
								check.setWaveletDone(src);
							} else if (wd.get_state() == CompassMote.WS_RAW) {
								value[curSet][TEMP * 2 + RAW_OFFSET][src - 1] = wd.getElement_value(TEMP);
								value[curSet][LIGHT * 2 + RAW_OFFSET][src - 1] = wd.getElement_value(LIGHT);
								System.out.println("Got raw data from mote " + src);
								check.setRawDone(src);
							}
						}
					}
				});
	}

	private synchronized void finishSet() {
		host.dataSetDone();
		int[] mLeft = check.isDataDone();
		if (mLeft[RAW_OFFSET] == 0 && mLeft[WT_OFFSET] == 0) {
			System.out.println("Data set " + (curSet + 1) + " complete!");
		} else {
			System.out.println("Data set " + (curSet + 1) + " incomplete, missing "
					+ mLeft[RAW_OFFSET] + " raw and " + mLeft[WT_OFFSET] + " wavelet.");
		}
		if (curSet + 1 >= value.length) {
			host.transformDone(this);
		}
	}

	private synchronized void beginNewSet(int newSet) {
		if (timerRunning)
			curWaitTask.run();
		curSet = newSet;
		curWaitTask = new WaitTask();
		waitTimer.schedule(curWaitTask, waitTime);
		timerRunning = true;
	}

	private class WaitTask extends TimerTask {
		public void run() {
			cancel();
			timerRunning = false;
			finishSet();
		}
	}

	private class DataCheck {

		boolean dataDone[][][];

		private DataCheck(int sets, int motes) {
			dataDone = new boolean[sets][motes][2];
			clearDataCheck();
		}

		private void clearDataCheck() {
			for (int s = 0; s < dataDone.length; s++) {
				for (int m = 0; m < dataDone[s].length; m++) {
					dataDone[s][m][RAW_OFFSET] = false;
					dataDone[s][m][WT_OFFSET] = false;
				}
			}
		}

		private void setRawDone(int m) {
			dataDone[curSet][m - 1][RAW_OFFSET] = true;
		}

		private void setWaveletDone(int m) {
			dataDone[curSet][m - 1][WT_OFFSET] = true;
		}

		private int[] isDataDone() {
			int[] dataCheck = new int[2];
			for (int m = 0; m < dataDone[curSet].length; m++) {
				if (!dataDone[curSet][m][RAW_OFFSET])
					dataCheck[RAW_OFFSET]++;
				if (!dataDone[curSet][m][WT_OFFSET])
					dataCheck[WT_OFFSET]++;
			}
			return dataCheck;
		}

	}

	interface Notify {
		void dataSetDone();

		void transformDone(WaveletDataStore data);
	}

}
