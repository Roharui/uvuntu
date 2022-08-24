#ifndef __UVUNTU_DETACTOR__
#define __UVUNTU_DETACTOR__

#include <raylib.h>

struct MouseClick
{
  bool left;
  bool right;
  bool middle;
};

class Detactor
{
public:
  static Detactor *detact(void);
  Vector2 getClickLoc(void);
  MouseClick getMouseClick(void);
  int getKey(void);
};

#endif