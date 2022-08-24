#ifndef __UVUNTU_LOADER__
#define __UVUNTU_LOADER__

#include <raylib.h>
#include <iostream>
#include <map>

#include <json/json.h>

using std::map;
using std::string;

using namespace Json;

class Loader
{
private:
  map<string, Texture2D> mapset;
  Value openJSON(string path);

public:
  Loader();
  Texture2D getTexture(string path);
};

#endif