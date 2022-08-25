
#ifndef __UVUNTU_UTILS__
#define __UVUNTU_UTILS__

struct MouseClick
{
  bool left;
  bool right;
  bool middle;
};

struct isMouseClick
{
  MouseClick click;
  bool isClick;
};

void cursorHide();

#endif
