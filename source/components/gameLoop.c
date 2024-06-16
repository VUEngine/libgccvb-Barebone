#include <functions.h>
#include <languages.h>
#include "gameLoop.h"

void gameLoop() 
{
    clearScreen();

	WA[31].head = WRLD_ON|WRLD_OVR;
	WA[31].w = 384;
	WA[31].h = 224;
	WA[30].head = WRLD_END;

	printString(0, 19, 13, getString(STR_HELLO_WORLD));

	vbFXFadeIn(0);

	while(1) {}
}