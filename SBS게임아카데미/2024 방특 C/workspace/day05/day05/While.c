#include <stdio.h>
#include <stdbool.h>

int main()
{
	int i = 0;
	while (i < 5)
	{
		printf("Hello %d\n", i);
		i++;
	}

	i = 0;
	while (true)
	{
		printf("���ѷ��� ture\n");
		if (i == 5) break;
		i++;
	}
	return 0;
}