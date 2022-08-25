#include <iostream>
#include <string>
#include <filesystem>
#include <unistd.h>

using std::endl;
using std::string;
using std::filesystem::current_path;
using std::filesystem::__cxx11::path;

namespace uvuntu
{
  string ExePath()
  {
    path path = current_path();
    return path.generic_string();
  }
}
