#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int n;
	do {
		printf("���� �Է� >>> ");
		scanf("%d", &n);
	} while (n != 0);

	printf("����Ǿ����ϴ�.");

	int m;
	while (true) //while (m != 0) �̷��� �Ϸ��� m�� �ʱ�ȭ ������� �Ѵ�.
	{
		scanf("%d", &m);
		if (m == 0) break;
	}
	return 0;
}