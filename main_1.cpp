#include "head.h"
extern int score;
extern int speed;
extern int add;
void main_1(void) {
	//start();
	score = 0;
	speed = 200;
	add = 10;
	drawing_interface();
	insetsnake();
	drawing_food();
	getkeyboard();
	gameover();
}