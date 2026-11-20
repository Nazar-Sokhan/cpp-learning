#include <iostream>
#include "raylib.h"

int main() {
	InitWindow(800, 600, "My First Game");
	SetTargetFPS(60); // Для стабільної роботи ставимо 60 FPS

	float PlayerX = 400.0f;
	float PlayerY = 300.0f;
	float speed = 300.0f;

	while (!WindowShouldClose()) {
		float dt = GetFrameTime(); // Delta Time: час одного кадру

		// Рух множимо на dt для однакової швидкості на будь-якому FPS
		if (IsKeyDown(KEY_D)) { PlayerX += speed * dt; }
		if (IsKeyDown(KEY_A)) { PlayerX -= speed * dt; }
		if (IsKeyDown(KEY_W)) { PlayerY -= speed * dt; }
		if (IsKeyDown(KEY_S)) { PlayerY += speed * dt; }

		BeginDrawing();
		ClearBackground(BLACK);

		DrawFPS(10, 10);
		DrawCircle(PlayerX, PlayerY, 15, GREEN);

		EndDrawing();
	}

	CloseWindow();
	return 0;
}
