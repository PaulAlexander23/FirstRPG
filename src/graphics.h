#pragma once

#include "main.h"

class graphics
{
public:
	graphics(bool* quit, int ScreenWidth, int ScreenHeight);
	~graphics();

	SDL_Renderer* GetRenderer();
	SDL_Event* GetMainEvent();

	void Begin();
	void End();
private:
	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_Event* mainEvent;

};
