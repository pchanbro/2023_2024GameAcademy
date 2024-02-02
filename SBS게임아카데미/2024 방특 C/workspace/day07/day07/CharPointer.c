#include <stdio.h>

int main()
{
	int a[3] = { 10, 20, 30 };
	int* p[3] = { a, a + 1, a + 2 };
	char* q[3] = { "hello", "java", "python" };

	for (int i = 0; i < 3; i++)
	{
		printf("a[%d] = %d %d %d\n", i, a[i], *p[i], **(p+i));
		printf("&a[%d] = %p %p %p\n", i, &a[i], a+i, *(p+i));

	}

	printf("q�� ũ�� : %zd\n", sizeof(q));
	printf("sizeof(q[0]) = %zd\n", sizeof(q[0]));
	printf("sizeof(*q[0]) = %zd\n", sizeof(*q[0]));
	printf("sizeof(q[0][0]) = %zd\n", sizeof(q[0][0]));
	printf("sizeof(&q[0][0]) = %zd\n", sizeof(&q[0][0]));
	printf("sizeof((*q[0])+1) = %zd\n", sizeof((*q[0])+1));


	puts("");

	printf("p�� ũ�� : %zd\n", sizeof(p));
	printf("sizeof(p[0]) = %zd\n", sizeof(p[0]));
	printf("sizeof(*p[0]) = %zd\n", sizeof(*p[0]));



	for (int i = 0; i < 5; i++)
	{
		printf("%c ", q[0][i]);
	}
	puts("");

	for (int i = 0; i < 5; i++)
	{
		printf("%s ", &q[0][i]);
	}
	puts("");

	for (int i = 0; i < 3; i++)
	{
		printf("%s ", q[i]);
	}
	puts("������");

	// char* q[3] = { "hello", "java", "python" };
	// �� q�迭���� ������ ã���� ���� !�� �ٲ��

	// ���� �Ʒ��� �ȵ� ���� �����ؾ��� 
	for (int i = 0; i < 3; i++)
	{
		int num = 0;
		while (q[i][num] != '\0')
		{
			num++;
		}
		for (int j = 0; j < num ; j++)
		{
			if (q[i][j] == 'a' || q[i][j] == 'e' || q[i][j] == 'i' || q[i][j] == 'o' || q[i][j] == 'u')
			{
				q[i][j] = '!';
			}
		}
	}

	printf("������\n");

	for (int i = 0; i < 3; i++)
	{
		printf("%s ", q[i]);
	}

	return 0;
}