// IfCondition.c
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	printf("������ �Է��ϼ��� >>> ");

	int n;
	scanf("%d", &n);

	if (n == 0) 
		printf("0�Դϴ�.");
	
	if (n > 0) 
		printf("����Դϴ�.");
	
	if (n < 0) 
		printf("�����Դϴ�.");
	
	if (n == 0) 
		printf("0�Դϴ�.");
	else 
		printf("0�� �ƴմϴ�.");

	return 0;
}