/*
1. enum�� switch-case�� �̿��Ͽ� ������ ������ ��, �Է��� ������ �������� �ָ����� �Ǵ��ϴ� �ڵ带 �ۼ����ּ���. (��, �Ͽ����� 0���� ���� (SUN, MON, TUE, WED, THU, FRI, SAT))

<����>
������ ���ڷ� �Է��ϼ��� >>> 0
�ָ��Դϴ�.

������ ���ڷ� �Է��ϼ��� >>> 2
�����Դϴ�.
*/

#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	enum Day {SUN, MON, TUE, WED, THU, FRI, SAT} day;
	printf("������ ���ڷ� �Է��ϼ��� >>> ");
	scanf("%d", &day);

	switch (day) {
		case 0:
		case 6:
			printf("�ָ��Դϴ�.");
			break;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("�����Դϴ�.");
			break;
		default:
			printf("�����Դϴ�.");
	}

	return 0;
}




