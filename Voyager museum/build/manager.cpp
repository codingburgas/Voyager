#include "window.h"
#include "manager.h"

Texture2D controlScreen;
Texture2D charaStill;
Texture2D charaWalkR1;
Texture2D charaWalkR2;
Texture2D menuScreen;
Texture2D museumlobby;
Texture2D exhibitSec1;
Texture2D exhibitSec2;
Texture2D rocketRoom;

void textureRenderer() 

{

    charaStill = LoadTexture("resources/charaStill.png");
    charaWalkR1 = LoadTexture("resources/charaWalkR1.png");
    charaWalkR2 = LoadTexture("resources/charaWalkR2.png");
    menuScreen = LoadTexture("resources/menuScreen.png");
    museumlobby = LoadTexture("resources/museumlobby.png");
    exhibitSec1 = LoadTexture("resources/exhibitSec1.png");
    exhibitSec2 = LoadTexture("resources/exhibitSec2.png");
    rocketRoom = LoadTexture("resources/rocketRoom.png");
    controlScreen = LoadTexture("resources/controls.png");

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
