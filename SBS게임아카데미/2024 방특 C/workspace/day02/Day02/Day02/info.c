#pragma warning(disable:4996)
#define _CRT_SECURE_WANINIGS
#include <stdio.h>

int main()
{
	int age;
	char gender, initial;
	char name[20];

	printf("�̸��� �̴ϼ� �Է� >>> ");
	initial = getchar();

	while (getchar() != '\n');

	printf("�̸� �Է� >>> ");
	scanf("%s", name);  ///���ڿ��� &�� ������ �ʴ´�.

	while (getchar() != '\n'); // ���� ���� ���ڿ��� ���ڿ� ���̿��� �̰� �ʿ�

	printf("���� �Է� (m, f) >>> ");
	gender = getchar();

	printf("���� �Է� >>> ");
	scanf("%d", &age);

	printf("\n%c %s (%c, %d)", initial, name, gender, age);
}