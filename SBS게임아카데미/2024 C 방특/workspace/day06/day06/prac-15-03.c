/*
* �� ���� ������ �Ű������� �Է¹޾�, �Է¹��� ���� �� ������ 200 �� ū ���� ���̿� 7�� ����� �� ���� �����ϴ��� ���ϰ� �װ���� ��ȯ�ϴ� �Լ�
* �Լ��̸� : sevens
* �Ű����� : ���� 1��
* ��ȯ�� : ���� 1��
*/
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sevens(int);

int main()
{
	int input;
	printf("������ �Է��ϼ��� >>> ");
	scanf("%d", &input);
	int num = sevens(input);

	printf("%d�� %d������ 7�� ����� ���� : %d", input, input+200, num);
	return 0;
}

int sevens(int a)
{
	int count = 0;
	for (int i = a+1; i < a + 200; i++)
	{
		if (i % 7 == 0)
			count++;
	}
	return count;
}