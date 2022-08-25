
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
    isMouseClick click = data->isClicked(curLoc, size);
    if (click.isClick)
    {
        if (this->useClick)
            this->click();
        else
            this->LRClick(click.click);
    }
}

void Clickable::LRClick(MouseClick click)
{
    if (click.left)
    {
        this->lclick();
    }
    if (click.right)
    {
        this->rclick();
    }
}