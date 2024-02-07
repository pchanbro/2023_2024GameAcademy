// PointerArray.c

#include <stdio.h>

int main()
{
	int a[3] = { 1, 2, 3 };
	printf("a �ּ� = %p\n", a);
	printf("a[0] �ּ� = %p\n", &a[0]);
	printf("a[1] �ּ� = %p\n", &a[1]);
	printf("a[2] �ּ� = %p\n", &a[2]);

	double b[3] = { 3.14, 2.71, 1.41 };
	printf("b �ּ� = %p\n", b);
	printf("b[0] �ּ� = %p\n", &b[0]);
	printf("b[1] �ּ� = %p\n", &b[1]);
	printf("b[2] �ּ� = %p\n", &b[2]);

	printf("a[0] = %d %d %d %d\n"
		, a[0], *&a[0], *a, *&*a);

	b[0] += 10;
	*&b[0] += 10;
	*b += 10;
	*&*b += 10;
	printf("b[0] = %f %f %f %f\n"
		, b[0], *&b[0], *b, *&*b);


	return 0;
}