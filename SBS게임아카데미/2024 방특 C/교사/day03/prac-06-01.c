// 98페이지 1번
// 사용자로부터 나이를 입력받습니다
// 20살 이상이면 1250원, 20살 미만이면 800원
// 
// 나이를 입력하세요 >>> 26
// 당신의 나이는 26세이며, 요금은 1250원입니다!
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int age;
	printf("나이를 입력하세요 >>> ");
	scanf("%d", &age);

	int price = age >= 20 ? 1250 : 800;
	printf("당신의 나이는 %d세이며, 요금은 %d원입니다!\n",
		age, price);

	printf("당신의 나이는 %d세이며, 요금은 ", age);
	age >= 20
		? printf("1250")
		: printf("800");
	printf("원입니다!\n");

	printf("%d원입니다!\n", 800 + (age >= 20) * 450);
}