// main.cpp : Defines the entry point for the console application.

#include "main.h"

int main(int argc, char *argv[])
{
    bool quit;

    SDL_Init(SDL_INIT_EVERYTHING);

    graphics g = graphics(&quit,1024,768);
    keyboard k = keyboard();
    SDL_Event e;

    while(!quit){
        while(SDL_PollEvent(&e)){
            switch(e.type){
                case SDL_QUIT:
                    quit = true;
                    break;
            }
        }        

        if(k.GetState(SDLK_q)){
            quit = true;
        }

        g.Begin();
        g.End();
    }

	return 0;
}


	/*CIntro* cintro = new CIntro(ui);
	cintro->intro();
	delete cintro;

	CMain* cmain = new CMain(ui,1280,640);
	cmain->GameLoop();
	delete cmain;*/
