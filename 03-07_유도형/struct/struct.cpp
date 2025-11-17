#include <stdio.h>

/*
	구조체 선언

	struct {
		멤버 목록
	} 변수명;
*/


struct {
	char Name[10];
	int Age;
	double Height;
} Friend;


void main() {
	Friend.Age = 28;
	printf("내 친구 나이는 %d이다", Friend.Age);
}