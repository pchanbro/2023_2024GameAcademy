// randarray.c
/*
1. 0부터 9까지의 난수를 저장하고 있는 100칸 배열을 만든 뒤, 여기서 가장 많이 저장된 정수가 무엇인지 출력하는 프로그램을 작성하세요. (randarray.c)

<예시>
가장 많이 저장된 정수는 8
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	int a[100];
	int count[10] = { 0 };
	int mx = 0; // 최댓값
	int mxi = 0; // 최댓값의 위치

	for (int i = 0; i < 100; i++) 
		a[i] = rand() % 10;

	for (int i = 0; i < 100; i++) 
		count[a[i]]++;

	for (int i = 0; i < 10; i++) {
		printf("%d: %d\n", i, count[i]);
		if (mx < count[i]) {
			mx = count[i];
			mxi = i;
		}
	}

	printf("가장 많이 저장된 값은 %d\n", mxi);

	return 0;
}