//ËÙ¶È¼õÂı
#include "head.h"

extern int speed;
extern int add;
void speeddown(void) {
	if (speed < 350) {
		speed += 30;
		add -= 2;
		if (speed == 350)
			add = 1;
	}
}