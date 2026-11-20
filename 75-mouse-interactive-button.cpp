#include <iostream>
#include "raylib.h"

int main() {
	InitWindow(800, 600, "Clicker Game");
	InitAudioDevice();
	Sound clickSound = LoadSound("click.wav");
	SetTargetFPS(60);

	Rectangle btn = { 300, 200, 200, 80 };
	int score = 0;

	while (!WindowShouldClose()) {
		Vector2 mouse = GetMousePosition();
		bool hover = CheckCollisionPointRec(mouse, btn);

		if (hover && IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
			score++;
			PlaySound(clickSound);
			std::cout << "Кліків: " << score << "\n";
		}

		BeginDrawing();
		ClearBackground(BLACK);

		if (hover) {
			DrawRectangleRec(btn, GREEN);
		}
		else {
			DrawRectangleRec(btn, DARKGRAY);
		}

		DrawText("CLICK ME", 330, 225, 25, WHITE);
		DrawText(TextFormat("Score: %i", score), 340, 140, 30, YELLOW);

		EndDrawing();
	}

	UnloadSound(clickSound);
	CloseAudioDevice();
	CloseWindow();
	return 0;
}
