

#include "object.hpp"

namespace uvuntu
{
  void Object::execute(Detactor *data)
  {
    for (Object *obj : this->objLst)
    {
      obj->execute(data);
    }
    isMouseClick isClick = data->isClicked(this->curLoc, this->size);
    if (isClick.isClick)
    {
      if (isClick.click.left)
      {
        this->Lclick(data);
      }
      if (isClick.click.right)
      {
        this->Rclick(data);
      }
    }
    if (isClick.isClicking)
    {
      if (isClick.clicking.left)
      {
        this->Lclicking(data);
      }
      if (isClick.clicking.right)
      {
        this->Rclicking(data);
      }
    }
  }
}