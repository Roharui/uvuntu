#ifndef __UVUNTU_ICON__
#define __UVUNTU_ICON__

#include "able/clickable.hpp"

#include "object/texture/texture.hpp"

namespace uvuntu
{
  class IconObj : public TextureObj
  {
  private:
    Clickable clickable;

  protected:
    void Lclick(Detactor *data);
    void Rclick(Detactor *data);

  public:
    void init(Vector2 curLoc, string img_path);
  };
}

#endif