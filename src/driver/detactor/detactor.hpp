#ifndef __UVUNTU_DETACTOR__
#define __UVUNTU_DETACTOR__

#include <raylib.h>
#include "utils/utils.hpp"

namespace uvuntu
{
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

    void setClicked(bool clicked);
    bool getClicked(void);

    bool isInside(Vector2 &curLoc, Vector2 &size);
    isMouseClick isClicked(Vector2 &curLoc, Vector2 &size);
  };
}

#endif