// divisor.c
/*
2. �Է��� ������ ����� ã�Ƴ��� �Լ� get_divisor()�� �ۼ����ּ���. (divisor.c)

<����>
���� �Է� >>> 8
8�� ����� 1 2 4 8 �Դϴ�.
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

void get_divisor(int n);

int main()
{
	printf("���� �Է� >>> ");
	int n;
	scanf("%d", &n);

	get_divisor(n);
	return 0;
}

void get_divisor(int n) {
	printf("%d�� ����� ", n);
	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			printf("%d ", i);
	}
	printf("�Դϴ�.");
	return;
}