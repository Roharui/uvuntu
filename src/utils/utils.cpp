
#include <raylib.h>

#include <iostream>
#include <string>

using std::string;

namespace uvuntu
{
  void cursorHide()
  {
    if (IsCursorOnScreen())
    {
      HideCursor();
    }
  }
}