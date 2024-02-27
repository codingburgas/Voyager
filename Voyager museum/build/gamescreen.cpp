#include "buttons.h"
#include "player.h"
#include "manager.h"
#include "gamescreenmanager.h"
#include "window.h"


static Player player;
extern Texture2D museum;
extern Texture2D receptDesk;
extern Texture2D flagRoom;
extern Texture2D sputnikRoom;
extern Vector2 playerPosition;
extern Texture2D astronautRoom;
extern float x;

void ManageGameScreen()
{


	if (scene1)
	{

		ClearBackground(BLACK);
		DrawTexture(museum, 0, 0, WHITE); // Loads game background

		player.DrawPlayer();	// Adds player and enables player controls
		player.PlayerControls();

		DrawTexture(receptDesk, 1101, 697, WHITE);

		if (player.x == doorX)
		{

			scene1 = false;
			scene2 = true;
			playerPosition.x = 100;

		}


	}

	else if (scene2)
	{
		ClearBackground(BLACK);
		DrawTexture(flagRoom, 0, 0, WHITE);
		player.DrawPlayer();    // Adds player and enables player controls
		player.PlayerControls();

		if (player.x == 50)
		{
			scene1 = true;
			scene2 = false;
			playerPosition.x = screenWidth - 100;
		}
		else if (player.x == doorX)
		{
			scene3 = true;
			scene2 = false;
			playerPosition.x = 100;
		}
	}

	else if (scene3)
	{

		ClearBackground(BLACK);
		DrawTexture(sputnikRoom, 0, 0, WHITE);
		player.DrawPlayer();
		player.PlayerControls();
		if (player.x == 50)
		{
			scene2 = true;
			scene3 = false;
			playerPosition.x = screenWidth - 100;
		}
		else if (player.x == doorX)
		{
			scene3 = false;
			scene4 = true;
			playerPosition.x = 100;
		}


	}
	else if (scene4)
	{
		ClearBackground(BLACK);
		DrawTexture(astronautRoom, 0, 0, WHITE);
		player.DrawPlayer();
		player.PlayerControls();
		if (player.x == 50)
		{
		scene3 = true;
		scene4 = false;
		playerPosition.x = screenWidth - 100;
		}
	}
}