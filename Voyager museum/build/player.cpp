#include "player.h"
#include "manager.h"

Player player;
Rectangle character = { playerWidth, playerHeight, 50, 50 };

void Player::DrawPlayer()
{
	int width = playerWidth;
	int height = playerHeight;
	int x = screenWidth - width - 10;
	int y = screenHeight / 2 - height / 2;

	DrawRectangle(character.x, character.y, character.width, character.height, RED);

	


}

void Player::PlayerControls()
{
	if (IsKeyDown(KEY_LEFT))
	{
		character.x = character.x - 10;
	}

	else if (IsKeyDown(KEY_RIGHT))
	{
		character.x = character.x + 10;
	}
}