package edu.rice.wavelet.bigpack;

import net.tinyos.message.Message;
import java.io.*;
import java.lang.reflect.*;
import java.net.*;
import java.util.*;
import edu.rice.wavelet.CompassTools;

public abstract class BigPack extends Message {

	/* Constants */

	public static final short BP_UNKNOWN = -1;
	public static final short BP_WAVELETCONF = 0;
	public static final short BP_STATS = 1;

	private static final short BPP_PTR = 0;
	private static final short BPP_ARRAY = 1;

	/* Variables */

	protected List blocks = new Vector();
	private List pointers = new Vector();

	protected int firstMainBlk;

	/* Class Translation */
	private static Hashtable classNameByType;
	private static Hashtable typeByClassName;

	protected BigPack(int dataLength) {
		super(dataLength);
	}

	/**
	 * Regenerates a root big pack and any associated children.
	 * 
	 * @param rawData
	 */
	protected BigPack(byte[] rawData, int dataLength, int numBlks, int numPtrs) {
		super(dataLength);
		int offset = 0;
		CompassTools.debugPrintln("BigPack: Blocks and Pointers");
		// Pull blocks and pointers out of data stream
		for (int i = 0; i < numBlks; i++) {
			CompassTools.debugPrintln("BigPack: Block #" + (i + 1));
			BigPackBlock blk = new BigPackBlock(byteRange(rawData, offset,
					BigPackBlock.DEFAULT_MESSAGE_SIZE));
			CompassTools.debugPrintln("BigPack:   Start:  " + blk.get_start());
			CompassTools.debugPrintln("BigPack:   Length: " + blk.get_length());
			blocks.add(blk);
			offset += BigPackBlock.DEFAULT_MESSAGE_SIZE;
		}
		for (int i = 0; i < numPtrs; i++) {
			CompassTools.debugPrintln("BigPack: Pointer #" + (i + 1));
			BigPackPtr ptr = new BigPackPtr(byteRange(rawData, offset,
					BigPackPtr.DEFAULT_MESSAGE_SIZE));
			CompassTools.debugPrintln("BigPack:   Addr of Block: "
					+ (ptr.get_addrOfBlock() + 1));
			CompassTools.debugPrintln("BigPack:   Dest Block:    "
					+ (ptr.get_destBlock() + 1));
			CompassTools.debugPrintln("BigPack:   Dest Offset:   "
					+ (ptr.get_destOffset()));
			if (ptr.get_blockArray() == BPP_ARRAY) {
				CompassTools.debugPrintln("BigPack:   Block Array:   Yes");
			} else {
				CompassTools.debugPrintln("BigPack:   Block Array:   No");
			}
			pointers.add(ptr);
			offset += BigPackPtr.DEFAULT_MESSAGE_SIZE;
		}
		rawData = byteRange(rawData, offset, rawData.length - offset);
		breakUpData(rawData, blocks.size() - 1);
	}

