#include <iostream>
#include <time.h>
using namespace std;

void main()
{
	// �ݺ���
	
	// while
	// -> ~~�ϴµ���

	// for
	// -> N�� �ݺ��Ѵ�.

	// do ~ while(����)
	// ~������ 1ȸ �����ϰ� ���Ŀ� while�� ���� ����(1ȸ �����ϰ� ����Ȯ��)

	bool isTrigger = true;

	//isTrigger�� true�� �Ʒ����� �ݺ�
	while (isTrigger)
	{

		//[�Է�] input
		int input = 0;
		cin >> input;

		// �Է��� ���� 0�̸�
		if (input == 0)
		{
			//isTrigger ����
			isTrigger = false;
		}
		//[���]
		cout << "isTrigger : " << isTrigger << endl;
	}

	isTrigger = false;
	do
	{
		cout << "isTrigger : " << isTrigger << endl;
	} while (isTrigger);

	// 3. ������ �׳� �ڷ�� ���� 
}