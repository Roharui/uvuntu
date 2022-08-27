
#include <raylib.h>
#include <iostream>
#include <string>

#include "config/config.hpp"
#include "driver.hpp"

#define NULL_VEC \
  {              \
    0.0f, 0.0f   \
  }
#define NULL_COLOR \
  {                \
    0, 0, 0        \
  }

namespace uvuntu
{

  int Driver::run(void)
  {
    std::cout << "OK! Start!" << std::endl;

    ObjectManager &objm = ObjectManager::getIncetance();

    while (!WindowShouldClose())
    {
      list<Object *> objs = *objm.getList();
      Detactor *detactor = Detactor::detact();
      objs.reverse();

      // === execute side ===

      cursorHide();

      for (Object *obj : objs)
        obj->execute(detactor);

      cursor.execute(detactor);

      // ====================
      objs.reverse();
      // ====================

      BeginDrawing();

      // === draw side ===

      ClearBackground(WHITE);

      for (Object *obj : objs)
        obj->show();
      cursor.show();

      // =================

      delete detactor;
      EndDrawing();
    }

    CloseWindow();

    return 0;
  }

  void Driver::init()
  {
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_NAME);
    SetTargetFPS(WINDOW_FPS);

    loader = new ImgLoader;

    ImgLoader::loader = loader;

    PageObj *page1 = new PageObj(nullptr);
    TaskBar *taskbar = new TaskBar(nullptr);

    page1->init({128.0f, 0.0f}, {300.0f, 200.0f}, GRAY);
    taskbar->init({"directory", "file", "file", "file", "file", "file"});

    cursor.init();

    ObjectManager &objManager = ObjectManager::getIncetance();

    objManager.push(page1);
    objManager.push(taskbar);
  }

  Driver::~Driver()
  {
    delete loader;
  }
}