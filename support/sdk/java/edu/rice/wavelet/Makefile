# Top-level Makefile for tools/java

PACKAGE = edu.rice.wavelet
SUBDIRS = bigpack
INITIAL_TARGETS = msgs
OTHER_CLEAN = msgs-clean


ROOT = $(TOSROOT)/support/sdk/java
include $(ROOT)/Makefile.include

msgs:
	(cd comm; $(MAKE))
msgs-clean:
	(cd comm; $(MAKE) clean)
