#ifndef __UVUNTU_CLOSEBTN__
#define __UVUNTU_CLOSEBTN__

#include "object/block/block.hpp"

namespace uvuntu
{
  class CloseButton : public BlockObj
  {
  public:
    CloseButton(Object *obj) : BlockObj(obj) {}
    void Lclicking(Detactor *data);
  };

}

#endif