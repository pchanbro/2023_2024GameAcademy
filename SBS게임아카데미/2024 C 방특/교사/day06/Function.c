// Function.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void help(void);
/*
함수 이름: help
반환 값: X
매개변수: X

함수 역할: 도움말 출력
*/
void countdown(int);
int random(void);
int add(int, int);

int main()
{
	srand(time(NULL));

	help();
	countdown(5);
	
	int a = random();
	printf("%d\n", a);

	int b = add(5, 7);
	printf("%d\n", b);

	return 0;
}

void help(void) {
	printf("도움말입니다~~");
	printf("이러이러한 동작을 합니다.\n");
}

void countdown(int count) {
	for (int i = count; i >= 0; i--) {
		printf("남은 시간: %d\n", i);
		// if (i == 3) break;
		if (i == 3) return;
	}
	printf("countdown 종료\n");
}

int random(void) {
	int c = rand() % 10;
	return c;
}

int add(int p, int q) {
	int t = p + q;
	return t;
}
