#include "map.h"

map::map(SDL_Renderer* passed_renderer, std::string FilePath, int w, int h)
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


map::~map()
{
	SDL_DestroyTexture(image);
}


void map::Draw()
{
	SDL_RenderCopy(renderer, image,NULL,&rect);


}
