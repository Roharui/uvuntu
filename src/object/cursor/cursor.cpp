#include <list>

#include "driver/detactor/detactor.hpp"
#include "object/block/block.hpp"

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