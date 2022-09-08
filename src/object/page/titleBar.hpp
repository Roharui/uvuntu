#ifndef __UVUNTU_TITLE_BAR__
#define __UVUNTU_TITLE_BAR__

#include "object/block/block.hpp"

namespace uvuntu
{
  class TitleBar : public BlockObj
  {
  protected:
    void Lclick(Detactor *data);
    void Lclicking(Detactor *data);
    void clickOutside(Detactor *data);

  public:
    void closePage();

    void init(Vector2 curLoc, Vector2 size, Color color);
    TitleBar(Object *obj) : BlockObj(obj) {}
  };

}

#endif