// 70페이지 2번
// prac-04-02.c
//    *
//   ***
//  *****
// *******   <- 출력하기

#include <stdio.h>

int main()
{
	putchar(' ');
	putchar(' ');
	putchar(' ');
	putchar('*');
	putchar('\n');
	puts("  ***");
	printf("%c%s\n", ' ', "*****");
	printf("*******");

	return 0;
}