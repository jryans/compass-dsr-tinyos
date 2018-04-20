COMPONENT=TestPacketEngineAppC

TOSCONTRIBRICE = ../../../..
CFLAGS += `find $(TOSCONTRIBRICE)/tos -type d -a \( -wholename *.svn* -prune -o -print \) | sed -r 's/.*/-I&/'`

include $(MAKERULES)