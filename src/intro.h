#pragma once

#include "main.h"

#include "sprite.h"
#include "map.h"
#include "player.h"
#include "UI.h"
#include "button.h"

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

	Cbutton* newgamebtn;
	Cbutton* loadgamebtn;
	Cbutton* quitbtn;

	CUI* userInteraction;


};
