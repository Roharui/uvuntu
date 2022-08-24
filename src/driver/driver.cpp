
#include <raylib.h>
#include <iostream>
#include <string>

#include "utils/utils.hpp"
#include "loader/imgLoader.hpp"

class Driver
{
private:
    Texture2D cursor;

public:
    int run(void);
    void init(void);
};

int Driver::run(void)
{
    std::cout << "OK! Start!" << std::endl;

    while (!WindowShouldClose())
    {
        // === detact, execute side ===

        cursorHide();

        Vector2 v = GetMousePosition();

        // ============================

        BeginDrawing();

        // === draw side ===

        ClearBackground(RAYWHITE);
        DrawTexture(this->cursor, int(v.x), int(v.y), WHITE);

        // =================

        EndDrawing();
    }

    CloseWindow();

    return 0;
}

void Driver::init()
{
    InitWindow(800, 450, "Uvuntu");
    SetTargetFPS(60);

    Loader loader;

    this->cursor = loader.getTexture("cursor");
}