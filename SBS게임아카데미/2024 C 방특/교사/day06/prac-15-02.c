// prac-15-02.c
/*
237������ 2��
1) �� ���� ������ �Ű������� �޾� �� ���� ���̿� �ִ� ��� ������ ���� ���Ͽ� ��ȯ�ϴ� �Լ��� ����
2) main �Լ����� ȣ���Ͽ� ���

�Լ��̸�: rangeSum
�Ű�����: ���� 2��
��ȯ��: ���� 1��

�Լ� ����, �Լ� ���� ���� �ۼ�
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int rangeSum(int, int);

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int value = rangeSum(a, b);
	printf("%d�� %d ������ ������ ������ : %d\n", a, b, value);
	return 0;
}

int rangeSum(int a, int b) {
	// int sum = 0;
	// for (int i = a + 1; i < b; i++)
	//	sum += i;
	// return sum;
	int sumB = (b - 1) * b / 2;
	int sumA = a * (a + 1) / 2;
	return sumB - sumA;
}