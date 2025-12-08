#include <turboc.h>

void main()
{
	int i;

	printf("문자열을 출력할 위치를 입력하세요 : ");
	scanf_s("%d", &i);
	if (i == 1) {
		gotoxy(20, 10);
	}
	else if (i == 2) {
		gotoxy(40, 10);
	}
	else {
		gotoxy(60, 10);
	}
	printf("Programmer\n");
} 