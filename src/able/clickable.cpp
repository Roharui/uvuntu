
#include "clickable.hpp"

Clickable::Clickable(
    void (*click)(void),
    void (*lclick)(void),
    void (*rclick)(void))
{
    this->click = click;
    this->lclick = lclick;
    this->rclick = rclick;
}

void Clickable::run(Detactor *data, Vector2 &curLoc, Vector2 &size)
{
    if (data->isClicked(curLoc, size))
    {
        click();
        if (data->isLeftClicked(curLoc, size))
        {
            this->lclick();
        }
        if (data->isRightClicked(curLoc, size))
        {
            this->rclick();
        }
    }
}