//速度增加
#include "head.h"

extern int speed;
extern int add;
void speedup(void) {
	if (speed >= 50) {
		speed -= 10;
		add += 2;
	}
}