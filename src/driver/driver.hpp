#ifndef __UVUNTU_DRIVER__
#define __UVUNTU_DRIVER__

#include "object/cursor/cursor.hpp"
#include "object/button/button.hpp"
#include "object/icon/icons.hpp"
#include "object/page/page.hpp"

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

#endif