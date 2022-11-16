#include "Program.hpp"
#include <stdio.h> // for printf()
#include <SDL.h>

int main(int, char**)
{
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_GAMECONTROLLER) != 0)
    {
        printf("Error: %s\n", SDL_GetError());
        return -1;
    }

    Program prog(200);
    return 0;
}
