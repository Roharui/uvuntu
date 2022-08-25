
#include "page.hpp"

namespace uvuntu
{
  void PageObj::init(Vector2 curLoc, Vector2 size, Color color)
  {
    this->curLoc = curLoc;
    this->size = size;
    this->color = color;
  }

  void PageObj::run(void)
  {
    DrawRectangleV(this->curLoc, this->size, this->color);
  }
}