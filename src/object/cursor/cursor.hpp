#ifndef __UVUNTU_CURSOR__
#define __UVUNTU_CURSOR__

#include <raylib.h>
#include "object/texture/texture.hpp"

namespace uvuntu
{
  class CursorObj : public TextureObj
  {
  public:
    CursorObj() : TextureObj(nullptr) {}
    void init();
    void execute(Detactor *data);
  };
}

#endif