#include "window.h"
#include "menuscreen.h"
#include "manager.h"
#include "scenemanager.h"

static SceneID sceneid;

void ManageWindow() 
{

    InitWindow(screenWidth, screenHeight, screenTitle);
    SetTargetFPS(60);

    //renderer - loadva texturite
 
}

void Update() 
{

    BeginDrawing();
    
    sceneid.SceneManager();

    EndDrawing();
}
