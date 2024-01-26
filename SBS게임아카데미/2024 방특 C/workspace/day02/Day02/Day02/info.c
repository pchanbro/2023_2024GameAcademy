#pragma warning(disable:4996)
#define _CRT_SECURE_WANINIGS
#include <stdio.h>

int main()
{
	int age;
	char gender, initial;
	char name[20];

	printf("이름의 이니셜 입력 >>> ");
	initial = getchar();

	while (getchar() != '\n');

	printf("이름 입력 >>> ");
	scanf("%s", name);  ///문자열은 &을 붙이지 않는다.

	while (getchar() != '\n'); // 버퍼 비우기 문자열과 문자열 사이에는 이게 필요

	printf("성별 입력 (m, f) >>> ");
	gender = getchar();

	printf("나이 입력 >>> ");
	scanf("%d", &age);

	printf("\n%c %s (%c, %d)", initial, name, gender, age);
}