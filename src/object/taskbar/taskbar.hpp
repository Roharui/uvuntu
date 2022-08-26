#ifndef __UVUNTU_ICONS__
#define __UVUNTU_ICONS__

#include <iostream>
#include <list>

#include "object/block/block.hpp"
#include "object/icon/icon.hpp"

#include "config/config.hpp"

using std::list;

namespace uvuntu
{
  class TaskBar : public BlockObj
  {
  private:
    Vector2 iconLoc = {0, 0};
    int iconSize = ICON_SIZE;

  public:
    void init(list<string> iconList);
    ~TaskBar();
  };
}

#endif