//??=include <turboc.h>
//
//void main()
//??<
//	int ar[5] = ? ? <1, 2, 3, 4, 5 ? ? >;
//	printf("Trigraph Test ??=1. num is %d\n", ar ?? (1 ? ? ));
//??>

/*
	3중 문자			대체 문자
	??=					#
	??'					^
	??(					[
	??<					{
	??-					~
	??/					\ (백슬래시)
	??!					|
	??)					]
	??<					}
*/


#include <turboc.h>

void main() {
	int ar[5] = { 1, 2, 3, 4, 5 };
	printf("Trigraph Test #1. num is %d\n", ar[1]);
}