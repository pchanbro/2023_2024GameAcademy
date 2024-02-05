// DoublePointer.c
#include <stdio.h>

int main()
{
	double n = 3.14;
	double* p = &n;
	double** dp = &p;

	// n의 주소값은? 3가지 방식으로
	printf("%p %p %p\n", &n, p, *dp);

	// n의 값은? 3가지 방식으로
	printf("%f %f %f\n", n, *p, **dp);

	return 0;
}