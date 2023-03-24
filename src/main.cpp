#include <raylib-cpp.hpp>

int main() {
	raylib::Window window(860, 560, "Raylib Template");

	SetTargetFPS(60);

	while (!window.ShouldClose())
	{
		BeginDrawing();

		window.ClearBackground(RAYWHITE);



		EndDrawing();
	}

	return 0;
}