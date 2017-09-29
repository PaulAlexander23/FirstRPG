#include "intro.h"

intro::intro(graphics* pg, keyboard* pk, mouse* pm, SDL_Event* pe)
    : b(pg->GetRenderer(),"data/IntroBackground.png", 1280, 720),
      btn_new_game(pg->GetRenderer(), "New Game", 510, 32 * 5, 320, 32),
      btn_load_game(pg->GetRenderer(), "Load Game", 510, 32 * 7, 320, 32),
      btn_options(pg->GetRenderer(), "Options", 510, 32 * 9, 320, 32),
      btn_quit(pg->GetRenderer(), "Quit", 510, 32 * 11, 320, 32)
{
	quit = false;
    g = pg;
    k = pk;
    m = pm;
    e = pe;
}

intro::~intro()
{

}

int intro::main()
{
    while(!quit){
        while(SDL_PollEvent(e)){
            switch(e->type)
            {
            case SDL_QUIT:
                quit = true;
                break;
            case SDL_MOUSEBUTTONDOWN:
                if(btn_new_game.InButton(m->GetPosition()) && m->GetState(SDL_BUTTON_LEFT))
                {
                    std::cout<<"New Game, BOIIIISsss"<<std::endl;
                    return 2;
                    break;
                }
                else if(btn_load_game.InButton(m->GetPosition()) && m->GetState(SDL_BUTTON_LEFT))
                {
                    std::cout<<"Load Game, BOIIIISsss"<<std::endl;
                    break;
                }
                else if(btn_options.InButton(m->GetPosition()) && m->GetState(SDL_BUTTON_LEFT))
                {
                    std::cout<<"Options, BOIIIISsss"<<std::endl;
                    break;
                }
                else if(btn_quit.InButton(m->GetPosition()) && m->GetState(SDL_BUTTON_LEFT))
                {
                    std::cout<<"Bye, BOIIIISsss"<<std::endl;
                    quit = true;
                    break;
                }
            }
        }        

        g->Begin();
        b.Draw();
        btn_new_game.Draw();
        btn_load_game.Draw();
        btn_options.Draw();
        btn_quit.Draw();
        g->End();
    }


    return 0;
}
