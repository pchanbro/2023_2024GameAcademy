/*
2. 100���� �����Ͽ� Ư�� ������ �Է��ϸ� ��� ���� ���ٰ� 0 ���Ϸ� �������� �����ϴ� ���α׷��� �ۼ����ּ���. (Hundred.c)
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int value = 100;
	while (value > 0) {
		printf("���� �� = %d\n", value);
		printf("���� �Է� >>> ");

		int n;
		scanf("%d", &n);
		value -= n;
	}

	return 0;
}