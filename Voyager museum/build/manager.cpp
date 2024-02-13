#include "manager.h"
#include "window.h"
#include "titlescreen.h"

int ManageWindow() {

    InitWindow(screenWidth, screenHeight, "Space Museum");
    SetTargetFPS(144);

    if (ManageTitleScreen() == 0) {
        CloseWindow();
        return 0;
    }

    while (!WindowShouldClose()) {

        BeginDrawing();

        EndDrawing();

    }
    
    CloseWindow();
    return 0;
}
