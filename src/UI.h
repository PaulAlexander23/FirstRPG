#pragma once
#include "Keyboard.h"
#include "Mouse.h"

class CUI
{
public:
	CUI();
	~CUI();

	void SortEvent(SDL_Event* mainEvent);

	CKeyboard* keyboard;
	CMouse* mouse;
private:
	

};

