// randarray.c
/*
1. 0���� 9������ ������ �����ϰ� �ִ� 100ĭ �迭�� ���� ��, ���⼭ ���� ���� ����� ������ �������� ����ϴ� ���α׷��� �ۼ��ϼ���. (randarray.c)

<����>
���� ���� ����� ������ 8
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	int a[100];
	int count[10] = { 0 };
	int mx = 0; // �ִ�
	int mxi = 0; // �ִ��� ��ġ

	for (int i = 0; i < 100; i++) 
		a[i] = rand() % 10;

	for (int i = 0; i < 100; i++) 
		count[a[i]]++;

	for (int i = 0; i < 10; i++) {
		printf("%d: %d\n", i, count[i]);
		if (mx < count[i]) {
			mx = count[i];
			mxi = i;
		}
	}

	printf("���� ���� ����� ���� %d\n", mxi);

	return 0;
}