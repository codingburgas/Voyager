#include "window.h"
#include "manager.h"



void ManageWindow()
{

    InitWindow(screenWidth, screenHeight, screenTitle);
    SetTargetFPS(60);

    //renderer - loadva texturite

}

void Update()
{

    BeginDrawing();

    SceneManager();

    EndDrawing();
}
