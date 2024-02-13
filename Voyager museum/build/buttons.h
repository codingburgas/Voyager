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

		bool isClicked(Rectangle rect);

	private:
		static Button* instance;
};

