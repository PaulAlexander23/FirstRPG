#include "stdafx.h"
#include "Sprite.h"


CSprite::CSprite(SDL_Renderer* passed_renderer, std::string FilePath, int x, int y, int w, int h)
{
	renderer = passed_renderer;

	image = NULL;
	image = IMG_LoadTexture(renderer, FilePath.c_str());
	if (image == NULL){
		std::cout << "Counld't Load " << FilePath.c_str() << std::endl;
	}
	rect.x = x;
	rect.y = y;
	rect.w = (w - 1) / 2;
	rect.h = h;

	centre[0].x = (w - 1) / 4;
	centre[0].y = h / 2;

	centre[1].x = (w - 1) / 4;
	centre[1].y = h / 2;

	animeCrop[0].x = 0;
	animeCrop[0].y = 0;
	animeCrop[0].w = (w - 1) / 2;
	animeCrop[0].h = h;

	animeCrop[1].x = (w - 1) / 2 + 1;
	animeCrop[1].y = 0;
	animeCrop[1].w = (w - 1) / 2;
	animeCrop[1].h = h;

}


CSprite::~CSprite()
{
	SDL_DestroyTexture(image);
}

void CSprite::Draw(int angle, int frame)
{
	SDL_RenderCopyEx(renderer, image, &animeCrop[frame], &rect, angle, &centre[frame], SDL_FLIP_NONE);

}

void CSprite::SetX(int X)
{
	rect.x = X;
}

void CSprite::SetY(int Y)
{
	rect.y = Y;
}

void CSprite::SetPosition(int X,int Y)
{
	rect.x = X;
	rect.y = Y;
}

int CSprite::GetX()
{
	return rect.x;
}

int CSprite::GetY()
{
	return rect.y;
}