#ifndef __UVUNTU_PAGE__
#define __UVUNTU_PAGE__

#include <string>
#include "object/object.hpp"

using std::string;

namespace uvuntu
{
  class PageObj : public Object
  {
  private:
    string title;

  public:
    PageObj(Object *obj) : Object(obj) {}
    void init(Vector2 curLoc, Vector2 size, string title);
    void show(void);
  };
}

#endif