#include <stdio.h>

int num;

void add(int);

int main()
{
	int num = 10; // �̷��� �ص� ������ �ȳ��� ���� main���� num�� �� �������� num��  �ǹ��Ѵ�. ������ �̷��� �̸��� �����ϸ� �򰥸���

	printf("num = %d\n", num);
	add(10);
	printf("num = %d\n", num);
	{num++; }
	printf("num = %d\n", num);

	return 0;
}

void add(int val)
{
	num += val;
}