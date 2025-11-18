#include <turboc.h>

void main() 
{
	double Num1, Num2;
	double *pd;

	Num1 = 3.14;
	pd = &Num1;
	Num2 = *pd;
	printf("Num2의 값은 %f입니다.\n", Num2);
	Num2 = Num2 * 2;
	printf("Num1의 값은 %f입니다.\n", Num1);
	printf("Num2의 값은 %f입니다.\n", Num2);
}