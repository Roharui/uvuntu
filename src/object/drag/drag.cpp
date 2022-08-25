
#include "drag.hpp"

void DragObj::execute(Detactor *data)
{
  isMouseClick click = data->isClicking(this->curLoc, this->size);
  if (click.isClick && click.click.left)
  {
    Vector2 delta = data->getClickMove();
    this->curLoc.x += delta.x;
    this->curLoc.y += delta.y;
  }
}