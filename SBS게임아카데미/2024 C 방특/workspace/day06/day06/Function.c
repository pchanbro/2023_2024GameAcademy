#include <stdio.h>
#include <stdlib.h> //random만드려면 필요
#include <time.h> //random만드려면 필요

void help(void);// main함수 위에 있어야 함
/*
* 함수 이름 : help
* 반환 값 : x
* 매개변수 : x
* 
*  함수 역할 : 도움말 출력
*/
void countdown(int);
int random();
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
}

void help(void)
{
	printf("도움말입니다. ~~");
	printf("이러이러한 동작을 합니다.\n");
}

void countdown(int count)
{
	for (int i = count; i >= 0; i--)
	{
		printf("남은 시간 : %d\n", i);
		// if (i == 3) break; 이건 for문을 빠져나가는 것
		// if (i == 3) return; 이건 함수countdown을 빠져나가는 것
	}
}

int random()
{
	int c = rand() % 10;
	return c;
}

int add(int p, int q)
{
	int t = p + q;
	return t;
}