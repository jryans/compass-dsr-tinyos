<div class="maketitle">

## The COMPASS Multihop Framework for TinyOS

<div class="author">

<span class="cmr-12">J. Ryan Stinnett</span>  
<span class="cmr-9">ECE Department</span>  
<span class="cmr-9">Rice
University</span>  
<span class="obeylines-h">[<span class="cmtt-9">jryans@rice.edu</span>](mailto:jryans@rice.edu)</span>

</div>

  
  
[Overview](#x1-10001) - [Code and Documentation](#downloads) -
[References](#x1-110003.3)

</div>

### Overview

TinyOS 2.x supplies a well-designed single hop messaging layer for
applications, but there is no standardized multihop framework. To
address this issue, we surveyed a large number of applications
<span class="cite">\[[1](#Xsurvey)\]</span> to determine the addressing
techniques and messaging stack features used in sensor networks. From
the results of this survey, we designed a multihop networking API
<span class="cite">\[[2](#Xapi)\]</span> to address the needs of
application designers at the messaging layer in a unified way.

This framework intends to implement that API. The key goals of this
include:

  - Multihop routing with several addressing modes based on:
      - Node address (single node, multiple nodes, or a list of nodes)
      - Geographical region
      - Device hierarchy
  - Intercept messages to be forwarded
  - Control transmission effort
  - Congestion management
  - Support self-organized device hierarchies

Our design allows application designers to focus on the application
layer without being bogged down by the details of routing protocol
implementation. Similarly, routing protocol designers can make their
improvements more accessible to the rest of the community since only a
few wiring changes are needed to alter the routing protocol used by a
given addressing mode, leaving application code untouched.

In its current form, the framework implementation supports addressing
and multihop routing by a single node address. Our version of Dynamic
Source Routing (DSR) <span class="cite">\[[3](#Xdsr-rfc)\]</span>
modified for TinyOS is used as the routing layer.

### <span id="downloads"></span>Code and Documentation

  - [**Fundamentals**](https://convolv.es/compass-dsr-tinyos/framework.pdf) - describes framework goals and
    overall structure
  - [**Installation**](https://convolv.es/compass-dsr-tinyos/install.txt) - guide to getting started with the
    framework
  - [**Application Examples**](https://convolv.es/compass-dsr-tinyos/apps/) - demo applications that use the
    framework
  - [**Framework Extension Examples**](https://convolv.es/compass-dsr-tinyos/exts/) - skeleton protocols that
    can be used as building blocks to expand the framework
  - [**Source Code**](https://github.com/jryans/compass-dsr-tinyos)
  - [**Source Code Documentation**](https://convolv.es/compass-dsr-tinyos/nesdoc/) - generated from the
    framework code with nesdoc

### <span id="x1-110003.3"></span>References

<div class="thebibliography">

1. <span id="Xsurvey"></span>R. Wagner,
M. Duarte, J. R. Stinnett, T. S. E. Ng, D. B. Johnson, and R. Baraniuk,
“A network API-driven survey of communication requirements of
distributed data processing algorithms for sensor networks,” Rice
University, Tech. Rep., 2006. \[Online\]. Available:
<span class="obeylines-h">[http://www.ece.rice.edu/˜rwagner/IPSN-API-survey.pdf](http://www.ece.rice.edu/~rwagner/IPSN-API-survey.pdf)</span>
2. <span id="Xapi"></span>R. Wagner,
J. R. Stinnett, M. Duarte, R. Baraniuk, D. B. Johnson, and T. S. E. Ng,
“A Network Application Programming Interface for Data Processing in
Sensor Networks,” Rice University, Tech. Rep. TREE0705, Jan. 2007.
\[Online\]. Available:
<span class="obeylines-h">[http://www.dsp.rice.edu/˜rwagner/docs/wagnerTREE0705.pdf](http://www.dsp.rice.edu/~rwagner/docs/wagnerTREE0705.pdf)</span>
3. <span id="Xdsr-rfc"></span>D. Johnson,
Y. Hu, and D. Maltz, <span class="cmti-10">The Dynamic Source
Routing</span> <span class="cmti-10">Protocol (DSR) for Mobile Ad Hoc
Networks for IPv4</span>, IETF RFC 4728, Feb. 2007.

</div>
