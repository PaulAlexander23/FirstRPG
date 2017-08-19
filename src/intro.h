#pragma once

#include "SDL_Setup.h"
#include "Sprite.h"
#include "Keyboard.h"
#include "Landscape.h"
#include "Character.h"
#include "UI.h"
#include "IntroGUI.h"
#include "Cbutton.h"

class CIntro
{
public:
	CIntro(CUI* p_userInteraction);
	~CIntro();

	void intro();

private:
	bool quit;
	CSDL_Setup* csdl_setup;

	CLandscape* background;
//	CIntroGUI* GUI;
	Cbutton* newgamebtn;
	Cbutton* loadgamebtn;
	Cbutton* quitbtn;

	CUI* userInteraction;


};

