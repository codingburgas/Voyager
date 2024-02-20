#include "buttons.h"
#include "player.h"

static Player player;

void ManageGameScreen() {

	while (!WindowShouldClose()) {

		ClearBackground(BLACK);
		BeginDrawing();


		player.DrawPlayer();
		player.PlayerControls();
		EndDrawing();

	}

}