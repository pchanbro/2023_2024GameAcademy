#include <stdio.h>
#include <stdbool.h>

int main()
{
	char c1 = 'a';
	char c2 = 'A';
	printf("%c %c \n", c1, c2); // 문자 -> 문자출력
	printf("%d %d \n", c1, c2); // 문자는 정수로 대응이 된다. 문자 -> 숫자출력
	printf("%f %f \n", c1, c2); // 문자는 실수로는 대응되지 않는다. 결과 0.00000나옴

	short s1 = 30000;
	short s2 = 60000; // overflow short의 양수 범위를 벗어남 (~ 32767)
	short s3 = -40000; // underflow short의 음수 범위를 벗어남 (~ -32768)
	// 32767 다음 수는 -32768이 된다. 다시 가장 작은 수로 넘어가 거기부터 시작.
	// -32768 = 32768
	// 32767 = -32769
	// 이런 방식으로 -25536 = 40000
	printf("%d %d %d\n", s1, s2, s3);

	int i1 = 2000000000;
	// int i2 = 3000000000; int는 overflow 안되고 그냥 오류가 뜬다
	// int i3 = -3000000000; underflow도 마찬가지
	printf("%d\n", i1);
	printf("int -> long : %lld\n", i1); // int - > long 변환은 제대로 안된다

	long long l1 = 9220000000000000000L;
	printf("%lld\n", l1);
	printf("long -> int : %d\n", l1); // long -> int 변환도 제대로 안된다.

	float f1 = 3.1415926;
	printf("%f\n", f1); // 그냥 %f하면 소수점 6자리까지만 나온다.
	printf("float -> double : %lf\n", f1);

	double d1 = 3.1415926;
	printf("%lf\n", d1); // 그냥 %f하면 소수점 6자리까지만 나온다.
	printf("double -> float : %f", d1);

	bool b1 = true;
	printf("%d\n", b1);

	// void v1; void는 변수를 만들 수 없다.


	return 0;
}