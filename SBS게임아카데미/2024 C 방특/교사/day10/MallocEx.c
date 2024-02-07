// MallocEx.c
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char* readName();

int main()
{
	char* name1 = readName();
	char* name2 = readName();

	printf("이름1: %s %p %zd\n", name1, name1, sizeof(name1));
	printf("이름2: %s %p %zd\n", name2, name2, sizeof(name2));

	free(name1);
	free(name2);

	return 0;
}

char* readName() {
	char* name = (char*)malloc(sizeof(char) * 30);
	printf("이름 입력 >>> ");
	scanf("%s", name);
	return name;
}