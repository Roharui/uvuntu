#ifndef __UVUNTU_ICONS__
#define __UVUNTU_ICONS__

#include <iostream>
#include <list>

#include "object/object.hpp"
#include "icon.hpp"

#include "config/config.hpp"

using std::list;

class TaskBar : public Object
{
private:
  Vector2 iconLoc = {0, 0};
  int iconSize = ICON_SIZE;

public:
  list<IconObj> icon_list;
  void init(Loader *loader, list<string> iconList);
  void execute(Detactor *data);
  void run(void);
};

#endif