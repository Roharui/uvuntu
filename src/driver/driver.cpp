
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

    list<Object *> objs = *this->objManager.getList();

    while (!WindowShouldClose())
    {
      // === detact, execute side ===

      cursorHide();

      Detactor *detactor = Detactor::detact();
      for (Object *obj : objs)
        obj->execute(detactor);
      cursor.execute(detactor);

      // ============================

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

    PageObj *page = new PageObj(nullptr);
    TaskBar *taskbar = new TaskBar(nullptr);

    page->init({128.0f, 0.0f}, {300.0f, 200.0f}, GRAY);
    taskbar->init({"directory", "file", "file", "file", "file", "file"});
    cursor.init();

    this->objManager.push(page);
    this->objManager.push(taskbar);
  }

  Driver::~Driver()
  {
    delete loader;
  }
}