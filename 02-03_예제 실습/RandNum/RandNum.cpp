#include <turboc.h>

void main()
{
	int num;
	int input;

	randomize();
	for (;;) {
		num = random(100) + 1;
		printf("\n제가 만든 숫자를 맞춰 보세요.\n");
		do {
			printf("숫자를 입력하세요(끝낼 때는 999) : ");
			scanf_s("%d", &input);
			if (input == 999) {
				exit(0);
			}
			if (input == num) {
				printf("맞췄습니다.\n");
			}
			else if (input > num) {
				printf("입력한 숫자보다 더 작습니다.\n");
			}
			else {
				printf("입력한 숫자보다 더 큽니다.");
			}
		} while (input != num);
	}
}