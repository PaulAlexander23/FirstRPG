#include "main.h"
#include "mouse.h"

mouse::mouse()
{
	
}

mouse::~mouse()
{

}

void mouse::BtnDown(bool btn)
{
	
}

void mouse::BtnUp(bool btn)
{
	
}

void mouse::GetMousePosition(SDL_Point& point)
{
	int* x = NULL;
	int* y = NULL;
	SDL_GetMouseState(x,y);
	point.x = *x;
	point.y = *y;
}
