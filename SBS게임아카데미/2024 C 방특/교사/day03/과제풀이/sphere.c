/*
 1. 상수 PI (3.1415926) 를 만든 뒤, 사용자로부터 반지름을 입력받아 구의 표면적과 부피를 계산하는 프로그램을 작성해주세요. (sphere.c 로 저장)

	<예시>
	반지름 입력 >>> 10
	표면적은 1256.637040
	부피는 3141.592600
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include<stdio.h>
#define PI 3.1415926

int main()
{
	// const double PI = 3.1415926;
	printf("반지름 입력 >>> ");

	double radius;
	scanf("%lf", &radius);

	printf("표면적은 %f\n", (4 * PI * radius * radius));
	printf("부피는 %f", (4 / 3 * PI * radius * radius * radius));
}