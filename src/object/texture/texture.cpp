
#include <string>

#include "texture.hpp"

using std::string;

void TextureObj::init(Loader *loader, string path)
{
  this->texture = loader->getTexture(path);
  this->size = {
      (float)this->texture.width,
      (float)this->texture.height};
  this->color = WHITE;
}

void TextureObj::execute(Detactor *data)
{
  return;
}

void TextureObj::run()
{
  DrawTexture(
      this->texture,
      (int)this->curLoc.x,
      (int)this->curLoc.y,
      this->color);
}