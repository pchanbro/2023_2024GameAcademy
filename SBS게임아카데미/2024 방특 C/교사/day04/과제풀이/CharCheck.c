/*
2. ���� 1���� �Է¹޾� if-else���� �̿��Ͽ� �Է¹��� ���ڰ� ���� �빮������, �ҹ�������, ��������, �� �� �ƴ����� �Ǵ��ϴ� �ڵ带 �ۼ����ּ���.

<����>
���� 1���� �Է��ϼ��� >>> A
���� �빮���Դϴ�.
*/

#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	char c;
	printf("���� 1���� �Է��ϼ��� >>> ");
	scanf("%c", &c);

	if ('A' <= c && c <= 'Z')
		printf("���� �빮���Դϴ�.");
	else if ('a' <= c && c <= 'z')
		printf("���� �ҹ����Դϴ�.");
	else if ('0' <= c && c <= '9')
		printf("�����Դϴ�.");
	else
		printf("���� �Ǵ� ���ڰ� �ƴմϴ�.");

	return 0;
}