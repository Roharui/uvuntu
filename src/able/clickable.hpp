#ifndef __UVUNTU_CLICKABLE__
#define __UVUNTU_CLICKABLE__

#include <functional>

#include "driver/detactor/detactor.hpp"

#define RETURN_VOID

class Clickable
{
private:
  void (*click)(void);
  void (*lclick)(void);
  void (*rclick)(void);
  bool useClick = true;

public:
  Clickable(
      void (*click)(void),
      void (*lclick)(void),
      void (*rclick)(void),
      bool useClick);
  Clickable() {}
  void run(Detactor *data, Vector2 &curLoc, Vector2 &size);
  void LRClick(Detactor *data, Vector2 &curLoc, Vector2 &size);
};

#endif