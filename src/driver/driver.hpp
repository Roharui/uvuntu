#ifndef __UVUNTU_DRIVER__
#define __UVUNTU_DRIVER__

#include "object/cursor/cursor.hpp"
#include "object/button/button.hpp"
#include "object/icon/icon.hpp"

class Driver
{
private:
    CursorObj cursor;
    IconObj icon;

    Loader *loader;

public:
    int run(void);
    void init(void);
    ~Driver();
};

#endif