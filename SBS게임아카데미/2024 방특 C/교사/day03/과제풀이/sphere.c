/*
 1. ��� PI (3.1415926) �� ���� ��, ����ڷκ��� �������� �Է¹޾� ���� ǥ������ ���Ǹ� ����ϴ� ���α׷��� �ۼ����ּ���. (sphere.c �� ����)

	<����>
	������ �Է� >>> 10
	ǥ������ 1256.637040
	���Ǵ� 3141.592600
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include<stdio.h>
#define PI 3.1415926

int main()
{
	// const double PI = 3.1415926;
	printf("������ �Է� >>> ");

	double radius;
	scanf("%lf", &radius);

	printf("ǥ������ %f\n", (4 * PI * radius * radius));
	printf("���Ǵ� %f", (4 / 3 * PI * radius * radius * radius));
}