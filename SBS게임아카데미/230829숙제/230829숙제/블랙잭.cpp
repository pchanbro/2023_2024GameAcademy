#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

int _card[52];
int _deckCardNum;
int _myCardNum;
int _comCardNum;
int _myHand[6]; // 1 ~ 6 까지만 더해도 21이라 6개면 충분하다고 봄
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
		cout << "♤";
		break;
	case eCardShape::CARDSHAPE_DIAMOND:
		cout << "◆";
		break;
	case eCardShape::CARDSHAPE_HEART:
		cout << "♥";
		break;
	case eCardShape::CARDSHAPE_CLOVER:
		cout << "♧";
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
		// 패의 합 계산
		switch (hand[i] % 13 + 1)
		{
			// 카드가 J,Q,K인 경우 10으로 취급
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
	// A를 내 상황에 맞게 1 혹은 11로 취급
	// 카드중 A가 있을 때 A를 11로 취급해도 21 미만이면 10을 추가로 더해준다.(위에서 1은 이미 더함)
	if (temp < 11)
	{
		temp += 10;
	}

	return temp;
}

void IsBurst()
{
	_myTotal = AddCard(_myHand, _myCardNum);

	// 버스트되면 게임 결과가 결정되도록 한다.
	if (_myTotal > 20)
	{
		cout << "버스트!!" << endl;
		_burst = true;
	}
}

void ChooseHitStand()
{
	// 플레이어의 히트, 스탠드 선택
	int choice;
	cout << "히트 스탠드를 결정하세요(히트 : 0 , 스탠드 : 1) : ";
	cin >> choice;

	switch (choice)
	{

	// 히트 선택 시 카드 한장 더 받기
	case eHitStand::HIT:
		_myHand[_myCardNum] = _card[_deckCardNum];
		_myCardNum++;
		_deckCardNum++;
		cout << "히트 선택! 카드 한장이 지급됩니다. " << endl;
		cout << "현재 내 카드 : ";
		for (int i = 0; i < _myCardNum; i++)
		{
			PrintCard(_myHand[i]);
		}
		cout << endl;
		
		// 버스트 여부 확인
		IsBurst();
		
		break;
	// 스탠드 선택 시 내 카드 확정
	case eHitStand::STAND:
		_standChoice = true;
		break;
	default:
		cout << "잘못된 선택입니다 다시 선택하세요" << endl;
		ChooseHitStand();
		break;
	}
	
}

// 컴퓨터 카드 추가
void AddComCard()
{
	_comTotal = AddCard(_comHand, _comCardNum);

	// 컴퓨터 패의 합이 17 미만인 경우 히트하여 카드 추가
	if (_comTotal < 17)
	{
		_comHand[_comCardNum] = _card[_deckCardNum];
		_comCardNum++;
		_deckCardNum++;
	}
	// 컴퓨터 패의 합이 17이상이면 종료
	else
	{
		_comConclusion = true;
	}
}

