/*	
* ��ǥ�� ����Ͽ� �ﰢ���� ����ϴ� ����
*/

#include <stdio.h>

void main()
{
	int i, j;

	for (i = 1; i <= 15; i = i + 1) {
		for (j = 0; j < i; j = j + 1) {
			printf("*");			// ��ǥ �ϳ��� ����Ѵ�.
		}
		printf("\n");				// �� ���� ������ �����Ѵ�.
	}
}