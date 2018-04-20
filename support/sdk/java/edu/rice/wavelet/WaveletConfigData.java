package edu.rice.wavelet;

public class WaveletConfigData {
	/* Matlab Data */
	public double[][] mCoords;
	public double[] mScale;
	public Object[] mPredNB;
	public Object[] mPredCoeff;
	public Object[] mUpdNB;
	public Object[] mUpdCoeff;
	
	public WaveletConfigData(double[][] coords, double[] scale, Object[] predNB, 
						 Object[] predCoeff, Object[] updNB, Object[] updCoeff) {
		mCoords = coords;
		mScale = scale;
		mPredNB = predNB;
		mPredCoeff = predCoeff;
		mUpdNB = updNB;
		mUpdCoeff = updCoeff;
	}

}
