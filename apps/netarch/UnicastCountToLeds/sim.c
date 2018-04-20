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
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>

using namespace std;

Tossim* t = new Tossim(NULL);
bool runEvents = TRUE;

int main(int argc, char *argv[]) {

	t->addChannel("DsrControlP", fdopen(1, "w"));
	t->addChannel("TestDsrP", fdopen(1, "w"));
	t->addChannel("SinglePacketP", fdopen(1, "w"));
	//t->addChannel("LruDataCacheP", fdopen(1, "w"));
	//t->addChannel("SourceShortestPathP", fdopen(1, "w"));
	t->addChannel("GraphSparseP", fdopen(1, "w"));
	//t->addChannel("DataTimerP", fdopen(1, "w"));
	//t->addChannel("TlvP", fdopen(1, "w"));
	t->addChannel("PacketEngineP", fdopen(1, "w"));
	t->addChannel("PEBufferSize", fdopen(1, "w"));
	//t->addChannel("CpmModelC", fdopen(1, "w"));
	//t->addChannel("SNRLoss", fdopen(1, "w"));
	//t->addChannel("Tal", fdopen(1, "w"));
	t->addChannel("SimMoteP", fdopen(1, "w"));
	//t->addChannel("Tossim", fdopen(1, "w"));
	t->addChannel("UnicastCountToLedsC", fdopen(1, "w"));
	t->addChannel("LedsC", fdopen(1, "w"));

	enum {
	  NUM_NODES = 3
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

	for (int i = 0; i < 20000; i++)
	  t->runNextEvent();

}
