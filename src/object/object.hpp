#ifndef __UVUNTU_OBJECT__
#define __UVUNTU_OBJECT__

#include "driver/detactor/detactor.hpp"
#include "loader/imgLoader.hpp"

class Object
{
public:
  virtual void execute(Detactor *data) = 0;
  virtual void run(void) = 0;
};

#endif