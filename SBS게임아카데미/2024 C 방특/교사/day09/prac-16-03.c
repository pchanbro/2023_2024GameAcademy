// 251������ 3��
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int recursiveSum(int n) {
	// ���ڷ� �ް��ִ� n�� 0�� �ɶ����� ����ؼ� ���� ���� ���� ������� ȣ�� -> ��� ȣ�� (�Լ� ������ �� �Լ��� ȣ��)
	// ��Ʈ: ���� 247������

	// int sum = 0;
	// for (int i = 1; i <= n; i++) sum += i;
	// return sum;

	// (1~n) = n + (1~n-1)

	if (n < 0)
		return 0;
	return n + recursiveSum(n - 1);
}

int main()
{
	int n;
	printf("n�� �Է����ּ��� >>> ");
	scanf("%d", &n);
	int result = recursiveSum(n);
	printf("1���� n������ �� = %d", result);
	return 0;
}