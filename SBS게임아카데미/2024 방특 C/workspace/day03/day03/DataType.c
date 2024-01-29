#include <stdio.h>
#include <stdbool.h>

int main()
{
	char c1 = 'a';
	char c2 = 'A';
	printf("%c %c \n", c1, c2); // ���� -> �������
	printf("%d %d \n", c1, c2); // ���ڴ� ������ ������ �ȴ�. ���� -> �������
	printf("%f %f \n", c1, c2); // ���ڴ� �Ǽ��δ� �������� �ʴ´�. ��� 0.00000����

	short s1 = 30000;
	short s2 = 60000; // overflow short�� ��� ������ ��� (~ 32767)
	short s3 = -40000; // underflow short�� ���� ������ ��� (~ -32768)
	// 32767 ���� ���� -32768�� �ȴ�. �ٽ� ���� ���� ���� �Ѿ �ű���� ����.
	// -32768 = 32768
	// 32767 = -32769
	// �̷� ������� -25536 = 40000
	printf("%d %d %d\n", s1, s2, s3);

	int i1 = 2000000000;
	// int i2 = 3000000000; int�� overflow �ȵǰ� �׳� ������ ���
	// int i3 = -3000000000; underflow�� ��������
	printf("%d\n", i1);
	printf("int -> long : %lld\n", i1); // int - > long ��ȯ�� ����� �ȵȴ�

	long long l1 = 9220000000000000000L;
	printf("%lld\n", l1);
	printf("long -> int : %d\n", l1); // long -> int ��ȯ�� ����� �ȵȴ�.

	float f1 = 3.1415926;
	printf("%f\n", f1); // �׳� %f�ϸ� �Ҽ��� 6�ڸ������� ���´�.
	printf("float -> double : %lf\n", f1);

	double d1 = 3.1415926;
	printf("%lf\n", d1); // �׳� %f�ϸ� �Ҽ��� 6�ڸ������� ���´�.
	printf("double -> float : %f", d1);

	bool b1 = true;
	printf("%d\n", b1);

	// void v1; void�� ������ ���� �� ����.


	return 0;
}