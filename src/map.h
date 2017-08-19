#pragma once

#include "main.h"

class CLandscape
{
public:
	CLandscape(SDL_Renderer* passed_renderer, std::string FilePath, int w, int h);
	~CLandscape();

	void Draw();

private:
	SDL_Texture* image;
	SDL_Rect rect;

	SDL_Renderer* renderer;


};
