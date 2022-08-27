#ifndef __UVUNTU_OBJMANAGER__
#define __UVUNTU_OBJMANAGER__

#include <list>
#include "object/object.hpp"

using std::list;

namespace uvuntu
{
  class ObjectManager
  {
  private:
    list<Object *> objLst;

  public:
    list<Object *> *getList();
    void push(Object *obj);
    ~ObjectManager();
  };
}

#endif