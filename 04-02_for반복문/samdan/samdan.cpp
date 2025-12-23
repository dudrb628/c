#include <turboc.h>

void main()
{
	int i, j;

	for (i = 1; i <= 3; i++) {
		for (j = 1; j <= 3; j++) {
			printf("%d*%d=%d\n", i, j,i * j);
		}
		printf("\n");
	}
}