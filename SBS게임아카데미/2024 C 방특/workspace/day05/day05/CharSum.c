#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c = 'a';
	int big = 0, small = 0;

	while (!(c >= '0' && c <= '9'))
	{
		printf("���ڸ� �Է��ϼ��� >>> ");
		scanf("%c", &c);

		while (getchar() != '\n'); // getchar(); �� �ص� ���� ���� �ִ�.

		if (c >= 'a' && c <= 'z') small++;
		else if (c >= 'A' && c <= 'Z') big++;
		
	}
	printf("����\n �빮�� %d��, �ҹ��� %d��\n", big, small);

	return 0;
}