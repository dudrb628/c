#include <turboc.h>

void main() 
{
	int i;

	printf("값을 입력해 주세요 : ");
	scanf_s("%d", &i);

	switch (i) {
		case 0:
			printf("입력한 값은 0입니다.\n");
			break;
		case 1:
			printf("1을 입력했습니다.\n");
			break;
		case 2:
			printf("2입니다.\n");
			break;
		default:
			printf("0,1,2가 아닌 다른 수입니다.\n");
			break;

	}


	// 다음은 switch를 쓰지 않고 다시 작성해 본 것이다.
	if (i == 0) {
		printf("입력한 값은 0입니다.\n");
	}
	else if (i == 1) {
		printf("1을 입력했습니다.\n");
	}
	else if (i ==2) {
		printf("2입니다.\n");
	}
	else {
		printf("0,1,2가 아닌 다른 수입니다.\n");
	}
}


/*
	switch문 주의사항
		1. switch문으로 평가할 수 있는 변수는 주로 정수형이다.
			int, unsigned, short 같은 정수형 변수에 대해서만 switch문을 쓸 수 있으며 실수나 사용자 정의형 등은 다중 선택에 사용할 수 없다.
			문자형, 열거형 등은 정수형과 호환되므로 switch문에 사용할 수 있다.
		2. case 다음에는 반드시 정수 상수 하나가 와야 한다.
			변수는 올 수 없으며 범위를 지정할 수도 없다.
			만약 변수값끼리 비교하거나 일정한 범위에 있는지를 보려면 switch문 대신 if문을 사용해야 한다.
		3. case문은 점프 위치를 지정하는 일종의 레이블이기 때문에 순서에 대한 제약은 없다.
			case 0, case 1, case 2 순으로 반드시 정렬할 필요는 없고 원하는 순서대로 작성해도 상관없다.
			default문도 반드시 switch의 끝에만 올 수 있는 것은 아니나 제일 마지막에 두는 것이 보기에 좋고 논리적으로 안정감이 있어 보인다.
		4. default에 대한 처리가 필요치 않으면 생략할 수 있다.
			만약 해당하는 case가 없고 default에 없으면 switch문 전체가 무시된다.
		5. 조건에 맞는 case를 만나면 case 아래에 있는 명령들을 순서대로 실행한다.
			따라서 case 다음에 {}괄호를 싸 줄 필요가 없다.
			대신 case의 끝에는 break를 두어 switch문을 끝내도록 한다.
			만약 break가 없으면 다음 case의 명령까지도 계속 실행한다.
			이런 특성을 이용하면 두 가지 값에 대해 동일한 처리를 할 수 있다.
*/