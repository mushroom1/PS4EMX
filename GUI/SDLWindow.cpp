#include "SDL/SDL.h"
#include "/AMDx86-64CORE/AMDx86-64.hpp"
#include "/Firmware/FlashBlobs.hpp"
void BasicSetFrame();
int main(int argc, char* argv[]) 
{
    //////////////////////
    bool commoN;
    const SDL_VideoInfo* VSRC = NULL;
    uBYTE FLAG;
    VSRC = SDL_GetVideoInfo();
    uWORD BPP = VSRC->vfmt->BitsPerPixel;
    //////////////////////
    if(common)
    {
    BasicSetFrame();
    }
    bool is = 1;
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window *PS4EMXWinMain = SDL_CreateWindow(
        "PS4 EMX",                  
        NULL,           
        NULL,           
        700,                               
        520,                               
        SDL_WINDOW_OPENGL                  
    );

    SDL_Event EV;
    if (PS4EMXWinMain == NULL) 
    {
        return 0;
    }
    while(is)
    {
    while(SDL_PollEvent(&EV))
    {
        if(EV.type == SDL_QUIT)
        {
        SDL_DestroyWindow(PS4EMXWinMain);
        SDL_Quit();
        }
    }
    }
    
    return 0;
}
void BasicSetFrame()
{
    #ifdef _WIN16
    #elif
    #ifdef _WIN32
    #elif
    #ifdef _WIN64
    #elif
    #ifdef __APPLE__ && __MACH__
    #elif
    #ifdef macintosh
    #elif
    #ifdef __linux__ 
    FLAG = SDL_OPENGL | SDL_FULLSCREEN;
    SDL_GL_SetAttribute( SDL_GL_RED_SIZE, 8 );
    SDL_GL_SetAttribute( SDL_GL_GREEN_SIZE, 8 );
    SDL_GL_SetAttribute( SDL_GL_BLUE_SIZE, 8 );
    SDL_GL_SetAttribute( SDL_GL_DEPTH_SIZE, 32 );
    SDL_GL_SetAttribute( SDL_GL_DOUBLEBUFFER, 1 );

}
