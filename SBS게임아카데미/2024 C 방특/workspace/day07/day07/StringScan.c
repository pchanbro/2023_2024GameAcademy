#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int  main()
{
	char str1[50];
	//gets(str1); gets�� ������ ����� ������ ����.
	fgets(str1, sizeof(str1), stdin); // fgets�� ������ ����� �ű⼭ �ڸ���
	puts(str1);

	printf("==========================\n");

	char str2[10];
	scanf("%s", str2); // �굵 ���� ������ �ۼ��ؾ���, ��ĭ�� \0�� ���� �����ϰ� ��ĭ�� �� �������
	printf("%s", str2);
	printf("============================\n");

	int a[5];   //Ctrl + Shift + / �ϸ� ������ �ּ�ó����
	for (int i = 0; i < 5; i++)
	{
		printf("a[%d] �Է� >>> ", i);
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}


	int b[5];
	for (int i = 0; i < 5; i++)
	{
		printf("b[%d] �Է� >>> ", i);
		scanf("%d", b + i);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("b[%d] = %d\n", i, b[i]);
	}

	char str3[10]; // �̷� ��ĺ��ٴ� �׳� scanf("%s", a); �̷��� ���
	for (int i = 0; i < 10; i++)
	{
		printf("str3[%d] �Է� >>> ", i);
		scanf("%c", &str3[i]);
		getchar(); // ���� ����
	}
	str3[9] = '\0';
	printf("%s\n", str3);

	return 0;
}