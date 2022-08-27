#ifndef __UVUNTU_DRIVER__
#define __UVUNTU_DRIVER__

#include <list>

#include "loader/imgLoader.hpp"
#include "manager/objectManager.hpp"

#include "object/cursor/cursor.hpp"
#include "object/taskbar/taskbar.hpp"
#include "object/page/page.hpp"

namespace uvuntu
{
  class Driver
  {
  private:
    CursorObj cursor;
    ImgLoader *loader;

  public:
    int run(void);
    void init(void);
    ~Driver();
  };
}

#endif