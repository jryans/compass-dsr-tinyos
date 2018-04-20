COMPONENT=TestDsrAppC

CFLAGS += -DTOSH_DATA_LENGTH=30

TOSCONTRIBRICE = ../../../..
CFLAGS += `find $(TOSCONTRIBRICE)/tos -type d -a \( -wholename *.svn* -prune -o -print \) | sed -r 's/.*/-I&/'`

include $(MAKERULES)