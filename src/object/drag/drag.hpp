#ifndef __UVUNTU_DRAGABLE__
#define __UVUNTU_DRAGABLE__

#include "object/object.hpp"

namespace uvuntu
{
  class DragObj : public Object
  {
  public:
    void execute(Detactor *data);
  };
}

#endif