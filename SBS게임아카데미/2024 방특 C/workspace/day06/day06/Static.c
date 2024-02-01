#include <stdio.h>

void func1()
{
	int num = 10;
	printf("func1 num : %d\n", num);
	num++;
}

void func2()
{
	static int num = 10;
	printf("func2 num : %d\n", num);
	num++;
}

int main()
{
	func1();
	func1();
	func2();
	func2(); 
	func2();

	// 나머진 선생님 파일 참고
}