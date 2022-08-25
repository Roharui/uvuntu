
#include <raylib.h>

#include "utils/utils.hpp"

#include "detactor.hpp"

Detactor *Detactor::detact()
{
  Detactor *result = new Detactor(
      GetMousePosition(),
      GetMouseDelta(),
      {
          .left = IsMouseButtonPressed(MOUSE_BUTTON_LEFT),
          .right = IsMouseButtonPressed(MOUSE_BUTTON_RIGHT),
          .middle = IsMouseButtonPressed(MOUSE_BUTTON_MIDDLE),
      },
      GetKeyPressed());
  return result;
}

Detactor::Detactor(Vector2 mouseLoc, Vector2 mouseMove, MouseClick mouseClick, int key)
{
  this->mouseLoc = mouseLoc;
  this->mouseMove = mouseMove;
  this->mouseClick = mouseClick;
  this->key = key;
}

Vector2 Detactor::getClickLoc()
{
  return this->mouseLoc;
}

int Detactor::getKey()
{
  return this->key;
}

MouseClick Detactor::getMouseClick()
{
  return this->mouseClick;
}

bool Detactor::isInside(Vector2 &curLoc, Vector2 &size)
{
  return curLoc.x <= this->mouseLoc.x &&
         curLoc.y <= this->mouseLoc.y &&
         (curLoc.x + size.x) >= this->mouseLoc.x &&
         (curLoc.y + size.y) >= this->mouseLoc.y;
}

bool Detactor::isClicked(Vector2 &curLoc, Vector2 &size)
{
  return this->isInside(curLoc, size) &&
         (this->mouseClick.left || this->mouseClick.right);
}

bool Detactor::isLeftClicked(Vector2 &curLoc, Vector2 &size)
{
  return this->isClicked(curLoc, size) &&
         this->mouseClick.left;
}

bool Detactor::isRightClicked(Vector2 &curLoc, Vector2 &size)
{
  return this->isClicked(curLoc, size) &&
         this->mouseClick.right;
}