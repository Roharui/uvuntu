
#include <raylib.h>

#include "cursor.hpp"

namespace uvuntu
{
  void CursorObj::init(Loader *loader)
  {
    TextureObj::init(loader, "cursor");
  }

  void CursorObj::execute(Detactor *data)
  {
    this->curLoc = data->getClickLoc();
  }
}
