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

	DrawCircle(player.x, player.y, 21, RED);


}

void Player::PlayerControls()
{
	if (IsKeyDown(KEY_LEFT))
	{
		player.x = player.x - player.speed;
	}

	if (IsKeyDown(KEY_RIGHT))
	{
		player.x = player.x + player.speed;
	}
}