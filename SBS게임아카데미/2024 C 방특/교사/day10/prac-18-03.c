// 281������ 3��
/*
����ڷκ��� ���ڿ��� �ִ� ���̸� �Է¹޴´�. -> �� ��ŭ�� ������ �����Ҵ�
�ش� ������ ������ ���ڿ��� �Է¹޴´�. -> ���ĺ� �ҹ��� a�� � �ִ��� ���

���ڿ��� �ִ� ���� >>> 50
���ڿ� >>> hahaha
a�� ������ 3���Դϴ�.
*/
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int len;
	printf("���ڿ��� �ִ� ���� >>> ");
	scanf("%d", &len);

	char* str = (char*)malloc(len + 1);
	printf("���ڿ� >>> ");
	scanf("%s", str);

	int count = 0;
	for (int i = 0; i < len; i++) {
		if (str[i] == '\0') break;
		if (str[i] == 'a') count++;
	}
	printf("a�� ������ %d�� �Դϴ�.", count);
	return 0;
}