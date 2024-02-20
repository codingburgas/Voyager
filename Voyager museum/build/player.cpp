#include "player.h"
#include "manager.h"

Player player;

void Player::DrawPlayer()
{
	player.width = 40;
	player.height = 100;
	player.x = screenWidth - player.width - 10;
	player.y = screenHeight / 2 - player.height / 2;
	player.speed = 8;

	DrawRectangle(player.x, player.y, player.width, player.height, RED);

	
}

void Player::PlayerControls()
{
	if (IsKeyDown(KEY_UP))
	{
		y = y - speed;
	}

	if (IsKeyDown(KEY_DOWN))
	{
		y = y + speed;
	}
}