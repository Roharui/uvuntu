#ifndef __UVUNTU_BUTTON__
#define __UVUNTU_BUTTON__

#include "raylib.h"

#include "object/object.hpp"

class Button : public Object
{
private:
  Vector2 curLoc;
  Vector2 size;
  Color color;

  bool isClicked = false;

public:
  void init(Vector2 curLoc, Vector2 size, Color color);
  void execute(Detactor *data);
  void run(void);
};

#endif