/*
* 직원 관리를 위한 구조체
* 문자열 형태의 이름, 문자열 형태의 전화번호 , 정수 형태의 월급
* worker 이름의 구조체를 정의
* -> 이후 WORKER로 재정의를 하고, 3명의 정보를 저장할 수 있는 구조체 배열
*/

#pragma warning(diable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct worker {
	char name[10];
	char num[20];
	int salary;
} WORKER;

int main()
{
	char a[10], b[20];
	WORKER person[3]; 
	for (int i = 0; i < sizeof(person) / sizeof(WORKER); i++)
	{
		printf("사원%d 이름 >>> ", i + 1);
		scanf("%s", person[i].name);
		printf("사원%d 전화번호 >>> ", i + 1);
		scanf("%s", person[i].num);
		printf("사원%d 월급 >>> ", i + 1);
		scanf("%d", &person[i].salary);
	}
	
	for (int i = 0; i < sizeof(person) / sizeof(struct worker); i++)
	{
		printf("사원%d 이름 : %s\n", i+1, person[i].name);
		printf("사원%d 전화번호 : %s\n", i+1, person[i].num);
		printf("사원%d 월급 : %d\n", i+1, person[i].salary);
	}
	return 0;
}