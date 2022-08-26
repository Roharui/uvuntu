
#include <string>

#include "loader/imgLoader.hpp"

#include "texture.hpp"

using std::string;

namespace uvuntu
{
  void TextureObj::init(string path)
  {
    this->texture = ImgLoader::loader->getTexture(path);
    this->size = {
        (float)this->texture.width,
        (float)this->texture.height};
    this->color = WHITE;
  }

  void TextureObj::run()
  {
    DrawTexture(
        this->texture,
        (int)this->curLoc.x,
        (int)this->curLoc.y,
        this->color);
    for (Object *obj : this->objLst)
    {
      obj->run();
    }
  }
}