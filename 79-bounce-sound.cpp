#include <iostream>
#include "raylib.h"

int main() {
	InitWindow(800, 600, "Game");
	InitAudioDevice();
	Sound HitSound = LoadSound("click.wav");
	SetTargetFPS(60);

	Vector2 ballPos = { 400.0f, 300.0f };
	float ballRadius = 20.0f;
	float speedX = 300.0f;
	float speedY = 300.0f;

	while (!WindowShouldClose()) {
		float dt = GetFrameTime();

		ballPos.x += speedX * dt;
		ballPos.y += speedY * dt;

		if (ballPos.x + ballRadius >= 800 || ballPos.x - ballRadius <= 0) {
			speedX *= -1.0f;
			PlaySound(HitSound);
		}
		if (ballPos.y + ballRadius >= 600 || ballPos.y - ballRadius <= 0) {
			speedY *= -1.0f;
			PlaySound(HitSound);
		}

		BeginDrawing();
		ClearBackground(BLACK);

		DrawCircleV(ballPos, ballRadius, YELLOW);

		EndDrawing();
	}

	CloseWindow();
	UnloadSound(HitSound);
	CloseAudioDevice();
	return 0;
}
