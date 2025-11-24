/*
	기존 타입들로부터 사용자가 새로운 타입을 정의하는 방법
	typedef 타입정의 타입이름;
*/

typedef int jungsoo;
// 실용성은 별로 없지만 jungsoo라는 이름으로 int 형에 대한 단순한 별명을 만든 것이다.
int i;
jungsoo i;
// 둘 다 똑같은 변수이다.


typedef enum { True, False } Bool;
/*
	True, False를 멤버로 가지는 열거형을 Bool이라는 이름의 사용자 정의형 타입으로 새로 만들었다.
	이렇게 타입을 정의해 놓으면 다음부터는 Bool형의 변수를 언제든지 선언할 수 있다.
	사용자가 만든 타입도 int나 double 같은 기본형과 완전히 동일하며 기본형이 올 수 있는 모든 곳에 사용자 정의형도 올 수 있다.
*/
Bool Male;
void main() {
	Male = True;
}




typedef int *pint;
/*
	pint는 정수형 포인터 타입이며 arint는 크기 10의 정수형 배열 타입이다.
	타입이름이 반드시 끝에만 나오는 것은 아니다.
*/



typedef int arint[10];
typedef struct { int a; double b; } myst;


/*
	X형의 데이터 타입을 정의하는 방식은 요령만 알면 간단하다.
	X형 변수를 선언하는 문장에서 변수를 타입명으로 바꾸고 앞에 typedef 키워드만 붙이면 된다.
*/