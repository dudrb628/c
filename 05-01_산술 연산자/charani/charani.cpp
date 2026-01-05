#include <turboc.h>

void main()
{
	int i;

	for (i = 1; i <= 75; i++) {
		gotoxy(i, 10);
		if (i % 2 == 0) {
			puts(" __@");
		}
		else {
			puts(" ^^@");
		}
		delay(100);
	}
}