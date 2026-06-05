#include <turboc.h>

void main()
{
	int i, j;

	for (i = 2; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			if (i <= 5) {
				gotoxy(i * 15 - 25, j + 2);
			}
			else {
				gotoxy((i - 4) * 15 - 25, j + 12);
			}
			printf("%d * %d = %d", i, j, i * j);
		}
	}
}