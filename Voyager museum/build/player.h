#pragma once
#include "raylib.h"
#include "window.h"

class Player
{
public:
	int width = playerWidth;
	int height = playerHeight;
	int x = screenWidth - width - 10;
	int y = screenHeight / 2 - height / 2;

	static Player* GetInstance()
	{
		if (instance == nullptr)
		{
			instance = new Player;
		}
		return instance;
	}

	void DrawPlayer();

	void PlayerControls();



private:
	static Player* instance;
};
