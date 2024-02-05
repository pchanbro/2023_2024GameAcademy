// 209페이지 3번
// 문자열을 입력받아 그 안에 존재하는 숫자의 총합을 구하는 프로그램을 작성해주세요
// 문자열 입력 >>> aa9we2a3
// 숫자의 합은 14
// '0' -> ???
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char c[20];
	printf("문자열 입력 >>> ");
	scanf("%s", c);

	int sum = 0;
	int i = 0;
	while(c[i] != 0) {
	// for (int i = 0; i < strlen(c); i++) {
		if ('0' <= c[i] && c[i] <= '9') {
			sum += c[i] - '0';
		}
		i++;
	}
	printf("숫자의 합은 %d\n", sum);
	return 0;
}