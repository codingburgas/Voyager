#include "player.h"
#include "raylib.h"

float x, y;
bool leftStare = false;
int frame = 0;
float timer = 0.0f;
float charaGuideLine = 0;

Player player;
extern Texture2D charaWalkR;
extern Texture2D charaWalkL;
extern Texture2D charaStill;
extern Texture2D charaStillInv;
extern bool scene1;
extern bool scene2;
extern bool scene3;

Vector2 playerPosition = { 200.0f, 700.0f };

void Player::DrawPlayer()
{
    int width = playerWidth;
    int height = playerHeight;
    x = playerPosition.x;
    y = playerPosition.y;
}

void Player::PlayerControls()
{
    if (scene1) {
        charaGuideLine = 200;
    }
    else if (scene2) {
        charaGuideLine = 0;
    }

    Rectangle frameRect;

    if ((IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A)) && x >= charaGuideLine)    // Restricts player from noclipping out of the screen
    {
        timer += GetFrameTime();
        playerPosition.x -= 10;
        if (timer >= 0.15f)     // Sets time spent on each frame
        {
            frame = (frame + 1) % 4;
            timer = 0.0f;
        }
        frameRect = { (frame % 4) * 168.0f, 0.0f, 168.0f, 300.0f };  // Toggles between sections of the spritesheet
        DrawTextureRec(charaWalkL, frameRect, playerPosition, WHITE);
        leftStare = true;   // Used to determine character idle stance based on previous movement
    }
    else if ((IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D)))
    {
        timer += GetFrameTime();
        playerPosition.x += 10;
        if (timer >= 0.15f)
        {
            frame = (frame + 1) % 4;
            timer = 0.0f;
        }
        frameRect = { (frame % 4) * 168.0f, 0.0f, 168.0f, 300.0f };
        DrawTextureRec(charaWalkR, frameRect, playerPosition, WHITE);
        leftStare = false;
    }
    else
    {

        if (leftStare)
        {
            DrawTexture(charaStillInv, x, y, WHITE);
        }
        else
        {
            DrawTexture(charaStill, x, y, WHITE);
        }
    }
}