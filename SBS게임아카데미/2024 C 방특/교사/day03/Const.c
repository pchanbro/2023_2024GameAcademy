// Const.c
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#define PERSONS 10

int main()
{
	const double PI = 3.14;
	double radius;
	printf("�������� �Է��ϼ��� >>> ");
	scanf("%lf", &radius);

	printf("���� ���̴� %lf\n", PI * radius * radius);

	printf("����� �� = %d\n", PERSONS);

	{ // ������ scope
		const int A = 10;
		printf("%d %d\n", A, PERSONS);
	}

	// printf("%d", A); -> ��� �Ұ���

	return 0;
}