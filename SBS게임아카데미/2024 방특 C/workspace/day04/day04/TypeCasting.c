#include<stdio.h>
typedef unsigned long long int uli;

int main()
{
	char c = 1;
	double d = 3.14;

	// ������ ����ȯ
	printf("size of : %d\n", sizeof(c + d)); // �ڵ����� ������ ū double�� ĳ����
	printf("%lf\n", c + d);

	// ����� ����ȯ
	printf("size of : %d\n", sizeof(c + (char)d)); // �����ڰ� ���� double�� char�� ĳ����
	printf("%d\n", c + (char)d);

	// �� ��ȯ �� �����÷ο�
	int a = 40000;
	char b = a;
	printf("%hd\n", b);

	// �� ��ȯ �� ����÷ο�
	int e = -40000;
	char f = e;
	printf("%hd\n", f);

	uli g = 18440000000000000000; //1844��, 0�� 16��
	printf("%llu\n", g);
	printf("%zd\n", sizeof(uli));
	printf("%zd\n", sizeof(unsigned long long int));



	return 0;
}