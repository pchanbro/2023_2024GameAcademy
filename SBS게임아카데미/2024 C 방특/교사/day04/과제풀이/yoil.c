/*
1. enum과 switch-case를 이용하여 요일을 저장한 뒤, 입력한 요일이 주중인지 주말인지 판단하는 코드를 작성해주세요. (단, 일요일을 0으로 지정 (SUN, MON, TUE, WED, THU, FRI, SAT))

<예시>
요일을 숫자로 입력하세요 >>> 0
주말입니다.

요일을 숫자로 입력하세요 >>> 2
주중입니다.
*/

#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	enum Day {SUN, MON, TUE, WED, THU, FRI, SAT} day;
	printf("요일을 숫자로 입력하세요 >>> ");
	scanf("%d", &day);

	switch (day) {
		case 0:
		case 6:
			printf("주말입니다.");
			break;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("주중입니다.");
			break;
		default:
			printf("오류입니다.");
	}

	return 0;
}




