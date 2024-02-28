#include "manager.h"
#include "scenemanager.h"
#include "gamescreen.h"

extern bool closeKey;
static Button button;
extern Texture2D menuScreen;
extern Texture2D controlScreen;

void SceneManager()
{

	if (menu)
	{
		ClearBackground(BLACK);		// Sets menu background
		DrawTexture(menuScreen, 0, 0, WHITE);


		Button::GetInstance()->drawButton(button.menuButtons[0]);		// Draws menu buttons
		DrawText("Start", screenWidth / 2 - MeasureText("Start", 30) / 2, 488, 30, menuTextColor);

		Button::GetInstance()->drawButton(button.menuButtons[1]);
		DrawText("Controls", screenWidth / 2 - MeasureText("Controls", 30) / 2, 620, 30, menuTextColor);

		Button::GetInstance()->drawButton(button.menuButtons[2]);
		DrawText("Exit", screenWidth / 2 - MeasureText("Exit", 30) / 2, 753, 30, menuTextColor);

		if (Button::GetInstance()->isClicked(button.menuButtons[0]))	// Buttons toggle menu items/close window
		{

			menu = false;
			controls = false;
			start = true;

		}


		if (Button::GetInstance()->isClicked(button.menuButtons[1])) // Checks if they are clicked
		{

			menu = false;
			controls = true;

		}




		if (Button::GetInstance()->isClicked(button.menuButtons[2])) // Checks if they are clicked
		{

			closeKey = true;

		}

	}


	else if(controls)	// Adds back button
	{

		ClearBackground(BLACK);

		DrawTexture(controlScreen, 0, 0, WHITE); // Draws the controls window
		Button::GetInstance()->drawButton(button.controllsBackButton);

		DrawText("Back", 40 + MeasureText("Back", 30), 40 + menuButtonHeight / 2, 30, menuTextColor); // Draws the back button

		if (Button::GetInstance()->isClicked(button.controllsBackButton)) // Checks if the back button has been drawn
		{

			controls = false;
			menu = true;

		}

	}


	else if (start)		// Opens game scene
	{

		ClearBackground(BLACK);

		ManageGameScreen();

	}

	

}

