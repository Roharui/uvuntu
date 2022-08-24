#ifndef __UVUNTU_LOADER__
#define __UVUNTU_LOADER__

#include <raylib.h>
#include <iostream>
#include <map>

using std::map;
using std::string;

class Loader
{
public:
  Loader();
  Texture2D getTexture(string path);
};

#endif