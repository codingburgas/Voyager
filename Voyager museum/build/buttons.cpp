
#include "buttons.h"

Button* Button::instance = nullptr;

void Button::drawButton(Rectangle rect)
{

	DrawRectangleRec(rect, ButtonColor); // Draws button rectangle

}

bool Button::isClicked(Rectangle rect) // Checks if button is clicked
{

	return IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(GetMousePosition(), rect);	// Detects button presses

}

