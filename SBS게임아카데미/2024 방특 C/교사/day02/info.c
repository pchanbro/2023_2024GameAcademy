// info.c
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int age;
	char gender;
	char name[20];

	printf("이름 입력 >>> ");
	scanf("%s", name);

	while (getchar() != '\n'); // 버퍼 비우기

	printf("성별 입력 (m, f) >>> ");
	gender = getchar();

	printf("나이 입력 >>> ");
	scanf("%d", &age);

	printf("\n%s (%c, %d)", name, gender, age);

	return 0;
}