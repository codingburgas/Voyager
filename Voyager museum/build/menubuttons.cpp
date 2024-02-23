#include "buttons.h"
#include "manager.h"  
#include "controlsmenu.h"


static Button button;  

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
		ManageControlMenu();

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