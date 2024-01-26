// ArithmerticOperator.c
#pragma warning(disable:4996)
#define _CRT_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);

	printf("%d %d %d %d %d\n", a + b, a - b, a * b, a / b, a % b);

	double c, d;
	scanf("%lf", &c);
	scanf("%lf", &d);

	printf("%lf %lf %lf %lf\n", c + d, c - d, c * d, c / d);

	printf("%lf %lf %lf %lf\n", c + a, c - a, c * a, c / a); // 실수랑 정수랑 계산하면 결과는 실수로 나옴

	printf("%d %d %d %d\n", c + a, c - a, c * a, c / a); // 정수로 내보겠다고 실수결과를 이렇게 %d로 표현하면 메모리값이 출력됨

	while (getchar() != '\n');

	char e, f;
	scanf("%c%c", &e, &f);
	printf("%d %d %d %d\n", e + f, e - f, e * f, e / f);
	printf("%c %c %c %c\n", e + f, e - f, e * f, e / f); // 문자에 숫자를 넣으려 하면 값이 깨져서 나옴
	printf("%s %s %s %s\n", e + f, e - f, e * f, e / f); // 문자열에 숫자를 넣으려 하면 아예 출력이 발생 안함



	return 0;
}