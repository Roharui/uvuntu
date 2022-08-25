
#include "drag.hpp"

void DragObj::execute(Detactor *data)
{
  if (data->isLeftClicking(this->curLoc, this->size))
  {
    Vector2 delta = data->getClickMove();
    this->curLoc.x += delta.x;
    this->curLoc.y += delta.y;
  }
}