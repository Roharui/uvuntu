#ifndef __UVUNTU_CURSOR__
#define __UVUNTU_CURSOR__

#include "object/object.hpp"

class Cursor : public Object
{
public:
  void init(Loader *loader);
  void execute(Detactor *data);
  void run(void);
};

#endif