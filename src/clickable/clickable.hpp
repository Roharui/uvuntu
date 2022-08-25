#ifndef __UVUNTU_CLICKABLE__
#define __UVUNTU_CLICKABLE__

#include <functional>

#include "driver/detactor/detactor.hpp"

class Clickable
{
private:
  void (*click)(void);
  void (*lclick)(void);
  void (*rclick)(void);

public:
  Clickable(
      void (*click)(void),
      void (*lclick)(void),
      void (*rclick)(void));
  Clickable() {}
  void run(Detactor *data, Vector2 &curLoc, Vector2 &size);
};

#endif