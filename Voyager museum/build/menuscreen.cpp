#include "menuscreen.h"
#include "window.h"
#include "buttons.h"

Button button;

void ManageMenuScreen()
 {

        ClearBackground(BLACK);
        DrawText("Voyager", screenWidth / 2 - MeasureText("Voyager", 40) / 2, screenHeight / 5 - 40, 40, WHITE);

        Button::GetInstance()->drawButton(button.menuButtons[0]);

 }

