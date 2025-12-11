#include <turboc.h>

void main()
{
	int i, sum;

	sum = 0;
	for (i = 1; i <= 100; i++) {
		sum = sum + i;
	}
	printf("1~100까지의 합 = %d\n", sum);
}