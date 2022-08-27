
#include "config/config.hpp"
#include "page.hpp"

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

    auto testBlock = new BlockObj();
    testBlock->init(curLoc, {this->size.x, 20}, BLUE);

    this->objLst.push_back(testBlock);
  }

  void PageObj::Lclicking(Detactor *data)
  {
    this->run(data, this->fn);
  }
}