#include "gamescreenmanager.h"

// Initialize variables
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

		DrawTexture(receptDesk, 1101, 697, WHITE); // Draws the desk in scene 1

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

		// Checks if player has reached the coordinates
		if (player.x == 50)
		{
			scene1 = true;
			scene2 = false;
			playerPosition.x = screenWidth - 100;
		}
		// Checks if player has reached the coordinates
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
		player.DrawPlayer(); // Draws the character
		player.PlayerControls(); // Adds the player controls
		// Checks if player has reached the end in scene 3
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
		player.DrawPlayer(); // Draws the character in scene 4
		player.PlayerControls(); // Adds the player controls

		// Checks if the player has reached the end of the screen
		if (player.x == 50)
		{
		scene3 = true;
		scene4 = false;
		playerPosition.x = screenWidth - 100;
		}
	}
}