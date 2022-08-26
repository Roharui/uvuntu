#ifndef __UVUNTU_LOADER__
#define __UVUNTU_LOADER__

#include <raylib.h>
#include <iostream>
#include <map>

#include <json/json.h>

using std::map;
using std::string;

using namespace Json;

namespace uvuntu
{
  class ImgLoader
  {
  private:
    map<string, Texture2D> mapset;
    Value openJSON(string path);

  public:
    ImgLoader();
    static ImgLoader *loader;
    Texture2D getTexture(string path);
    virtual ~ImgLoader()
    {
    }
  };
}

#endif