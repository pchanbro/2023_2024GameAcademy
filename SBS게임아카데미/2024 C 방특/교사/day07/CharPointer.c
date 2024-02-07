// CharPointer.c

#include <stdio.h>

int main()
{
	int a[3] = { 10, 20, 30 };
	int* p[3] = { a, a + 1, a + 2 };

	for (int i = 0; i < 3; i++) {
		printf("a[%d] = %d %d %d\n", i, a[i], *p[i], **(p+i));
		printf("&a[%d] = %p %p %p\n", i, &a[i], a+i, *(p+i));
	}

	printf("sizeof(p) = %zd\n", sizeof(p));
	printf("sizeof(p[0]) = %zd\n", sizeof(p[0]));
	printf("sizeof(*p[0]) = %zd\n", sizeof(*p[0]));

	char* q[3] = { "hello", "java", "python" };
	printf("sizeof(q) = %zd\n", sizeof(q));
	printf("sizeof(q[0]) = %zd\n", sizeof(q[0]));
	printf("sizeof(*q[0]) = %zd\n", sizeof(*q[0]));
	printf("sizeof(q[0][0]) = %zd\n", sizeof(q[0][0]));
	printf("sizeof(&q[0][0]) = %zd\n", sizeof(&q[0][0]));

	for (int i = 0; i < 5; i++)
		printf("%c ", q[0][i]);
	puts("");

	for (int i = 0; i < 5; i++)
		printf("%s ", &q[0][i]);
	puts("");

	for (int i = 0; i < 3; i++)
		printf("%s\n", q[i]);

	// q 배열에서 모음을 찾아서 전부 ! 로 바꾸는 코드
	// 전부 출력
	for (int i = 0; i < sizeof(q) / sizeof(char*); i++) {
		for (int j = 0; q[i][j] != '\0'; j++) {
			printf("%c ", q[i][j]);
			if (q[i][j] == 'a' || q[i][j] == 'e' || q[i][j] == 'i'
				|| q[i][j] == 'o' || q[i][j] == 'u')
				q[i][j] = '!';
		}
	}
	for (int i = 0; i < sizeof(q) / sizeof(char*); i++)
		printf("%s\n", q[i]);
}