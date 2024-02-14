#include "manager.h"
#include "buttons.h"

Button* Button::instance = nullptr;

void Button::drawButton(Rectangle rect)
{

	DrawRectangleRec(rect, menuButtonColor);

}

//bool Button::isClicked(Rectangle rect)

