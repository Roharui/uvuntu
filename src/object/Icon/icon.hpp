#ifndef __UVUNTU_ICON__
#define __UVUNTU_ICON__

#include "able/clickable.hpp"

#include "object/texture/texture.hpp"
#include "loader/imgLoader.hpp"

namespace uvuntu
{
  class IconObj : public TextureObj
  {
  private:
    Clickable clickable;

  public:
    void init(Loader *loader, Vector2 curLoc, string img_path);
    void execute(Detactor *data);
  };
}

#endif