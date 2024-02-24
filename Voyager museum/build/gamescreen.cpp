#include "buttons.h"
#include "player.h"

static Player player;

void ManageGameScreen() {

	while (!WindowShouldClose()) {

		ClearBackground(BLACK);



		player.DrawPlayer();
		player.PlayerControls();

	}

}