/**
 * Holds elements common to both Unpacker and Packer classes.
 * @author Ryan Stinnett
 */

package edu.rice.wavelet.bigpack;

abstract class ProtoPacker {
	
	protected static final short HEADER_PACK_NUM = -1;

	protected short type;
	protected int numPacks;
	protected int numBlocks;
	protected int numPtrs;
	protected byte[] stream;
	protected short curPackNum;
	
	protected PackerHost owner;
	protected boolean busy = false;
	protected boolean enabled = false;
	
	protected ProtoPacker(PackerHost mOwner) {
		owner = mOwner;
	}

	protected boolean morePacksExist() {
		if (curPackNum + 1 >= numPacks)
			return false;
		return true;
	}
	
	public boolean getBusy() {
		return busy;
	}
	
	public void enable() {
		enabled = true;
	}
	
	public void disable() {
		enabled = false;
	}

}