#include "manager.h"

int main()
{

	ManageWindow();
	while (!WindowShouldClose()) {

		Update();

	}
	CloseWindow();

	return 0;
}