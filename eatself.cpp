//Ò§µ½×Ô¼º
#include "head.h";
#include <stdio.h>

extern struct snake {
	int x;
	int y;
	struct snake* next;
};
extern snake* head;

int eatself(void) {
	snake* self;
	self = head->next;
	while (self != NULL) {
		if (self->x == head->x && self->y == head->y) {
			return 1;
		}
		self = self->next;
	}
}