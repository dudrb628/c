#include <turboc.h>
//#include <limits.h>

int main() {
	//printf("\n int : %d", sizeof(int));			// 4바이트 (32비트)
	//printf("\n short : %d", sizeof(short));		// 2바이트 (16비트)
	//printf("\n long : %d", sizeof(long));		// 4바이트 (32비트)

	__int64 a, b, c;

	a = 111111111;
	b = 111111111;
	c = a * b;
	printf("%I64d\n", c);	// 12345678987654321
	// printf로 64비트 정수를 출력하려면 %I64d 서식 사용
}