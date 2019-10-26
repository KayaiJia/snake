//初始化蛇
#include <stdio.h>
#include "head.h"
#include <stdlib.h>

extern struct snake {
	int x;
	int y;
	struct snake* next;
};
extern snake* head;
void insetsnake(void) {
	snake* tail;			//尾巴位置
	tail = (snake*)malloc(sizeof(snake));
	tail->next = NULL;	//尾巴是最后一位
	tail->x = 24;		//初始化在24,5的位置
	tail->y = 5;
	for (int i = 1; i <= 4; i++) {//蛇有四节
		head = (snake*)malloc(sizeof(snake));
		head->x = 24 + 2*i;					//从尾巴开始，头在右边
		head->y=5;
		head->next = tail;					//保存下一节位置
		tail = head;						//最后蛇头蛇尾指向同一位置
	}
	while (tail != NULL) {
		color(14);
		gotoxy(tail->x, tail->y);
		printf("★");
		tail = tail->next;
	}
}