void main()
{
	/*
	다음 숙제 : 블랙잭
	```
	목표: 핸드의 카드 합계가 21에 가깝게 만들되, 21을 넘지 않는 것입니다. 가장 가까운 플레이어가 이기게 됩니다.

	카드 값:
	숫자 카드(2~10): 그대로의 숫자값을 갖습니다.
	페이스 카드(J, Q, K): 각각 10의 값을 갖습니다.
	에이스(A): 1 또는 11로 계산할 수 있습니다. 플레이어나 딜러의 핸드에 따라 자동으로 가장 유리한 방향으로 계산됩니다. 즉, 21을 넘지 않을 경우 11로, 넘을 경우 1로 계산합니다.

	게임 진행:
	처음에 플레이어와 딜러는 각각 두 장의 카드를 받습니다. 
	플레이어의 카드는 두 장 모두 앞면이 위로 향하도록 합니다. 
	딜러의 카드 중 한 장은 앞면이 위로, 다른 한 장은 뒷면이 위로 합니다.
	플레이어는 '히트(Hit)' 또는 '스탠드(Stand)'를 선택할 수 있습니다. 
	히트는 추가 카드를 받는 것을 의미하고, 스탠드는 더 이상 카드를 받지 않겠다는 것을 의미합니다.
	플레이어의 핸드 합계가 21을 넘으면 "버스트(Bust)"되어 바로 패배합니다.
	플레이어가 스탠드를 선택하면, 딜러는 숨겨진 카드를 공개하고, 핸드의 합계가 17 또는 그 이상이 될 때까지 계속 히트합니다.

	결과 판정:
	딜러가 버스트하면 플레이어가 승리합니다.
	둘 다 버스트하지 않은 경우, 21에 더 가까운 쪽이 승리합니다.
	둘 다 같은 점수일 경우 비긴 것으로 처리됩니다.
	```
	*/

	//블랙잭
	// 카드 생성
	// 게임 시작
	// 
	// 반복
	//		카드 셔플
	//		카드순서 초기화
	// 
	//		플레이어 카드 두장 받기
	//		컴퓨터 카드 두장 받기
	//		플레이어 카드 모두 오픈
	//		컴퓨터 카드 랜덤으로 한장 오픈
	// 
	//		반복
	//			플레이어의 히트, 스탠드 선택
	//				히트 선택 시 카드 한장 더 받기
	//				버스트 여부 확인
	//					버스트 시 플레이어 패배
	//				스탠드 선택 시 컴퓨터 차례로 넘어감
	// 
	//		반복(플레이어가 스탠드 선택한 경우)
	//			컴퓨터의 비공개 카드까지 공개
	//			컴퓨터 핸드에 합계가 17 이상이 될 때 까지 계속 히트
	//			17이 넘으면 스탠드
	//			버스트 시 플레이어의 승리
	//			
	//		플레이어 핸드와 컴퓨터 핸드 총합 비교 
	//		21에 더 가까운 쪽이 승리
	//		같은 점수라면 비긴 것.
	srand(time(NULL));

	GenerateCard();
	

	cout << "게임을 시작합니다. " << endl;
	while (true)
	{
		system("cls");
		// 카드 셔플
		
		cout << "새로운 라운드 진행" << endl;
		SuffleCard();

		// 카드순서 초기화
		_deckCardNum = 0;
		_myCardNum = 0;
		_comCardNum = 0;
		_standChoice = false;
		_burst = false;
		_comConclusion = false;

		// 플레이어 카드 두장 받기
		GetCard(_myHand, _myCardNum); //_myCardNum을 받는 이유는 GetCard 안에서 증가시켜주는 기능을 넣기 위함
		GetCard(_myHand, _myCardNum); //마찬가지로 아래 _comCardNum도 증가시켜줘야 하기에 매개변수로 받음

		// 컴퓨터 카드 두장 받기
		GetCard(_comHand, _comCardNum);
		GetCard(_comHand, _comCardNum);

		// 플레이어 카드 모두 오픈
		cout << "내 카드 : ";
		OpenCard(_myHand, _myCardNum);

		// 컴퓨터 카드 첫장 오픈
		cout << "컴퓨터 카드 : ";
		PrintCard(_comHand[0]);
		cout << "\t??" << endl;

		
		// 반복
		// 플레이어가 버스트되지 않고 스탠드를 선택하지 않은 경우 반복
		while (!_burst && !_standChoice)
		{
			// 히트 스탠드 선택
			ChooseHitStand();
			IsBurst();
		}

		cout << "내 카드 : ";
		OpenCard(_myHand, _myCardNum);


		cout << "컴퓨터 카드 공개 : ";
		OpenCard(_comHand, _comCardNum);


		// 반복
		// 플레이어가 버스트되지 않고 스탠드를 선택한 경우
		// 컴퓨터의 패 합이 17 이상이 될때까지 반복
		while (!_burst && _standChoice && !_comConclusion)
		{
			//컴퓨터 카드 추가 결정
			AddComCard();
		}

		cout << "최종 내 카드 : ";
		OpenCard(_myHand, _myCardNum);


		cout << "최종 컴퓨터 카드 : ";
		OpenCard(_comHand, _comCardNum);


		if (_burst)
		{
			cout << "플레이어 버스트!! 패배..!" << endl;
		}
		else
		{
			if (_myTotal == _comTotal)
			{
				cout << "무승부" << endl;
			}
			else if (_myTotal > _comTotal)
			{
				cout << "플레이어 승리" << endl;
			}
			else if (_myTotal < _comTotal && _comTotal < 21)
			{
				cout << "플레이어 패배" << endl;
			}
			else if (_comTotal > 21)
			{
				cout << "컴퓨터 버스트, 플레이어 승리" << endl;
			}
			

		}

		//		반복(플레이어가 스탠드 선택한 경우)
		//			컴퓨터 핸드에 합계가 17 이상이 될 때 까지 계속 히트
		//			버스트 시 플레이어의 승리
		//			
		//		플레이어 핸드와 컴퓨터 핸드 총합 비교 
		//		21에 더 가까운 쪽이 승리
		//		같은 점수라면 비긴 것.

		system("pause");
	}

}