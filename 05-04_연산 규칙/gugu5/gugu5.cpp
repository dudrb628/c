#include <turboc.h>

void main() {
	int i, j;

	for (i = 2; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			gotoxy((i - (i > 5) * 4) * 15 - 25, j + 2 + (i>5) * 10);
			printf("%d * %d = %d", i, j, i * j);
		}
	}
}