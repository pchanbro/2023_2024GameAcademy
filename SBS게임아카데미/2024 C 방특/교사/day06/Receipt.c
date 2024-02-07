// Receipt.c
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int price, count;
	printf("총 금액 >>> ");
	scanf("%d", &price);
	printf("개수 >>> ");
	scanf("%d", &count);

	int sum = 0;
	for (int i = 0; i < count; i++) {
		int a, b;
		printf("단가, 수량 >>> ");
		scanf("%d %d", &a, &b);
		sum += a * b;
	}

	if (sum == price) printf("Yes");
	else printf("No");

	return 0;
}