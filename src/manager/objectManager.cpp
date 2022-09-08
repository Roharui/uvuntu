
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

  Object *ObjectManager::getSelected()
  {
    return this->selected;
  }

  void ObjectManager::setSelected(Object *obj)
  {
    this->remove(obj);
    if (this->selected != nullptr)
    {
      this->objLst.push_front(this->selected);
    }
    this->selected = obj;
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
    if (this->selected != nullptr)
      delete this->selected;
  }
}
