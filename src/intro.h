#pragma once

#include "main.h"

#include "background.h"
#include "button.h"

class intro
{
public:
	intro();
	~intro();

	int main();

private:
	bool quit;
	graphics* g;
    keyboard* k;
    mouse* m;
    SDL_Event* e;

	background b;
	button btn_new_game;
    //button btn_load_game(g.GetRenderer(), ubuntu_regular, "Load Game", 510, 32 * 7, 320, 32, BLACK);
  	//button btn_options(g.GetRenderer(), ubuntu_regular, "Options", 510, 32 * 9, 320, 32, BLACK);
    //button btn_quit(g.GetRenderer(), ubuntu_regular, "Quit", 510, 32 * 11, 320, 32, BLACK);

};
