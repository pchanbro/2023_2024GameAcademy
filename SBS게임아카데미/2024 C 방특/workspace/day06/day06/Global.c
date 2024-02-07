#include <stdio.h>

int num;

void add(int);

int main()
{
	int num = 10; // 이렇게 해도 오류는 안난다 이제 main안의 num은 이 지역변수 num을  의미한다. 하지만 이렇게 이름을 같게하면 헷갈린다

	printf("num = %d\n", num);
	add(10);
	printf("num = %d\n", num);
	{num++; }
	printf("num = %d\n", num);

	return 0;
}

void add(int val)
{
	num += val;
}