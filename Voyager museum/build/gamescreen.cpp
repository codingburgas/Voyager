#include "buttons.h"
#include "player.h"
#include "manager.h"

static Player player;
extern Texture2D museum;
extern Texture2D receptDesk;
extern float x;

void ManageGameScreen() 
{

		ClearBackground(BLACK);
		DrawTexture(museum, 0, 0, WHITE); // Loads game background

		player.DrawPlayer();	// Adds player and enables player controls
		player.PlayerControls();

		DrawTexture(receptDesk, 1101, 697, WHITE);

}