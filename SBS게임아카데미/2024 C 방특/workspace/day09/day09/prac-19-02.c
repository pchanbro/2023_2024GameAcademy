/*
* ���� ������ ���� ����ü
* ���ڿ� ������ �̸�, ���ڿ� ������ ��ȭ��ȣ , ���� ������ ����
* worker �̸��� ����ü�� ����
* -> ���� WORKER�� �����Ǹ� �ϰ�, 3���� ������ ������ �� �ִ� ����ü �迭
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
		printf("���%d �̸� >>> ", i + 1);
		scanf("%s", person[i].name);
		printf("���%d ��ȭ��ȣ >>> ", i + 1);
		scanf("%s", person[i].num);
		printf("���%d ���� >>> ", i + 1);
		scanf("%d", &person[i].salary);
	}
	
	for (int i = 0; i < sizeof(person) / sizeof(struct worker); i++)
	{
		printf("���%d �̸� : %s\n", i+1, person[i].name);
		printf("���%d ��ȭ��ȣ : %s\n", i+1, person[i].num);
		printf("���%d ���� : %d\n", i+1, person[i].salary);
	}
	return 0;
}