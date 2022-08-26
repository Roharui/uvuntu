
#include <iostream>
#include <functional>

#include "icon.hpp"

using namespace std;

namespace uvuntu
{

  void IconObj::Lclick(Detactor *data) { cout << "LClicked!" << endl; };
  void IconObj::Rclick(Detactor *data) { cout << "RClicked!" << endl; };

  void IconObj::init(Vector2 curLoc, string img_path)
  {
    TextureObj::init(img_path);
    this->curLoc = curLoc;
  }
}