#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	if (n < 0) 
		printf("�����Դϴ�.");
	else if (n == 0) 
		printf("0�Դϴ�.");
	else 
		printf("����Դϴ�.");

	return 0;
}