#pragma warning(disable:4996)
#define _CRT_SECURE_WANINIGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	

	int n;
	printf("���� �Է� >>> ");
	scanf("%d", &n);

	printf("%d�� %s��.", n, n % 2 == 0? "¦��" : "Ȧ��");

	n % 2 == 0 ? printf("%d�� ¦����.\n", n) : printf("%d�� Ȧ����.\n", n);

	// ������ �Է� �޾Ƽ�
	// 3�� ��� -> 3�� ����Դϴ�.
	// ������ 1 -> �������� 1 �Դϴ�.
	// ������ 2 -> �������� 2 �Դϴ�.
	int m;
	printf("���� �Է� >>> ");
	scanf("%d", &m);

	m % 3 == 0 ? printf("%d�� 3�� ����Դϴ�.\n", m) : m % 3 == 1 ? printf("%d�� �������� 1�Դϴ�.\n", m) : printf("%d�� �������� 2�Դϴ�.\n", m);

	// ���� = 0, ���� = 1, �� = 2
	// ������������ �Է��ϼ��� >>> 
	// ��ǻ�Ͱ� ������ ����
	// �̰���ϴ�, �����ϴ�, �����ϴ�.
	int j;
	printf("������������ �Է��ϼ���(���� = 0, ���� = 1, �� = 2) >>> ");
	scanf("%d", &j);

	j % 3 == 0 ? printf("�����ϴ�.\n") : j % 3 == 1 ? printf("�̰���ϴ�.\n", m) : printf("�����ϴ�.\n", m);

	/*
	* CPU�� �Է��� �������� �ٲ㺸��
	* #include <stdlib.h>, #include <time.h>
	* �����Լ��� �� ���� : srand(time(NULL));
	* int cput = rand() %3;
	*/ 
	int user;
	int cpu = rand() % 3;
	printf("������������ �Է��ϼ���(���� = 0, ���� = 1, �� = 2) >>> ");
	scanf("%d", &user);
	cpu == user ? printf("�����ϴ�.") : cpu > user || cpu == 0 && user == 2 ? printf("�����ϴ�") : printf("�̰���ϴ�.");

	return 0;
}