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

	// PI = 4; ������, CONST ����� ������ �Ұ���

	printf("���� ���̴� : %lf\n", PI * radius * radius);

	// PERSONS = 20; ��ó���� ����� ���� �Ұ���

	printf("����� �� = %d\n", PERSONS);

	{ // ������ scope
		const int a = 10;
		printf("%d\n", a);
	}
	// printf("%d\n", a); const int a �� ���� ��� �ȿ����� ��� �����ϱ� ������ ���⼭ ����ϸ� ���� �߻�



	return 0;
}