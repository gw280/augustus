/*
    SDL_uikit_main.c, placed in the public domain by Sam Lantinga  3/18/2019
*/

/* Include the SDL main definition header */
#include "SDL_main.h"

#include "game/system.h"

#if defined(__IPHONEOS__) || defined(__TVOS__)

#ifndef SDL_MAIN_HANDLED
#ifdef main
#undef main
#endif

int main(int argc, char *argv[])
{
    return SDL_UIKitRunApp(argc, argv, SDL_main);
}
#endif /* !SDL_MAIN_HANDLED */

#endif /* __IPHONEOS__ || __TVOS__ */

#define AUGUSTUS_VERSION "4.0.0"
#define AUGUSTUS_VERSION_SUFFIX "ios"

const char *system_version(void)
{
    return AUGUSTUS_VERSION AUGUSTUS_VERSION_SUFFIX;
}

/* vi: set ts=4 sw=4 expandtab: */
