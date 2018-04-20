# Top-level Makefile for tools/java

TOS = $(shell ncc -print-tosdir)
PACKAGE = edu.rice.wavelet.comm
APP = $(TOSRICEDIR)/apps/wavelet
MIG = mig java

# List of message classes to build
#MSGS = UnicastPack.java BroadcastPack.java MoteOptions.java WaveletData.java \
#       BigPackHeader.java BigPackData.java WaveletControl.java RouterData.java \
#       PwrControl.java CompTime.java Ping.java

MSGS = BigPackHeader.java BigPackData.java

INITIAL_TARGETS = $(MSGS)
OTHER_CLEAN = cleanmig

ROOT = $(TOSROOT)/support/sdk/java
include $(ROOT)/Makefile.include

#UnicastPack.java:
#	$(MIG) -java-classname=$(PACKAGE).UnicastPack $(APP)/Unicast.h UnicastPack -o $@
#	$(JAVAC) $@
#
#BroadcastPack.java:
#	$(MIG) -java-classname=$(PACKAGE).BroadcastPack $(APP)/Broadcast.h BroadcastPack -o $@
#	$(JAVAC) $@
#	
#MoteOptions.java:
#	$(MIG) -java-classname=$(PACKAGE).MoteOptions $(APP)/MoteOptions.h MoteOptions -o $@
#	$(JAVAC) $@ 
#
#WaveletData.java:
#	$(MIG) -java-classname=$(PACKAGE).WaveletData $(APP)/Wavelet.h WaveletData -o $@
#	$(JAVAC) $@ 

BigPackHeader.java:
	$(MIG) -java-classname=$(PACKAGE).BigPackHeader $(APP)/BigPack.h BigPackHeader -o $@
	$(JAVAC) $@ 
	
BigPackData.java:
	$(MIG) -java-classname=$(PACKAGE).BigPackData $(APP)/BigPack.h BigPackData -o $@
	$(JAVAC) $@ 
	
#WaveletControl.java:
#	$(MIG) -java-classname=$(PACKAGE).WaveletControl $(APP)/Wavelet.h WaveletControl -o $@
#	$(JAVAC) $@ 
#	
#RouterData.java:
#	$(MIG) -java-classname=$(PACKAGE).RouterData $(APP)/Router.h RouterData -o $@
#	$(JAVAC) $@ 
#	
#PwrControl.java:
#	$(MIG) -java-classname=$(PACKAGE).PwrControl $(APP)/MoteOptions.h PwrControl -o $@
#	$(JAVAC) $@ 
#	
#CompTime.java:
#	$(MIG) -java-classname=$(PACKAGE).CompTime $(APP)/MoteOptions.h CompTime -o $@
#	$(JAVAC) $@ 
#	
#Ping.java:
#	$(MIG) -java-classname=$(PACKAGE).Ping $(APP)/Ping.h Ping -o $@
#	$(JAVAC) $@ 

cleanmig:
	rm -f $(MSGS)