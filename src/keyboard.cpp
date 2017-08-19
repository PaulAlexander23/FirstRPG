#include "main.h"
#include "keyboard.h"

keyboard::keyboard()
{
	state = SDL_GetKeyboardState(NULL);
}


keyboard::~keyboard()
{

}

bool keyboard::GetState(SDL_Keycode key)
{
    return state[SDL_GetScancodeFromKey(key)];	
}
