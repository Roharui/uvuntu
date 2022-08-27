#ifndef __UVUNTU_PAGE__
#define __UVUNTU_PAGE__

#include <raylib.h>
#include "object/block/block.hpp"

namespace uvuntu
{
  class PageObj : public BlockObj
  {
  private:
    void (*fn)(Detactor *data, Object *obj);

  protected:
    void Lclicking(Detactor *data);

  public:
    void init(Vector2 curLoc, Vector2 size, Color color);
    void drag();
  };
}

#endif