//���ƽ���
#include <stdio.h>
#include "head.h"

void drawing_interface(void) {
	int i, j;
	for (i = 0; i < 58; i += 2) {//��ӡ��Χ��
		gotoxy(i,0);
		color(5);
		printf("��");
		gotoxy(i, 26);
		printf("��");
	}
	for (i = 1; i < 26; i++) {//һ��������������
		gotoxy(0, i);
		printf("��");
		gotoxy(56, i);
		printf("��");
	}
	for (i = 2; i < 56; i += 2) {
		for (j = 1; j < 26; j ++) {
			gotoxy(i, j);
			color(3);
			printf("��\n\n");
		}
	}

}