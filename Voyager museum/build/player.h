#pragma once
#include "window.h"

class Player
{
public:
	// Public variables representing initial position
	int width = playerWidth;
	int height = playerHeight;
	int x = screenWidth - width - 10;
	int y = screenHeight / 2 - height / 2;

	static Player* GetInstance()
	{
		// Check if the instance is not already created
		if (instance == nullptr)
		{
			instance = new Player;
		}
		return instance;
	}

	// Draw the player and handling player controls
	void DrawPlayer();
	void PlayerControls();


private:
	static Player* instance;
};
