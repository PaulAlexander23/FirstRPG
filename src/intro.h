#pragma once

#include "main.h"

#include "background.h"
#include "button.h"

class intro
{
public:
    intro(graphics* pg, keyboard* pk, mouse* pm, SDL_Event* pe);
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
    button btn_load_game;
  	button btn_options;
    button btn_quit;

};
