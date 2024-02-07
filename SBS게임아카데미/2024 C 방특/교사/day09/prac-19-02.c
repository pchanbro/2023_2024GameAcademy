// 295페이지 2~3번
/*
직원 관리를 위한 구조체
- 문자열 형태의 이름, 문자열 형태의 전화번호, 정수 형태의 월급
worker 이름의 구조체를 정의
-> WORKER로 재정의를 하고, 3명의 정보를 저장할 수 있는 구조체 배열
*/
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct worker {
	char name[20];
	char phone[20];
	int salary;
} WORKER;

int main()
{
	WORKER w[3];
	for (int i = 0; i < 3; i++) {
		printf("직원 %d의 이름 >>> ", i + 1);
		scanf("%s", w[i].name);
		printf("직원 %d의 전화번호 >>> ", i + 1);
		scanf("%s", w[i].phone);
		printf("직원 %d의 월급여 >>> ", i + 1);
		scanf("%d", &w[i].salary);
	}
	for (int i = 0; i < 3; i++) {
		printf("직원 %d의 이름: %s\n", i + 1, w[i].name);
		printf("직원 %d의 전화번호: %s\n", i + 1, w[i].phone);
		printf("직원 %d의 월급여: %d\n\n", i + 1, w[i].salary);
	}
}