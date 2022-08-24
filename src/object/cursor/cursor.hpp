#ifndef __UVUNTU_CURSOR__
#define __UVUNTU_CURSOR__

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

#endif