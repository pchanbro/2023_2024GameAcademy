// 209������ 3��
// ���ڿ��� �Է¹޾� �� �ȿ� �����ϴ� ������ ������ ���ϴ� ���α׷��� �ۼ����ּ���
// ���ڿ� �Է� >>> aa9we2a3
// ������ ���� 14
// '0' -> ???
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char c[20];
	printf("���ڿ� �Է� >>> ");
	scanf("%s", c);

	int sum = 0;
	int i = 0;
	while(c[i] != 0) {
	// for (int i = 0; i < strlen(c); i++) {
		if ('0' <= c[i] && c[i] <= '9') {
			sum += c[i] - '0';
		}
		i++;
	}
	printf("������ ���� %d\n", sum);
	return 0;
}