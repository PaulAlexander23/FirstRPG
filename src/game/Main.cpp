#include "stdafx.h"
#include "Main.h"


CMain::CMain(CUI* p_userInteraction, int passed_ScreenWidth, int passed_ScreenHeight)
{
	ScreenWidth = passed_ScreenWidth;
	ScreenHeight = passed_ScreenHeight;
	
	quit = false;
	csdl_setup = new CSDL_Setup(&quit,ScreenWidth,ScreenHeight);

	map1 = new CLandscape(csdl_setup->GetRenderer(), "data/DesertHut.png", 1280, 640);
	man = new CCharacter(csdl_setup->GetRenderer(),"data/manSprite.png",320,320,65,32);

	userInteraction = new CUI(*p_userInteraction);

	timeCheck = SDL_GetTicks();
	frame = 0;
}


CMain::~CMain()
{
	delete csdl_setup;
	delete map1;
	delete man;
}

void CMain::GameLoop()
{
	while (!quit && csdl_setup->GetMainEvent()->type != SDL_QUIT)
	{
		csdl_setup->Begin();

		map1->Draw();
		man->Draw();
		
		userInteraction->SortEvent(csdl_setup->GetMainEvent());

		if (timeCheck + 200 < SDL_GetTicks())
		{
			timeCheck = SDL_GetTicks();
			
			man->Update(userInteraction->keyboard->keyState);
		}


		

		csdl_setup->End();
	}
}