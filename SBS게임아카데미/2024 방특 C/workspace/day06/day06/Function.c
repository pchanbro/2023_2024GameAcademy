#include <stdio.h>
#include <stdlib.h> //random������� �ʿ�
#include <time.h> //random������� �ʿ�

void help(void);// main�Լ� ���� �־�� ��
/*
* �Լ� �̸� : help
* ��ȯ �� : x
* �Ű����� : x
* 
*  �Լ� ���� : ���� ���
*/
void countdown(int);
int random();
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
}

void help(void)
{
	printf("�����Դϴ�. ~~");
	printf("�̷��̷��� ������ �մϴ�.\n");
}

void countdown(int count)
{
	for (int i = count; i >= 0; i--)
	{
		printf("���� �ð� : %d\n", i);
		// if (i == 3) break; �̰� for���� ���������� ��
		// if (i == 3) return; �̰� �Լ�countdown�� ���������� ��
	}
}

int random()
{
	int c = rand() % 10;
	return c;
}

int add(int p, int q)
{
	int t = p + q;
	return t;
}