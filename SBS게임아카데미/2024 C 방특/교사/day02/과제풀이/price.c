/*
1. ����ڷκ��� ��ǰ�� �ܰ��� ���� ������ �Է¹޾� �� ���� �ݾ��� ������ ����ϴ� ���α׷��� �ۼ��ϼ���. (price.c �� ����)

<����>
�ܰ� �Է� >>> 10000
���� �Է� >>> 5
�� �ݾ��� 50000��
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;
	printf("�ܰ� �Է� >>> ");
	scanf("%d", &a);

	printf("���� �Է� >>> ");
	scanf("%d", &b);

	printf("�� �ݾ��� %d��", a * b);
	return 0;
}
