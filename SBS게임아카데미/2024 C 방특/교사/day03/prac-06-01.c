// 98������ 1��
// ����ڷκ��� ���̸� �Է¹޽��ϴ�
// 20�� �̻��̸� 1250��, 20�� �̸��̸� 800��
// 
// ���̸� �Է��ϼ��� >>> 26
// ����� ���̴� 26���̸�, ����� 1250���Դϴ�!
#pragma warning(disable:4996)
#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

int main()
{
	int age;
	printf("���̸� �Է��ϼ��� >>> ");
	scanf("%d", &age);

	int price = age >= 20 ? 1250 : 800;
	printf("����� ���̴� %d���̸�, ����� %d���Դϴ�!\n",
		age, price);

	printf("����� ���̴� %d���̸�, ����� ", age);
	age >= 20
		? printf("1250")
		: printf("800");
	printf("���Դϴ�!\n");

	printf("%d���Դϴ�!\n", 800 + (age >= 20) * 450);
}