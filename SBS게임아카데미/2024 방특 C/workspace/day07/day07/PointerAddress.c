#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int a[5] = { 11, 22, 33, 44, 55 };
	double b[5] = { 3.14, 2.71, 1.41, 1.73, 2.0 };

	int* p = a;
	printf("p = %p -> %d\n", p, *p);
	p++;
	printf("p = %p -> %d\n", p, *p);

	*p++; // �̷��� �ּҿ� �������� ���� �������� >> ++�� �� �켱�� �Ǿ� �ּҿ� ��������
	printf("p = %p -> %d\n", p, *p);
	(*p)++; // �̷��� �ϸ� ���� ��������.
	printf("p = %p -> %d\n", p, *p);
	*++p; // �̷��� �ּҿ� ��������
	printf("p = %p -> %d\n", p, *p);
	++*p; // �̷��� ���� ��������
	printf("p = %p -> %d\n", p, *p);

	double* q = b;
	printf("q = %p\n", q);
	q++;
	printf("q = %p\n", q);


	return 0;
}