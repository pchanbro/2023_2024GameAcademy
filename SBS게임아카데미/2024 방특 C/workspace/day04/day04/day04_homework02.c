#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a;
	printf("���� 1���� �Է��ϼ��� >>> ");
	scanf("%c", &a);

	if (a >= 'a' && a <= 'z')
		printf("���� �ҹ����Դϴ�.");
	else if (a >= 'A' && a <= 'Z')
		printf("���� �빮���Դϴ�.");
	else if (a >= '0' && a <= '9')
		printf("�����Դϴ�.");
	else
		printf("���� �Ǵ� ���ڰ� �ƴմϴ�.");

	return 0;
}