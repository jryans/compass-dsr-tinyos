README for UnicastCountToLeds
Author/Contact: Ryan Stinnett <jryans@rice.edu>

Description:

UnicastCountToLeds acts very similarly to the TinyOS example applicaton
RadioCountToLeds, in which a 4Hz counter is maintained, and then the value
is sent over the radio and displayed on LEDs of another node. However, here
only node 0 sends a unicast message to node 1 with its value, rather than
having each node broadcast its value in an AM packet every time it gets
updated. Normally this would require nodes 0 and 1 to be within radio range
of each other, but by simply using the send and receive components from the
COMPASS framework, the message can be delivered across multiple hops to reach
node 1 (assuming there is a path connecting node 0 and 1 in the network).

Tools:

After compiling, UnicastCountMsg.java and UnicastCountMsg.py files will be
created.  UnicastCountMsg.java is a Java class representing the message that
this application sends.  UnicastCountMsg.py is a Python class representing
the message that this application sends.

Known bugs/limitations:

None.
