// info.c
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int age;
	char gender;
	char name[20];

	printf("�̸� �Է� >>> ");
	scanf("%s", name);

	while (getchar() != '\n'); // ���� ����

	printf("���� �Է� (m, f) >>> ");
	gender = getchar();

	printf("���� �Է� >>> ");
	scanf("%d", &age);

	printf("\n%s (%c, %d)", name, gender, age);

	return 0;
}