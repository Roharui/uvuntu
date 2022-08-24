
#include <raylib.h>

#include <iostream>
#include <string>

using std::string;

struct MouseClick
{
  bool left;
  bool right;
  bool middle;
};

void cursorHide()
{
  if (IsCursorOnScreen())
  {
    HideCursor();
  }
}