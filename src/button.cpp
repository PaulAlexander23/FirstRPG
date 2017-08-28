#include "button.h"

button::button(SDL_Renderer* passed_renderer, std::string passed_text, int x, int y, int w, int h)//, SDL_Color fg,  std::string font_file)
{
    renderer = passed_renderer;
    std::string font_file = "/usr/share/fonts/truetype/ubuntu-font-family/Ubuntu-R.ttf";
    font = TTF_OpenFont(font_file.c_str(), 24);
    if(!font) {
        printf("TTF_OpenFont: %s\n", TTF_GetError());
        // handle error
    }
    rect.x = x;
    rect.y = y;
    rect.w = w;
    rect.h = h;
    SDL_Color fg;
    fg.r = 0;
    fg.g = 0;
    fg.b = 0;
    fg.a = 0;

    SDL_Surface* temp_surface = TTF_RenderText_Solid(font, passed_text.c_str(), fg);
    clip_rect = temp_surface->clip_rect;
    clip_rect.x = rect.x + rect.w/2 - clip_rect.w/2;
    clip_rect.y = rect.y + rect.h/2 - clip_rect.h/2;
    textext = SDL_CreateTextureFromSurface(renderer, temp_surface);
}

button::~button()
{
    SDL_DestroyTexture(textext);
    renderer = NULL;
}

bool button::InButton(SDL_Point p)
{
    return SDL_PointInRect(&p, &rect);
}

bool button::InButton(int x, int y)
{
    SDL_Point p;
    p.x = x;
    p.y = y;
    return InButton(p);
}

void button::Draw()
{
    SDL_SetRenderDrawColor(renderer,255,255,255,255);
    SDL_RenderFillRect(renderer,&rect);    
    SDL_RenderCopy(renderer, textext, NULL, &clip_rect);
}
