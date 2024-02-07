#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int recursiveSum(int n)
{ // 인자로 받고있는 n이 0이 될때까지 계속해서 인자 값을 빼는 방식으로 재귀호출
	
	/* for문
	* int sum = 0;
	* for ( int i = n; i > 0; i--)
	* {
	*	sum += i;
	* }
	* return sum;
	*/

	/* while문
	* int sum = 0;
	* while(n)
	* {
	*	sum += n;
	*	n--;
	* }
	* return sum;
	*/
	if (n > 0)
		return n + recursiveSum(n - 1);
	else
		return 0;
}

int main()
{
	int n;
	printf("n을 입력해주세요 >>> ");
	scanf("%d", &n);
	int result = recursiveSum(n);
	printf("1부터 n까지의 합 = %d", result);

	return 0;
}