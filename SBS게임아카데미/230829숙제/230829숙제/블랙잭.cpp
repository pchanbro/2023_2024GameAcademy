#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

int _card[52];
int _deckCardNum;
int _myCardNum;
int _comCardNum;
int _myHand[6]; // 1 ~ 6 ������ ���ص� 21�̶� 6���� ����ϴٰ� ��
int _comHand[6];
bool _standChoice;
bool _burst;
bool _comConclusion;
int _myTotal;
int _comTotal;


enum eCardShape
{
	CARDSHAPE_SPACE,
	CARDSHAPE_DIAMOND,
	CARDSHAPE_HEART,
	CARDSHAPE_CLOVER,
	CARDSHAPE_END
};

enum eHitStand
{
	HIT,
	STAND,
	END
};

void PrintCard(int cardNum)
{
	switch (cardNum / 13)
	{
	case eCardShape::CARDSHAPE_SPACE:
		cout << "��";
		break;
	case eCardShape::CARDSHAPE_DIAMOND:
		cout << "��";
		break;
	case eCardShape::CARDSHAPE_HEART:
		cout << "��";
		break;
	case eCardShape::CARDSHAPE_CLOVER:
		cout << "��";
		break;
	default:
		break;
	}

	switch (cardNum % 13 + 1)
	{
	case 1:
		cout << "A";
		break;
	case 11:
		cout << "J";
		break;
	case 12:
		cout << "Q";
		break;
	case 13:
		cout << "K";
		break;
	default:
		cout << cardNum % 13 + 1;
		break;
	}
}

void OpenCard(int hand[], int cardNum)
{
	for (int i = 0; i < cardNum; i++)
	{
		PrintCard(hand[i]);
		cout << "\t";
	}
	cout << endl;
}

void GenerateCard()
{
	for (int i = 0; i < 52; i++)
	{
		_card[i] = i + 1;
	}
}

void SuffleCard()
{
	for (int i = 0; i < 100000; i++)
	{
		int num1 = rand() % 52;
		int num2 = rand() % 52;

		int temp = _card[num1];
		_card[num1] = _card[num2];
		_card[num2] = temp;
	}
}

void GetCard(int hand[], int& cardNum)
{
	hand[cardNum] = _card[_deckCardNum];
	cardNum++;
	_deckCardNum++;
}

int AddCard(int hand[] , int& cardNum)
{
	int temp = 0;
	for (int i = 0; i < cardNum; i++)
	{
		// ���� �� ���
		switch (hand[i] % 13 + 1)
		{
			// ī�尡 J,Q,K�� ��� 10���� ���
		case 11:
			temp += 10;
			break;
		case 12:
			temp += 10;
			break;
		case 13:
			temp += 10;
			break;
		dafault:
			temp += (hand[i] % 13 + 1);
			break;
		}
	}
	// A�� �� ��Ȳ�� �°� 1 Ȥ�� 11�� ���
	// ī���� A�� ���� �� A�� 11�� ����ص� 21 �̸��̸� 10�� �߰��� �����ش�.(������ 1�� �̹� ����)
	if (temp < 11)
	{
		temp += 10;
	}

	return temp;
}

void IsBurst()
{
	_myTotal = AddCard(_myHand, _myCardNum);

	// ����Ʈ�Ǹ� ���� ����� �����ǵ��� �Ѵ�.
	if (_myTotal > 20)
	{
		cout << "����Ʈ!!" << endl;
		_burst = true;
	}
}

void ChooseHitStand()
{
	// �÷��̾��� ��Ʈ, ���ĵ� ����
	int choice;
	cout << "��Ʈ ���ĵ带 �����ϼ���(��Ʈ : 0 , ���ĵ� : 1) : ";
	cin >> choice;

	switch (choice)
	{

	// ��Ʈ ���� �� ī�� ���� �� �ޱ�
	case eHitStand::HIT:
		_myHand[_myCardNum] = _card[_deckCardNum];
		_myCardNum++;
		_deckCardNum++;
		cout << "��Ʈ ����! ī�� ������ ���޵˴ϴ�. " << endl;
		cout << "���� �� ī�� : ";
		for (int i = 0; i < _myCardNum; i++)
		{
			PrintCard(_myHand[i]);
		}
		cout << endl;
		
		// ����Ʈ ���� Ȯ��
		IsBurst();
		
		break;
	// ���ĵ� ���� �� �� ī�� Ȯ��
	case eHitStand::STAND:
		_standChoice = true;
		break;
	default:
		cout << "�߸��� �����Դϴ� �ٽ� �����ϼ���" << endl;
		ChooseHitStand();
		break;
	}
	
}

