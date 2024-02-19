#include "buttons.h"
#include "manager.h"

static Button button;

void ManageControlMenu() {

	ClearBackground(BLACK);

}

void backButton() 
{
	
	Button::GetInstance()->drawButton(button.controllsBackButton[0]);

	if (Button::GetInstance()->isClicked(button.controllsBackButton[0]))
	{



	}

}