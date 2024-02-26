#include "manager.h"
#include "buttons.h"

Button* Button::instance = nullptr;

void Button::drawButton(Rectangle rect)
{

	DrawRectangleRec(rect, ButtonColor);	// Draws button rectangle

}

bool Button::isClicked(Rectangle rect)
{

	return IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(GetMousePosition(), rect);	// Detects button presses

}

