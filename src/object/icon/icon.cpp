
#include "icon.hpp"

#include <raylib.h>

#include "raygui.h"


using std::string;

namespace uvuntu
{
  void IconObj::init(int icon_type, string icon_text)
  {
    this->curLoc = {0.0, 0.0};
    this->icon_type = icon_type;
    this->icon_text = icon_text;
  }

  void IconObj::show()
  {
    GuiDrawIcon(
      this->icon_type, 
      this->curLoc.x, 
      this->curLoc.y, 
      3, 
      BLACK);
  }
}