#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	printf("���� �Է� >>> ");
	scanf("%d", &num);

	printf("�ֻ��� ��Ʈ�� %d\n", !(num >= 0));

	while (getchar() != '\n');

	int num2;
	printf("���� �Է� >>> ");
	scanf("%d", &num2);

	printf("�ֻ��� ��Ʈ�� %d", !(num2 >= 0));

	return 0;
}