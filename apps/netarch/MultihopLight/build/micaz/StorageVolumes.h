#ifndef STORAGE_VOLUMES_H
#define STORAGE_VOLUMES_H

enum {
  VOLUME_GOLDENIMAGE, 
  VOLUME_DELUGE1, 
};

#endif
#if defined(VS)
VS(VOLUME_GOLDENIMAGE, 512)
VS(VOLUME_DELUGE1, 512)
#undef VS
#endif
#if defined(VB)
VB(VOLUME_GOLDENIMAGE, 0)
VB(VOLUME_DELUGE1, 512)
#undef VB
#endif
