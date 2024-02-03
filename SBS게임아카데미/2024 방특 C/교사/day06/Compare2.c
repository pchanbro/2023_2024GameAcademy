// Compare2.c
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	while (1) {
		int a, b;
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0)
			break;
		if (a > b) puts("Yes");
		else puts("No");
	}
	return 0;
}