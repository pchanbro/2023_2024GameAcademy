// 295������ 2~3��
/*
���� ������ ���� ����ü
- ���ڿ� ������ �̸�, ���ڿ� ������ ��ȭ��ȣ, ���� ������ ����
worker �̸��� ����ü�� ����
-> WORKER�� �����Ǹ� �ϰ�, 3���� ������ ������ �� �ִ� ����ü �迭
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
		printf("���� %d�� �̸� >>> ", i + 1);
		scanf("%s", w[i].name);
		printf("���� %d�� ��ȭ��ȣ >>> ", i + 1);
		scanf("%s", w[i].phone);
		printf("���� %d�� ���޿� >>> ", i + 1);
		scanf("%d", &w[i].salary);
	}
	for (int i = 0; i < 3; i++) {
		printf("���� %d�� �̸�: %s\n", i + 1, w[i].name);
		printf("���� %d�� ��ȭ��ȣ: %s\n", i + 1, w[i].phone);
		printf("���� %d�� ���޿�: %d\n\n", i + 1, w[i].salary);
	}
}