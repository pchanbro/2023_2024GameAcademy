#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	char c1 = 'a';
	char c2 = 'A';
	printf("%c %c\n", c1, c2); // 문자 -> 문자
	printf("%d %d\n", c1, c2); // 문자 -> 정수
	// printf("%f %f\n", c1, c2);

	short s1 = 30000;
	short s2 = 40000; // overflow
	short s3 = -40000; // underflow
	printf("%d %d %d\n", s1, s2, s3);

	int i1 = 2000000000;
	// int i2 = 3000000000;
	// int i3 = -3000000000;
	printf("%d\n", i1);
	printf("int -> long: %lld\n", i1);

	long long l1 = 9220000000000000000;
	printf("%lld\n", l1);
	printf("long -> int: %d\n", l1);

	float f1 = 3.1415926;
	printf("%f\n", f1);
	printf("float -> double: %lf\n", f1);

	double d1 = 3.1415926;
	printf("%lf\n", d1);
	printf("double -> float: %f\n", d1);

	bool b1 = true;
	printf("%d\n", b1);

	// void v1;

	return 0;
}