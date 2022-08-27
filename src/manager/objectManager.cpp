
#include "objectManager.hpp"

namespace uvuntu
{

  ObjectManager &ObjectManager::getIncetance()
  {
    static ObjectManager s;
    return s;
  }

  list<Object *> *ObjectManager::getList()
  {
    return &this->objLst;
  }

  void ObjectManager::push(Object *obj)
  {
    this->objLst.push_back(obj);
  }

  void ObjectManager::remove(Object *obj)
  {
    this->objLst.remove(obj);
  }

  ObjectManager::~ObjectManager()
  {
    for (Object *obj : this->objLst)
      delete obj;
  }
}
