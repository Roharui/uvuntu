
#include "clickable.hpp"

Clickable::Clickable(
    void (*click)(void),
    void (*lclick)(void),
    void (*rclick)(void),
    bool useClick)
{
    this->click = click;
    this->lclick = lclick;
    this->rclick = rclick;
    this->useClick = useClick;
}

void Clickable::run(Detactor *data, Vector2 &curLoc, Vector2 &size)
{
    if (this->useClick && data->isClicked(curLoc, size))
    {
        click();
    }
    this->LRClick(data, curLoc, size);
}

void Clickable::LRClick(Detactor *data, Vector2 &curLoc, Vector2 &size)
{
    if (data->isLeftClicked(curLoc, size))
    {
        this->lclick();
    }
    data->setClicked(false);
    if (data->isRightClicked(curLoc, size))
    {
        this->rclick();
    }
}