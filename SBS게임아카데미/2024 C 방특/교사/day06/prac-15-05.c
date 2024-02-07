// prac-15-05.c
/*
237페이지 5번

함수 3개 
-> 초를 받아서 시간을 반환하는 함수: toHour(3615) -> 1
-> 초를 받아서 분을 반환하는 함수  : toMinute(3615) -> 0
-> 초를 받아서 초를 반환하는 함수  : toSecond(3615) -> 15
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int toHour(int);
int toMinute(int);
int toSecond(int);

int main()
{
	int second;
	printf("몇 초 >>> ");
	scanf("%d", &second);
	printf("결과: %d시간/%d분/%d초\n",
		toHour(second), toMinute(second), toSecond(second));
	return 0;
}

int toHour(int second) {
	return second / 3600;
}

int toMinute(int second) {
	// return (second / 60) % 60;
	return second / 60 - toHour(second) * 60;
}

int toSecond(int second) {
	return second % 60;
}