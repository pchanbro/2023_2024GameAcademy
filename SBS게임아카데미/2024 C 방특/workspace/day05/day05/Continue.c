#include <stdio.h>

int main()
{
	for (int i = 1; i <= 40; i++)
	{
		if (i % 3 != 0)
			continue;
		printf("%d ", i);
	}
	puts("");

	int j = 1;
	while (j <= 40)
	{
		if (j % 3 != 0)
		{
			j++;
			continue;
		}
		printf("%d ", j);
		j++;// 여기에만 j++; 넣으면 무한 continue 실행으로 무한루프가 돈다.
	}
	puts("");

	int k = 0;
	do
	{
		k++;
		if (k % 3 != 0)
		{
			continue;
		}
		printf("%d ", k);
	} while (k <= 40);


	return 0;
}