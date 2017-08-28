#pragma once

#include "main.h"

class button
{
public:
    button(SDL_Renderer* passed_renderer, std::string passed_text, int x, int y, int w, int h);//, SDL_Color fg,  std::string font_file)
	~button();
	void Draw();
    bool InButton(SDL_Point p);
    bool InButton(int x, int y);

private:
	SDL_Texture* textext;
	SDL_Renderer* renderer;
	SDL_Rect rect;
	SDL_Rect clip_rect;
    TTF_Font* font;
	std::string text;
};
