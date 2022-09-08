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
    ObjectManager() {}
    ObjectManager(const ObjectManager &ref) {}
    ~ObjectManager();
    list<Object *> objLst;
    Object *selected = nullptr;

  public:
    static ObjectManager &getIncetance();

    list<Object *> *getList();

    Object *getSelected();
    void setSelected(Object *);

    void push(Object *obj);
    void remove(Object *obj);
  };
}

#endif