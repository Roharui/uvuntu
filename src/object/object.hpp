#ifndef __UVUNTU_OBJECT__
#define __UVUNTU_OBJECT__

#include <list>

#include "driver/detactor/detactor.hpp"

namespace uvuntu
{
  class Object
  {
  protected:
    std::list<Object *> objLst;
    Vector2 curLoc;
    Vector2 size;
    Color color;

    virtual void Lclick(Detactor *data){};
    virtual void Rclick(Detactor *data){};
    virtual void Lclicking(Detactor *data){};
    virtual void Rclicking(Detactor *data){};

  public:
    virtual void execute(Detactor *data);
    virtual void run(void) = 0;
    virtual ~Object(){};
  };
}

#endif