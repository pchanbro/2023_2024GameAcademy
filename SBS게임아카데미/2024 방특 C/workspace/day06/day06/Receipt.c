#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int objNum, totalPrice;
	int calPrice = 0;
	printf("�� �ݾ� >>> ");
	scanf("%d", &totalPrice);

	printf("���� ���� �� >>> ");
	scanf("%d", &objNum);

	for (int i = 1; i <= objNum; i++)
	{
		int obj, price;
		printf("%d��° ������ ���ݰ� ���� >>> ",i);
		scanf("%d %d", &obj, &price);
		calPrice += obj * price;
	}

	if (totalPrice == calPrice)
		printf("YES");
	else
		printf("NO");

	return 0;
}