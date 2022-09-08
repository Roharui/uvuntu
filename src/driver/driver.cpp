
#include <raylib.h>

#include <iostream>
#include <string>

#define RAYGUI_IMPLEMENTATION
#include "raygui.h"

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
      Object *selected = objm.getSelected();
      Detactor *detactor = Detactor::detact();
      objs.reverse();

      // === execute side ===

      cursorHide();

      if (selected != nullptr)
        selected->execute(detactor);

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

      if (selected != nullptr)
        selected->show();

      GuiButton({0, 0, 100, 100}, "Hello World!");

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
    // SetConfigFlags(FLAG_WINDOW_UNDECORATED);
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_NAME);
    SetTargetFPS(WINDOW_FPS);

    this->loader = new ImgLoader;

    ImgLoader::loader = loader;

    PageObj *page1 = new PageObj(nullptr);
    PageObj *page2 = new PageObj(nullptr);
    TaskBar *taskbar = new TaskBar(nullptr);

    page1->init({128.0f, 0.0f}, {500.0f, 400.0f}, GRAY);
    page2->init({128.0f, 0.0f}, {500.0f, 400.0f}, YELLOW);
    taskbar->init({"directory", "file", "file", "file", "file", "file"});

    cursor.init();

    ObjectManager &objManager = ObjectManager::getIncetance();

    objManager.push(page1);
    objManager.push(page2);
    objManager.push(taskbar);
  }

  Driver::~Driver()
  {
    delete loader;
  }
}