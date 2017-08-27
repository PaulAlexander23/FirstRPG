// main.cpp : Defines the entry point for the console application.

#include "main.h"

#include "background.h"
#include "button.h"

int main(int argc, char *argv[])
{
    bool quit;

    SDL_Init(SDL_INIT_EVERYTHING);

    graphics g(&quit,1280,720);
    keyboard k;
    SDL_Event e;

    background b(g.GetRenderer(),"data/IntroBackground.png", 1280, 720);

    std::string ubuntu_regular = "/usr/share/fonts/truetype/ubuntu-font-family/Ubuntu-R.ttf";

	button newgamebtn(g.GetRenderer(), ubuntu_regular, "New Game", 320, 32 * 5, 320, 32);
	//loadgamebtn = button(csdl_setup->GetRenderer(), 320, 32 * 7, "Load Game");
	//quitbtn = button(csdl_setup->GetRenderer(), 320, 32 * 11, "Quit");

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
        b.Draw();
        g.End();
    }

	return 0;
}
