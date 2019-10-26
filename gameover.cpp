#include <stdio.h>
#include "head.h"
#include <stdlib.h>

extern int endcode;
extern int score;
extern int HighScore;

void gameover(void) {
	system("cls");
	if (endcode == 1) {
		Lostdraw();
		gotoxy(35, 9);
		color(12);
		printf("你撞到墙了，游戏结束!");
	}
	else if (endcode == 2) {
		Lostdraw();
		gotoxy(35, 9);
		color(12);
		printf("你咬到自己了，游戏结束！");
	}
	else if (endcode == 3) {
		Lostdraw();
		gotoxy(40, 9);
		color(12);
		printf("你结束了游戏");
	}
	gotoxy(43, 12);
	color(13);
	printf("你的得分是 %d", score);
	gotoxy(20, 15);
	system("pause");
	system("cls");
	main_1();
}