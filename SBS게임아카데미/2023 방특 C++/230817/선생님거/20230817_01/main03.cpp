#include <iostream>
using namespace std;
void main()
{
	//�ݺ��� 
	
	//while
	// -> ~����~ �ϴµ���
	
	//for
	// -> N�� �ݺ��Ѵ�.

	//do ~ while(����)
	// ~ ������ 1ȸ�����ϰ� while��ó�� �����Ѵ�.

	bool isTrigger = false;

	//isTrigger�� true�� �Ʒ����� �ݺ�
	while (isTrigger)
	{
		//[�Է�] input
		int input = 0;
		cin >> input;

		//�Է��Ѱ��� 0 �̸�
		if (input == 0)
		{
			//isTrigger ����
			isTrigger = false;
		}
		//[���]
		cout << "isTrigger : " << isTrigger << endl;
	}


	//
	// do while�� while���� ������ �ѹ��� �����Ų�ٶ�� Ư¡�� ������ ����.
	//
	isTrigger = false;
	do
	{
		cout << "isTrigger : " << isTrigger << endl;
	} while (isTrigger);

}