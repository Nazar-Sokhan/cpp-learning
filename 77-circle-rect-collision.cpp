#include <iostream>
#include "raylib.h"

int main() {
	InitWindow(800, 600, "Game");
	SetTargetFPS(60);

	Vector2 ballPos = { 100.0f, 100.0f };
	float ballRadius = 25.0f;
	float speed = 300.0f;
	Rectangle obstacle = { 350, 250, 120, 120 };

	while (!WindowShouldClose()) {
		float dt = GetFrameTime();

		if (IsKeyDown(KEY_D)) { ballPos.x += speed * dt; }
		if (IsKeyDown(KEY_A)) { ballPos.x -= speed * dt; }
		if (IsKeyDown(KEY_W)) { ballPos.y -= speed * dt; }
		if (IsKeyDown(KEY_S)) { ballPos.y += speed * dt; }

		bool collision = CheckCollisionCircleRec(ballPos, ballRadius, obstacle);

		BeginDrawing();
		ClearBackground(BLACK);

		DrawRectangleRec(obstacle, GRAY);

		if (collision) {
			DrawCircleV(ballPos, ballRadius, RED);
			DrawText("COLLISION!", 320, 150, 30, RED);
		}
		else {
			DrawCircleV(ballPos, ballRadius, GREEN);
		}

		EndDrawing();
	}

	CloseWindow();
	return 0;
}
