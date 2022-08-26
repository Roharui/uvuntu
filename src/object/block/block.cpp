
#include <string>

#include "block.hpp"

using std::string;

namespace uvuntu
{
  void BlockObj::init(Vector2 curLoc, Vector2 size, Color color)
  {
    this->curLoc = curLoc;
    this->size = size;
    this->color = color;
  }

  void BlockObj::run()
  {
    DrawRectangleV(
        this->curLoc,
        this->size,
        this->color);
    for (Object *obj : this->objLst)
    {
      obj->run();
    }
  }
}