//��������ʾ
#include <stdio.h>
#include "head.h"

#define decoration "+ --- --- --- --- --- --- --- --- --- +"


extern int score;
extern int add;

void tips(void) {
	gotoxy(64, 8);
	color(14);
	printf("�÷�: %d", score);
	gotoxy(73, 11);
	color(13);
	printf("С �� ʾ");
	gotoxy(60, 13);
	color(6);
	printf("%s", decoration);
	gotoxy(60, 25);
	printf("%s", decoration);
	gotoxy(64, 14);
	color(3);
	printf("ÿ��ʳ��÷�: %d��", add);
	gotoxy(64, 16);
	printf("����ײǽ������ҧ�Լ�");
	gotoxy(64, 18);
	printf("�á� �� �� �������ƶ�");
	gotoxy(64, 20);
	printf("F1���٣�F2����");
	gotoxy(64, 22);
	printf("���ո���ͣ��Ϸ");
	gotoxy(64, 24);
	printf("��ESC�˳���Ϸ");
}