#ifndef __UVUNTU_TITLE_BAR__
#define __UVUNTU_TITLE_BAR__

#include "object/block/block.hpp"

namespace uvuntu
{
  class TitleBar : public BlockObj
  {
  public:
    void closePage();

    void Lclicking(Detactor *data);

    TitleBar(Object *obj) : BlockObj(obj) {}
    void init(Vector2 curLoc, Vector2 size, Color color);
  };

}

#endif