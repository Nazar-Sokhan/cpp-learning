#include <iostream>
#include "raylib.h"

int main() {
	InitWindow(800, 600, "Game");
	SetTargetFPS(60);

	Rectangle Player = { 100, 100, 50, 50 };
	Rectangle obstacle = { 350, 250, 120, 120 };
	float speed = 300.0f;

	while (!WindowShouldClose()) {
		float dt = GetFrameTime();

		if (IsKeyDown(KEY_D)) { Player.x += speed * dt; }
		if (IsKeyDown(KEY_A)) { Player.x -= speed * dt; }
		if (IsKeyDown(KEY_W)) { Player.y -= speed * dt; }
		if (IsKeyDown(KEY_S)) { Player.y += speed * dt; }

		bool collision = CheckCollisionRecs(Player, obstacle);

		BeginDrawing();
		ClearBackground(WHITE);

		DrawRectangleRec(obstacle, GRAY);

		if (collision) {
			DrawRectangleRec(Player, RED);
			DrawText("COLLISION!", 320, 150, 30, RED);
		}
		else {
			DrawRectangleRec(Player, GREEN);
		}

		EndDrawing();
	}

	CloseWindow();
	return 0;
}
