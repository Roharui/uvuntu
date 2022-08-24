#ifndef __UVUNTU_DETACTOR__
#define __UVUNTU_DETACTOR__

#include <raylib.h>
#include "utils/utils.hpp"

class Detactor
{
private:
  Detactor(Vector2 mouseLoc, Vector2 mouseMove, MouseClick mouseClick, int key);
  Vector2 mouseLoc;
  Vector2 mouseMove;
  MouseClick mouseClick;
  int key;

public:
  static Detactor *detact(void);
  Vector2 getClickLoc(void);
  MouseClick getMouseClick(void);
  int getKey(void);

  bool isClicked(Vector2 &curLoc, Vector2 &size);
  bool isLeftClicked(Vector2 &curLoc, Vector2 &size);
  bool isRightClicked(Vector2 &curLoc, Vector2 &size);
};

#endif