// ��ǻ�� ī�� �߰�
void AddComCard()
{
	_comTotal = AddCard(_comHand, _comCardNum);

	// ��ǻ�� ���� ���� 17 �̸��� ��� ��Ʈ�Ͽ� ī�� �߰�
	if (_comTotal < 17)
	{
		_comHand[_comCardNum] = _card[_deckCardNum];
		_comCardNum++;
		_deckCardNum++;
	}
	// ��ǻ�� ���� ���� 17�̻��̸� ����
	else
	{
		_comConclusion = true;
	}
}

void main()
{
	/*
	���� ���� : ����
	```
	��ǥ: �ڵ��� ī�� �հ谡 21�� ������ �����, 21�� ���� �ʴ� ���Դϴ�. ���� ����� �÷��̾ �̱�� �˴ϴ�.

	ī�� ��:
	���� ī��(2~10): �״���� ���ڰ��� �����ϴ�.
	���̽� ī��(J, Q, K): ���� 10�� ���� �����ϴ�.
	���̽�(A): 1 �Ǵ� 11�� ����� �� �ֽ��ϴ�. �÷��̾ ������ �ڵ忡 ���� �ڵ����� ���� ������ �������� ���˴ϴ�. ��, 21�� ���� ���� ��� 11��, ���� ��� 1�� ����մϴ�.

	���� ����:
	ó���� �÷��̾�� ������ ���� �� ���� ī�带 �޽��ϴ�. 
	�÷��̾��� ī��� �� �� ��� �ո��� ���� ���ϵ��� �մϴ�. 
	������ ī�� �� �� ���� �ո��� ����, �ٸ� �� ���� �޸��� ���� �մϴ�.
	�÷��̾�� '��Ʈ(Hit)' �Ǵ� '���ĵ�(Stand)'�� ������ �� �ֽ��ϴ�. 
	��Ʈ�� �߰� ī�带 �޴� ���� �ǹ��ϰ�, ���ĵ�� �� �̻� ī�带 ���� �ʰڴٴ� ���� �ǹ��մϴ�.
	�÷��̾��� �ڵ� �հ谡 21�� ������ "����Ʈ(Bust)"�Ǿ� �ٷ� �й��մϴ�.
	�÷��̾ ���ĵ带 �����ϸ�, ������ ������ ī�带 �����ϰ�, �ڵ��� �հ谡 17 �Ǵ� �� �̻��� �� ������ ��� ��Ʈ�մϴ�.

	��� ����:
	������ ����Ʈ�ϸ� �÷��̾ �¸��մϴ�.
	�� �� ����Ʈ���� ���� ���, 21�� �� ����� ���� �¸��մϴ�.
	�� �� ���� ������ ��� ��� ������ ó���˴ϴ�.
	```
	*/

	//����
	// ī�� ����
	// ���� ����
	// 
	// �ݺ�
	//		ī�� ����
	//		ī����� �ʱ�ȭ
	// 
	//		�÷��̾� ī�� ���� �ޱ�
	//		��ǻ�� ī�� ���� �ޱ�
	//		�÷��̾� ī�� ��� ����
	//		��ǻ�� ī�� �������� ���� ����
	// 
	//		�ݺ�
	//			�÷��̾��� ��Ʈ, ���ĵ� ����
	//				��Ʈ ���� �� ī�� ���� �� �ޱ�
	//				����Ʈ ���� Ȯ��
	//					����Ʈ �� �÷��̾� �й�
	//				���ĵ� ���� �� ��ǻ�� ���ʷ� �Ѿ
	// 
	//		�ݺ�(�÷��̾ ���ĵ� ������ ���)
	//			��ǻ���� ����� ī����� ����
	//			��ǻ�� �ڵ忡 �հ谡 17 �̻��� �� �� ���� ��� ��Ʈ
	//			17�� ������ ���ĵ�
	//			����Ʈ �� �÷��̾��� �¸�
	//			
	//		�÷��̾� �ڵ�� ��ǻ�� �ڵ� ���� �� 
	//		21�� �� ����� ���� �¸�
	//		���� ������� ��� ��.
	srand(time(NULL));

	GenerateCard();
	

	cout << "������ �����մϴ�. " << endl;
	while (true)
	{
		system("cls");
		// ī�� ����
		
		cout << "���ο� ���� ����" << endl;
		SuffleCard();

		// ī����� �ʱ�ȭ
		_deckCardNum = 0;
		_myCardNum = 0;
		_comCardNum = 0;
		_standChoice = false;
		_burst = false;
		_comConclusion = false;

		// �÷��̾� ī�� ���� �ޱ�
		GetCard(_myHand, _myCardNum); //_myCardNum�� �޴� ������ GetCard �ȿ��� ���������ִ� ����� �ֱ� ����
		GetCard(_myHand, _myCardNum); //���������� �Ʒ� _comCardNum�� ����������� �ϱ⿡ �Ű������� ����

		// ��ǻ�� ī�� ���� �ޱ�
		GetCard(_comHand, _comCardNum);
		GetCard(_comHand, _comCardNum);

		// �÷��̾� ī�� ��� ����
		cout << "�� ī�� : ";
		OpenCard(_myHand, _myCardNum);

		// ��ǻ�� ī�� ù�� ����
		cout << "��ǻ�� ī�� : ";
		PrintCard(_comHand[0]);
		cout << "\t??" << endl;

		
		// �ݺ�
		// �÷��̾ ����Ʈ���� �ʰ� ���ĵ带 �������� ���� ��� �ݺ�
		while (!_burst && !_standChoice)
		{
			// ��Ʈ ���ĵ� ����
			ChooseHitStand();
			IsBurst();
		}

		cout << "�� ī�� : ";
		OpenCard(_myHand, _myCardNum);


		cout << "��ǻ�� ī�� ���� : ";
		OpenCard(_comHand, _comCardNum);


		// �ݺ�
		// �÷��̾ ����Ʈ���� �ʰ� ���ĵ带 ������ ���
		// ��ǻ���� �� ���� 17 �̻��� �ɶ����� �ݺ�
		while (!_burst && _standChoice && !_comConclusion)
		{
			//��ǻ�� ī�� �߰� ����
			AddComCard();
		}

		cout << "���� �� ī�� : ";
		OpenCard(_myHand, _myCardNum);


		cout << "���� ��ǻ�� ī�� : ";
		OpenCard(_comHand, _comCardNum);


		if (_burst)
		{
			cout << "�÷��̾� ����Ʈ!! �й�..!" << endl;
		}
		else
		{
			if (_myTotal == _comTotal)
			{
				cout << "���º�" << endl;
			}
			else if (_myTotal > _comTotal)
			{
				cout << "�÷��̾� �¸�" << endl;
			}
			else if (_myTotal < _comTotal && _comTotal < 21)
			{
				cout << "�÷��̾� �й�" << endl;
			}
			else if (_comTotal > 21)
			{
				cout << "��ǻ�� ����Ʈ, �÷��̾� �¸�" << endl;
			}
			

		}

		//		�ݺ�(�÷��̾ ���ĵ� ������ ���)
		//			��ǻ�� �ڵ忡 �հ谡 17 �̻��� �� �� ���� ��� ��Ʈ
		//			����Ʈ �� �÷��̾��� �¸�
		//			
		//		�÷��̾� �ڵ�� ��ǻ�� �ڵ� ���� �� 
		//		21�� �� ����� ���� �¸�
		//		���� ������� ��� ��.

		system("pause");
	}

}