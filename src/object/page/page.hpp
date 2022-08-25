#ifndef __UVUNTU_PAGE__
#define __UVUNTU_PAGE__

#include <raylib.h>
#include "object/drag/drag.hpp"
#include "driver/detactor/detactor.hpp"

namespace uvuntu
{
  class PageObj : public DragObj
  {
  public:
    void init(Vector2 curLoc, Vector2 size, Color color);
    void run(void);
  };
}

#endif