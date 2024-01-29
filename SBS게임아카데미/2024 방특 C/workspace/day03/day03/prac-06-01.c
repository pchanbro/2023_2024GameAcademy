// 사용자로부터 나이를 입력받습니다.
// 20살 이상이면 1250원, 20살 미만이면 800원

// 나이를 입력하세여 >>> 26
// 당신의 나이는 26세이며, 요금은 1250원 입니다.
#include <stdio.h>
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS

int main()
{
	int age;
	printf("나이를 입력하세요 >>> ");
	scanf("%d", &age);

	printf("당신의 나이는 %d세이며, 요금은 %d원입니다.\n", age, age >= 20 ? 1250 : 800);
	
	printf("당신의 나이는 %d세이며, 요금은 %d원입니다.\n", age, 800 + (age >= 20) * 400);


	return 0;
}
