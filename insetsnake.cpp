//��ʼ����
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
	snake* tail;			//β��λ��
	tail = (snake*)malloc(sizeof(snake));
	tail->next = NULL;	//β�������һλ
	tail->x = 24;		//��ʼ����24,5��λ��
	tail->y = 5;
	for (int i = 1; i <= 4; i++) {//�����Ľ�
		head = (snake*)malloc(sizeof(snake));
		head->x = 24 + 2*i;					//��β�Ϳ�ʼ��ͷ���ұ�
		head->y=5;
		head->next = tail;					//������һ��λ��
		tail = head;						//�����ͷ��βָ��ͬһλ��
	}
	while (tail != NULL) {
		color(14);
		gotoxy(tail->x, tail->y);
		printf("��");
		tail = tail->next;
	}
}