
#include "config/config.hpp"
#include "page.hpp"
#include "titleBar.hpp"

namespace uvuntu
{

  void PageObj::init(Vector2 curLoc, Vector2 size, Color color)
  {
    BlockObj::init(curLoc, size, color);

    this->fn = [](Detactor *data, Object *obj)
    {
      auto vec = data->getClickMove();
      obj->move(vec);
    };

    TitleBar *tbar = new TitleBar(this);
    tbar->init(curLoc, {size.x, 20}, BLUE);

    this->objLst.push_back(tbar);
  }

  void PageObj::moveObj(Detactor *data)
  {
    this->run(data, this->fn);
  }
}