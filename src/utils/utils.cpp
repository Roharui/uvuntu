
#include <raylib.h>

#include <iostream>
#include <string>

using std::string;

void cursorHide()
{
  if (IsCursorOnScreen())
  {
    HideCursor();
  }
}