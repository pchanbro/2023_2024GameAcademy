// Pointer.c
#include <stdio.h>

int main()
{
	int a = 5;
	int* p = &a;
	printf("a = %d\n", a);
	printf("p = %p %p\n", p, &a);

	double b = 3.14;
	double* q = &b;
	printf("b = %f\n", b);
	printf("q = %p %p\n", q, &b);

	printf("int* = %zd, double* = %zd\n",
		sizeof(p), sizeof(q));
	printf("void* = %zd\n", sizeof(void*));

	int c = 10;
	int* r = &c;
	printf("c = %d, r = %p\n", c, r);

	*r = 20;
	printf("c = %d, r = %p\n", c, r);

	*&c = 30;
	printf("c = %d, r = %p\n", c, r);

	*&*&c = 40;
	printf("c = %d, r = %p\n", c, r);

	return 0;
}