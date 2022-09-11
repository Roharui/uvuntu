#ifndef __UVUNTU_DRIVER__
#define __UVUNTU_DRIVER__

#include <list>

#include "loader/imgLoader.hpp"
#include "manager/objectManager.hpp"

#include "object/cursor/cursor.hpp"
#include "object/icon/icon.hpp"
#include "object/page/page.hpp"

namespace uvuntu
{
  class Driver
  {
  private:
    ImgLoader *loader;
    CursorObj *cursorObj;

  public:
    int run(void);
    void init(void);
    ~Driver();
  };
}

#endif