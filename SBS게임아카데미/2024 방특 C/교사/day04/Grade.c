#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include<stdio.h>

int main()
{
	printf("점수를 입력하세요(0~100) >>> ");
	
	int score;
	scanf("%d", &score);

	// 1) if문만 여러 개 쓰는 방식
	if (90 <= score && score <= 100)
		printf("A");
	if (80 <= score && score <= 89)
		printf("B");
	if (70 <= score && score <= 79)
		printf("C");
	if (0 <= score && score <= 69)
		printf("F");

	// 2) if-else if-else 방식
	if (score <= 69)
		printf("F");
	else if (score <= 79) // score >= 70
		printf("C");
	else if (score <= 89) // score >= 80
		printf("B");
	else
		printf("A");

	if (score >= 90)
		printf("A");
	else if (score >= 80) // score <= 89
		printf("B");
	else if (score >= 70)
		printf("C");
	else
		printf("F");

	// 3) 중첩 if문
	if (score >= 90)
		printf("A");
	else { // score <= 89
		if (score >= 80)
			printf("B");
		else { // score <= 79
			if (score >= 70)
				printf("C");
			else
				printf("F");
		}
	}

	return 0;
}