// comma.c
/*
1. ���ڿ� 2���� �Է��Ͽ�, �� ���ڿ� ���̿� �޸�(,)�� ���� �� �ϳ��� ���ڿ��� �������ּ���. (comma.c)

<����>
���ڿ� 1 �Է� >>> hello
���ڿ� 2 �Է� >>> world
�ϳ��� ��ģ ��� >>> hello,world
*/
#pragma disable(warning:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[20], s2[20];
	printf("���ڿ� 1 �Է� >>> ");
	scanf("%s", s1);
	printf("���ڿ� 2 �Է� >>> ");
	scanf("%s", s2);

	strcat(s1, ",");
	strcat(s1, s2);
	printf("�ϳ��� ��ģ ��� >>> %s", s1);
	return 0;
}