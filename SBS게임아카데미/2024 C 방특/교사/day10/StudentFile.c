// StudentFile.c
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct student {
	char name[20];
	int age;
	double grade;
} STUDENT;

int main()
{
	FILE* fp = fopen("student.txt", "w");
	fprintf(fp, "%s\n%d\n%.1f", "James", 30, 4.5);
	fclose(fp);

	STUDENT s;
	FILE* fp2 = fopen("student.txt", "r");
	fscanf(fp2, "%s", s.name);
	fscanf(fp2, "%d", &s.age);
	fscanf(fp2, "%lf", &s.grade);
	fclose(fp2);

	printf("이름: %s\n", s.name);
	printf("나이: %d\n", s.age);
	printf("성적: %.1f\n", s.grade);

	STUDENT* p = &s;
	FILE* fp3 = fopen("student.txt", "r");
	fscanf(fp3, "%s", p->name);
	fscanf(fp3, "%d", &p->age);
	fscanf(fp3, "%lf", &p->grade);
	fclose(fp3);

	printf("이름: %s\n", p->name);
	printf("나이: %d\n", p->age);
	printf("성적: %.1f\n", p->grade);

	return 0;
}