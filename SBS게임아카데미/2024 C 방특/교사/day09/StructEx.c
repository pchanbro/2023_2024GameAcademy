// StructEx.c
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {
	char name[20];
	int age;
	double grade;
	int score[10];
	int* p;
} s1;

int main()
{
	strcpy(s1.name, "Kim");
	s1.age = 20;
	s1.grade = 4.5;
	s1.p = &s1.age;

	printf("�̸�: %s\n", s1.name);
	printf("����: %d\n", s1.age);
	printf("����: %.2f\n", s1.grade);
	printf("score: %d\n", s1.score[0]);
	printf("%d\n", *s1.p);

	struct student s2 = {"Lee", 30, 3.5}, s3;
	printf("�̸�: %s\n", s2.name);
	printf("����: %d\n", s2.age);
	printf("����: %.2f\n", s2.grade);
	printf("score: %d\n", s2.score[0]);

	printf("s3 �̸� >>> ");
	scanf("%s", s3.name);
	printf("s3 ���� >>> ");
	scanf("%d", &s3.age);
	printf("s3 ���� >>> ");
	scanf("%lf", &s3.grade);

	printf("�̸�: %s\n", s3.name);
	printf("����: %d\n", s3.age);
	printf("����: %.2lf\n", s3.grade);
	return 0;
}