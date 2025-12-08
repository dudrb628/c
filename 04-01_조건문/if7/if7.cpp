#include <turboc.h>

void main() 
{
	int i, j;

	printf("첫 번째 정수를 입력하세요 : ");
	scanf_s("%d", &i);
	printf("두 번째 정수를 입력하세요 : ");
	scanf_s("%d", &j);

	if (i > j) {
		printf("%d보다 %d가 더 작습니다.\n", i, j);
	}
	else if (i < j) {
		printf("%d보다 %d가 더 큽니다.\n", i, j);
	}
	else {
		printf("%d와 %d는 같은 수입니다.", i, j);
	}
}