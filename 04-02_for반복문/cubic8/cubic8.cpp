#include <turboc.h>

void main()
{
	int j1, j2;

	for (j1 = 1; j1 <= 6; j1++) {
		for (j2 = 1; j2 <= 6; j2++) {
			if (j1 + j2 == 8) {
				printf("°ª1=%d, °ª2=%d\n", j1, j2);
			}
		}
	}
}