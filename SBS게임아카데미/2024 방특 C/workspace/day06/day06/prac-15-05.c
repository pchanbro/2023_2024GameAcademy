/*
* 함수 3개
* 초를 받아서 시간을 반환하는 함수 : toHour(3615) -> 1
* 초를 받아서 분을 반환하는 함수 : toMinute(3615) -> 0 
* 초를 받아서 초를 반환하는 함수 : toSecond(3615) -> 15
*/
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int toHour(int);
int toMinute(int);
int toSecond(int);

int main()
{	
	int time;
	printf("초를 입력하세요 >>> ");
	scanf("%d", &time);
	int hour = toHour(time);
	int minute = toMinute(time);
	int second = toSecond(time);

	printf("%d시간 %d분 %d초", hour, minute, second);
	return 0;
}

int toHour(int time)
{
	return time / 60 / 60;
}
int toMinute(int time)
{
	return time / 60 % 60;
}
int toSecond(int time)
{
	return time % 60;
}