#include <turboc.h>

void main()
{
	int i, j;


	for (i = 2; i <= 5; i++) {
		for (j = 1; j <= 9; j++) {
			gotoxy(i * 15 - 25, j + 2);
			printf("%d * %d = %d", i, j, i * j);
		}
	}

	for (i = 6; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			gotoxy((i - 4) * 15 - 25, j + 12);
			printf("%d * %d = %d", i, j, i * j);
		}
	}
}