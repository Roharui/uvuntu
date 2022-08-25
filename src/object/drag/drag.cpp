
#include "config/config.hpp"
#include "drag.hpp"

namespace uvuntu
{
  void DragObj::execute(Detactor *data)
  {
    isMouseClick click = data->isClicking(this->curLoc, this->size);
    if (click.isClick && click.click.left)
    {
      Vector2 delta = data->getClickMove();
      if (this->curLoc.x + delta.x > 0 ||
          this->curLoc.x + delta.x < WINDOW_WIDTH)
        this->curLoc.x += delta.x;
      if (this->curLoc.y + delta.y > 0 ||
          this->curLoc.y + delta.y < WINDOW_HEIGHT)
        this->curLoc.y += delta.y;
    }
  }
}