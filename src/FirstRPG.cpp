// FirstRPG.cpp : Defines the entry point for the console application.

#include "stdafx.h"

int main(int argc, char *argv[])
{
	CUI* ui = new CUI();


	CIntro* cintro = new CIntro(ui);
	cintro->intro();
	delete cintro;

	CMain* cmain = new CMain(ui,1280,640);
	cmain->GameLoop();
	delete cmain;

	delete ui;

	return 0;
}

