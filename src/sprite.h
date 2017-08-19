#pragma once

#include "main.h"

class CSprite
{
public:
	CSprite(SDL_Renderer* passed_renderer, std::string FilePath, int x, int y, int w, int h);
	~CSprite();

	void Draw(int angle, int frame);

	void SetX(int X);
	void SetY(int Y);
	void SetPosition(int X, int Y);

	int GetX();
	int GetY();

private:
	SDL_Texture* image;
	SDL_Rect rect;
	SDL_Rect animeCrop[2];

	SDL_Renderer* renderer;

	SDL_Point centre[2];

};
