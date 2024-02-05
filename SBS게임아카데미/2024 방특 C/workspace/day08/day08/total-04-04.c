// strcpy를 만들기
// char* strcpy_custom(char* dest, char*src);
#include<stdio.h>

char* strcpy_custom(char*, char*);

int main()
{
	char a[10] = "hello";
	
	printf("before : %s\n", a); // hello
	strcpy_custom(a, "python");
	printf("after : %s\n", a); // python
	printf("%s\n", strcpy_custom(a, "coding")); // coding

	return 0;
}

char* strcpy_custom(char* dest, char* src)
{
	int cur = 0;
	while (*(src + cur))
	{
		*(dest + cur) = *(src + cur);
		cur++;
	}
	*(dest + cur) = '\0';

	return dest;
}