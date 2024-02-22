#include "buttons.h"
#include "manager.h"  
#include "controlsmenu.h"
#include "scenemanager.h"


static Button button;  
static  SceneID sceneid;

void  startButton()
{

	Button::GetInstance()->drawButton(button.menuButtons[0]);
	DrawText("Start", screenWidth / 2 - MeasureText("Start", 30) / 2, 310, 30, menuTextColor);

	if (Button::GetInstance()->isClicked(button.menuButtons[0]))
	{


	}

}

void controlsButton()
{

	Button::GetInstance()->drawButton(button.menuButtons[1]);
	DrawText("Controls", screenWidth / 2 - MeasureText("Controls", 30) / 2, 445, 30, menuTextColor);

	if (Button::GetInstance()->isClicked(button.menuButtons[1]))
	{
		
		sceneid.changeId + 1;

	}

}

void exitButton()  
{     
	Button::GetInstance()->drawButton(button.menuButtons[2]);    
	DrawText("Exit", screenWidth / 2 - MeasureText("Exit", 30) / 2, 575, 30, menuTextColor);

	if (Button::GetInstance()->isClicked(button.menuButtons[2]))
	{      

		CloseWindow();
	} 

}

void backButton()
{

	Button::GetInstance()->drawButton(button.controllsBackButton);
	DrawText("Back", 0, screenHeight, 30, menuTextColor);

	if (Button::GetInstance()->isClicked(button.controllsBackButton))
	{

		sceneid.changeId = 0;

	}

}