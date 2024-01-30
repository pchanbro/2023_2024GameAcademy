#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	enum day { SUN, MON, TUE, WED, THU, FRI, SAT} week;
	int num;
	printf("요일을 숫자로 입력하세요 >>> ");
	scanf("%d", &num);

	switch (num)
	{
		case SUN:
			printf("주말입니다.");
			break;
		case MON:
			printf("주중입니다.");
			break;
		case TUE:
			printf("주중입니다.");
			break;
		case WED:
			printf("주중입니다.");
			break;
		case THU:
			printf("주중입니다.");
			break;
		case FRI:
			printf("주중입니다.");
			break;
		case SAT:
			printf("주말입니다.");
			break;
	}
	return 0;
}