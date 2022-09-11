
#include "icon.hpp"

#include <raylib.h>

#include "raygui.h"


using std::string;

namespace uvuntu
{
  void IconObj::init(Vector2 curLoc, int pixSize, int icon_type)
  {
    this->curLoc = curLoc;
    this->pixSize = pixSize;
    this->icon_type = icon_type;
  }

  void IconObj::show()
  {
    GuiDrawIcon(
      this->icon_type, 
      this->curLoc.x, 
      this->curLoc.y, 
      this->pixSize, 
      BLACK);
  }
}