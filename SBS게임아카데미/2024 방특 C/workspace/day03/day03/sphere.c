#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#define PI 3.1415926

int main()
{
	int radius;
	printf("반지름 입력 >>> ");
	scanf("%d", &radius);

	printf("표면적은 %f\n", 4 * PI * radius * radius);
	printf("부피는 %f\n", 4 / 3 * PI * radius * radius * radius);

	return 0;
}