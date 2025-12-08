#include <turboc.h>

void main() 
{
	int i;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &i);
	if (i == 7) {
		printf("7을 입력했습니다.\n");
		printf("행운의 7입니다.\n");
	}
}