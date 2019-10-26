//生成食物
#include <stdio.h>
#include "head.h"
#include <Windows.h>
#include <time.h>

extern struct snake {
	int x;
	int y;
	struct snake* next;
};
extern snake* food;
extern snake* head;
extern snake* q;		//遍历蛇身，保证head一直在蛇头
extern int x;
extern int y;

void drawing_food(void) {
	srand((unsigned)time(NULL));
	food = (snake*)malloc(sizeof(snake));
	food->x= rand() % 52 + 4;		//生成随机数
	while (food->x % 2 != 0) {		//防止生成的食物在格子外
		food->x = rand() % 52 + 4;
	}
	food->y = rand() % 24 + 1;
	while (food->y % 2 != 0) {
		food->y = rand() % 24 + 1;
	}
	q = head;
	while (q != NULL) {
		if (food->x == q->y && food->y == q->y) {
			free(food);
			drawing_food();
		}
		q = q->next;
	}
	color(12);
	x = food->x;
	y = food->y;
	gotoxy(x,y);
	printf("●");
}