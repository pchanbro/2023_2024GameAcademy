#include <stdio.h>

int main()
{
	enum Color { red = 10, orange, yellow, green = 20, blue, indigo = 15, purple } rainbow;

	// printf("rainbow : %d\n", rainbow); �� ��ġ(rainbow ���� ���� ����� �ȵ�)
	rainbow = red; // rainbow a = red; �̷������� ������ �Ұ���
	printf("rainbow : %d\n", rainbow);
	printf("red : %d, blue : %d, purple : %d\n", red, blue, purple);

	return 0;
}