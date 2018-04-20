COMPONENT = TestDsrAppC

CFLAGS += -DTOSH_DATA_LENGTH=36
CFLAGS += -DDSR_ROUTE_CACHE_MAX_NODES=20
CFLAGS += -DDSR_ROUTE_CACHE_MAX_LINKS=250

TOSCONTRIBRICE = ../../../..
CFLAGS += `find $(TOSCONTRIBRICE)/tos -type d -a \( -wholename *.svn* -prune -o -print \) | sed -r 's/.*/-I&/'`

include $(MAKERULES)