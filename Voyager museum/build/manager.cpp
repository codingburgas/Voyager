#include "window.h"
#include "manager.h"

void textureRenderer()
{
    LoadTexture("resources/charaStill.png");
    LoadTexture("resources/charaWalkR1.png");
    LoadTexture("resources/charaWalkR2.png");
    LoadTexture("resources/menuScreen.png");
    LoadTexture("resources/museumlobby.png");
    LoadTexture("resources/exhibitSec1.png");
    LoadTexture("resources/exhibitSec2.png");
    LoadTexture("resources/rocketRoom.png");
}

void ManageWindow()
{

    InitWindow(screenWidth, screenHeight, screenTitle);
    SetTargetFPS(60);

    textureRenderer();

}

void Update()
{

    BeginDrawing();

    SceneManager();

    EndDrawing();
}
