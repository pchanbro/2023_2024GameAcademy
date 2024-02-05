// 256페이지 4번
// strcpy 함수를 직접 구현하기
// char* strcpy(char* dest, char* src);
// 이름 strcpy_custom

#include <stdio.h>
char* strcpy_custom(char*, char*);

int main()
{
	char a[10] = "hello";
	printf("before: %s\n", a); // hello
	strcpy_custom(a, "python");
	printf("after: %s\n", a); // python
	printf("%s\n", strcpy_custom(a, "coding")); // coding
	return 0;
}

char* strcpy_custom(char* dest, char* src) {
	// dest의 위치를 가리키는 cur(커서) 변수 필요
	// while을 이용해서 NULL(0)이 아닐때까지

	/*
	char* cur = dest;
	while (*src != '\0') {
		*cur = *src;
		cur++;
		src++;
	}
	*cur = '\0';

	return dest;
	*/

	char* cur = dest;
	while (*src != '\0') {
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return cur;
}