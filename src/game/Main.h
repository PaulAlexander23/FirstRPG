#pragma once
#include "SDL_Setup.h"
#include "Sprite.h"
#include "Keyboard.h"
#include "Landscape.h"
#include "Character.h"
#include "UI.h"

class CMain
{
public:
	CMain(CUI* p_userInteraction, int passed_ScreenWidth, int passed_ScreenHeight);
	~CMain();

	void GameLoop();

private:
	int ScreenWidth;
	int ScreenHeight;
	
	bool quit;
	
	CLandscape* map1;
	CCharacter* man;

	CSDL_Setup* csdl_setup;

	CUI* userInteraction;

	int timeCheck;
	int frame;
};

