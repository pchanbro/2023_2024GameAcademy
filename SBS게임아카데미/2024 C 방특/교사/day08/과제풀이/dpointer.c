// dpointer.c
/*
2. ���� ���� n, n�� ����Ű�� ������ p, p�� ����Ű�� ������ q �� ������ּ���. �Է��� ���� n�� ���� ������ ��, p�� �̿��� n�� 2���, q�� �̿��� n�� 10�� ���ϴ� �ڵ带 �ۼ����ּ���. (dpointer.c)

<����>
���� �Է� >>> 50
p ���� �� >>> 100
q ���� �� >>> 110
*/
#pragma disable(warning:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("���� �Է� >>> ");
	scanf("%d", &n);

	int* p = &n;
	int** q = &p;

	*p *= 2;
	printf("p ���� �� >>> %d\n", *p);

	**q += 10;
	printf("q ���� �� >>> %d\n", **q);
	return 0;
}