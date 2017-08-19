#include "stdafx.h"
#include "Landscape.h"


CLandscape::CLandscape(SDL_Renderer* passed_renderer, std::string FilePath, int w, int h)
{
	renderer = passed_renderer;

	image = NULL;
	image = IMG_LoadTexture(renderer, FilePath.c_str());
	if (image == NULL){
		std::cout << "Counld't Load " << FilePath.c_str() << std::endl;
	}
	rect.x = 0;
	rect.y = 0;
	rect.w = w;
	rect.h = h;
}


CLandscape::~CLandscape()
{
	SDL_DestroyTexture(image);
}


void CLandscape::Draw()
{
	SDL_RenderCopy(renderer, image,NULL,&rect);


}