#ifndef __UVUNTU_DETACTOR__
#define __UVUNTU_DETACTOR__

#include <raylib.h>
#include "utils/utils.hpp"

class Detactor
{
private:
  Detactor(Vector2 mouseLoc, Vector2 mouseMove, MouseClick mouseClick, MouseClick mouseClicking, int key);
  Vector2 mouseLoc;
  Vector2 mouseMove;
  MouseClick mouseClick;
  MouseClick mouseClicking;
  int key;

  bool clicked = false;

public:
  static Detactor *detact(void);
  Vector2 getClickLoc(void);
  Vector2 getClickMove(void);
  MouseClick getMouseClick(void);
  MouseClick getMouseClicking(void);
  int getKey(void);

  void setClicked(void);
  bool getClicked(void);

  bool isInside(Vector2 &curLoc, Vector2 &size);
  bool isClicked(Vector2 &curLoc, Vector2 &size);
  bool isLeftClicked(Vector2 &curLoc, Vector2 &size);
  bool isRightClicked(Vector2 &curLoc, Vector2 &size);

  bool isLeftClicking(Vector2 &curLoc, Vector2 &size);
  bool isRightClicking(Vector2 &curLoc, Vector2 &size);
};

#endif