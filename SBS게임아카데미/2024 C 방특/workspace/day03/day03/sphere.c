#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#define PI 3.1415926

int main()
{
	int radius;
	printf("������ �Է� >>> ");
	scanf("%d", &radius);

	printf("ǥ������ %f\n", 4 * PI * radius * radius);
	printf("���Ǵ� %f\n", 4 / 3 * PI * radius * radius * radius);

	return 0;
}