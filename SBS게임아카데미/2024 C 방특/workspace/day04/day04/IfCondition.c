#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("������ �Է��ϼ��� >>> ");

	scanf("%d", &n);

	if (n == 0)
	{
		printf("0�Դϴ�."); // �߰�ȣ ���� 1���̸� ���� ����
	}
	if (n > 0)
		printf("����Դϴ�.");
	if (n < 0)
		printf("�����Դϴ�.");

	if (n == 0)
		printf("0�Դϴ�.");
	else
		printf("0�� �ƴմϴ�.");

	return 0;
}