
#include <raylib.h>

#include "raygui.h"

#include <iostream>
#include <string>

#include "config/config.hpp"
#include "driver.hpp"

#include "utils/hangle.hpp"

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

      this->cursorObj->execute(detactor);
      if (selected != nullptr)
        selected->execute(detactor);

      for (Object *obj : objs)
        obj->execute(detactor);

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

      this->cursorObj->show();

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
    GuiLoadStyleDefault();

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_NAME);
    SetTargetFPS(WINDOW_FPS);

    Font font = LoadFontEx("NanumGothicBold.ttf", 12, font_chars, 11172);
    GuiSetFont(font);
    GuiSetStyle(DEFAULT, TEXT_SIZE, 12);

    this->loader = new ImgLoader;
    ImgLoader::loader = loader;

    ObjectManager &objManager = ObjectManager::getIncetance();

    this->cursorObj = new CursorObj();
    cursorObj->init();

    IconObj *icon = new IconObj();
    icon->init({10.0, 10.0}, 5, ICON_FILE_SAVE);

    PageObj *page = new PageObj(nullptr);
    page->init({200.0, 100.0}, {500.0, 400.0}, "\xC5\xD7\xBD\xBA\xC6\xAE");

    objManager.push(icon);
    objManager.push(page);
  }

  Driver::~Driver()
  {
    delete this->loader;
  }
}