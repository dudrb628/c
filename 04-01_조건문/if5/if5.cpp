#include <turboc.h>

void main()
{
	int i;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &i);
	if (i % 2 == 0) {
		printf("%d는 짝수입니다.\n", i);
	}
	else {
		printf("%d는 홀수입니다.\n", i);
	}
}