/*
* 사용자로부터 키를 cm단위로 입력받아 m로 변환하여 반환하는 함수
* 
* 함수 이름 : heightChange
* 매개변수 : 정수1개
* 반환값 : 실수1개
*/
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double heightChange(int);

int main()
{
	int height;
	printf("키를 입력하세요(cm단위) >>> ");
	scanf("%d", &height);

	double change;
	change = heightChange(height);
	printf("결과 : %.2f m", change);

	return 0;
}

double heightChange(int cm)
{
	double changedHeight = cm / 100.0;
	return changedHeight;
}