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

using namespace std;

int main() {

	Tossim* t = new Tossim(NULL);

	t->addChannel("DsrControlP", fdopen(1, "w"));
	t->addChannel("TestDsrP", fdopen(1, "w"));
	t->addChannel("SinglePacketP", fdopen(1, "w"));
	t->addChannel("LruDataCacheP", fdopen(1, "w"));
	t->addChannel("SourceShortestPathP", fdopen(1, "w"));
	t->addChannel("GraphSparseP", fdopen(1, "w"));
	t->addChannel("DataTimerP", fdopen(1, "w"));
	//t->addChannel("TlvP", fdopen(1, "w"));
	//t->addChannel("PacketEngineP", fdopen(1, "w"));
	//t->addChannel("CpmModelC", fdopen(1, "w"));
	//t->addChannel("SimMoteP", fdopen(1, "w"));

	enum {
	  NUM_NODES = 4
	};

	Mote* m;
	string sval;
	int val;
	ifstream noise("smallnoise.txt");

	if (noise.is_open()) {
		while (!noise.eof()) {
			getline(noise, sval);
			istringstream iss(sval);
			iss >> val;
			for (int i = 0; i < NUM_NODES; i++)
			  t->getNode(i)->addNoiseTraceReading(val);
		}
		noise.close();
	}

	t->radio()->add(0, 1, -50);
	t->radio()->add(1, 0, -50);
	t->radio()->add(1, 2, -50);
	t->radio()->add(2, 1, -50);
	t->radio()->add(2, 3, -50);
	t->radio()->add(3, 2, -50);

	for (int i = 0; i < NUM_NODES; i++) {
		m = t->getNode(i);
		m->createNoiseModel();
		m->bootAtTime((31 + t->ticksPerSecond() / 10) * i + 1);
	}

	for (int i = 0; i < 10000; i++)
	  t->runNextEvent();

}
