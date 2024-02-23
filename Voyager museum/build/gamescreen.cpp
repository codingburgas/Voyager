#include "buttons.h"
#include "player.h"
#include "scenemanager.h"
#include "menuscreen.h"

static Player player;
static  SceneID sceneid;

void ManageGameScreen() {

	while (!WindowShouldClose()) {

		ClearBackground(BLACK);



		player.DrawPlayer();
		player.PlayerControls();

		backButton();
	}

}