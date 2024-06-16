#include <constants.h>
#include <controller.h>
#include <world.h>
#include <input.h>
#include <text.h>
#include <languages.h>
#include "precautionScreen.h"

void precautionScreen()
{
	WA[31].head = WRLD_ON|WRLD_OVR;
	WA[31].w = 384;
	WA[31].h = 224;
	WA[30].head = WRLD_END;

	printString(0, 14, 10, getString(STR_PRECAUTION));

	vbFXFadeIn(0);

	// show this screen for at least 2 seconds
	// as defined by Nintendo in the official development manual (Appendix 1)
	vbWaitFrame(100);

	while(1) {
		if(buttonsPressed(K_ANY, false)) {
			break;   
		}
	}

	vbFXFadeOut(0);
}