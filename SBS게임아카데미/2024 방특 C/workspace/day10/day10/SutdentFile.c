#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student {
	char name[20];
	int age;
	double grade;
};


int main()
{
	FILE* fp = fopen("student.txt", "w");
	fprintf(fp, "%s\n%d\n%.1f", "james", 30, 4.5);
	fclose(fp);

	struct student park;

	FILE* fp2 = fopen("student.txt", "r");
	fscanf(fp2, "%s %d %lf", park.name, &park.age, &park.grade);
	fclose(fp2);

	printf("�̸� : %s\n", park.name);
	printf("���� : %d\n", park.age);
	printf("���� : %.1lf\n", park.grade);

	puts("");

	struct student* kim = &park; // ���⼭ kim�� �ʱ�ȭ ������ ������ ������ ��..

	FILE* fp3 = fopen("student.txt", "r");
	fscanf(fp3, "%s %d %lf", kim->name, &kim->age, &kim->grade);
	fclose(fp3);

	printf("�̸� : %s\n", kim->name);
	printf("���� : %d\n", kim->age);
	printf("���� : %.1lf\n", kim->grade);
	return 0;
}