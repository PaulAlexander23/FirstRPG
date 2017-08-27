#pragma once

#include "main.h"

class background
{
public:
	background(SDL_Renderer* passed_renderer, std::string FilePath, int w, int h);
	~background();

	void Draw();

private:
	SDL_Texture* image;
	SDL_Rect rect;

	SDL_Renderer* renderer;


};
