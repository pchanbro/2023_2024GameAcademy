#pragma warning(disable:4996)
#define _CRT_SECURE_WANINIGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	

	int n;
	printf("정수 입력 >>> ");
	scanf("%d", &n);

	printf("%d는 %s다.", n, n % 2 == 0? "짝수" : "홀수");

	n % 2 == 0 ? printf("%d는 짝수다.\n", n) : printf("%d는 홀수다.\n", n);

	// 정수를 입력 받아서
	// 3의 배수 -> 3의 배수입니다.
	// 나머지 1 -> 나머지가 1 입니다.
	// 나머지 2 -> 나머지가 2 입니다.
	int m;
	printf("정수 입력 >>> ");
	scanf("%d", &m);

	m % 3 == 0 ? printf("%d는 3의 배수입니다.\n", m) : m % 3 == 1 ? printf("%d는 나머지가 1입니다.\n", m) : printf("%d는 나머지가 2입니다.\n", m);

	// 가위 = 0, 바위 = 1, 보 = 2
	// 가위바위보를 입력하세요 >>> 
	// 컴퓨터가 무조건 가위
	// 이겼습니다, 졌습니다, 비겼습니다.
	int j;
	printf("가위바위보를 입력하세요(가위 = 0, 바위 = 1, 보 = 2) >>> ");
	scanf("%d", &j);

	j % 3 == 0 ? printf("비겼습니다.\n") : j % 3 == 1 ? printf("이겼습니다.\n", m) : printf("졌습니다.\n", m);

	/*
	* CPU의 입력을 랜덤으로 바꿔보기
	* #include <stdlib.h>, #include <time.h>
	* 메인함수의 맨 위에 : srand(time(NULL));
	* int cput = rand() %3;
	*/ 
	int user;
	int cpu = rand() % 3;
	printf("가위바위보를 입력하세요(가위 = 0, 바위 = 1, 보 = 2) >>> ");
	scanf("%d", &user);
	cpu == user ? printf("비겼습니다.") : cpu > user || cpu == 0 && user == 2 ? printf("졌습니다") : printf("이겼습니다.");

	return 0;
}