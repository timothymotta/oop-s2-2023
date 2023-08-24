// Timothy Motta a1831126

#ifndef

// define class header file
#DEFINE "Musicbox.h"
#include <string.h>

// declare class
class MusicBox {
  // public variables
 public:
  MusicBox();
  MusicBox(std::string songname, int width);
  std::string get_song();
  int get_width();
  ~MusicBox();
};

MusicBox mb;

#endif
