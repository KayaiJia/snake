//̰����
#include <stdio.h>
#include <Windows.h>
#include "head.h"
#include <stdlib.h>


int score=0, speed=200, add=10;//�������ٶȡ�����ʳ�����
int  R = 1;
int  L = 2;
int  U = 3;
int  D = 4;
int endcode;
int x;
int y;
typedef struct snake {			//��������
	int x;
	int y;
	struct snake* next;
}snake;
snake* head;				//��ͷ
snake* food;				//ʳ��
snake* q;
int status = R;
HANDLE hOut;

int main(void) {
	main_1();
	return 0;
}