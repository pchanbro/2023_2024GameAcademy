#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	enum day { SUN, MON, TUE, WED, THU, FRI, SAT} week;
	int num;
	printf("������ ���ڷ� �Է��ϼ��� >>> ");
	scanf("%d", &num);

	switch (num)
	{
		case SUN:
			printf("�ָ��Դϴ�.");
			break;
		case MON:
			printf("�����Դϴ�.");
			break;
		case TUE:
			printf("�����Դϴ�.");
			break;
		case WED:
			printf("�����Դϴ�.");
			break;
		case THU:
			printf("�����Դϴ�.");
			break;
		case FRI:
			printf("�����Դϴ�.");
			break;
		case SAT:
			printf("�ָ��Դϴ�.");
			break;
	}
	return 0;
}