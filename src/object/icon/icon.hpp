#ifndef __UVUNTU_ICON__
#define __UVUNTU_ICON__

#include <string>

#include "object/object.hpp"

using std::string;

namespace uvuntu
{
  class IconObj : public Object
  {
  private:
    int icon_type;
    int pixSize;

  public:
    IconObj() : Object(nullptr){};
    void init(Vector2 curLoc, int pixSize, int icon_type);
    void show();
  };
}

#endif