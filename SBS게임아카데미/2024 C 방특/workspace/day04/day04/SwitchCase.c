#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;
	printf("��1 �Է� >>> ");
	scanf("%d", &a);
	printf("��2 �Է� >>> ");
	scanf("%d", &b);
	printf("1 �Ǵ� 2�Է� >>> ");
	scanf("%d", &c);

	switch (c)
	{
		case 1:
			printf("%d", a + b);
			break;
		case 2:
			printf("%d", a - b);
			break;
		default:
			printf("�߸��� �Է��Դϴ�.");
	}

	return 0;
}