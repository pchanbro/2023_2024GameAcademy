#include <iostream>
#define MY_VALUE 3  //�̰� ��ó����
#define MY_MACRO << endl;

#define BINGO_SIZE 5
using namespace std;

void main()
{
	// 3. ��ó���� (��ũ��)
	// Ctrl + c, Ctrl + v ȿ��
	// Example.

	cout << MY_VALUE << endl;

	// MY_VALUE => 3
	cout << 3 << endl;

	// Example2.
	cout << "Test" MY_MACRO;
	//MY_MACRO => MY_MACRO << endl;
	// cout << "Test" << endl;

	// �ַ� ����ϴ� ��
	// ���
	int bingo[BINGO_SIZE * BINGO_SIZE];
	// =>
	// int bingo[25];
}