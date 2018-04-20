/**
 * Responsible for managing much of the wavelet transform process on the motes,
 * as well as providing various related utilities to other classes.
 * @author Ryan Stinnett
 */
package edu.rice.wavelet;

import java.util.*;

import edu.rice.wavelet.CompassMote.*;

public class WaveletController {

	/* Variables */
	private Vector mote = new Vector();
	private WaveletConfigData wcd;
	private int maxScale = 0;

	/* Transform Options */
	private int numSets; // Number of data sets
	private long sampleTime; // Length of time between data samples (bms)
	private short transformType; // One of various transform types
	private boolean rawRes;
	private boolean compRes;
	// Number of data points collected for TD transform
	private short timeDomainLength;
	private short maxBand;
	private float compTarget[] = new float[] { 400, 200, 0 };

	/* Transform Types */
	// 2D spatial R. Wagner
	private static final short WS_TT_2DRWAGNER = 0;
	// 1D time Haar -> 2D spatial R. Wagner
	private static final short WS_TT_1DHAAR_2DRWAGNER = 1;
	// 1D time linear -> 2D spatial R. Wagner
	private static final short WS_TT_1DLINEAR_2DRWAGNER = 2;

	/* Transmit Options */
	// Number of transmit slots (must be power of 2)
	private static final short WT_SLOTS = 8;
	// Length of one slot (bms)
	private static final long WT_SLOT_TIME = 50;
	// Maximum number of compression bands
	// private static final short WT_MAX_BANDS = 5;
	// Length of entire slot stage (bms)
	private static final long WT_SLOT_STAGE_TIME = WT_SLOTS * WT_SLOT_TIME;
	// Length of wait time after sending one band of data in compressed mode (bms)
	private static final long WT_WAIT_STAGE_TIME = 2000;
	// Length of an entire compression band (bms)
	private static final long WT_BAND_TIME = WT_SLOT_STAGE_TIME
			+ WT_WAIT_STAGE_TIME;

	/* State Delay Table (bms) */
	private static final long WSD_CS_TO_RS = 1000;
	private static final long WSD_RS_TO_ANY = 500;
	// private static final long WSD_SDS_TO_UING = 1000;
	private static final long WSD_SDS_TO_OTHER = 500;
	// private static final long WSD_UING_TO_UED = 2000;
	// private static final long WSD_PING_TO_PED = 1500;
	// private static final long WSD_PED_TO_IDLE = 500;
	// private static final long WSD_UED_TO_UING = 1000;
	// private static final long WSD_UED_TO_OTHER = 500;
	// private static final long WSD_SKIP_TO_UING = 3500;
	// private static final long WSD_SKIP_TO_IDLE = 2500;
	private static final long WSD_SKIP_TO_OTHER = 3000;

	public WaveletController(WaveletConfigData mWC) {
		wcd = mWC;
		buildMotes(); // Create each mote's config data and the mote itself
	}

	private void buildMotes() {
		// Find max scale
		for (int i = 0; i < wcd.mScale.length; i++)
			if (wcd.mScale[i] > maxScale)
				maxScale = (int) wcd.mScale[i];
		// Build each mote
		for (int i = 0; i < wcd.mScale.length; i++)
			mote.add(new CompassMote(i + 1, wcd));
	}

	public void configMotes() {
		System.out.println("Wavelet config starting");
		new Timer().scheduleAtFixedRate(new ConfigPulse(mote), 200, 300);
	}

	public void runSets() {
		new WaveletDataStore(numSets, mote.size(),
				CompassMote.BMStoMS(getDataCollectionTime()),
				new WaveletDataStore.Notify() {
					public void dataSetDone() {
						if (compRes) {
							System.out.println("Reached end of band " + maxBand
									+ ", stopping current data set.");
							WaveletControl wc = CompassMote.broadcast.makeWaveletControl();
							wc.cmd(CompassMote.WC_STOP_DATASET);
							wc.compTarget(compTarget);
							wc.send();
						}
					}

					public void transformDone(WaveletDataStore data) {
						CompassMote.broadcast.sendStop();
						CompassTools.saveResult(data, "waveletData.xml");
					}
				});
		startTransform();
	}

	/**
	 * For the uncompressed transform, a single WC_START_TRANSFORM broadcast that
	 * includes transform options is sent to start a loop of data sets without
	 * further control by the sink. For the compressed transform, first the
	 * transform options are sent, but with no state attached. To start the
	 * transform, a WC_START_TRANSFORM broadcast is sent with initial target band
	 * values. When enough data bands have been received, a WC_STOP_DATASET
	 * broadcast is sent, along with updated target band values that will be used
	 * for the next data set.
	 */
	private void startTransform() {
		if (compRes) {
			WaveletControl ws = CompassMote.broadcast.makeWaveletControl();
			setTransformOptions(ws);
			CompassTools.debugPrintln("Sending transform options");
			ws.send();
		}
		// startSampling() is delayed by 250 ms to prevent its broadcast from 
		// being distributed before the one above during compression.
		new Timer().schedule(new TimerTask() {
			public void run() {
				startSampling();
			}
		}, 250);
	}

