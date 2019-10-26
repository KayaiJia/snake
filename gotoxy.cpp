//设置光标位置 
#include <windows.h>
#include "head.h"

void gotoxy(int x,int y) {
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}