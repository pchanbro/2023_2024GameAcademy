#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, finish = 1; // while�� �ȿ��� �����ϸ� �ʱ�ȭ �Ƚ��ѵ���

	while (1) // for(;;)�� ������
	{
		printf("���� ���� �Է��ϼ��� >>> ");
		scanf("%d", &finish);

		if (finish == 0)
			break;

		printf("����� �Է��ϼ��� >>> ");
		scanf("%d", &num);

		for (int i = 1; i < finish; i++) // for(int i = num; i <= end; i+=num) �ϸ� i�� ���
		{
			if (i % num == 0)
				printf("%d ", i);
		}
		puts("");
	}
	printf("����Ǿ����ϴ�.\n");

	while (1)
	{
		printf("���� ���� �Է��ϼ��� >>> ");
		scanf("%d", &finish);

		if (finish == 0)
			break;

		printf("����� �Է��ϼ��� >>> ");
		scanf("%d", &num);

		// ���θ� while��
		int i = 1;
		while (i < finish)
		{
			if (i % num == 0) // i += num; �ϸ� i�� ����� ��
				printf("%d ", i);
			i++;
		}
		puts("");
	}
	printf("����Ǿ����ϴ�.\n");



	return 0;
}