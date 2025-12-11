#include <turboc.h>

void main()
{
	int i;
	clrscr();

	for (i = 1; i <= 80; i++) {
		gotoxy(i, 10);
		_putch('#');
		gotoxy(i - 1, 10);
		_putch(' ');
		//_getch();
		delay(50);
	}
}