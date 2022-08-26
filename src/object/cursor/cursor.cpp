
#include <raylib.h>

#include "cursor.hpp"

namespace uvuntu
{
  void CursorObj::init()
  {
    TextureObj::init("cursor");
  }

  void CursorObj::execute(Detactor *data)
  {
    this->curLoc = data->getClickLoc();
  }
}
