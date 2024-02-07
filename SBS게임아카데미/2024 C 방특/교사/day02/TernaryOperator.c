// TernaryOperator.c
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	int n;
	printf("���� �Է� >>> ");
	scanf("%d", &n);

	printf("%d�� %s��.", n, n%2==0?"¦��":"Ȧ��");

	n % 2 == 0 
		? printf("%d�� ¦����.", n)
		: printf("%d�� Ȧ����.", n);

	// ������ �Է� �޾Ƽ�
	// 3�� ��� -> 3�� ����Դϴ�.
	// ������ 1 -> �������� 1�Դϴ�.
	// ������ 2 -> �������� 2�Դϴ�.
	n % 3 == 0
		? printf("3�� ����Դϴ�.")
		: printf("�������� %d�Դϴ�.", n % 3);

	// ���� = 0, ���� = 1, �� = 2
	// ������������ �Է��ϼ��� >>> _
	// ��ǻ�Ͱ� ������ ������ ���� ������
	// �̰���ϴ�, �����ϴ�, �����ϴ�
	printf("������������ �Է��ϼ��� >>> ");
	int user;
	scanf("%d", &user);
	user == 0
		? printf("�����ϴ�.")
		: user == 1
			? printf("�̰���ϴ�.")
			: printf("�����ϴ�.");

	/*
	* CPU�� �Է��� �������� �ٲ㺸��
	* #include <stdlib.h>, #include <time.h>
	* �����Լ��� �� ����: srand(time(NULL));
	* int cpu = rand() % 3;
	*/
	// �� ���: cpu = 0, 2 / cpu = 1, 0 / 2, 1
	int cpu = rand() % 3;
	cpu == user
		? printf("�����ϴ�.")
		: cpu > user || cpu == 0 && user == 2
			? printf("�����ϴ�.")
			: printf("�̰���ϴ�.");

	return 0;
}