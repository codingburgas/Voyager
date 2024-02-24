#include "buttons.h"
#include "player.h"

static Player player;

void ManageGameScreen() {

	

		ClearBackground(BLACK);

		player.DrawPlayer();
		player.PlayerControls();


}