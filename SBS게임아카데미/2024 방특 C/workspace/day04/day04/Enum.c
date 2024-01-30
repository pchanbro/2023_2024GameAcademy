#include <stdio.h>

int main()
{
	enum Color { red = 10, orange, yellow, green = 20, blue, indigo = 15, purple } rainbow;

	// printf("rainbow : %d\n", rainbow); 이 위치(rainbow 선언 전에 출력은 안됨)
	rainbow = red; // rainbow a = red; 이런식으로 선언은 불가능
	printf("rainbow : %d\n", rainbow);
	printf("red : %d, blue : %d, purple : %d\n", red, blue, purple);

	return 0;
}