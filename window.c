#include "raylib.h"
#include <stdlib.h>

int main(void) {
	
	const int WinWIDTH=800;
	const int WinHEIGHT=600;

	InitWindow(WinWIDTH,WinHEIGHT, "Tetris");
	SetTargetFPS(120);
	
	Rectangle recA = {50, GetScreenHeight()/2.0f - 100, 200, 100 };
	int recASpeedX = 2;

	int screenUpperLimit = 40;
	bool pause = false;
//	bool collision = false;


	while (!WindowShouldClose()) 
	{
		if (!pause) recA.x += recASpeedX;
		if (((recA.x + recA.width) >= GetScreenWidth()) || (recA.x <= 0)) recASpeedX *= -1;
		if (IsKeyPressed(KEY_SPACE)) pause = !pause;


		BeginDrawing();
			ClearBackground(RAYWHITE);
			DrawRectangleRec(recA, GREEN);
			DrawFPS(5, 5);
		EndDrawing();
	}

	CloseWindow();

	return 0;
}
