// Function.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void help(void);
/*
�Լ� �̸�: help
��ȯ ��: X
�Ű�����: X

�Լ� ����: ���� ���
*/
void countdown(int);
int random(void);
int add(int, int);

int main()
{
	srand(time(NULL));

	help();
	countdown(5);
	
	int a = random();
	printf("%d\n", a);

	int b = add(5, 7);
	printf("%d\n", b);

	return 0;
}

void help(void) {
	printf("�����Դϴ�~~");
	printf("�̷��̷��� ������ �մϴ�.\n");
}

void countdown(int count) {
	for (int i = count; i >= 0; i--) {
		printf("���� �ð�: %d\n", i);
		// if (i == 3) break;
		if (i == 3) return;
	}
	printf("countdown ����\n");
}

int random(void) {
	int c = rand() % 10;
	return c;
}

int add(int p, int q) {
	int t = p + q;
	return t;
}
