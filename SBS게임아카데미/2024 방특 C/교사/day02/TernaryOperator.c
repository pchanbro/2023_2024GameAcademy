// TernaryOperator.c
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	int n;
	printf("정수 입력 >>> ");
	scanf("%d", &n);

	printf("%d는 %s다.", n, n%2==0?"짝수":"홀수");

	n % 2 == 0 
		? printf("%d는 짝수다.", n)
		: printf("%d는 홀수다.", n);

	// 정수를 입력 받아서
	// 3의 배수 -> 3의 배수입니다.
	// 나머지 1 -> 나머지가 1입니다.
	// 나머지 2 -> 나머지가 2입니다.
	n % 3 == 0
		? printf("3의 배수입니다.")
		: printf("나머지가 %d입니다.", n % 3);

	// 가위 = 0, 바위 = 1, 보 = 2
	// 가위바위보를 입력하세요 >>> _
	// 컴퓨터가 무조건 가위를 낸다 했을때
	// 이겼습니다, 졌습니다, 비겼습니다
	printf("가위바위보를 입력하세요 >>> ");
	int user;
	scanf("%d", &user);
	user == 0
		? printf("비겼습니다.")
		: user == 1
			? printf("이겼습니다.")
			: printf("졌습니다.");

	/*
	* CPU의 입력을 랜덤으로 바꿔보기
	* #include <stdlib.h>, #include <time.h>
	* 메인함수의 맨 위에: srand(time(NULL));
	* int cpu = rand() % 3;
	*/
	// 진 경우: cpu = 0, 2 / cpu = 1, 0 / 2, 1
	int cpu = rand() % 3;
	cpu == user
		? printf("비겼습니다.")
		: cpu > user || cpu == 0 && user == 2
			? printf("졌습니다.")
			: printf("이겼습니다.");

	return 0;
}