#pragma once
class Cbutton
{
public:
	Cbutton(SDL_Renderer* passed_renderer, int x, int y, std::string passed_text);
	~Cbutton();
	void draw();
	bool inButton(int x,int y);

private:
	SDL_Texture* image;
	SDL_Renderer* renderer;
	SDL_Rect rect;
	std::string text;
};

