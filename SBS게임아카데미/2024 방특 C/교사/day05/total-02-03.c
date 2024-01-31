// total-02-03.c
/*
144������ 3��
ù 10���� �Ҽ�(prime number)�� ����ϴ� ���α׷�.
�Ҽ��� 1�� �ڱ� �ڽ����θ� ���������� ���ڸ� ���մϴ�.
-> 2���� �ڱ��ڽ�-1 �������� ������ �������� ���� ����� ��
2 3 5 7 11 13 17 19 23 29
*/

#include<stdio.h>

int main()
{
	int count = 0;
	for (int i = 2 ; count < 10 ; i++) { 
		// 1~ ���ѷ��� -> 10�� ��µǸ� break

		int flag = 0;
		for (int j = 2; j * j <= i; j++) { 
			// �Ҽ����� üũ
			if (i % j == 0) {
				flag = 1;
				break;
			}
		}

		if (flag == 0) {
			count++;
			printf("%d ", i);
		}
	}
}