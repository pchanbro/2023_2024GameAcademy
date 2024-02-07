// PointerAddress.c

#include <stdio.h>

int main()
{
	int a[5] = { 11, 22, 33, 44, 55 };
	double b[5] = { 3.14, 2.71, 1.41, 1.73, 2.0 };

	int* p = a;
	printf("p = %p\n", p);
	p++;
	printf("p = %p\n", p);

	*p++; // ++ > *
	printf("p = %p -> %d\n", p, *p);
	(*p)++;
	printf("p = %p -> %d\n", p, *p);
	*++p;
	printf("p = %p -> %d\n", p, *p);
	++*p;
	printf("p = %p -> %d\n", p, *p);


	double* q = b;
	printf("q = %p\n", q);
	q++;
	printf("q = %p\n", q);




	return 0;
}