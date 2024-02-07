#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int money;
	printf("연봉을 입력하세요 (만원 단위) >>> ");
	scanf("%d", &money);

	int grade = 0;
	if (money <= 1400) grade = 8;
	else if (money <= 5000) grade = 7;
	else if (money <= 8800) grade = 6;
	else if (money <= 15000) grade = 5;
	else if (money <= 30000) grade = 4;
	else if (money <= 50000) grade = 3;
	else if (money <= 100000) grade = 2;
	else grade = 1;

	double tax = 0.0;
	switch (grade) {
		case 8:
			tax = money * 0.06;
			break;
		case 7:
			tax = 84 + (money - 1400) * 0.15;
			break;
		case 6:
			tax = 624 + (money - 5000) * 0.24;
			break;
		case 5:
			tax = 1536 + (money - 8800) * 0.35;
			break;
		case 4:
			tax = 3706 + (money - 15000) * 0.38;
			break;
		case 3:
			tax = 9406 + (money - 30000) * 0.4;
			break;
		case 2:
			tax = 17406 + (money - 50000) * 0.42;
			break;
		case 1:
			tax = 38406 + (money - 100000) * 0.45;
	}

	printf("세금 = %.0f만원\n", tax);
	printf("실수령액 = %.0f만원\n", money - tax);

	tax = 0.0;
	int money2 = money;
	switch (grade) {
		case 1:
			tax += (money - 100000) * 0.45;
			money = 100000;
		case 2:
			tax += (money - 50000) * 0.42;
			money = 50000;
		case 3:
			tax += (money - 30000) * 0.4;
			money = 30000;
		case 4:
			tax += (money - 15000) * 0.38;
			money = 15000;
		case 5:
			tax += (money - 8800) * 0.35;
			money = 8800;
		case 6:
			tax += (money - 5000) * 0.24;
			money = 5000;
		case 7:
			tax += (money - 1400) * 0.15;
			money = 1400;
		case 8:
			tax += money * 0.06;
	}

	printf("세금 = %.0f만원\n", tax);
	printf("실수령액 = %.0f만원\n", money2 - tax);
}