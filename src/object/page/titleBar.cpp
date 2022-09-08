
#include <iostream>

#include "manager/objectManager.hpp"
#include "object/page/page.hpp"

#include "titleBar.hpp"
#include "closeButton.hpp"

namespace uvuntu
{
  void TitleBar::init(Vector2 curLoc, Vector2 size, Color color)
  {
    BlockObj::init(curLoc, size, color);

    CloseButton *clbtn = new CloseButton(this);
    clbtn->init({curLoc.x + size.x - 20, curLoc.y}, {20, size.y}, RED);

    this->objLst.push_back(clbtn);
  }

  void TitleBar::closePage()
  {
    ObjectManager &obm = ObjectManager::getIncetance();
    if (this->super == obm.getSelected())
    {
      obm.setSelected(nullptr);
      return;
    }
    obm.remove(this->super);
  }

  void TitleBar::Lclick(Detactor *data)
  {
    ObjectManager::getIncetance().setSelected(this->super);
  }

  void TitleBar::Lclicking(Detactor *data)
  {
    static_cast<PageObj *>(this->super)->moveObj(data);
  }
}
