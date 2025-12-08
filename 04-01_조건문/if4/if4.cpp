#include <turboc.h>

void main()
{
	int i;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &i);
	if (i == 7)
		printf("7을 입력했습니다.\n");
	else if (i == 8)
		printf("8을 입력했습니다.\n");
	else
		printf("7도 아니고 8도 아닙니다.\n");
}