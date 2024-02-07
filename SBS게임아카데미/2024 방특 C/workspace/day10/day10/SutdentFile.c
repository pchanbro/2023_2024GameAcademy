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

	printf("이름 : %s\n", park.name);
	printf("나이 : %d\n", park.age);
	printf("성적 : %.1lf\n", park.grade);

	puts("");

	struct student* kim = &park; // 여기서 kim을 초기화 해주지 않으면 오류가 남..

	FILE* fp3 = fopen("student.txt", "r");
	fscanf(fp3, "%s %d %lf", kim->name, &kim->age, &kim->grade);
	fclose(fp3);

	printf("이름 : %s\n", kim->name);
	printf("나이 : %d\n", kim->age);
	printf("성적 : %.1lf\n", kim->grade);
	return 0;
}