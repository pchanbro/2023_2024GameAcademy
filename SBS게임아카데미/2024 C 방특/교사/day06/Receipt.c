// Receipt.c
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int price, count;
	printf("�� �ݾ� >>> ");
	scanf("%d", &price);
	printf("���� >>> ");
	scanf("%d", &count);

	int sum = 0;
	for (int i = 0; i < count; i++) {
		int a, b;
		printf("�ܰ�, ���� >>> ");
		scanf("%d %d", &a, &b);
		sum += a * b;
	}

	if (sum == price) printf("Yes");
	else printf("No");

	return 0;
}