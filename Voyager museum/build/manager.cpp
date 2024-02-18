#include "window.h"
#include "menuscreen.h"

int ManageWindow() 
{

    InitWindow(screenWidth, screenHeight, screenTitle);
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {

        BeginDrawing();

        ManageMenuScreen();


        EndDrawing();

    }
    
    CloseWindow();
    return 0;
}
