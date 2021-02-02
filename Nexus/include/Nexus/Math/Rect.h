#pragma once

#include <SDL.h>

#include <Nexus/Math/Vec2.h>

namespace Nexus {

	struct Rect : SDL_Rect {
		Rect() {}
		Rect(int wh, int xy, bool fill = true);
		Rect(Vec2 wh, Vec2 xy, bool fill = true);
		Rect(int w, int h, int x, int y, bool fill = true);

		Vec2 GetCenter();

		int Left();
		int Right();
		int Top();
		int Bottom();

		bool fill = true;
	};

	struct FRect : SDL_FRect {
		FRect() {}
		FRect(float wh, float xy, bool fill = true);
		FRect(Vec2 wh, Vec2 xy, bool fill = true);
		FRect(float w, float h, float x, float y, bool fill = true);

		Vec2 GetCenter();

		float Left();
		float Right();
		float Top();
		float Bottom();

		bool fill = true;
	};

}
