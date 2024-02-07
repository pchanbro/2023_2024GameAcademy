// prac-15-04.c
/*
237페이지 4번
사용자로부터 키를 cm 단위로 입력받아 m 단위로 환산하여 출력하는 프로그램을 작성하세요. 이 때 사용자 정의함수를 정의하고 입력받은 키를 함수의 인자로 전달받아 cm를 m 단위로 변환하는 기능을 수행합니다.

함수이름: heightChange
매개변수: 정수1개
반환값: 실수1개
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

double heightChange(int);

int main()
{
	int cm;
	printf("키를 cm 단위로 입력하세요 >>> ");
	scanf("%d", &cm);
	
	double m = heightChange(cm);
	printf("결과 : %.2f m", m);

	return 0;
}

double heightChange(int cm) {
	return cm / 100.0;
}