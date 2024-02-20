#include "buttons.h"
#include "manager.h"


static Button button;

void ManageControlMenu()
{
	ClearBackground(BLACK);
	while (!WindowShouldClose()) {

		Button::GetInstance()->drawButton(button.controllsBackButton);
		DrawText("Back", 0, screenHeight, 30, menuTextColor);


	}

}
