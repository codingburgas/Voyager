#include "buttons.h"
#include "manager.h"  

Button button;  

void  startButton()
{

	Button::GetInstance()->drawButton(button.menuButtons[0]);

	if (Button::GetInstance()->isClicked(button.menuButtons[0]) == true)
	{


	}

}

void controlsButton()
{

	Button::GetInstance()->drawButton(button.menuButtons[1]);

	if (Button::GetInstance()->isClicked(button.menuButtons[1]) == true)
	{



	}

}

void exitButton()  
{     
	Button::GetInstance()->drawButton(button.menuButtons[2]);    

	if (Button::GetInstance()->isClicked(button.menuButtons[2])==true)
	{      



	} 

}