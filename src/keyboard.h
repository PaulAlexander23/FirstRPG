#pragma once

#include "main.h"

class CKeyboard
{
public:
	CKeyboard();
	~CKeyboard();

	void KeyDown(SDL_Keycode key);
	void KeyUp(SDL_Keycode key);

	bool keyState[4];

private:

	int dist;
	
};
