#include <turboc.h>

void main()
{
	int i, sum;

	sum = 0;
	i = 1;
	while (i <= 100) {
		sum = sum + i;
		i++;
	}

	printf("1~100까지의 합 = %d\n", sum);
}