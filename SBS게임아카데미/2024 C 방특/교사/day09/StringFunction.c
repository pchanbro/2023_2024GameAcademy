// StringFunction.c
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "hello c programming";
	char str2[] = "program";

	char* pos = strstr(str1, str2);
	printf("%p\n", str1);
	printf("%p\n", pos);

	printf("%d\n", pos - str1);

	char str3[] = "java";
	char* pos2 = strstr(str1, str3);
	printf("%p\n", str1);
	printf("%p\n", pos2);

	char* str4 = "C Language Programming!";
	char ustr[30];
	char lstr[30];

	memset(ustr, 0, sizeof(ustr));
	memset(lstr, 0, sizeof(lstr));

	// str4�� toupper�� tolower�� �̿��Ͽ� ustr, lstr��
	// ��/�ҹ��ڷ� ��ȯ�� ����� �����ϰ� ����غ��ô�
	for (int i = 0; i < strlen(str4); i++) {
		lstr[i] = tolower(str4[i]);
		ustr[i] = toupper(str4[i]);
	}

	printf("lower: %s\n", lstr);
	printf("upper: %s\n", ustr);

	return 0;
}