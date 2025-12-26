#include <turboc.h>

void main() 
{
	int x, y;
	int ch;
	char munja = '#';

	x = 40;
	y = 10;
	clrscr();

	for (;;) {
		gotoxy(x, y);
		//_putch('#');
		_putch(munja);
		ch = _getch();
		if (ch == 0xE0 || ch == 0) {
			ch = _getch();
			switch (ch) {
				case 75:		// ←
					if (x > 0) {
						x--;
					}
					else {
						x = 79;
					}
					break;
				case 77:		// →
					if (x < 79)
						x++;
					break;
				case 72:		// ↑
					if (y > 0)
						y--;
					break;
				case 80:		// ↓
					if (y < 24)
						y++;
					break;
				default:
					_putch('\a');
					break;
			}
		}
		else {
			switch (ch) {
				case ' ':
					clrscr();
					break;
				case 'q':
				case 'Q':				// 이렇게 작성하면 대문자 Q이거나 소문자 q이거나 동일한 처리를 하게 된다. case 'q'에 break가 없기 때문에 case 'Q' 다음의 명령이 계속 실행되기 때문이다.
					exit(0);
				case '1':
					munja = '$';
					break;
				case '2':
					munja = '@';
					break;
				case '3':
					munja = '#';
					break;
				case '4':
					munja = ' ';
					break;
				default:
					_putch('\a');
					break;
			}
		}
	}
}