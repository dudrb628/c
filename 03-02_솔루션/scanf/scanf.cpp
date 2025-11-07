#include <turboc.h>

void main()
{
	int a, b;
	int sum;

	printf("첫 번째 숫자를 입력하세요:");
	scanf_s("%d",&a);
	printf("두 번째 숫자를 입력하세요:");
	scanf_s("%d",&b);
	sum = a + b;
	printf("입력한 두 수의 합은 %d입니다.\n", sum);
}