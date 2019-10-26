#include <stdio.h>
#include "head.h"
#include <stdlib.h>

void Lostdraw(void) {
	system("cls");
	int i;
	gotoxy(45, 2);
	color(6);
	printf("\\\\\\|///");
	gotoxy(47, 3);
	color(15);
	printf(".-.-");
	gotoxy(54, 3);
	color(6);
	printf("//");
	gotoxy(44, 4);
	color(14);
	printf("(");
	gotoxy(47, 4);
	color(14);
	printf(".@.@");
	gotoxy(54, 4);
	color(14);
	printf(")");
	gotoxy(17, 5);
	color(11);
	printf("+------------------------");
	gotoxy(35, 5);
	color(14);
	printf("o00o");
	gotoxy(39, 5);
	color(11);
	printf("----------");
	gotoxy(48, 5);
	color(14);
	printf("(_)");
	gotoxy(51, 5);
	color(11);
	printf("----------");
	gotoxy(61, 5);
	color(14);
	printf("o00o");
	gotoxy(65, 5);
	color(11);
	printf("-----------------+");
	for (i = 6; i <= 19; i++) {
		gotoxy(17, i);
		printf("|");
		gotoxy(82, i);
		printf("|");
	}
	gotoxy(17, 20);
	printf("+------------------------");
	gotoxy(52, 20);
	color(14);
	printf("¡î¡î¡î");
	gotoxy(60, 20);
	color(11);
	printf("-----------------+");
}