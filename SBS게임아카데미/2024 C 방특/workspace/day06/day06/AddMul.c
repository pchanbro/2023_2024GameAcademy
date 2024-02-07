#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int total = 1;
	
	for (int i = a; i <= b; i++)
	{
		int sum = 0;
		for (int j = 1; j <= i; j++)
			sum += j;
		total *= sum;
	}
	printf("%d\n", total);

	return 0;
}