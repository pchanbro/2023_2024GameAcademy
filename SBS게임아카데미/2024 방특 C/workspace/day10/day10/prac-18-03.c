/*
* ���ڿ� �ִ� ���� �Է�
* �� ��ŭ ���� �Ҵ�
* �ش� ������ ������ ���ڿ� �Է�
* �� ���ڿ��� a�� � �ִ��� ���
*/
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int length, acnt = 0;
	printf("���ڿ��� �ִ� ���� �Է� >>> ");
	scanf("%d", &length);

	char* str = (char*)malloc(length + 1);
	printf("���ڿ� �Է� >>> ");
	scanf("%s", str);

	for (int i = 0; i <= strlen(str); i++)
	{
		if (str[i] == '\0') break;
		if (str[i] == 'a') acnt++;
	}
	printf("a�� ���� : %d", acnt);

	free(str);

	return 0;
}