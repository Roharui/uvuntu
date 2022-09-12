
#include <raylib.h>

#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <algorithm>
#include <vector>

using std::hex;
using std::string;
using std::vector;

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

  const char *toHex(string str)
  {
    return str.c_str();
  }
}