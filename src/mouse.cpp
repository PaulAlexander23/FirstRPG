#include "main.h"
#include "mouse.h"

mouse::mouse()
{

}

mouse::~mouse()
{

}

bool mouse::GetState(int button)
{
  	if (SDL_GetMouseState(NULL, NULL) & SDL_BUTTON(button))
    {
        return true;
    }
    else
    {
        return false;
    }
}

SDL_Point mouse::GetPosition()
{
    SDL_GetMouseState(&position.x, &position.y);
    return position;
}
