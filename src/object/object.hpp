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
    bool isShow = true;

    Object *super;

    virtual void Lclick(Detactor *data){};
    virtual void Rclick(Detactor *data){};
    virtual void Lclicking(Detactor *data){};
    virtual void Rclicking(Detactor *data){};

  public:
    void run(Detactor *data, void (*fun)(Detactor *, Object *));
    void move(Vector2 vec);
    bool getShow();

    Object(Object *obj);
    virtual void execute(Detactor *data);
    virtual void show(void) = 0;
    virtual ~Object();
  };
}

#endif