// dpointer.c
/*
2. 정수 변수 n, n을 가리키는 포인터 p, p를 가리키는 포인터 q 를 만들어주세요. 입력을 통해 n에 값을 저장한 뒤, p를 이용해 n을 2배로, q를 이용해 n에 10을 더하는 코드를 작성해주세요. (dpointer.c)

<예시>
정수 입력 >>> 50
p 연산 후 >>> 100
q 연산 후 >>> 110
*/
#pragma disable(warning:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("정수 입력 >>> ");
	scanf("%d", &n);

	int* p = &n;
	int** q = &p;

	*p *= 2;
	printf("p 연산 후 >>> %d\n", *p);

	**q += 10;
	printf("q 연산 후 >>> %d\n", **q);
	return 0;
}