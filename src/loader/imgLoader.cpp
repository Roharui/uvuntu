
#include <raylib.h>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <filesystem>

#include "utils/path.hpp"

using std::map;
using std::string;
using std::vector;

namespace fs = std::filesystem;

class Loader
{
private:
  map<string, Texture2D> mapset;

public:
  Loader();
  Texture2D getTexture(string path);
};

Loader::Loader()
{
  string path = "/resources";
  string p = ExePath() + path;
  for (auto &filename : fs::directory_iterator(p))
  {
    string file_path = filename.path().generic_string();
    string base_filename = filename.path().stem().generic_string();

    this->mapset[base_filename] = LoadTexture(file_path.c_str());
  }
}

Texture2D Loader::getTexture(string path)
{

  // for (auto it : this->mapset)
  // {
  //   if (it.first == path)
  //     return it.second;
  // }
  // return {0, 0, 0, 0, 0};
  if (this->mapset.contains(path))
  {
    return this->mapset[path];
  }
  return {0, 0, 0, 0, 0};
}