//分数和提示
#include <stdio.h>
#include "head.h"

#define decoration "+ --- --- --- --- --- --- --- --- --- +"


extern int score;
extern int add;

void tips(void) {
	gotoxy(64, 8);
	color(14);
	printf("得分: %d", score);
	gotoxy(73, 11);
	color(13);
	printf("小 提 示");
	gotoxy(60, 13);
	color(6);
	printf("%s", decoration);
	gotoxy(60, 25);
	printf("%s", decoration);
	gotoxy(64, 14);
	color(3);
	printf("每个食物得分: %d分", add);
	gotoxy(64, 16);
	printf("不能撞墙，不能咬自己");
	gotoxy(64, 18);
	printf("用↑ ↓ ← →控制移动");
	gotoxy(64, 20);
	printf("F1加速，F2减速");
	gotoxy(64, 22);
	printf("按空格暂停游戏");
	gotoxy(64, 24);
	printf("按ESC退出游戏");
}