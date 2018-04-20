package edu.rice.wavelet.bigpack;

import java.io.*;
import net.tinyos.message.*;

public interface PackerHost {
	
	public void sendMsg(Message m) throws IOException;
	
	public int getID();
	
	public BigPack buildPack(short type);
	
	public void packerDone(short type);
	
	public void unpackerDone(BigPack msg);
	
}