// prac-15-04.c
/*
237������ 4��
����ڷκ��� Ű�� cm ������ �Է¹޾� m ������ ȯ���Ͽ� ����ϴ� ���α׷��� �ۼ��ϼ���. �� �� ����� �����Լ��� �����ϰ� �Է¹��� Ű�� �Լ��� ���ڷ� ���޹޾� cm�� m ������ ��ȯ�ϴ� ����� �����մϴ�.

�Լ��̸�: heightChange
�Ű�����: ����1��
��ȯ��: �Ǽ�1��
*/
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

double heightChange(int);

int main()
{
	int cm;
	printf("Ű�� cm ������ �Է��ϼ��� >>> ");
	scanf("%d", &cm);
	
	double m = heightChange(cm);
	printf("��� : %.2f m", m);

	return 0;
}

double heightChange(int cm) {
	return cm / 100.0;
}