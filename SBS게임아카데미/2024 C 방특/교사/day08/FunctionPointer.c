#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int maxNum(int, int);
int minNum(int, int);
int sumNum(int, int);
int absNum(int, int);
int choose(int, int, int(*)(int, int));

int main()
{
	int num1, num2;
	printf("�� �� �Է� >>> ");
	scanf("%d %d", &num1, &num2);

	int big = choose(num1, num2, maxNum);
	printf("�� �� �� ū ��: %d\n", big);
	// ���� ��
	int small = choose(num1, num2, minNum);
	printf("�� �� �� ���� ��: %d\n", small);
	// �� �� ��
	int sum = choose(num1, num2, sumNum);
	printf("�� �� ��: %d\n", sum);
	// �� �� ���� ����
	int abs = choose(num1, num2, absNum);
	printf("�� �� �� ����: %d\n", abs);
	return 0;
}

int choose(int a, int b, int(*fp)(int p, int q)) {
	return fp(a, b);
}
 
int maxNum(int a, int b) {
	return a > b ? a : b;
}

int minNum(int a, int b) {
	return a < b ? a : b;
}

int sumNum(int a, int b) {
	return a + b;
}

int absNum(int a, int b) {
	return a > b ? a - b : b - a;
}