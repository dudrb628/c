
/*
	* : 포인터가 가리키는 번지의 값을 읽는다.
		*는 뒤쪽의 명칭이 포인터 변수임을 지정하는 구두점이다.
	& : 변수가 기억되어 있는 메모리 번지를 읽는다.
*/

#include <turboc.h>

void main() {
	int Num = 629;
	int *pi;

	pi = &Num;
	printf("Num의 값은 %d입니다.\n", *pi);

	printf("Num의 번지수는 %d입니다.\n", &Num);
	printf("pi의 값은 %d입니다.\n", pi);
	/*
	printf("pi의 번지수는 %d입니다.\n", &pi);
	printf("Num은 %d입니다.\n", Num);
	*pi = 628;
	printf("*pi 값에 628 할당 후 Num은 %d입니다.\n", Num);
	*/


	/*
		pi = 60; 포인터는 할당안되네. *붙여야되네
		pi에는 *를 붙이고 Num에는 &를 붙이네
	*/
}