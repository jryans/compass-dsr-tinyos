/**
 * This class is automatically generated by mig. DO NOT EDIT THIS FILE.
 * This class implements a Java interface to the 'BigPackHeader'
 * message type.
 */

package edu.rice.wavelet.comm;

public class BigPackHeader extends net.tinyos.message.Message {

    /** The default size of this message type in bytes. */
    public static final int DEFAULT_MESSAGE_SIZE = 6;

    /** The Active Message type associated with this message. */
    public static final int AM_TYPE = -1;

    /** Create a new BigPackHeader of size 6. */
    public BigPackHeader() {
        super(DEFAULT_MESSAGE_SIZE);
        amTypeSet(AM_TYPE);
    }

    /** Create a new BigPackHeader of the given data_length. */
    public BigPackHeader(int data_length) {
        super(data_length);
        amTypeSet(AM_TYPE);
    }

    /**
     * Create a new BigPackHeader with the given data_length
     * and base offset.
     */
    public BigPackHeader(int data_length, int base_offset) {
        super(data_length, base_offset);
        amTypeSet(AM_TYPE);
    }

    /**
     * Create a new BigPackHeader using the given byte array
     * as backing store.
     */
    public BigPackHeader(byte[] data) {
        super(data);
        amTypeSet(AM_TYPE);
    }

    /**
     * Create a new BigPackHeader using the given byte array
     * as backing store, with the given base offset.
     */
    public BigPackHeader(byte[] data, int base_offset) {
        super(data, base_offset);
        amTypeSet(AM_TYPE);
    }

    /**
     * Create a new BigPackHeader using the given byte array
     * as backing store, with the given base offset and data length.
     */
    public BigPackHeader(byte[] data, int base_offset, int data_length) {
        super(data, base_offset, data_length);
        amTypeSet(AM_TYPE);
    }

    /**
     * Create a new BigPackHeader embedded in the given message
     * at the given base offset.
     */
    public BigPackHeader(net.tinyos.message.Message msg, int base_offset) {
        super(msg, base_offset, DEFAULT_MESSAGE_SIZE);
        amTypeSet(AM_TYPE);
    }

    /**
     * Create a new BigPackHeader embedded in the given message
     * at the given base offset and length.
     */
    public BigPackHeader(net.tinyos.message.Message msg, int base_offset, int data_length) {
        super(msg, base_offset, data_length);
        amTypeSet(AM_TYPE);
    }

    /**
    /* Return a String representation of this message. Includes the
     * message type name and the non-indexed field values.
     */
    public String toString() {
      String s = "Message <BigPackHeader> \n";
      try {
        s += "  [requestType=0x"+Long.toHexString(get_requestType())+"]\n";
      } catch (ArrayIndexOutOfBoundsException aioobe) { /* Skip field */ }
      try {
        s += "  [packTotal=0x"+Long.toHexString(get_packTotal())+"]\n";
      } catch (ArrayIndexOutOfBoundsException aioobe) { /* Skip field */ }
      try {
        s += "  [byteTotal=0x"+Long.toHexString(get_byteTotal())+"]\n";
      } catch (ArrayIndexOutOfBoundsException aioobe) { /* Skip field */ }
      try {
        s += "  [numBlocks=0x"+Long.toHexString(get_numBlocks())+"]\n";
      } catch (ArrayIndexOutOfBoundsException aioobe) { /* Skip field */ }
      try {
        s += "  [numPtrs=0x"+Long.toHexString(get_numPtrs())+"]\n";
      } catch (ArrayIndexOutOfBoundsException aioobe) { /* Skip field */ }
      return s;
    }

    // Message-type-specific access methods appear below.

    /////////////////////////////////////////////////////////
    // Accessor methods for field: requestType
    //   Field type: short, unsigned
    //   Offset (bits): 0
    //   Size (bits): 8
    /////////////////////////////////////////////////////////

    /**
     * Return whether the field 'requestType' is signed (false).
     */
    public static boolean isSigned_requestType() {
        return false;
    }

    /**
     * Return whether the field 'requestType' is an array (false).
     */
    public static boolean isArray_requestType() {
        return false;
    }

    /**
     * Return the offset (in bytes) of the field 'requestType'
     */
    public static int offset_requestType() {
        return (0 / 8);
    }

    /**
     * Return the offset (in bits) of the field 'requestType'
     */
    public static int offsetBits_requestType() {
        return 0;
    }

    /**
     * Return the value (as a short) of the field 'requestType'
     */
    public short get_requestType() {
        return (short)getUIntElement(offsetBits_requestType(), 8);
    }

    /**
     * Set the value of the field 'requestType'
     */
    public void set_requestType(short value) {
        setUIntElement(offsetBits_requestType(), 8, value);
    }

    /**
     * Return the size, in bytes, of the field 'requestType'
     */
    public static int size_requestType() {
        return (8 / 8);
    }

    /**
     * Return the size, in bits, of the field 'requestType'
     */
    public static int sizeBits_requestType() {
        return 8;
    }

    /////////////////////////////////////////////////////////
    // Accessor methods for field: packTotal
    //   Field type: short, unsigned
    //   Offset (bits): 8
    //   Size (bits): 8
    /////////////////////////////////////////////////////////

    /**
     * Return whether the field 'packTotal' is signed (false).
     */
    public static boolean isSigned_packTotal() {
        return false;
    }

