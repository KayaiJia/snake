#include <Windows.h>
#include <conio.h>
#include "head.h"
#include<stdio.h>

extern int status;
extern int endcode;
extern int speed;
extern int  R;
extern int  L;
extern int  U;
extern int  D;

void getkeyboard(void) {
	status = R;
	while (1) {
		tips();
		if (GetAsyncKeyState(VK_UP) && status != D) {
			status = U;
		}
		else if (GetAsyncKeyState(VK_DOWN) && status != U) {
			status = D;
		}
		else if (GetAsyncKeyState(VK_LEFT) && status != R) {
			status = L;
		}
		else if (GetAsyncKeyState(VK_RIGHT) && status != L) {
			status = R;
		}
		if (GetAsyncKeyState(VK_SPACE)) {
			while (1) {
				Sleep(300);
				if (GetAsyncKeyState(VK_SPACE)) {
					break;
				}
			}
		}
		else if (GetAsyncKeyState(VK_ESCAPE)) {
			endcode = 3;
			gameover();
		}
		else if (GetAsyncKeyState(VK_F1)) {
			speedup();
		}
		else if (GetAsyncKeyState(VK_F2)) {
			speeddown();
		}
		Sleep(speed);
		move();
	}
}