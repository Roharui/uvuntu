
#include "page.hpp"

void PageObj::init(Vector2 curLoc, Vector2 size, Color color)
{
  this->curLoc = curLoc;
  this->size = size;
  this->color = color;
}

// void PageObj::execute(Detactor *data)
// {
//   DragObj::execute(data);
// }

void PageObj::run(void)
{
  DrawRectangleV(this->curLoc, this->size, this->color);
}