#ifndef __UVUNTU_TEXTURE__
#define __UVUNTU_TEXTURE__

#include <raylib.h>
#include <string>

#include "object/object.hpp"

using std::string;

namespace uvuntu
{
  class TextureObj : public Object
  {
  protected:
    Texture2D texture;

  public:
    void init(Loader *loader, string path);
    void run(void);
  };
}

#endif
