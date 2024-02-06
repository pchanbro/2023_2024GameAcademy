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
	char ustr[30]; // 이러면 배열에 쓰레기값이 저장되어 있음
	char lstr[30];

	memset(ustr, 0, sizeof(ustr));
	memset(lstr, 0, sizeof(lstr));

	// str6를 toupper와 tolower를 이용하여 ustr, lstr에 대/소문자로 변환한 결과를 저장하고 출력

	for (int i = 0; i < strlen(str6); i++)
	{
		ustr[i] = toupper(str6[i]);
		lstr[i] = tolower(str6[i]);
	}

	printf("upper : %s\nlower : %s", ustr, lstr);
	return 0;

}