#include "manager.h"
#include "scenemanager.h"
#include "gamescreen.h"

static Button button;

void SceneManager()
{

	if (menu)
	{

		ClearBackground(BLACK);
		DrawText("Voyager", screenWidth / 2 - MeasureText("Voyager", 40) / 2, screenHeight / 5 - 40, 40, WHITE);


		Button::GetInstance()->drawButton(button.menuButtons[0]);
		DrawText("Start", screenWidth / 2 - MeasureText("Start", 30) / 2, 310, 30, menuTextColor);

		Button::GetInstance()->drawButton(button.menuButtons[1]);
		DrawText("Controls", screenWidth / 2 - MeasureText("Controls", 30) / 2, 445, 30, menuTextColor);

		Button::GetInstance()->drawButton(button.menuButtons[2]);
		DrawText("Exit", screenWidth / 2 - MeasureText("Exit", 30) / 2, 575, 30, menuTextColor);

		if (Button::GetInstance()->isClicked(button.menuButtons[0]))
		{

			menu = false;
			controls = false;
			start = true;

		}


		if (Button::GetInstance()->isClicked(button.menuButtons[1]))
		{

			menu = false;
			controls = true;

		}




		if (Button::GetInstance()->isClicked(button.menuButtons[2]))
		{

			CloseWindow();

		}

	}


	else if (controls)
	{

		ClearBackground(BLACK);

		Button::GetInstance()->drawButton(button.controllsBackButton);

		DrawText("Back", 40 + MeasureText("Back", 30), 40 + menuButtonHeight / 2, 30, menuTextColor);

		if (Button::GetInstance()->isClicked(button.controllsBackButton))
		{

			controls = false;
			menu = true;

		}

	}


	else if (start)
	{
		ClearBackground(BLACK);

		ManageGameScreen();

	}

}

