#pragma warning(disable:4996)
#define _CRT_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	// �ܰ��� ������ �Է��ϸ� �� �ݾ��� ��Ÿ���� ���α׷�
	int price, num;
	printf("�ܰ� �Է� >>> ");
	scanf("%d", &price);
	printf("���� �Է� >>> ");
	scanf("%d>>> ", &num);

	printf("�� �ݾ��� %d��\n", price * num);

	return 0;
}