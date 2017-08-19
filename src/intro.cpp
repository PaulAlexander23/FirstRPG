#include "stdafx.h"
#include "Intro.h"


CIntro::CIntro(CUI* p_userInteraction)
{
	quit = false;
	csdl_setup = new CSDL_Setup(&quit, 640, 512);
	background = new CLandscape(csdl_setup->GetRenderer(), "data/IntroBackground.png", 640, 512);
	//GUI = new CIntroGUI();
	newgamebtn = NULL;
	newgamebtn = new Cbutton(csdl_setup->GetRenderer(), 320, 32 * 5, "New Game");
	loadgamebtn = new Cbutton(csdl_setup->GetRenderer(), 320, 32 * 7, "Load Game");
	quitbtn = new Cbutton(csdl_setup->GetRenderer(), 320, 32 * 11, "Quit");

	userInteraction = new CUI(*p_userInteraction);
}

CIntro::~CIntro()
{
	delete csdl_setup;
	delete background;
	delete newgamebtn;
	delete loadgamebtn;
	delete quitbtn;
	delete userInteraction;

}

void CIntro::intro()
{
	while (!quit && csdl_setup->GetMainEvent()->type != SDL_QUIT)
	{
		csdl_setup->Begin();

		userInteraction->SortEvent(csdl_setup->GetMainEvent());



		background->Draw();
		newgamebtn->draw();
		loadgamebtn->draw();

		quitbtn->draw();

		csdl_setup->End();
	}
}