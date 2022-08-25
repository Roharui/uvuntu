
#include <iostream>
#include <functional>

#include "icon.hpp"

using namespace std;

void IconObj::init(Loader *loader, Vector2 curLoc)
{
  TextureObj::init(loader, "directory");
  this->curLoc = curLoc;

  auto x = []() {};

  this->clickable = Clickable(
      []()
      {
        cout << "Clicked!" << endl;
      },
      []()
      {
        cout << "LClicked!" << endl;
      },
      []()
      {
        cout << "RClicked!" << endl;
      });
}

void IconObj::execute(Detactor *data)
{
  this->clickable.run(data, this->curLoc, this->size);
}

void IconObj::run(void)
{
  TextureObj::run();
}