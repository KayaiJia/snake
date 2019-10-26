//¸ü¸ÄÑÕÉ«
#include <windows.h>
#include "head.h"

int color(int c) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
	return 0;
}