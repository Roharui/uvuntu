#ifndef __UVUNTU_BLOCK__
#define __UVUNTU_BLOCK__

#include <raylib.h>
#include <string>

#include "object/object.hpp"

using std::string;

namespace uvuntu
{
  class BlockObj : public Object
  {
  public:
    void init(Vector2 curLoc, Vector2 size, Color color);
    void show(void);
  };
}

#endif
