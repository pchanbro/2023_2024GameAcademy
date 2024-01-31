// total-02-03.c
/*
144페이지 3번
첫 10개의 소수(prime number)를 출력하는 프로그램.
소수란 1과 자기 자신으로만 나누어지는 숫자를 말합니다.
-> 2부터 자기자신-1 까지에서 나누어 떨어지는 것이 없어야 함
2 3 5 7 11 13 17 19 23 29
*/

#include<stdio.h>

int main()
{
	int count = 0;
	for (int i = 2 ; count < 10 ; i++) { 
		// 1~ 무한루프 -> 10개 출력되면 break

		int flag = 0;
		for (int j = 2; j * j <= i; j++) { 
			// 소수인지 체크
			if (i % j == 0) {
				flag = 1;
				break;
			}
		}

		if (flag == 0) {
			count++;
			printf("%d ", i);
		}
	}
}