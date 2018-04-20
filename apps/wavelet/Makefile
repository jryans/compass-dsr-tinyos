COMPONENT = BigPackC

#TINYOS_NP = BNP

#CFLAGS += -DDELUGE_BASESTATION

CFLAGS += -DTOSH_DATA_LENGTH=48
CFLAGS += -DDSR_ROUTE_CACHE_MAX_NODES=20
CFLAGS += -DDSR_ROUTE_CACHE_MAX_LINKS=250

# Sniff all packets, but only ack those destined for receiving node
CFLAGS += -DCC2420_NO_ADDRESS_RECOGNITION

# Adds (annoying) beeps to indicate various errors
# CFLAGS += -DBEEP

# Enables storage of raw data values
# Transmission still needs to be enabled at runtime
#CFLAGS += -DRAW

include $(MAKERULES)
