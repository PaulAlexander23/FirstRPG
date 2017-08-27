#include "button.h"

button::button(SDL_Renderer* passed_renderer, std::string font_file, std::string passed_text, int x, int y, int w, int h)
{
    renderer = passed_renderer;
    font = TTF_OpenFont(font_file.c_str(), 16);
    if(!font) {
        printf("TTF_OpenFont: %s\n", TTF_GetError());
        // handle error
    }
    rect.x = x;
    rect.y = y;
    rect.w = w;
    rect.h = h;
    
}

button::~button()
{
    SDL_DestroyTexture(textext);
    renderer = NULL;
}

bool button::InButton(SDL_Point* p)
{
    return SDL_PointInRect(p, &rect);
}

bool button::InButton(int x, int y)
{
    SDL_Point p;
    p.x = x;
    p.y = y;
    return InButton(&p);
}

void button::Draw()
{

}
