

#include "config/config.hpp"

#include "object.hpp"

namespace uvuntu
{

  Object::Object(Object *obj)
  {
    this->super = obj;
  }

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

  void Object::run(Detactor *data, void (*fn)(Detactor *, Object *))
  {
    fn(data, this);
    for (auto *x : this->objLst)
    {
      x->run(data, fn);
    }
  }

  void Object::move(Vector2 vec)
  {
    this->curLoc.x += vec.x;
    this->curLoc.y += vec.y;
  }

  Object::~Object()
  {
    for (auto *x : this->objLst)
    {
      delete x;
    }
  }
}