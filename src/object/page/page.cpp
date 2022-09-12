
#include <raylib.h>
#include "raygui.h"

#include "manager/objectManager.hpp"

#include "page.hpp"

using std::string;

namespace uvuntu
{
  void PageObj::init(Vector2 curLoc, Vector2 size, string title)
  {
    this->curLoc = curLoc;
    this->size = size;
    this->title = title;
  }

  void PageObj::show(void)
  {
    bool showing = GuiWindowBox({this->curLoc.x,
                                 this->curLoc.y,
                                 this->size.x,
                                 this->size.y},
                                this->title.c_str());
    if (showing)
    {
      ObjectManager &obm = ObjectManager::getIncetance();
      obm.remove(this);
    }
  }
}