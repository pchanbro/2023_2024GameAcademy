/*
2. ����ڷκ��� 3���� ���ڸ� �Է¹޾� �������� ����ϴ� ���α׷��� �ۼ��ϼ���. (charinput.c �� ����)

<����>
����1�Է� >>> a
����2�Է� >>> b
����3�Է� >>> c
���� ����� c b a
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	printf("����1�Է� >>> ");
	char a = getchar();
	getchar();

	printf("����2�Է� >>> ");
	char b = getchar();
	getchar();

	printf("����3�Է� >>> ");
	char c = getchar();
	getchar();

	printf("���� ����� %c %c %c", c, b, a);
	return 0;
}