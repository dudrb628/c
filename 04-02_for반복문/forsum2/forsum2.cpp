#include <turboc.h>

void main()
{
	int initialInt, sum;
	printf("정수를 입력하세요\n");
	scanf_s("%d", &initialInt);
	sum = 0;
	for (int i = 1; i <= initialInt; i++) {
		//printf("%d\n", i);
		sum += i;
	}
	//printf("%d\n", sum);
	printf("1부터 입력받은 값까지의 총합 : %d\n", sum);
}