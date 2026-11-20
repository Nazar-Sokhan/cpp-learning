#include <iostream>
#include "raylib.h"

int main() {
	InitWindow(800, 600, "My First Game");
	SetTargetFPS(60);

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(BLACK);

		DrawText("Hello RayLib", 300, 280, 30, WHITE);
		DrawRectangle(300, 315, 180, 75, RED);
		DrawCircle(600, 350, 40, BLUE);
		DrawLine(100, 480, 700, 480, YELLOW);

		EndDrawing();
	}

	CloseWindow();
	return 0;
}
