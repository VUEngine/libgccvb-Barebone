#include <libgccvb.h>
#include <constants.h>
#include "input.h"

u8 buttonsPressed(u16 buttons, u8 forceRelease)
{
	return (vbReadPad() & buttons & ~K_PWR) && (!forceRelease || vbPadKeyUp());
}