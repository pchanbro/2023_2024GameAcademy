#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int recursiveSum(int n)
{ // ���ڷ� �ް��ִ� n�� 0�� �ɶ����� ����ؼ� ���� ���� ���� ������� ���ȣ��
	
	/* for��
	* int sum = 0;
	* for ( int i = n; i > 0; i--)
	* {
	*	sum += i;
	* }
	* return sum;
	*/

	/* while��
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
	printf("n�� �Է����ּ��� >>> ");
	scanf("%d", &n);
	int result = recursiveSum(n);
	printf("1���� n������ �� = %d", result);

	return 0;
}