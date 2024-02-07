#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp = fopen("hello.txt", "w");
	fprintf(fp, "Hello %d", 10);
	fclose(fp);

	char a[20];
	int b;
	FILE* fp2 = fopen("hello.txt", "r");
	fscanf(fp2, "%s %d", a, &b);
	fclose(fp2);

	printf("%s %d\n", a, b);

	FILE* fp3 = fopen("hello2.txt", "w");
	fputs("Hello C", fp3);
	fclose(fp3);

	char str3[20];
	FILE* fp5 = fopen("hello2.txt", "r");
	fgets(str3, sizeof(str3), fp5);
	fclose(fp5);

	FILE* fp4 = fopen("hello3.txt", "w");
	char s[20] = "Hello C";
	fwrite(s, strlen(s), 1, fp4);
	fclose(fp4);

	char str4[20];
	FILE* fp6 = fopen("hello3.txt", "r");
	fread(str4, sizeof(str4), 1, fp6);
	fclose(fp6);

	printf("%s\n%s\n", str3, str4);

	return 0;
}