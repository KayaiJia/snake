//�ж��Ƿ�ײǽ
#include "head.h"

extern struct snake {
	int x;
	int y;
	struct snake* next;
};
extern snake* head;
extern int endcode;

void cantcrosswall(void) {
	if (head->x == 0 || head->x == 56 || head->y == 0 || head->y == 26) {
		endcode = 1;
		gameover();
	}
}