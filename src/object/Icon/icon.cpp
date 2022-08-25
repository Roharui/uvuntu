
#include <iostream>
#include <functional>

#include "icon.hpp"

using namespace std;

namespace uvuntu
{
  void IconObj::init(Loader *loader, Vector2 curLoc, string img_path)
  {
    TextureObj::init(loader, img_path);
    this->curLoc = curLoc;

    this->clickable = Clickable(
        []() {},
        []()
        {
          cout << "LClicked!" << endl;
        },
        []()
        {
          cout << "RClicked!" << endl;
        },
        false);
  }

  void IconObj::execute(Detactor *data)
  {
    this->clickable.run(data, this->curLoc, this->size);
  }

}