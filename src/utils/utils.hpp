
#ifndef __UVUNTU_UTILS__
#define __UVUNTU_UTILS__

namespace uvuntu
{
  struct MouseClick
  {
    bool left;
    bool right;
    bool middle;
  };

  struct isMouseClick
  {
    MouseClick click;
    MouseClick clicking;
    bool isClick;
    bool isClicking;
  };

  void cursorHide();
}

#endif
