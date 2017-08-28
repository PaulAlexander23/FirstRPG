#include "main.h"
#include "keyboard.h"

keyboard::keyboard()
{
	state = SDL_GetKeyboardState(NULL);
}


keyboard::~keyboard()
{
    state = NULL;
}

bool keyboard::GetState(SDL_Keycode key)
{
    return state[SDL_GetScancodeFromKey(key)];
}
