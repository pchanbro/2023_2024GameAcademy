#include <stdio.h>

int main()
{
	double n = 3.14;
	double* p = &n;
	double** dp = &p;

	// n의 주소값 출력 3가지 방식
	printf("%p %p %p\n", &n, p, *dp);

	// n의 값 출력 3가지 방식
	printf("%.2f %.2f %.2f", n, *p, **dp);
	return 0;
}