#include <iostream>
using namespace std;

void main()
{
	// �ݺ���1.
	// Ư�������� ������ ������ �ݺ���Ų��.

	// if�� ==> ���� ~~ �ϸ� ~~�Ѵ�.

	// while�� ==> ~~�� ���� ������ �ݺ��Ѵ�.

	//while (����) 
	//{
	//		�ݺ���ų ����
	//}

	//-------------------------
	// while�� ��� ����1
	//-------------------------
	//bool isGamePlaying = true;
	//while (isGamePlaying) // ���� ���̶�� ���� ������ �ݺ��Ѵ�.
	//{
	//	//[�Է�] input
	//	int input;
	//	cin >> input;

	//	//���� input �� 0�̶��, 
	//	//	isGamePlaying = False;
	//	if (input == 0)
	//	{
	//		isGamePlaying = false;
	//	}
	//}

	//-------------------------------
	// continue, break
	//-------------------------------
	while (true)
	{
		//[�Է�] input
		int input;
		cin >> input;

		//���� input�� 1�̸� continue;
		//���� input�� 0�̸� break;
		if (input == 1)
		{
			// continue�� ���
			//		�ݺ����� ���������� ���ư���.
			continue;
		}
		else if (input == 0)
		{
			// break�� ���
			//		�ݺ��� �߰�ȣ�� Ż���Ѵ�.
			break;
		}

		//[���] input : 3
		cout << "input : " << input << endl;
	}

}