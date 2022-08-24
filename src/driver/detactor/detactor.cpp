
#include <raylib.h>

struct MouseClick
{
  bool left;
  bool right;
  bool middle;
};

class Detactor
{
private:
  Detactor(Vector2 clickLoc, MouseClick mouseClick, int key);
  Vector2 clickLoc;
  MouseClick mouseClick;
  int key;

public:
  static Detactor *detact(void);
  Vector2 getClickLoc(void);
  MouseClick getMouseClick(void);
  int getKey(void);
};

Detactor *Detactor::detact()
{
  Detactor *result = new Detactor(
      GetMousePosition(),
      {
          .left = IsMouseButtonDown(MOUSE_BUTTON_LEFT),
          .right = IsMouseButtonDown(MOUSE_BUTTON_RIGHT),
          .middle = IsMouseButtonDown(MOUSE_BUTTON_MIDDLE),
      },
      GetKeyPressed());
  return result;
}

Detactor::Detactor(Vector2 clickLoc, MouseClick mouseClick, int key)
{
  this->clickLoc = clickLoc;
  this->mouseClick = mouseClick;
  this->key = key;
}

Vector2 Detactor::getClickLoc()
{
  return this->clickLoc;
}

int Detactor::getKey()
{
  return this->key;
}

MouseClick Detactor::getMouseClick()
{
  return this->mouseClick;
}