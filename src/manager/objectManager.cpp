
#include "objectManager.hpp"

namespace uvuntu
{

  list<Object *> *ObjectManager::getList()
  {
    return &this->objLst;
  }

  void ObjectManager::push(Object *obj)
  {
    this->objLst.push_back(obj);
  }

  ObjectManager::~ObjectManager()
  {
    for (Object *obj : this->objLst)
      delete obj;
  }
}
