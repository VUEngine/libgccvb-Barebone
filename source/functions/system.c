#include <libgccvb.h>
#include <timer.h>
#include "system.h"

extern BYTE FontTiles[];

void clearScreen()
{
	setmem((void*)CharSeg0, 0x0000, 2048);
	setmem((void*)BGMap(0), 0x0000, 8192);
}

void initSystem()
{
	//timer interrupts setup
	setupTimer();

	//column table setup
	vbSetColTable();

	//display setup
	vbDisplayOn();

	//load font
	// + 4 to skip the compression flag prepended to tiles data by VUEngine Studio's image converter
	copymem((void*)(CharSeg3+0x1000), (void*)(FontTiles + 4), 1025 * 4);
}