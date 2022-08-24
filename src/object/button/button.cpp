
#include <iostream>
#include "object/object.hpp"

#include "button.hpp"

void Button::init(Vector2 curLoc, Vector2 size, Color color)
{
  // memmove(&this->curLoc, &curLoc, sizeof(curLoc));
  // memmove(&this->size, &size, sizeof(size));
  // memmove(&this->color, &color, sizeof(color));
  this->curLoc.x = curLoc.x;
  this->curLoc.y = curLoc.y;
  this->size.x = size.x;
  this->size.y = size.y;
  this->color.r = color.r;
  this->color.g = color.g;
  this->color.b = color.b;
  this->color.a = color.a;
}

void Button::execute(Detactor *data)
{
  if (data->isLeftClicked(this->curLoc, this->size))
  {
    this->isClicked = !this->isClicked;
  }
  if (this->isClicked)
    this->color = BLACK;
  else
    this->color = BLUE;
}

void Button::run(void)
{
  DrawRectangle(
      (int)(this->curLoc.x),
      (int)(this->curLoc.y),
      (int)(this->size.x),
      (int)(this->size.y),
      this->color);
  // DrawRectangleV(this->curLoc, this->size, this->color);
}
