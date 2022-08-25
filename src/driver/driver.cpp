
#include <raylib.h>
#include <iostream>
#include <string>

#include "utils/utils.hpp"
#include "loader/imgLoader.hpp"

#include "detactor/detactor.hpp"

#include "object/cursor/cursor.hpp"
#include "object/button/button.hpp"

#include "driver.hpp"

#define NULL_VEC   \
    {              \
        0.0f, 0.0f \
    }
#define NULL_COLOR \
    {              \
        0, 0, 0    \
    }

int Driver::run(void)
{
    std::cout << "OK! Start!" << std::endl;

    while (!WindowShouldClose())
    {
        // === detact, execute side ===

        cursorHide();

        Detactor *detactor = Detactor::detact();
        icon.execute(detactor);
        cursor.execute(detactor);

        // ============================

        BeginDrawing();

        // === draw side ===

        ClearBackground(WHITE);
        icon.run();
        cursor.run();

        // =================

        delete detactor;
        EndDrawing();
    }

    CloseWindow();

    return 0;
}

void Driver::init()
{
    InitWindow(800, 450, "Uvuntu");
    SetTargetFPS(60);

    loader = new Loader;

    icon.init(loader, NULL_VEC);
    cursor.init(loader);
}

Driver::~Driver()
{
    delete loader;
}