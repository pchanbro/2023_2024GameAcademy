#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reversePrintArr(double[]);

int main()
{
	double num[5];
	printf("�迭 �� �Է� >>> ");
	for (int i = 0; i < 5; i++)
	{
		scanf("%lf", &num[i]);
	}

	reversePrintArr(num);

	return 0;
}

void reversePrintArr(double num[])
{
	printf("�Ųٷ� ��� �ϸ�");
	for (int i = 4; i >= 0; i--)
	{
		printf("%.2lf ", num[i]);
	}
}