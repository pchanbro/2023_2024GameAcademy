// 98������ 2��
// ����ڷκ��� ���̿� Ű�� �Է¹޾�
// ���̰� 12�� �̻��̰� Ű�� 120cm �̻��� ����
// ���̱ⱸ�� ž���� �� �ֵ��� ����ϴ� ���α׷�

// ���̸� �Է��ϼ��� >>>
// Ű�� �Է��ϼ��� >>>
// "���̱ⱸ�� ž���� �� �ֽ��ϴ�" �Ǵ�
// "���̱ⱸ�� ž���� �� �����ϴ�"
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int age, height;
	printf("���̸� �Է��ϼ��� >>> ");
	scanf("%d", &age);

	printf("Ű�� �Է��ϼ��� >>> ");
	scanf("%d", &height);

	printf("���̱ⱸ�� ž���� �� ");
	age >= 12 && height >= 120
		? printf("��")
		: printf("��");
	printf("���ϴ�.");

	return 0;
}
