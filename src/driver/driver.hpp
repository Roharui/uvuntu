#ifndef __UVUNTU_DRIVER__
#define __UVUNTU_DRIVER__

#include "object/cursor/cursor.hpp"
#include "object/button/button.hpp"

class Driver
{
private:
    Cursor cursor;
    Button button;

public:
    int run(void);
    void init(void);
    ~Driver();
};

#endif