#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reversePrintArr(double[]);

int main()
{
	double num[5];
	printf("배열 값 입력 >>> ");
	for (int i = 0; i < 5; i++)
	{
		scanf("%lf", &num[i]); // 여기서 %f로 받으면 이상한 값이 출력됨
	}

	reversePrintArr(num);

	return 0;
}

void reversePrintArr(double num[])
{
	printf("거꾸로 출력 하면");
	for (int i = 4; i >= 0; i--)
	{
		printf("%.2f ", num[i]);
	}
}