#include "raylib.h"

int main(void) {
	
	const int WIDTH=800;
	const int HEIGHT=450;

	InitWindow(WIDTH,HEIGHT, "raylib - basic window");

	while (!WindowShouldClose()) 
	{
		BeginDrawing();
			ClearBackground(RAYWHITE);
			DrawRectangle( 200, 200, 200, 100, PURPLE);
		EndDrawing();
	}

	CloseWindow();

	return 0;
}
