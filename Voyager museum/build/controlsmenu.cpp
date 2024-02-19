#include "buttons.h"
#include "manager.h"


static Button button;

void ManageControlMenu() 
{
	
	while (!WindowShouldClose()) {

		ClearBackground(BLACK);
		BeginDrawing();

		Button::GetInstance()->drawButton(button.controllsBackButton[0]);

		EndDrawing();

	}

		


	

}
