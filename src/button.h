#pragma once

#include "main.h"

class button
{
public:
	button(SDL_Renderer* passed_renderer, std::string font_file, std::string passed_text, int x, int y, int w, int h);
	~button();
	void Draw();
    bool InButton(SDL_Point* p);
	bool InButton(int x,int y);

private:
	SDL_Texture* textext;
	SDL_Renderer* renderer;
	SDL_Rect rect;
    TTF_Font* font;
	std::string text;
};
