#include "UI.h"

CUI::CUI()
{
	keyboard = new CKeyboard();
	mouse = new CMouse();
}


CUI::~CUI()
{
	delete keyboard;
	delete mouse;
}

void CUI::SortEvent(SDL_Event* mainEvent)
{
	switch (mainEvent->type)
	{
	case SDL_KEYDOWN:
		keyboard->KeyDown(mainEvent->key.keysym.sym);
		break;

	case SDL_KEYUP:
		keyboard->KeyUp(mainEvent->key.keysym.sym);
		break;

	case SDL_MOUSEBUTTONDOWN:
		if (mainEvent->button.button == SDL_BUTTON_LEFT)
		{
			mouse->BtnDown(LEFT);
		}
		else if (mainEvent->button.button == SDL_BUTTON_RIGHT)
		{
			mouse->BtnDown(RIGHT);
		}
		break;

	case SDL_MOUSEBUTTONUP:
		if (mainEvent->button.button == SDL_BUTTON_LEFT)
		{
			mouse->BtnUp(LEFT);
		}
		else if (mainEvent->button.button == SDL_BUTTON_RIGHT)
		{
			mouse->BtnUp(RIGHT);
		}


		break;

	default:
		break;
	}

}
