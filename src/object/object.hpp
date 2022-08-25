#ifndef __UVUNTU_OBJECT__
#define __UVUNTU_OBJECT__

#include "driver/detactor/detactor.hpp"
#include "loader/imgLoader.hpp"

namespace uvuntu
{
  class Object
  {
  protected:
    Vector2 curLoc;
    Vector2 size;
    Color color;

  public:
    virtual void execute(Detactor *data) = 0;
    virtual void run(void) = 0;
  };
}

#endif