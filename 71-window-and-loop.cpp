#include <iostream>
#include "raylib.h"

int main() {
	InitWindow(800, 600, "My First Game");
	SetTargetFPS(60);

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(BLACK);

		DrawText("Hello RayLib", 300, 280, 30, WHITE);

		EndDrawing();
	}

	CloseWindow();
	return 0;
}
