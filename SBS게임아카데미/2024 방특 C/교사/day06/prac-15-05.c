// prac-15-05.c
/*
237������ 5��

�Լ� 3�� 
-> �ʸ� �޾Ƽ� �ð��� ��ȯ�ϴ� �Լ�: toHour(3615) -> 1
-> �ʸ� �޾Ƽ� ���� ��ȯ�ϴ� �Լ�  : toMinute(3615) -> 0
-> �ʸ� �޾Ƽ� �ʸ� ��ȯ�ϴ� �Լ�  : toSecond(3615) -> 15
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
	printf("�� �� >>> ");
	scanf("%d", &second);
	printf("���: %d�ð�/%d��/%d��\n",
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