
#include "object/cursor/cursor.hpp"
#include "object/button/button.hpp"
#include "object/taskbar/taskbar.hpp"
#include "object/page/page.hpp"

#ifndef __UVUNTU_DRIVER__
#define __UVUNTU_DRIVER__

namespace uvuntu
{
  class Driver
  {
  private:
    CursorObj cursor;
    TaskBar icons;
    PageObj page;

    Loader *loader;

  public:
    int run(void);
    void init(void);
    ~Driver();
  };
}

#endif