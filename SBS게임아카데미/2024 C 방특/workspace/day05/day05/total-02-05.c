// �Ǻ���ġ ���� ���ϱ� 
// ���� �Է¹޾� �ش� ���� �´� �Ǻ���ġ ���� ���� ���
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	long long pibo1 = 1, pibo2 = 1, temp;

	printf("���� �Է��ϼ��� >>> ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("%lld ", pibo2);
		temp = pibo2;
		pibo2 += pibo1;
		pibo1 = temp;
	}

	return 0;
}