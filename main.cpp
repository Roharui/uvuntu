
#include <raylib.h>
#include <iostream>

#include <raylib.h>
#define RAYGUI_IMPLEMENTATION
#include "raygui.h"
#undef RAYGUI_IMPLEMENTATION

#include "driver/driver.hpp"

using namespace uvuntu;

int main()
{
  std::cout << "Application running..." << std::endl;

  try
  {
    Driver driver;

    driver.init();
    driver.run();
  }
  catch (Exception &e)
  {
    std::cout << e.what() << std::endl;
  }
  catch (...)
  {
  };
  return 0;
}