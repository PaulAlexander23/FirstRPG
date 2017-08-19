#include "stdafx.h"
#include "Keyboard.h"


CKeyboard::CKeyboard()
{
	for (int i = 0; i < 4; i++)
	{
		keyState[i] = false;
	}

	dist = 0;
}


CKeyboard::~CKeyboard()
{

}

void CKeyboard::KeyDown(SDL_Keycode key)
{
	switch (key)
	{
	case SDLK_a:
		keyState[LEFT] = true;		
		break;
	case SDLK_d:
		keyState[RIGHT] = true;		
		break;
	case SDLK_s:
		keyState[DOWN] = true;
		break;
	case SDLK_w:
		keyState[UP] = true;
		break;
	default:
		break;
	}
}

void CKeyboard::KeyUp(SDL_Keycode key)
{
	switch (key)
	{
	case SDLK_a:
		keyState[LEFT] = false;
		break;
	case SDLK_d:
		keyState[RIGHT] = false;
		break;
	case SDLK_s:
		keyState[DOWN] = false;
		break;
	case SDLK_w:
		keyState[UP] = false;
		break;
	default:
		break;
	} 
	//std::cout << "rekt" << std::endl;
}

