#include "manager.h"
#include "window.h"

int ManageWindow() {

InitWindow(screenWitdth, screenHeight, "Space Museum");
SetTargetFPS(60);


while (WindowShouldClose() == false) {

	BeginDrawing();
	
	EndDrawing();

}

CloseWindow;
return 0;
}
