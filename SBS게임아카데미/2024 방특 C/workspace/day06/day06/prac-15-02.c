// �� ���� ������ �Ű������� �޾� �� ���� ���̿� �ִ� ��� ������ ���� ���Ͽ� ��ȯ�ϴ� �Լ��� ����
// main �Լ����� ȣ���Ͽ� ���
// �Լ� ����, ���� ���� �ۼ�
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int rangeSum(int, int);

int main()
{
	int a, b;
	printf("�� ���� ������ �Է��ϼ��� >>> ");
	scanf("%d %d", &a, &b);

	int value = rangeSum(a, b);
	printf("%d�� %d ������ ���� ���� : %d", a, b, value);

	return 0;
}

int rangeSum(int a, int b)
{
	int sum = 0;
	for (int i = a + 1; i < b; i++)
	{
		sum += i;
	}
	return sum;
}