
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
      {
          .left = IsMouseButtonDown(MOUSE_BUTTON_LEFT),
          .right = IsMouseButtonDown(MOUSE_BUTTON_RIGHT),
          .middle = IsMouseButtonDown(MOUSE_BUTTON_MIDDLE),
      },
      GetKeyPressed());
  return result;
}

Detactor::Detactor(Vector2 mouseLoc, Vector2 mouseMove, MouseClick mouseClick, MouseClick mouseClicking, int key)
{
  this->mouseLoc = mouseLoc;
  this->mouseMove = mouseMove;
  this->mouseClick = mouseClick;
  this->mouseClicking = mouseClicking;
  this->key = key;
}

void Detactor::setClicked()
{
  this->clicked = true;
}

bool Detactor::getClicked()
{
  return this->clicked;
}

Vector2 Detactor::getClickLoc()
{
  return this->mouseLoc;
}

Vector2 Detactor::getClickMove()
{
  return this->mouseMove;
}

int Detactor::getKey()
{
  return this->key;
}

MouseClick Detactor::getMouseClick()
{
  return this->mouseClick;
}

MouseClick Detactor::getMouseClicking()
{
  return this->mouseClicking;
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
  bool result =
      this->isInside(curLoc, size) &&
      (this->mouseClick.left || this->mouseClick.right);
  if (this->clicked)
    return false;
  this->clicked = result;
  return result;
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

bool Detactor::isLeftClicking(Vector2 &curLoc, Vector2 &size)
{
  bool result =
      this->isInside(curLoc, size) &&
      this->mouseClicking.left;
  if (this->clicked)
    return false;
  this->clicked = result;
  return result;
}

bool Detactor::isRightClicking(Vector2 &curLoc, Vector2 &size)
{
  bool result =
      this->isInside(curLoc, size) &&
      this->mouseClicking.right;
  if (this->clicked)
    return false;
  this->clicked = result;
  return result;
}