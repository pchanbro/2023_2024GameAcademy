// ���ڿ��� �Է¹޾� �� �ȿ� �����ϴ� ������ ������ ���ϴ� ���α׷� �ۼ�
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int sumNum(char*);

int main()
{
	char a[50];
	printf("���ڿ��� �Է��ϼ��� >>>> ");
	scanf("%s", a);
	
	int b = sumNum(a);
	printf("������ �� : %d", b);
	return 0;
}

int sumNum(char* str1)
{
	int sum = 0;
	int cur = 0;
	while (*(str1 + cur))
	{
		if (*(str1 + cur) > '0' && *(str1 + cur) <= '9')
		{
			sum += (int)(*(str1 + cur) - '0');
		}
		cur++;
		printf("%d\n", sum);
	}

	return sum;
}