/*
* �Լ� 3��
* �ʸ� �޾Ƽ� �ð��� ��ȯ�ϴ� �Լ� : toHour(3615) -> 1
* �ʸ� �޾Ƽ� ���� ��ȯ�ϴ� �Լ� : toMinute(3615) -> 0 
* �ʸ� �޾Ƽ� �ʸ� ��ȯ�ϴ� �Լ� : toSecond(3615) -> 15
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
	printf("�ʸ� �Է��ϼ��� >>> ");
	scanf("%d", &time);
	int hour = toHour(time);
	int minute = toMinute(time);
	int second = toSecond(time);

	printf("%d�ð� %d�� %d��", hour, minute, second);
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