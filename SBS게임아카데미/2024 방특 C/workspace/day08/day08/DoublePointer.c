#include <stdio.h>

int main()
{
	double n = 3.14;
	double* p = &n;
	double** dp = &p;

	// n�� �ּҰ� ��� 3���� ���
	printf("%p %p %p\n", &n, p, *dp);

	// n�� �� ��� 3���� ���
	printf("%.2f %.2f %.2f", n, *p, **dp);
	return 0;
}