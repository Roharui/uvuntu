
#include <raylib.h>

#include "object/object.hpp"

#include "cursor.hpp"

void Cursor::init(Loader *loader)
{
  this->cursor = loader->getTexture("cursor");
}

void Cursor::execute(Detactor *data)
{
  this->v = data->getClickLoc();
}

void Cursor::run()
{
  DrawTexture(this->cursor, (int)this->v.x, (int)this->v.y, WHITE);
}
