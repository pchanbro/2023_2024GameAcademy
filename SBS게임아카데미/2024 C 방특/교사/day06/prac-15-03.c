// prac-15-03.c
/*
237������ 3��
�� ���� ������ �Ű������� �Է¹޾�, �Է¹��� ���� �� ������ 200 �� ū ���� ���̿� 7�� ����� �� ���� �����ϴ��� ���ϰ� �� ����� ��ȯ�ϴ� �Լ�

�Լ��̸�: sevens
�Ű�����: ����1��
��ȯ��: ����1��
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int sevens(int);

int main()
{
	int n;
	printf("������ �Է��ϼ��� >>> ");
	scanf("%d", &n);
	int c = sevens(n);
	printf("%d�� %d ���� 7�� ����� %d���Դϴ�!", n, n + 200, c);
	return 0;
}

int sevens(int n) {
	int count = 0;
	for (int i = n + 1; i < n + 200; i++) {
		if (i % 7 == 0)
			count ++;
	}
	return count;
}