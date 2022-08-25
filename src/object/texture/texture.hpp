#ifndef __UVUNTU_TEXTURE__
#define __UVUNTU_TEXTURE__

#include <raylib.h>
#include <string>

#include "object/object.hpp"
#include "loader/imgLoader.hpp"

using std::string;

class TextureObj : public Object
{
protected:
  Texture2D texture;

public:
  void init(Loader *loader, string path);
  void execute(Detactor *data);
  void run(void);
};

#endif
