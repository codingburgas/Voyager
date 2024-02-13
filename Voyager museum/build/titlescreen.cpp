#include "titlescreen.h"
#include "window.h"
#include "buttons.h"
int ManageTitleScreen() {
    while (!WindowShouldClose()) {
        BeginDrawing();
        initStart();
        ClearBackground(PINK);
        DrawText("Voyager", screenWidth / 2 - MeasureText("Voyager", 40) / 2, screenHeight / 2 - 40, 40, DARKGRAY);
        EndDrawing();
        if (IsKeyPressed(KEY_ENTER)) {
            return 0;
        }
    }
    return 0;
}
