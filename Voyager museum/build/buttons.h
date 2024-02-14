#pragma once
#include "raylib.h"
#include "window.h"

class Button
{
	public:
		static Button* GetInstance() 
		{
			if(instance == nullptr) 
			{
				instance = new Button;
			}
			return instance;
		}

		void drawButton(Rectangle rect);

		//bool isClicked(Rectangle rect);	

		Rectangle menuButtons[3] = {
			{screenWidth/2-menuButtonLength/2, screenHeight/4, menuButtonLength, menuButtonHeight},
			{screenWidth/2, screenHeight/4, 380, 180},
			{screenWidth/2, screenHeight/4, 380, 180}

		};
		

	private:
		static Button* instance;
};