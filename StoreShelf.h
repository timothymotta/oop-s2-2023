// Timothy Motta - a1831126

#ifndef
#DEFINE "StoreShelf.h"

class StoreShelf {
 public:
  StoreShelf();
  StoreShelf(int width);
  int get_width();
  int get_num_music_boxes();
  MusicBox *get_contents();
  bool add_music_box(MusicBox a_music_box);

  ~StoreShelf();
};

StoreShelf SS;

#endif