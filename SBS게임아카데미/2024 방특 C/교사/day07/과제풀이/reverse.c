// reverse.c
/*
2. �����͸� �̿��� 5���� �Ǽ��� ������ �迭�� �Լ��� �����ϰ�, �迭�� �Ųٷ� ������ּ���. (reverse.c)

<����>
�迭 �� �Է� >>> 3.14 2.71 1.41 1.73 2.0
�Ųٷ� ��� �ϸ� 2.00 1.73 1.41 2.71 3.14
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include<stdio.h>

void reverse(double d[], int size) {
	printf("�Ųٷ� ��� �ϸ� ");
	for (int i = size - 1; i >= 0; i--) {
		printf("%.2f ", d[i]);
	}
	puts("");
	for (int i = size - 1; i >= 0; i--) {
		printf("%p ", d + i);
	}
}

int main()
{
	double d[5] = { 1, 2, 3, 4, 5 };
	// printf("�迭 �� �Է� >>> ");
	// for (int i = 0; i < 5; i++) {
	//	scanf("%f", &d[i]);
	reverse(d, 5);

	return 0;
}