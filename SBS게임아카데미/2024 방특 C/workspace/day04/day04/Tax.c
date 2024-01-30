#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int input;
	float tax;
	printf("연봉을 입력하세요(단위 : 만원) >>> ");
	scanf("%d", &input);

	if (input <= 1400)
	{
		tax = input * 6.0 / 100;
	}
	else if (input <= 5000)
		tax = input * 15.0 / 100 + 84.0;
	else if (input <= 8800)
		tax = input * 24.0 / 100 + 624.0;
	else if (input <= 15000)
		tax = input * 35.0 / 100 + 1536.0;
	else if (input <= 30000)
		tax = input * 38.0 / 100 + 3706.0;
	else if (input <= 50000)
		tax = input * 40.0 / 100 + 9406.0;
	else if (input <= 100000)
		tax = input * 42.0 / 100 + 17406.0;
	else
		tax = input * 45.0 / 100 + 38406.0;

	printf("당신의 세금은 %.0f원입니다. ", tax*10000);
	return 0;
}