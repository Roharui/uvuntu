
#include "config/config.hpp"
#include "object/icon/icon.hpp"
#include "taskbar.hpp"

namespace uvuntu
{
  void TaskBar::init(Loader *loader, list<string> iconList)
  {
    for (string str : iconList)
    {
      IconObj icobj;
      icobj.init(loader, this->iconLoc, str);

      this->iconLoc.y += this->iconSize;
      if (iconLoc.y + this->iconSize >= WINDOW_HEIGHT)
      {
        this->iconLoc.y = 0;
        this->iconLoc.x += this->iconSize;
      }

      this->icon_list.push_back(icobj);
    }
    this->curLoc = {0, 0};
    this->size = {ICON_SIZE, WINDOW_HEIGHT};
  }

  void TaskBar::execute(Detactor *detactor)
  {
    for (IconObj icon : icon_list)
    {
      icon.execute(detactor);
    }
  }

  void TaskBar::run(void)
  {
    DrawRectangleV(this->curLoc, this->size, {104, 144, 232, 255});
    for (IconObj icon : icon_list)
    {
      icon.run();
    }
  }
}