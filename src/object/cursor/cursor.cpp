
#include <raylib.h>

#include "object/texture/texture.hpp"

#include "cursor.hpp"

void CursorObj::init(Loader *loader)
{
  TextureObj::init(loader, "cursor");
}

void CursorObj::execute(Detactor *data)
{
  this->curLoc = data->getClickLoc();
}
