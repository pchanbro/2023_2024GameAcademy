// reverse.c
/*
2. 포인터를 이용해 5개의 실수를 저장한 배열을 함수에 전달하고, 배열을 거꾸로 출력해주세요. (reverse.c)

<예시>
배열 값 입력 >>> 3.14 2.71 1.41 1.73 2.0
거꾸로 출력 하면 2.00 1.73 1.41 2.71 3.14
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include<stdio.h>

void reverse(double d[], int size) {
	printf("거꾸로 출력 하면 ");
	for (int i = size - 1; i >= 0; i--) {
		printf("%.2f ", d[i]);
	}
	puts("");
	for (int i = size - 1; i >= 0; i--) {
		printf("%p ", d + i);
	}
}

int main()
{
	double d[5] = { 1, 2, 3, 4, 5 };
	// printf("배열 값 입력 >>> ");
	// for (int i = 0; i < 5; i++) {
	//	scanf("%f", &d[i]);
	reverse(d, 5);

	return 0;
}