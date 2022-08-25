
#include <iostream>

#include "button.hpp"

void ButtonObj::init(Vector2 curLoc, Vector2 size, Color color)
{
  memmove(&this->curLoc, &curLoc, sizeof(curLoc));
  memmove(&this->size, &size, sizeof(size));
  memmove(&this->color, &color, sizeof(color));
}

void ButtonObj::whenClicked(void)
{
}

void ButtonObj::whenLeftClicked(void)
{
}

void ButtonObj::whenRightClicked(void)
{
}

void ButtonObj::execute(Detactor *data)
{
  if (data->isClicked(this->curLoc, this->size))
  {
    this->whenClicked();
    if (data->isLeftClicked(this->curLoc, this->size))
    {
      this->whenLeftClicked();
    }
    if (data->isRightClicked(this->curLoc, this->size))
    {
      this->whenRightClicked();
    }
  }
}

void ButtonObj::run(void)
{
  DrawRectangleV(this->curLoc, this->size, this->color);
}