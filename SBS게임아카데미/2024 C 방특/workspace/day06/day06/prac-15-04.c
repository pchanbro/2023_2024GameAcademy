/*
* ����ڷκ��� Ű�� cm������ �Է¹޾� m�� ��ȯ�Ͽ� ��ȯ�ϴ� �Լ�
* 
* �Լ� �̸� : heightChange
* �Ű����� : ����1��
* ��ȯ�� : �Ǽ�1��
*/
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double heightChange(int);

int main()
{
	int height;
	printf("Ű�� �Է��ϼ���(cm����) >>> ");
	scanf("%d", &height);

	double change;
	change = heightChange(height);
	printf("��� : %.2f m", change);

	return 0;
}

double heightChange(int cm)
{
	double changedHeight = cm / 100.0;
	return changedHeight;
}