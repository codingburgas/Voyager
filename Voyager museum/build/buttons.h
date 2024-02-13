#pragma once
#include "raylib.h"
#include "window.h"
void initStart() {
	Rectangle startButton = { screenWidth / 2 - 100, screenHeight / 2 + 20, 200, 50 };
	DrawRectangleRec(startButton, LIGHTGRAY);
	DrawRectangleLines(startButton.x, startButton.y, startButton.width, startButton.height, DARKGRAY);
	DrawText("Start", startButton.x + 55, startButton.y + 10, 30, DARKGRAY);
}