	private void startSampling() {
		System.out.println("Starting transform!");
		WaveletControl ws = CompassMote.broadcast.makeWaveletControl();
		ws.cmd(CompassMote.WC_START_TRANSFORM);
		if (compRes) {
			ws.compTarget(compTarget);
			CompassTools.debugPrintln("Sending compression target array");
		} else {
			setTransformOptions(ws);
			CompassTools.debugPrintln("Sending transform options");
		}
		ws.send();
	}

	/* Stage Length Functions (bms) */

	private static long getCollectSampleTime() {
		return WSD_CS_TO_RS + WSD_RS_TO_ANY;
	}

	private static long getScaleJTime() {
		return WSD_SDS_TO_OTHER + WSD_SKIP_TO_OTHER;
	}

	private static long getScaleOtherTime() {
		return WSD_SKIP_TO_OTHER;
	}

	private long getScalesTime() {
		return getScaleJTime() + getScaleOtherTime() * (maxScale - 1);
	}

	private long getTransmitTime() {
		if (compRes) {
			return compTarget.length * WT_BAND_TIME;
		}
		return WT_SLOT_STAGE_TIME;
	}

	private long getMinSampleTime() {
		return getCollectSampleTime() + getScalesTime() + getTransmitTime();
	}

	private long getDataCollectionTime() {
		long dcTime = WT_WAIT_STAGE_TIME / 2;
		if (compRes) {
			dcTime += maxBand * WT_BAND_TIME + WT_SLOT_STAGE_TIME;
		} else {
			dcTime += getTransmitTime();
		}
		return dcTime;
	}

	private void setTransformOptions(WaveletControl ws) {
		ws.sampleTime(sampleTime);
		ws.transformType(transformType);
		ws.resultType(rawRes, compRes);
		if (transformType == WS_TT_1DHAAR_2DRWAGNER
				|| transformType == WS_TT_1DLINEAR_2DRWAGNER)
			ws.timeDomainLength(timeDomainLength);
	}

	public void setNumSets(int numSets) {
		this.numSets = numSets;
	}

	public void setSampleTime(long uSampleTime, boolean force) {
		if (!force) {
			long minSampleTime = getMinSampleTime();
			if (uSampleTime < minSampleTime) {
				if (uSampleTime != 0) {
					System.out.println("Sample time " + uSampleTime + " is smaller than "
							+ minSampleTime + ", the minimum time required.");
					System.out.println("Using the minimum time, run with --force if you want to ignore this.");
				}
				uSampleTime = minSampleTime;
			}
		}
		sampleTime = uSampleTime;
	}

	public void setTransformType(String transformName) {
		if (transformName.equals("2DRWAGNER")) {
			transformType = WS_TT_2DRWAGNER;
		} else if (transformName.equals("1DHAAR_2DRWAGNER")) {
			transformType = WS_TT_1DHAAR_2DRWAGNER;
		} else if (transformName.equals("1DLINEAR_2DRWAGNER")) {
			transformType = WS_TT_1DLINEAR_2DRWAGNER;
		} else {
			System.out.println("Unknown transform type!");
			System.exit(1);
		}
	}

	public void setResultType(boolean raw, boolean comp) {
		rawRes = raw;
		compRes = comp;
	}

	public void setTimeDomainLength(short timeDomainLength) {
		this.timeDomainLength = timeDomainLength;
	}

	public void setMaxBand(short maxBand) {
		this.maxBand = maxBand;
	}

	class ConfigPulse extends TimerTask {

		private Enumeration moteEnum;
		private Vector mote;

		public ConfigPulse(Vector mMote) {
			mote = mMote;
			moteEnum = mote.elements();
		}

		public void run() {
			if (moteEnum.hasMoreElements()) { // More motes to configure
				CompassMote cm = (CompassMote) moteEnum.nextElement();
				cm.sendConfigure();
			} else { // Wait for all motes to finish
				Enumeration waitEnum = mote.elements();
				boolean allDone = true;
				while (waitEnum.hasMoreElements()) {
					CompassMote cm = (CompassMote) waitEnum.nextElement();
					if (!cm.isConfigDone()) {
						allDone = false;
						break;
					}
				}
				if (allDone) {
					System.out.println("Wavelet config complete");
					runSets();
					cancel();
				}
			}
		}

	}

}