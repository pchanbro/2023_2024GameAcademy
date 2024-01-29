#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#define PERSONS 10

int main()
{
	const double PI = 3.14;
	double radius;
	printf("반지름을 입력하세요 >>> ");
	scanf("%lf", &radius);

	// PI = 4; 오류남, CONST 상수는 수정이 불가능

	printf("원의 넓이는 : %lf\n", PI * radius * radius);

	// PERSONS = 20; 전처리기 상수도 수정 불가능

	printf("사람의 수 = %d\n", PERSONS);

	{ // 스코프 scope
		const int a = 10;
		printf("%d\n", a);
	}
	// printf("%d\n", a); const int a 는 위의 블록 안에서만 사용 가능하기 때문에 여기서 출력하면 오류 발생



	return 0;
}