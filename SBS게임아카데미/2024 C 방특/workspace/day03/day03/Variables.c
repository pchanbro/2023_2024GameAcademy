#pragma warning(disable:4700) // ���� �����ϰ� ����Ϸ��� �ۼ�(������ ������ �������)
#include <stdio.h>

int c;
int d = 100;

int main()
{
	// ���� ���� local variable
	int a;
	int b = 10;
	printf("%d %d\n", a, b);
	printf("%p %p\n", &a, &b);
	printf("%d %d\n", c, d);
	printf("%p %p\n", &c, &d);

	return 0;
}