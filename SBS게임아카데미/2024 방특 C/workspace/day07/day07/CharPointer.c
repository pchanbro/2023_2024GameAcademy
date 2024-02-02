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

	printf("q의 크기 : %zd\n", sizeof(q));
	printf("sizeof(q[0]) = %zd\n", sizeof(q[0]));
	printf("sizeof(*q[0]) = %zd\n", sizeof(*q[0]));
	printf("sizeof(q[0][0]) = %zd\n", sizeof(q[0][0]));
	printf("sizeof(&q[0][0]) = %zd\n", sizeof(&q[0][0]));
	printf("sizeof((*q[0])+1) = %zd\n", sizeof((*q[0])+1));


	puts("");

	printf("p의 크기 : %zd\n", sizeof(p));
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
	puts("변경전");

	// char* q[3] = { "hello", "java", "python" };
	// 이 q배열에서 모음을 찾으면 전부 !로 바꿔라

	// 여기 아래가 안됨 추후 수정해야함 
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

	printf("변경후\n");

	for (int i = 0; i < 3; i++)
	{
		printf("%s ", q[i]);
	}

	return 0;
}