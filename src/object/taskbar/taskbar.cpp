
#include "config/config.hpp"
#include "object/icon/icon.hpp"
#include "taskbar.hpp"

namespace uvuntu
{

  // == public ==
  void TaskBar::init(list<string> iconList)
  {
    for (string str : iconList)
    {
      IconObj *icobj = new IconObj(this);
      icobj->init(this->iconLoc, str);

      this->iconLoc.y += this->iconSize;
      if (iconLoc.y + this->iconSize >= WINDOW_HEIGHT)
      {
        this->iconLoc.y = 0;
        this->iconLoc.x += this->iconSize;
      }

      this->objLst.push_back(icobj);
    }
    BlockObj::init({0, 0}, {ICON_SIZE, WINDOW_HEIGHT}, BLUE);
  }
}