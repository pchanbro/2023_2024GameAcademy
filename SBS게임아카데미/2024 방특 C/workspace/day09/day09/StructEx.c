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
	strcpy(s1.name, "Park");
	s1.age = 26;
	s1.grade = 4.5;
	s1.score[0] = 0;
	s1.p = &s1.age;
	printf("�̸� : %s\n���� : %d\n���� : %lf\n", s1.name, s1.age, s1.grade);
	printf("score : %d\n", s1.score[0]);
	printf("%d\n", *s1.p);

	struct student s2 = { "Lee", 30, 3.5 };
	printf("�̸� : %s\n���� : %d\n���� : %lf\n", s2.name, s2.age, s2.grade);
	printf("score : %d\n", s2.score[2]); // ����ü�� ����, �ʱ�ȭ ���ϸ� 0�� ����ִ�.
	
	struct student s3;

	printf("s3 �̸� >>> ");
	scanf("%s", s3.name);
	printf("s3 ���� >>> ");
	scanf("%d", &s3.age);
	printf("s3 ���� >>> ");
	scanf("%lf", &s3.grade); //double ������ scanf�� ���� �� �׳� %f�� ������ �̻��� ���� �޾���
	printf("�̸� : %s\n���� : %d\n���� : %.2lf\n", s3.name, s3.age, s3.grade);


	return 0;
}