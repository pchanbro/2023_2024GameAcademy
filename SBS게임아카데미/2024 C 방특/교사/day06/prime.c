// prime.c
// total-02-03.c �ڵ带 �����Ͽ� �Ű������� ���� 1���� �Ѱ��� ��, �ش� ������ �Ҽ����� �Ǻ��ϴ� �Լ�
// �Ҽ��� 1, �ƴϸ� 0
/*
�Լ��̸�: isPrime
�Ű�����: ���� 1��
��ȯ��: ���� 1��
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int isPrime(int);

int main()
{
	int n;
	printf("���� �Է� >>> ");
	scanf("%d", &n);

	int c = isPrime(n);
	if (c) printf("%d�� �Ҽ��Դϴ�.", n);
	else printf("%d�� �Ҽ��� �ƴմϴ�.", n);
}

int isPrime(int n) {
	int flag = 1;
	for (int j = 2; j * j <= n; j++) {
		if (n % j == 0) {
			flag = 0;
			break;
		}
	}
	return flag;
}

