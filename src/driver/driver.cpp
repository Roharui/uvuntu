
#include <raylib.h>
#include <iostream>
#include <string>

#include "utils/utils.hpp"
#include "loader/imgLoader.hpp"

#include "detactor/detactor.hpp"

#include "object/object.hpp"
#include "object/cursor/cursor.hpp"

class Driver
{
public:
    int run(void);
    void init(void);
    ~Driver(void);
};

// loader

Loader *loader;

// objects

Cursor cursor;

int Driver::run(void)
{
    std::cout << "OK! Start!" << std::endl;

    while (!WindowShouldClose())
    {
        // === detact, execute side ===

        cursorHide();

        Detactor *detactor = Detactor::detact();
        cursor.execute(detactor);

        // ============================

        BeginDrawing();

        // === draw side ===

        ClearBackground(RAYWHITE);
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

    Loader *loader = new Loader;

    cursor.init(loader);
}

Driver::~Driver()
{
    delete loader;
}