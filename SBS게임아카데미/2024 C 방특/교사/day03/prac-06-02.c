// 98페이지 2번
// 사용자로부터 나이와 키를 입력받아
// 나이가 12살 이상이고 키가 120cm 이상일 때만
// 놀이기구에 탑승할 수 있도록 허용하는 프로그램

// 나이를 입력하세요 >>>
// 키를 입력하세요 >>>
// "놀이기구에 탑승할 수 있습니다" 또는
// "놀이기구에 탑승할 수 없습니다"
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int age, height;
	printf("나이를 입력하세요 >>> ");
	scanf("%d", &age);

	printf("키를 입력하세요 >>> ");
	scanf("%d", &height);

	printf("놀이기구에 탑승할 수 ");
	age >= 12 && height >= 120
		? printf("있")
		: printf("없");
	printf("습니다.");

	return 0;
}
