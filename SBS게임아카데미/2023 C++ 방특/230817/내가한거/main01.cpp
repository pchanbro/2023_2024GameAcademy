#include <iostream>
#include <time.h>
using namespace std;

void main()
{
	//������ ����Ǯ��
	// 1. ���ٿ�
	// 2. ����� 
	// 3. �����
	// 4. ���������� �ϳ�����

	srand(time(NULL));

	// 1. ���ٿ�
	// �����ڵ���� ¥�� � ���̿��� �����Ѵٴ� �������� ¥�� �ȴ�.
	// 1 ~ 100 ���� ���߿� �ϳ��� �����ȴ�.
	// �� �� ������ ���ڴ� �����̴�.
	// ������ answer��� �θ���.
	
	// �÷��̸� �����ϴµ�, ������ ���⶧ ���� �ݺ��Ѵ�.
	// [�Է�] �Է¹��� ���ڸ� input��� �θ���.
	// ������ input ������ ũ�� 
	//		[���] "UP"
	// ������ Input���� ������
	//		[���] "Down"
	// ������ input�� ������
	//		[���] "�����Դϴ�"
	//		������ ����ٰ� ������ �����Ѵ�.
	//		������ �����Ѵ�

	
	// 1 ~ 100 ���� ���߿� �ϳ��� �����ȴ�.
	int answer = rand() % 100 + 1;
	bool isGameClear = false;
	int min = 1;
	int max = 100;
	while (isGameClear == false)
	{
		//"���ڸ� �Է����ּ���( min ~ max) : 
		cout << "���ڸ� �Է����ּ���(" << min << " ~ " << max << ") : " << endl;
		
		int input = 0;
		cin >> input;

		if (input < answer)
		{
			cout << "UP" << endl;
			min = input;
		}
		else if (answer < input)
		{
			cout << "Down" << endl;
			max = input;
		}
		else if (answer == input)
		{
			cout << "�����Դϴ�. " << endl;
			isGameClear == true;
		}
	}

}