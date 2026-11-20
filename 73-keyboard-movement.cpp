#include <iostream>
#include "raylib.h"

int main() {
	InitWindow(800, 600, "My First Game");
	SetTargetFPS(60);

	int PlayerX = 400;
	int PlayerY = 300;
	int speed = 5;

	while (!WindowShouldClose()) {

		if (IsKeyDown(KEY_D)) { PlayerX += speed; }
		if (IsKeyDown(KEY_A)) { PlayerX -= speed; }
		if (IsKeyDown(KEY_W)) { PlayerY -= speed; }
		if (IsKeyDown(KEY_S)) { PlayerY += speed; }

		BeginDrawing();
		ClearBackground(BLACK);

		DrawCircle(PlayerX, PlayerY, 10, GREEN);

		EndDrawing();
	}

	CloseWindow();
	return 0;
}
