#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_divisor(int);

int main()
{
	int num;
	printf("���� �Է� >>> ");
	scanf("%d", &num);
	get_divisor(num);
	return 0;
}

void get_divisor(int num)
{
	printf("%d�� ����� ", num);
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
			printf("%d ", i);
	}
	printf("�Դϴ�\n");
}