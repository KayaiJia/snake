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
		printf("��ײ��ǽ�ˣ���Ϸ����!");
	}
	else if (endcode == 2) {
		Lostdraw();
		gotoxy(35, 9);
		color(12);
		printf("��ҧ���Լ��ˣ���Ϸ������");
	}
	else if (endcode == 3) {
		Lostdraw();
		gotoxy(40, 9);
		color(12);
		printf("���������Ϸ");
	}
	gotoxy(43, 12);
	color(13);
	printf("��ĵ÷��� %d", score);
	gotoxy(20, 15);
	system("pause");
	system("cls");
	main_1();
}