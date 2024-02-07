// 문자열을 입력받아 그 안에 존재하는 숫자의 총합을 구하는 프로그램 작성
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int sumNum(char*);

int main()
{
	char a[50];
	printf("문자열을 입력하세요 >>>> ");
	scanf("%s", a);
	
	int b = sumNum(a);
	printf("숫자의 합 : %d", b);
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