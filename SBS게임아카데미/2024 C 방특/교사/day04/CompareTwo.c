// CompareTwo.c

#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2;
	printf("��1�� �Է��ϼ��� >>> ");
	scanf("%d", &num1);

	printf("��2�� �Է��ϼ��� >>> ");
	scanf("%d", &num2);

	if (num1 > num2) {
		printf("%d", num1 * 2);
	}
	else if (num1 < num2) {
		printf("%d", num2 * 3);
	}
	else {
		printf("Same");
	}

	return 0;
}
