#include <iostream>
#include <time.h>
using namespace std;

void main()
{
	// ���� 1. ���ٿ�
	// ���� 2. �����
	// ���� 3. �����
	// ���� 4. ���������� �ϳ�����

	srand(time(NULL));


	// ���ٿ�!
	//  - �����ڵ�
	// 1~100���� ���߿� �ϳ��� �����ȴ�.
	// �̶� ������ ���ڴ� �����̴�.
	// ������ answer��� �θ���.

	// �÷��̸� �����ϴµ�, ������ ���⶧���� �ݺ��Ѵ�.
	// [�Է�] �Է¹��� ���ڸ� input�̶�� �θ���
	// 
	// ������ Input���� ũ��
	//		[���] "Up"
	// ������ Input���� ������
	//		[���] "Down"
	// ������ Input�� ������
	//		[���] "�����Դϴ�"
	//		������ ����ٰ� ������ �����Ѵ�.

	//1~100���� �� ==> (0~99 ������ ���� + 1)
	int answer = rand() % 100 + 1;
	bool isGameClear = false;
	int min = 1;
	int max = 100;
	while (isGameClear == false)
	{
		//���ڸ� �Է����ּ���( {min} ~ {max} ) : 
		cout << "���ڸ� �Է����ּ���(" << min << " ~ " << max  << ") : " << endl;
		
		int input = 0;
		cin >> input;

		if (input < answer)
		{
			cout << "Up" << endl;
			min = input;
		}
		if (answer < input)
		{
			cout << "Down" << endl;
			max = input;
		}
		if (answer == input)
		{
			cout << "�����Դϴ�" << endl;
			isGameClear = true;
		}
	}


}