// total-02-05.c
/*
145������ 5��
1 1 2 3 5 8 13 21 ...
�ֱ� �� ���� ���� ���� ����� ���� �Ǻ���ġ ����
���� 1�� �Է¹޾Ƽ� �ش� ����ŭ�� �Ǻ���ġ ������ ���
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	long long a = 1;
	long long b = 1;
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		printf("%lld ", a);
		long long c = a + b;
		a = b;
		b = c;
	}
	return 0;
}