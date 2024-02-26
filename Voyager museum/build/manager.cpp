#include "window.h"
#include "manager.h"

Texture2D charaStill;
Texture2D charaStillInv;
Texture2D menuScreen;
Texture2D museum;
Texture2D controlScreen;
Texture2D charaWalkR;
Texture2D charaWalkL;
Texture2D receptDesk;
Texture2D controlsmenu2;
Texture2D flagRoom;

void textureRenderer() // Renderer loads necessary textures
{

    charaStillInv = LoadTexture("resources/charaStillInv.png");
    charaStill = LoadTexture("resources/charaStill.png");
    menuScreen = LoadTexture("resources/menuScreen.png");
    museum = LoadTexture("resources/museum.png");
    controlScreen = LoadTexture("resources/controls.png");
    charaWalkR = LoadTexture("resources/charaWalkR.png");
    charaWalkL = LoadTexture("resources/charaWalkL.png");
    receptDesk = LoadTexture("resources/receptdesk.png");
    controlsmenu2 = LoadTexture("resources/controlsmenu2.png");
    flagRoom = LoadTexture("resources/flagRoom.png");
}
void ManageWindow() // Sets basic window parameters
{

    InitWindow(screenWidth, screenHeight, screenTitle);
    SetTargetFPS(60);
    ToggleFullscreen();
    textureRenderer();
}

void Update()
{

    BeginDrawing();

    SceneManager();

    EndDrawing();
}
