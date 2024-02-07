// ArithmeticOperator.c
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);

	printf("%d %d %d %d %d\n",
		a+b, a-b, a*b, a/b, a%b);


	double c, d;
	scanf("%lf", &c);
	scanf("%lf", &d);

	printf("%lf %lf %lf %lf\n",
			c+d, c-d, c*d, c/d);


	printf("%lf %lf %lf %lf\n",
		c + a, c - a, c * a, c / a);

	printf("%d %d %d %d\n",
		c + a, c - a, c * a, c / a);

	while (getchar() != '\n');

	char e, f;
	scanf("%c%c", &e, &f);
	printf("%d %d %d %d\n",
		e + f, e - f, e * f, e / f);
	// printf("%s %s %s %s\n",
	//	e + f, e - f, e * f, e / f);

	return 0;
}