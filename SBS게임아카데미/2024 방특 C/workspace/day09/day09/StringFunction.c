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
	char* pos2 = strstr(str1, str2);
	printf("%p\n", str1);
	printf("%p\n", pos2);

	char str4[] = "C Language Programming!";
	printf("Original : %s\n", str4);
	char* str5 = strupr(str4);
	printf("Upper : % s\n", str5);

	char* str6 = "C Language Programming!";
	char ustr[30]; // �̷��� �迭�� �����Ⱚ�� ����Ǿ� ����
	char lstr[30];

	memset(ustr, 0, sizeof(ustr));
	memset(lstr, 0, sizeof(lstr));

	// str6�� toupper�� tolower�� �̿��Ͽ� ustr, lstr�� ��/�ҹ��ڷ� ��ȯ�� ����� �����ϰ� ���

	for (int i = 0; i < strlen(str6); i++)
	{
		ustr[i] = toupper(str6[i]);
		lstr[i] = tolower(str6[i]);
	}

	printf("upper : %s\nlower : %s", ustr, lstr);
	return 0;

}