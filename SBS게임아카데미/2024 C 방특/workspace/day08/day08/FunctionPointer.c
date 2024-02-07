#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include<stdio.h>


int maxNum(int, int);
int minNum(int, int);
int sumNum(int, int);
int abvalue(int, int);
int choose(int, int, int(*)(int, int));

int main()
{
	int num1, num2;
	printf("두 값 입력 >>> ");
	scanf("%d %d", &num1, &num2);

	int big = choose(num1, num2, maxNum);
	printf("max = %d\n", big);
	int small = choose(num1, num2, minNum);
	printf("min = %d\n", small);
	int sum = choose(num1, num2, sumNum);
	printf("sum = %d\n", sum);
	int abs = choose(num1, num2, abvalue);
	printf("abs = %d\n", abs);
	return 0;
}

int maxNum(int num1, int num2)
{
	int max = num1;

	if (max < num2)
		max = num2;

	return max; // 한줄로 num1 > num2? num1 : num2 하면 됨
}

int minNum(int num1, int num2)
{
	return num1 < num2 ? num1 : num2;
}

int sumNum(int num1, int num2)
{
	return num1 + num2;
}

int abvalue(int num1, int num2)
{
	return num1 > num2 ? num1 - num2 : num2 - num1;
}

int choose(int a, int b, int(*fp)(int p, int q))
{
	return fp(a, b);
}