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
    string icon_text;

  public:
    IconObj() : Object(nullptr){};
    void init(int icon_type, string icon_text);
    void show();
  };
}

#endif