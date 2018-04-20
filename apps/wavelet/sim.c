/*
 * Copyright (c) 2006-2007 Rice University
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the Rice University nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL RICE
 * UNIVERSITY OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * Simple TOSSIM driver for C++.
 *
 * @author Ryan Stinnett
 */

#include <tossim.h>
#include <SerialForwarder.h>
#include <Throttle.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>

using namespace std;

Tossim* t = new Tossim(NULL);
bool runEvents = TRUE;

int main(int argc, char *argv[]) {

  Throttle throttle(t, 10);
  SerialForwarder sf(9002);

	t->addChannel("DsrControlP", stdout);
	t->addChannel("TestDsrP", stdout);
	t->addChannel("SinglePacketP", stdout);
	//t->addChannel("LruDataCacheP", stdout);
	t->addChannel("SourceShortestPathP", stdout);
	t->addChannel("GraphSparseP", stdout);
	//t->addChannel("DataTimerP", stdout);
	t->addChannel("TlvP", stdout);
	t->addChannel("PacketEngineP", stdout);
	t->addChannel("PEBufferSize", stdout);
	//t->addChannel("CpmModelC", stdout);
	//t->addChannel("SNRLoss", stdout);
	//t->addChannel("Tal", stdout);
	t->addChannel("SimMoteP", stdout);
	//t->addChannel("Tossim", stdout);
	t->addChannel("Serial", stdout);
	t->addChannel("TestSerialC", stdout);

	enum {
	  NUM_NODES = 20
	};

	Mote* m;
	string sval;
	int nval;
	ifstream noise("mednoise.txt");

	if (noise.is_open()) {
		while (!noise.eof()) {
			noise >> nval;
			for (int i = 0; i < NUM_NODES; i++)
			  t->getNode(i)->addNoiseTraceReading(nval);
		}
		noise.close();
	}

	ifstream linkgain("linkgain.out");
	string type, src, dest, gain;

  if (linkgain.is_open()) {
    while (!linkgain.eof()) {
      getline(linkgain, type, '\t');
      if (type == "gain") {
        getline(linkgain, src, '\t');
        getline(linkgain, dest, '\t');
        getline(linkgain, gain);
        t->radio()->add(atoi(src.c_str()), atoi(dest.c_str()),
                        atof(gain.c_str()));
      } else
        getline(linkgain, sval);
    }
    linkgain.close();
  }

	for (int i = 0; i < NUM_NODES; i++) {
		m = t->getNode(i);
		m->createNoiseModel();
		m->bootAtTime((31 + t->ticksPerSecond() / 10) * i + 1);
	}

	/* while(runEvents)
	  t->runNextEvent();

	for (int i = 0; i < 200000; i++)
	  t->runNextEvent(); */

	throttle.initialize();
	sf.process();

	while(t->time() < 600 * t->ticksPerSecond()) {
	  throttle.checkThrottle();
	  sf.process();
	  t->runNextEvent();
	}

}

extern "C" void removeLink(int src, int dest) {
  t->radio()->remove(src, dest);
}

extern "C" void addLink(int src, int dest, float gain) {
  t->radio()->add(src, dest, gain);
}

extern "C" void cleanup() {
  runEvents = FALSE;
}
