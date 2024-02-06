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
	printf("이름 : %s\n나이 : %d\n성적 : %lf\n", s1.name, s1.age, s1.grade);
	printf("score : %d\n", s1.score[0]);
	printf("%d\n", *s1.p);

	struct student s2 = { "Lee", 30, 3.5 };
	printf("이름 : %s\n나이 : %d\n성적 : %lf\n", s2.name, s2.age, s2.grade);
	printf("score : %d\n", s2.score[2]); // 구조체의 변수, 초기화 안하면 0이 들어있다.
	
	struct student s3;

	printf("s3 이름 >>> ");
	scanf("%s", s3.name);
	printf("s3 나이 >>> ");
	scanf("%d", &s3.age);
	printf("s3 성적 >>> ");
	scanf("%lf", &s3.grade); //double 변수를 scanf로 받을 때 그냥 %f로 받으면 이상한 값이 받아짐
	printf("이름 : %s\n나이 : %d\n성적 : %.2lf\n", s3.name, s3.age, s3.grade);


	return 0;
}