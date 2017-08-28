// main.cpp : Defines the entry point for the console application.

#include "main.h"

#include "intro.h"
//#include "game.h"

int main(int argc, char *argv[])
{
    bool quit;

    SDL_Init(SDL_INIT_EVERYTHING);
    if(!TTF_WasInit() && TTF_Init()==-1) {
        printf("TTF_Init: %s\n", TTF_GetError());
        exit(1);
    }

    graphics g(&quit,1280,720);
    keyboard k;
    mouse m;
    SDL_Event e;

    intro i(&g, &k, &m, &e);

    i.main();


/*    background b(g.GetRenderer(),"data/IntroBackground.png", 1280, 720);

    SDL_Color BLACK;
    BLACK.r = 0;
    BLACK.g = 0;
    BLACK.b = 0;
    BLACK.a = 0;

    std::string ubuntu_regular = "/usr/share/fonts/truetype/ubuntu-font-family/Ubuntu-R.ttf";

    button btn_new_game(g.GetRenderer(), ubuntu_regular, "New Game", 510, 32 * 5, 320, 32, BLACK);
    button btn_load_game(g.GetRenderer(), ubuntu_regular, "Load Game", 510, 32 * 7, 320, 32, BLACK);
  	button btn_options(g.GetRenderer(), ubuntu_regular, "Options", 510, 32 * 9, 320, 32, BLACK);
    button btn_quit(g.GetRenderer(), ubuntu_regular, "Quit", 510, 32 * 11, 320, 32, BLACK);

    while(!quit){
        while(SDL_PollEvent(&e)){
            switch(e.type)
            {
            case SDL_QUIT:
                quit = true;
                break;
            case SDL_MOUSEBUTTONDOWN:
                if(btn_new_game.InButton(m.GetPosition()) && m.GetState(SDL_BUTTON_LEFT))
                {
                    std::cout<<"New Game, BOIIIISsss"<<std::endl;
                    break;
                }
                else if(btn_load_game.InButton(m.GetPosition()) && m.GetState(SDL_BUTTON_LEFT))
                {
                    std::cout<<"Load Game, BOIIIISsss"<<std::endl;
                    break;
                }
                else if(btn_options.InButton(m.GetPosition()) && m.GetState(SDL_BUTTON_LEFT))
                {
                    std::cout<<"Options, BOIIIISsss"<<std::endl;
                    break;
                }
                else if(btn_quit.InButton(m.GetPosition()) && m.GetState(SDL_BUTTON_LEFT))
                {
                    std::cout<<"Bye, BOIIIISsss"<<std::endl;
                    quit = true;
                    break;
                }
            }
        }        

        if(k.GetState(SDLK_q)){
            quit = true;
        }

        g.Begin();
        b.Draw();
        btn_new_game.Draw();
        btn_load_game.Draw();
        btn_options.Draw();
        btn_quit.Draw();
        g.End();
    }*/

    TTF_Quit();
    SDL_Quit();

	return 0;
}
