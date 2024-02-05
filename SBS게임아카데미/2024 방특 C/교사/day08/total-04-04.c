// 256������ 4��
// strcpy �Լ��� ���� �����ϱ�
// char* strcpy(char* dest, char* src);
// �̸� strcpy_custom

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
	// dest�� ��ġ�� ����Ű�� cur(Ŀ��) ���� �ʿ�
	// while�� �̿��ؼ� NULL(0)�� �ƴҶ�����

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