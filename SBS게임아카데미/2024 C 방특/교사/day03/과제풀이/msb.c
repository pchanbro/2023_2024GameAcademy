/*
2. ���� 1���� �Է¹޾� �ֻ��� ��Ʈ�� 1���� 0���� ������ּ���. (msb.c �� ����)

<����>
���� �Է� >>> 10
�ֻ��� ��Ʈ�� 0

���� �Է� >>> -11
�ֻ��� ��Ʈ�� 1
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include<stdio.h>

int main()
{
	printf("���� �Է� >>> ");

	int n;
	scanf("%d", &n);

	printf("�ֻ��� ��Ʈ�� %d\n", n >= 0 ? 0 : 1);
	printf("�ֻ��� ��Ʈ�� %d\n", (n & (1 << 31)) / (1 << 31));

	printf("������ ��Ʈ�� %d\n", n % 2);
	printf("������ ��Ʈ�� %d\n", n & 1);

	return 0;
}