    /**
     * Return whether the field 'packTotal' is an array (false).
     */
    public static boolean isArray_packTotal() {
        return false;
    }

    /**
     * Return the offset (in bytes) of the field 'packTotal'
     */
    public static int offset_packTotal() {
        return (8 / 8);
    }

    /**
     * Return the offset (in bits) of the field 'packTotal'
     */
    public static int offsetBits_packTotal() {
        return 8;
    }

    /**
     * Return the value (as a short) of the field 'packTotal'
     */
    public short get_packTotal() {
        return (short)getUIntElement(offsetBits_packTotal(), 8);
    }

    /**
     * Set the value of the field 'packTotal'
     */
    public void set_packTotal(short value) {
        setUIntElement(offsetBits_packTotal(), 8, value);
    }

    /**
     * Return the size, in bytes, of the field 'packTotal'
     */
    public static int size_packTotal() {
        return (8 / 8);
    }

    /**
     * Return the size, in bits, of the field 'packTotal'
     */
    public static int sizeBits_packTotal() {
        return 8;
    }

    /////////////////////////////////////////////////////////
    // Accessor methods for field: byteTotal
    //   Field type: int, unsigned
    //   Offset (bits): 16
    //   Size (bits): 16
    /////////////////////////////////////////////////////////

    /**
     * Return whether the field 'byteTotal' is signed (false).
     */
    public static boolean isSigned_byteTotal() {
        return false;
    }

    /**
     * Return whether the field 'byteTotal' is an array (false).
     */
    public static boolean isArray_byteTotal() {
        return false;
    }

    /**
     * Return the offset (in bytes) of the field 'byteTotal'
     */
    public static int offset_byteTotal() {
        return (16 / 8);
    }

    /**
     * Return the offset (in bits) of the field 'byteTotal'
     */
    public static int offsetBits_byteTotal() {
        return 16;
    }

    /**
     * Return the value (as a int) of the field 'byteTotal'
     */
    public int get_byteTotal() {
        return (int)getUIntElement(offsetBits_byteTotal(), 16);
    }

    /**
     * Set the value of the field 'byteTotal'
     */
    public void set_byteTotal(int value) {
        setUIntElement(offsetBits_byteTotal(), 16, value);
    }

    /**
     * Return the size, in bytes, of the field 'byteTotal'
     */
    public static int size_byteTotal() {
        return (16 / 8);
    }

    /**
     * Return the size, in bits, of the field 'byteTotal'
     */
    public static int sizeBits_byteTotal() {
        return 16;
    }

    /////////////////////////////////////////////////////////
    // Accessor methods for field: numBlocks
    //   Field type: short, unsigned
    //   Offset (bits): 32
    //   Size (bits): 8
    /////////////////////////////////////////////////////////

    /**
     * Return whether the field 'numBlocks' is signed (false).
     */
    public static boolean isSigned_numBlocks() {
        return false;
    }

    /**
     * Return whether the field 'numBlocks' is an array (false).
     */
    public static boolean isArray_numBlocks() {
        return false;
    }

    /**
     * Return the offset (in bytes) of the field 'numBlocks'
     */
    public static int offset_numBlocks() {
        return (32 / 8);
    }

    /**
     * Return the offset (in bits) of the field 'numBlocks'
     */
    public static int offsetBits_numBlocks() {
        return 32;
    }

    /**
     * Return the value (as a short) of the field 'numBlocks'
     */
    public short get_numBlocks() {
        return (short)getUIntElement(offsetBits_numBlocks(), 8);
    }

    /**
     * Set the value of the field 'numBlocks'
     */
    public void set_numBlocks(short value) {
        setUIntElement(offsetBits_numBlocks(), 8, value);
    }

    /**
     * Return the size, in bytes, of the field 'numBlocks'
     */
    public static int size_numBlocks() {
        return (8 / 8);
    }

    /**
     * Return the size, in bits, of the field 'numBlocks'
     */
    public static int sizeBits_numBlocks() {
        return 8;
    }

    /////////////////////////////////////////////////////////
    // Accessor methods for field: numPtrs
    //   Field type: short, unsigned
    //   Offset (bits): 40
    //   Size (bits): 8
    /////////////////////////////////////////////////////////

    /**
     * Return whether the field 'numPtrs' is signed (false).
     */
    public static boolean isSigned_numPtrs() {
        return false;
    }

    /**
     * Return whether the field 'numPtrs' is an array (false).
     */
    public static boolean isArray_numPtrs() {
        return false;
    }

    /**
     * Return the offset (in bytes) of the field 'numPtrs'
     */
    public static int offset_numPtrs() {
        return (40 / 8);
    }

    /**
     * Return the offset (in bits) of the field 'numPtrs'
     */
    public static int offsetBits_numPtrs() {
        return 40;
    }

    /**
     * Return the value (as a short) of the field 'numPtrs'
     */
    public short get_numPtrs() {
        return (short)getUIntElement(offsetBits_numPtrs(), 8);
    }

    /**
     * Set the value of the field 'numPtrs'
     */
    public void set_numPtrs(short value) {
        setUIntElement(offsetBits_numPtrs(), 8, value);
    }

    /**
     * Return the size, in bytes, of the field 'numPtrs'
     */
    public static int size_numPtrs() {
        return (8 / 8);
    }

    /**
     * Return the size, in bits, of the field 'numPtrs'
     */
    public static int sizeBits_numPtrs() {
        return 8;
    }

}