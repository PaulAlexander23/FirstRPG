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

    int choice = 1;
    
    while(choice != 0)
    {
        switch (choice)
        {
        case 1:
            {
            intro i(&g, &k, &m, &e);
            choice = i.main();
            break;
            }
        case 2:
            {            
            printf("New Game");
            printf("Game Over");
            choice = 1;
            break;
            }
        default:
            choice = 1;
            break;
        }
    }


    TTF_Quit();
    SDL_Quit();

	return 0;
}
