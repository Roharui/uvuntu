
#include <raylib.h>

#include "object/object.hpp"

class Cursor : public Object
{
private:
  Texture2D cursor;
  Vector2 v;

public:
  void init(Loader *loader);
  void execute(Detactor *data);
  void run(void);
};

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
  DrawTexture(this->cursor, int(this->v.x), int(this->v.y), WHITE);
}
