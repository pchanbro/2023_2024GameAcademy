#pragma warning(diable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// while

	int num, count, sum;
	count = 0;
	sum = 0;
	while (1) // while(count < 3) ���� �ϸ� �ȿ� break���� �ʿ� ����.
	{
		printf("������ �Է��ϼ��� >>> ");
		scanf("%d", &num);
		
		if (num <= 0) count++;
		else sum += num;
		if (count == 3) break;
	}

	printf("����\n");
	printf("���� %d�Դϴ�.\n", sum);

	// do-while

	count = 0;
	sum = 0;
	do
	{
		printf("������ �Է��ϼ��� >>> ");
		scanf("%d", &num);

		if (num <= 0) count++;
		else sum += num;
	} while (count < 3);

	printf("����\n");
	printf("���� %d�Դϴ�.\n", sum);

	// do-while ���ѷ���

	count = 0;
	sum = 0;
	do
	{
		printf("������ �Է��ϼ��� >>> ");
		scanf("%d", &num);

		if (num <= 0) count++;
		else sum += num;
		if (count == 3) break;
	} while (1);

	printf("����\n");
	printf("���� %d�Դϴ�.\n", sum);

	return 0;
}