// ����ڷκ��� ���̸� �Է¹޽��ϴ�.
// 20�� �̻��̸� 1250��, 20�� �̸��̸� 800��

// ���̸� �Է��ϼ��� >>> 26
// ����� ���̴� 26���̸�, ����� 1250�� �Դϴ�.
#include <stdio.h>
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS

int main()
{
	int age;
	printf("���̸� �Է��ϼ��� >>> ");
	scanf("%d", &age);

	printf("����� ���̴� %d���̸�, ����� %d���Դϴ�.\n", age, age >= 20 ? 1250 : 800);
	
	printf("����� ���̴� %d���̸�, ����� %d���Դϴ�.\n", age, 800 + (age >= 20) * 400);


	return 0;
}