	private void breakUpData(byte[] rawData, int thisBlk) {
		try {
			// The pack's block is at blockNum, which helps locate its data.
			BigPackBlock blk = (BigPackBlock) blocks.get(thisBlk);
			if (blk.get_length() != data_length)
				// throw new Exception("Static data block's length doesn't match.");
				System.out.println("Static data block's length is " + blk.get_length()
						+ ", but this class's length should be " + data_length);
			dataSet(byteRange(rawData, blk.get_start(), data_length));
			if (numChildTypes() > 0) {
				// Initialize child storage
				initChildren();
				// Grab pointers that reference us as their destination block,
				// create them, and attach them here as children.
				List pToC;
				if (pointers.size() > 0) {
					pToC = pointers.subList(pointers.size() - numChildTypes(),
							pointers.size());
				} else {
					pToC = pointers;
				}
				// Gives each child the full raw data set, all blocks, but only the
				// applicable pointers.
				for (int i = 0; i < pToC.size(); i++) {
					BigPackPtr ptr = (BigPackPtr) pToC.get(i);
					if (ptr.get_destBlock() != thisBlk)
						throw new Exception(
								"Pointer's dest block should be this pack's static data block.");
					int childCnt = numChildren(ptr.get_destOffset());
					int childBlockNum[] = new int[childCnt];
					List childPtr[] = new List[childCnt];
					if (ptr.get_blockArray() == BPP_PTR) {
						// Single source block
						List pForC = pointers.subList(0, pointers.size() - numChildTypes());
						for (int c = 0; c < childCnt; c++) {
							childBlockNum[c] = ptr.get_addrOfBlock();
							childPtr[c] = pForC;
						}
					} else if (ptr.get_blockArray() == BPP_ARRAY) {
						// Multiple source blocks
						for (int c = 0; c < childCnt; c++) {
							int destChild = ptr.get_addrOfBlock() + c;
							childBlockNum[c] = destChild;
							// Find the range of pointers that have
							// destChild as their destOffset
							ListIterator li = pointers.listIterator();
							int from = 0, to = 0;
							boolean found = false;
							while (li.hasNext()) {
								BigPackPtr p = (BigPackPtr) li.next();
								if (!found && p.get_destBlock() == destChild) {
									from = li.previousIndex();
									found = true;
								} else if (found && p.get_destBlock() != destChild) {
									to = li.previousIndex();
									break;
								}
							}
							childPtr[c] = pointers.subList(from, to);
						}
					}
					storeChildren(rawData, ptr.get_destOffset(), childBlockNum, childPtr);
				}
			}
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	private void breakUpData(byte[] rawData, int thisBlk, int cOffset) {
		try {
			// The pack's block is at blockNum, which helps locate its data.
			BigPackBlock blk = (BigPackBlock) blocks.get(thisBlk);
			if ((cOffset + 1) * data_length > blk.get_length())
				// throw new Exception("Static data block's length doesn't match.");
				System.out.println("Static data block does not seem to be large "
						+ "enough to hold data for this class.");
			dataSet(byteRange(rawData, blk.get_start() + cOffset * data_length,
					data_length));
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	protected BigPack(byte[] rawData, int dataLength, int blockNum, List nBlocks,
			List nPtrs) {
		super(dataLength);
		blocks = nBlocks;
		pointers = nPtrs;
		breakUpData(rawData, blockNum);
	}

	protected BigPack(byte[] rawData, int dataLength, int blockNum, List nBlocks,
			List nPtrs, int cOffset) {
		super(dataLength);
		blocks = nBlocks;
		pointers = nPtrs;
		breakUpData(rawData, blockNum, cOffset);
	}

	protected void initChildren() {
	}

	protected void storeChildren(byte[] rawData, int offset, int[] childBlockNum,
			List[] childPtr) {
	}

	protected int numChildren(int offset) {
		return 0;
	}

	protected int numChildTypes() {
		return 0;
	}

	private static int calcTotalDataLength(int staticLen, Message[] msg) {
		// Check for null array reference
		if (msg == null)
			return staticLen;
		// Add up dataLength of each message
		int len = staticLen;
		for (int i = 0; i < msg.length; i++) {
			len += msg[i].dataLength();
		}
		return len;
	}

	/**
	 * Creates a new big pack with initial static data, followed by data from an
	 * array of messages.
	 * 
	 * @param staticLen
	 * @param msg
	 */
	protected BigPack(int staticLen, Message[] msg) {
		super(calcTotalDataLength(staticLen, msg));
		if (msg != null)
			for (int i = 0; i < msg.length; i++)
				dataSet(msg[i], staticLen + msg[0].dataLength() * i);
	}

	/**
	 * Creates a new big pack with initial static data, followed by data from an
	 * array of big packs.
	 * 
	 * @param staticLen
	 * @param msg
	 */
	protected BigPack(int staticLen, BigPack[] bp) {
		// Initialize data storage
		super(calcTotalDataLength(staticLen, bp));
		// Combine each big pack
		int offset = staticLen;
		for (int i = 0; i < bp.length; i++) {
			dataSet(bp[i], offset);
			// Copy and adjust offsets on blocks
			for (int b = 0; b < bp[i].blocks.size(); b++) {
				blocks.add(bp[i].blocks.get(b));
				BigPackBlock blk = (BigPackBlock) blocks.get(blocks.size() - 1);
				blk.set_start(offset + blk.get_start());
			}
			offset += bp[i].dataLength();
		}
		// Push each main block to the end
		int blkOffset = 0;
		for (int i = 0; i < bp.length; i++) {
			blkOffset += bp[i].blocks.size();
			BigPackBlock blk = (BigPackBlock) blocks.remove(blkOffset - (i + 1));
			blocks.add(blk);
		}
		// Copy and adjust block numbers on pointers
		blkOffset = 0;
		firstMainBlk = blocks.size() - bp.length;
		for (int i = 0; i < bp.length; i++) {
			for (int b = 0; b < bp[i].pointers.size(); b++) {
				pointers.add(bp[i].pointers.get(b));
				BigPackPtr ptr = (BigPackPtr) pointers.get(pointers.size() - 1);
				ptr.set_addrOfBlock((short) (blkOffset + ptr.get_addrOfBlock()));
				ptr.set_destBlock((short) (firstMainBlk + i));
			}
			blkOffset += bp[i].blocks.size() - 1;
		}
	}

	private byte[] byteRange(byte[] src, int offsetFrom, int length) {
		byte[] tmp = new byte[length];
		System.arraycopy(src, offsetFrom, tmp, 0, length);
		return tmp;
	}

	private BigPack() {
		super(0);
	}

	protected BigPackBlock addBlock(int start, int length) {
		BigPackBlock blk = new BigPackBlock();
		blk.set_length(length);
		blk.set_start(start);
		blocks.add(blk);
		return blk;
	}

	protected void addPointer(BigPackBlock addrOfBlock, BigPackBlock destBlock,
			int destOffset) {
		BigPackPtr ptr = new BigPackPtr();
		ptr.set_addrOfBlock((short) blocks.indexOf(addrOfBlock));
		ptr.set_destBlock((short) blocks.indexOf(destBlock));
		ptr.set_destOffset((short) destOffset);
		ptr.set_blockArray(BPP_PTR);
		pointers.add(ptr);
	}

	protected void addArray(BigPackBlock addrOfBlock, BigPackBlock destBlock,
			int destOffset) {
		BigPackPtr ptr = new BigPackPtr();
		ptr.set_addrOfBlock((short) blocks.indexOf(addrOfBlock));
		ptr.set_destBlock((short) blocks.indexOf(destBlock));
		ptr.set_destOffset((short) destOffset);
		ptr.set_blockArray(BPP_ARRAY);
		pointers.add(ptr);
	}

	public int numBlocks() {
		return blocks.size();
	}

	public int numPointers() {
		return pointers.size();
	}

	/**
	 * Returns the "complete" data stream which is: 1. Data for each block 2. Data
	 * for each pointer 3. Actual data payload
	 */
	public byte[] dataStream() {
		byte[] stream = new byte[BigPackBlock.DEFAULT_MESSAGE_SIZE * blocks.size()
				+ BigPackPtr.DEFAULT_MESSAGE_SIZE * pointers.size() + data_length];
		int offset = 0;
		BigPackBlock blks[] = (BigPackBlock[]) blocks.toArray(new BigPackBlock[0]);
		for (int b = 0; b < blks.length; b++) {
			System.arraycopy(blks[b].dataGet(), 0, stream, offset,
					BigPackBlock.DEFAULT_MESSAGE_SIZE);
			offset += BigPackBlock.DEFAULT_MESSAGE_SIZE;
		}
		BigPackPtr ptrs[] = (BigPackPtr[]) pointers.toArray(new BigPackPtr[0]);
		for (int b = 0; b < ptrs.length; b++) {
			System.arraycopy(ptrs[b].dataGet(), 0, stream, offset,
					BigPackPtr.DEFAULT_MESSAGE_SIZE);
			offset += BigPackPtr.DEFAULT_MESSAGE_SIZE;
		}
		System.arraycopy(dataGet(), 0, stream, offset, data_length);
		return stream;
	}

	/**
	 * Adds every subclass in the same package whose getType() does not return
	 * BP_UNKNOWN (meaning it is a root pack) to translation tables for lookup by
	 * class name or type number.
	 */
	private static void buildClassTransTables() {
		// Make new tables
		classNameByType = new Hashtable();
		typeByClassName = new Hashtable();
		// Get directory corresponding to this package
		Class pClass = BigPack.class;
		Package mPackage = pClass.getPackage();
		URL pAddr = pClass.getResource("/" + mPackage.getName().replace('.', '/'));
		File pDir = new File(pAddr.getFile());
		// Find all .class files in that directory
		String[] pClasses = pDir.list();
		for (int f = 0; f < pClasses.length; f++) {
			if (pClasses[f].endsWith(".class")) {
				String cName = pClasses[f].substring(0, pClasses[f].length() - 6);
				try {
					Class cClass = Class.forName(mPackage.getName() + "." + cName);
					// Check if this is either this class or a subclass
					if (pClass.isAssignableFrom(cClass)) {
						// Check if getType() is not BP_UNKNOWN
						Method mGetType = cClass.getDeclaredMethod("getType", null);
						Short cType = (Short) mGetType.invoke(null, null);
						if (cType.shortValue() != BP_UNKNOWN) {
							// Should be registered
							classNameByType.put(cType, cClass.getName());
							typeByClassName.put(cClass.getName(), cType);
						}
					}
				} catch (NoSuchMethodException e) {
				} catch (Exception e) {
					System.out.println("Unable to build class translation tables!");
					e.printStackTrace();
					System.exit(1);
				}
			}
		}
	}

	public static Short getTypeFromClass(Class cClass) throws Exception {
		if (typeByClassName == null)
			buildClassTransTables();
		Short cType = (Short) typeByClassName.get(cClass.getName());
		if (cType == null)
			throw new Exception("Class not registered!");
		return cType;
	}

	public static Class getClassFromType(short cType) throws Exception {
		if (classNameByType == null)
			buildClassTransTables();
		String cName = (String) classNameByType.get(new Short(cType));
		if (cName == null)
			throw new Exception("Type not registered!");
		return Class.forName(cName);
	}

	public static short getType() {
		return BP_UNKNOWN;
	}

}