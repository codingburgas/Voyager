#pragma once
#include "raylib.h"
#include "window.h"

class Player
{
public:

	float x, y;
	float width, height;
	int speed;

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
