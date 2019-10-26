//贪吃蛇
#include <stdio.h>
#include <Windows.h>
#include "head.h"
#include <stdlib.h>


int score=0, speed=200, add=10;//分数、速度、单个食物分数
int  R = 1;
int  L = 2;
int  U = 3;
int  D = 4;
int endcode;
int x;
int y;
typedef struct snake {			//描述坐标
	int x;
	int y;
	struct snake* next;
}snake;
snake* head;				//蛇头
snake* food;				//食物
snake* q;
int status = R;
HANDLE hOut;

int main(void) {
	main_1();
	return 0;
}