#include <turboc.h>

void main()
{
	int num;
	int input;

	randomize();
	for (;;) {
		num = random(100) + 1;
		printf("\n���� ���� ���ڸ� ���� ������.\n");
		do {
			printf("���ڸ� �Է��ϼ���(���� ���� 999) : ");
			scanf_s("%d", &input);
			if (input == 999) {
				exit(0);
			}
			if (input == num) {
				printf("������ϴ�.\n");
			}
			else if (input > num) {
				printf("�Է��� ���ں��� �� �۽��ϴ�.\n");
			}
			else {
				printf("�Է��� ���ں��� �� Ů�ϴ�.");
			}
		} while (input != num);
	}
}