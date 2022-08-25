#ifndef __UVUNTU_ICON__
#define __UVUNTU_ICON__

#include "able/clickable.hpp"

#include "object/texture/texture.hpp"
#include "object/button/button.hpp"
#include "loader/imgLoader.hpp"

class IconObj : public TextureObj
{
private:
  Clickable clickable;

public:
  void init(Loader *loader, Vector2 curLoc);
  void execute(Detactor *data);
  void run(void);
};

#endif