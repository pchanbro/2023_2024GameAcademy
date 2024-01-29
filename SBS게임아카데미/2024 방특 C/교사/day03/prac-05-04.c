// 86페이지 4번

#include <stdio.h>

int main()
{
	int num = 5;
	printf("num의 값: %d\n", ++num); // 6
	printf("num의 값: %d\n", num++); // 6
	printf("num의 값: %d\n", ++num); // 8

	return 0;
}