#include "manager.h"
#include "closer.h"

int main()
{
	ManageWindow();
	while (!WindowShouldClose() && closeKey == false) 
	{

		Update();

	}
	CloseWindow();

	return 0;
}