/*	
* 별표를 사용하여 삼각형을 출력하는 예제
*/

#include <stdio.h>

void main()
{
	int i, j;

	for (i = 1; i <= 15; i = i + 1) {
		for (j = 0; j < i; j = j + 1) {
			printf("*");			// 별표 하나를 출력한다.
		}
		printf("\n");				// 한 줄이 끝나면 개행한다.
	}
}