//�����ƶ�
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include "head.h"

extern struct snake {
	int x;
	int y;
	struct snake* next;
};
extern snake* head;
extern int endcode;
extern int status;
extern int  R;
extern int  L;
extern int  U;
extern int  D;
extern int x;
extern int y;
extern int score;
extern int add;
extern snake* q;
extern snake* food;
void move(void) {
	snake* nexthead;
	cantcrosswall();
	color(12);
	gotoxy(x, y);
	printf("��");
	nexthead = (snake*)malloc(sizeof(snake));
	if (status == R) {			//�����ƶ�
		nexthead->x = head->x + 2;
		nexthead->y = head->y;
		nexthead->next = head;	//	��һλ��
		head = nexthead;		//������ͷλ��
		q = head;				//��ʱ����

		if (head->x == food->x && head->y == food->y) {
			while (q != NULL) {
				gotoxy(q->x, q->y);
				color(14);
				printf("��");
				q = q->next;
			}
			score += add;
			add += 10;
			speedup();
			drawing_food();
		}
		else
		{
			while (q->next->next != NULL) {//û�Ե�ʳ��Ͳ��䳤
				gotoxy(q->x, q->y);
				color(14);
				printf("��");
				q = q->next;
			}
			gotoxy(q->next->x, q->next->y);
			color(3);
			printf("��");
			free(q->next);
			q->next = NULL;
		}
	}
	if (status == L) {			//�����ƶ�
		nexthead->x = head->x - 2;
		nexthead->y = head->y;
		nexthead->next = head;	//	��һλ��
		head = nexthead;		//������ͷλ��
		q = head;				//��ʱ����

		if (head->x == food->x && head->y == food->y) {
			while (q != NULL) {
				gotoxy(q->x, q->y);
				color(14);
				printf("��");
				q = q->next;
			}
			score += add;
			add += 10;
			speedup();
			drawing_food();
		}
		else
		{
			while (q->next->next != NULL) {//û�Ե�ʳ��Ͳ��䳤
				gotoxy(q->x, q->y);
				color(14);
				printf("��");
				q = q->next;
			}
			gotoxy(q->next->x, q->next->y);
			color(3);
			printf("��");
			free(q->next);
			q->next = NULL;
		}
	}
	if (status == U) {			//����
		nexthead->x = head->x;
		nexthead->y = head->y - 1;
		nexthead->next = head;	//	��һλ��
		head = nexthead;		//������ͷλ��
		q = head;				//��ʱ����

		if (head->x == food->x && head->y == food->y) {
			while (q != NULL) {
				gotoxy(q->x, q->y);
				color(14);
				printf("��");
				q = q->next;
			}
			score += add;
			add += 10;
			speedup();
			drawing_food();
		}
		else
		{
			while (q->next->next != NULL) {//û�Ե�ʳ��Ͳ��䳤
				gotoxy(q->x, q->y);
				color(14);
				printf("��");
				q = q->next;
			}
			gotoxy(q->next->x, q->next->y);
			color(3);
			printf("��");
			free(q->next);
			q->next = NULL;
		}
	}
	if (status == D) {			//����
		nexthead->x = head->x;
		nexthead->y = head->y+1;
		nexthead->next = head;	//	��һλ��
		head = nexthead;		//������ͷλ��
		q = head;				//��ʱ����

		if (head->x == food->x && head->y == food->y) {
			while (q != NULL) {
				gotoxy(q->x, q->y);
				color(14);
				printf("��");
				q = q->next;
			}
			score += add;
			add += 10;
			speedup();
			drawing_food();
		}
		else
		{
			while (q->next->next != NULL) {//û�Ե�ʳ��Ͳ��䳤
				gotoxy(q->x, q->y);
				color(14);
				printf("��");
				q = q->next;
			}
			gotoxy(q->next->x, q->next->y);
			color(3);
			printf("��");
			free(q->next);
			q->next = NULL;
		}
	}
	if (eatself() == 1) {
		endcode = 2;
		gameover();
	}
}