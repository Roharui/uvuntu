#include <iostream>
#include <string>
#include <filesystem>
#include <unistd.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::filesystem::current_path;
using std::filesystem::__cxx11::path;

string ExePath()
{
  path path = current_path();
  return path.generic_string();
}
