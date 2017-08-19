#pragma once

#include "main.h"

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
