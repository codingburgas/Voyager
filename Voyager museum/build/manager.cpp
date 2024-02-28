#include "window.h"
#include "manager.h"

// Initialize variables for texture
Texture2D charaStill;
Texture2D charaStillInv;
Texture2D menuScreen;
Texture2D museum;
Texture2D controlScreen;
Texture2D charaWalkR;
Texture2D charaWalkL;
Texture2D receptDesk;
Texture2D flagRoom;
Texture2D sputnikRoom;
Texture2D astronautRoom;

void textureRenderer() // Renderer loads necessary textures
{
    astronautRoom = LoadTexture("resources/astronautRoom.png");
    sputnikRoom = LoadTexture("resources/sputnikRoom.png");
    charaStillInv = LoadTexture("resources/charaStillInv.png");
    charaStill = LoadTexture("resources/charaStill.png");
    menuScreen = LoadTexture("resources/menuScreen.png");
    museum = LoadTexture("resources/museumLobby.png");
    controlScreen = LoadTexture("resources/controlsMenu.png");
    charaWalkR = LoadTexture("resources/charaWalkR.png");
    charaWalkL = LoadTexture("resources/charaWalkL.png");
    receptDesk = LoadTexture("resources/receptdesk.png");
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
