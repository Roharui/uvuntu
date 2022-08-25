#ifndef __UVUNTU_BUTTON__
#define __UVUNTU_BUTTON__

#include <raylib.h>

#include "object/object.hpp"

class ButtonObj : public Object
{
protected:
  void whenClicked(void);
  void whenLeftClicked(void);
  void whenRightClicked(void);

public:
  void init(Vector2 curLoc, Vector2 size, Color color);
  void execute(Detactor *data);
  void run(void);
};

#endif