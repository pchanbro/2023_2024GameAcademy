#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int grade;
	printf("점수를 입력하세요 >>> ");
	scanf("%d", &grade);

	// if만 써서
	if (grade >= 90 && grade <= 100)
		printf("A\n");
	if (grade >= 80 && grade < 90)
		printf("B\n");
	if (grade >= 70 && grade < 80)
		printf("C\n");
	if (grade >= 0 && grade < 70)
		printf("D\n");

	// if - else if - else 방식

	if (grade >= 90 && grade <= 100)
		printf("A\n");
	else if (grade >= 80)
		printf("B\n");
	else if (grade >= 70)
		printf("C\n");
	else
		printf("D\n");

	// 중첩 if문
	if (grade >= 0)
	{
		if (grade >= 70)
		{
			if (grade >= 80)
			{
				if (grade >= 90)
					printf("A");
				else
					printf("B");
			}
			else
				printf("C");
		}
		else
			printf("D");
	}

	return 0;
}