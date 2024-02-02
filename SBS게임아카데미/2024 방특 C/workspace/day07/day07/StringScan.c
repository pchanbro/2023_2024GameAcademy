#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int  main()
{
	char str1[50];
	//gets(str1); gets는 범위를 벗어나면 오류가 난다.
	fgets(str1, sizeof(str1), stdin); // fgets는 범위를 벗어나면 거기서 자른다
	puts(str1);

	printf("==========================\n");

	char str2[10];
	scanf("%s", str2); // 얘도 범위 안으로 작성해야함, 한칸은 \0이 들어감에 주의하고 한칸은 더 비워야함
	printf("%s", str2);
	printf("============================\n");

	int a[5];   //Ctrl + Shift + / 하면 범위가 주석처리됨
	for (int i = 0; i < 5; i++)
	{
		printf("a[%d] 입력 >>> ", i);
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}


	int b[5];
	for (int i = 0; i < 5; i++)
	{
		printf("b[%d] 입력 >>> ", i);
		scanf("%d", b + i);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("b[%d] = %d\n", i, b[i]);
	}

	char str3[10]; // 이런 방식보다는 그냥 scanf("%s", a); 이런거 써라
	for (int i = 0; i < 10; i++)
	{
		printf("str3[%d] 입력 >>> ", i);
		scanf("%c", &str3[i]);
		getchar(); // 버퍼 비우기
	}
	str3[9] = '\0';
	printf("%s\n", str3);

	return 0;
}