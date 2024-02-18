#include "manager.h"
#include "buttons.h"

Button* Button::instance = nullptr;

void Button::drawButton(Rectangle rect)
{

	DrawRectangleRec(rect, menuButtonColor);

	DrawText("Start", screenWidth / 2 - MeasureText("Voyager", 20) / 2, 310, 30, menuTextColor);
	DrawText("Controls", screenWidth / 2 - MeasureText("Voyager", 30) / 2, 445, 30, menuTextColor);
	DrawText("Exit", screenWidth / 2 - MeasureText("Voyager", 16) / 2, 575, 30, menuTextColor);
}

bool Button::isClicked(Rectangle rect)
{

	return IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && CheckCollisionPointRec(GetMousePosition(), rect);

}

