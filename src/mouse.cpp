#include "mouse.h"

CMouse::CMouse()
{
	
}

CMouse::~CMouse()
{

}

void CMouse::BtnDown(bool btn)
{
	
}

void CMouse::BtnUp(bool btn)
{
	
}

void CMouse::GetMousePosition(SDL_Point& point)
{
	int* x = NULL;
	int* y = NULL;
	SDL_GetMouseState(x,y);
	point.x = *x;
	point.y = *y;
}
