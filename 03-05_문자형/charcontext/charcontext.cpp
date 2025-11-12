#include <turboc.h>

void main()
{
	char ch = 'A';

	printf("문자일 때 = %c, 정수일 때 = %d\n", ch, ch);		// 문자와 정수로 해석
	gotoxy(ch, 5);		// 정수로 해석
	_putch(ch);			// 문자로 해석
}