
#include <raylib.h>
#include "raygui.h"

#include "page.hpp"

using std::string;

namespace uvuntu
{
  void PageObj::init(Vector2 curLoc, Vector2 size, string title)
  {
    this->curLoc = curLoc;
    this->size = size;
    this->title = title;
  }

  void PageObj::show(void)
  {
    GuiWindowBox({this->curLoc.x,
                  this->curLoc.y,
                  this->size.x,
                  this->size.y},
                 this->title.c_str());
  }
}