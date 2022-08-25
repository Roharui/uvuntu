
#include <raylib.h>
#include <iostream>
#include <map>
#include <string>
#include <vector>

#include <fstream>
#include <filesystem>

#include <json/json.h>

#include "utils/path.hpp"

#include "imgLoader.hpp"

using std::map;
using std::string;

using namespace Json;

namespace fs = std::filesystem;

namespace uvuntu
{
  // === private ===

  Value Loader::openJSON(string path)
  {
    std::ifstream json_file;
    json_file.open(path, std::ifstream::in | std::ifstream::binary);
    Value v;
    json_file >> v;
    json_file.close();

    return v;
  }

  // ==== public ====

  Loader::Loader()
  {

    string resources_path = ExePath() + "/resources";
    string img_json = "/.img.json";
    string json_path = resources_path + img_json;

    Value v = this->openJSON(json_path);

    for (auto const &id : v.getMemberNames())
    {
      Value vid = v[id];
      string img_path = resources_path + vid["filename"].asString();

      if (vid.isMember("size"))
      {
        int size_x = v[id]["size"][0].asInt();
        int size_y = v[id]["size"][1].asInt();
        Image img = LoadImage(img_path.c_str());

        ImageResize(&img, size_x, size_y);

        Texture2D text2d = LoadTextureFromImage(img);
        UnloadImage(img);

        this->mapset[id] = text2d;
      }
      else
      {
        this->mapset[id] = LoadTexture(img_path.c_str());
      }
    }
  }

  Texture2D Loader::getTexture(string path)
  {
    return this->mapset.find(path)->second;
  }
}