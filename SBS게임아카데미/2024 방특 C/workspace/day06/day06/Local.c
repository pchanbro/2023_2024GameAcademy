#include<Stdio.h>

void func1();
void func2();

int main()
{
	int num = 1;
	func1();
	func2();
	printf("main num : %d\n", num);
}

void func1()
{
	int num = 3;
	num++;
	printf("func1 num : %d\n", num);
}

void func2()
{
	int num = 5;
	num++;
	printf("func2 num : %d\n", num);
}