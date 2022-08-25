
#include "config/config.hpp"
#include "icon.hpp"
#include "icons.hpp"

void Icons::init(Loader *loader, list<string> iconList)
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
}

void Icons::execute(Detactor *detactor)
{
  for (IconObj icon : icon_list)
  {
    icon.execute(detactor);
  }
}

void Icons::run(void)
{
  for (IconObj icon : icon_list)
  {
    icon.run();
  }
}