#ifndef STORAGE_VOLUMES_H
#define STORAGE_VOLUMES_H

enum {
  VOLUME_DELUGE1, 
  VOLUME_DELUGE0, 
};

#endif
#if defined(VS)
VS(VOLUME_DELUGE1, 512)
VS(VOLUME_DELUGE0, 512)
#undef VS
#endif
#if defined(VB)
VB(VOLUME_DELUGE1, 0)
VB(VOLUME_DELUGE0, 512)
#undef VB
#endif
