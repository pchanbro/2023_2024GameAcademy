#include <iostream>
using namespace std;

void main()
{
	srand(time(NULL));
	// 숙제 2. 묵찌빠

	// 내가 낼것을 정한다. (0~2)
	// 내가 낸것을 myHand라고 부른다.
	// 컴퓨터가 낼것을 comHand라고 부른다.
	// 컴퓨터는 0~2사이의 랜덤값을 가진다.
	
	// 내가 낸것을 출력한다. 
	//	   이때, myHand가 0이면 가위,
	//		myHand가 1이면 바위,
	//		myHand가 2면 보

	// 상대가 낸것을 출력한다. 
	//	   이때, comHand가 0이면 가위,
	//		comHand가 1이면 바위,
	//		comHand가 2면 보

	// myHand와 comHand가 같다면 위의 내용을 반복한다.

	// 현재 누가 이겼는지에 대한 변수를 isPlayerWinner라고 부른다.
	// 내가 이겼으면, isPlayerWinner를 true로 설정한다.
	// 내가 졌으면, isPlayerWinner를 false로 설정한다.

	// comHand와 myHand가 다르면 아래내용을 반복한다.
	//		내가 낼것을 정한다 (myHand)
	//		상대가 낼것을 정한다 (0~2 랜덤) (comHand)
	//		내가 이겼으면, isPlayerWinner를 true로 설정한다.
	//		내가 졌으면, isPlayerWinner를 false로 설정한다.

	// isPlayerWinner가 true면
	//		[출력] 플레이어 승리
	// 그렇지 않으면
	//		[출력] 컴퓨터 승리

	//=============================================
	//		묵찌빠 시작
	//=============================================

	int myHand = 0;
	int comHand = 0;

	do
	{
		// 내가 낼것을 정한다. (0~2)
		// 내가 낸것을 myHand라고 부른다.
		cout << "내가 낼것을 골라주세요 (0: 가위, 1:바위, 2:보)" << endl;
		cin >> myHand;


		// 컴퓨터가 낼것을 comHand라고 부른다.
		// 컴퓨터는 0~2사이의 랜덤값을 가진다.
		comHand = rand() % 3;

		// 내가 낸것을 출력한다. 
		//	   이때, myHand가 0이면 가위,
		//		myHand가 1이면 바위,
		//		myHand가 2면 보

		cout << "내가 낸것 : ";
		if (myHand == 0)
		{
			cout << "가위";
		}
		if (myHand == 1)
		{
			cout << "바위";
		}
		if (myHand == 2)
		{
			cout << "보";
		}
		cout << endl;

		// 상대가 낸것을 출력한다. 
		//	   이때, comHand가 0이면 가위,
		//		comHand가 1이면 바위,
		//		comHand가 2면 보
		cout << "상대가 낸것 : ";
		if (comHand == 0)
		{
			cout << "가위";
		}
		if (comHand == 1)
		{
			cout << "바위";
		}
		if (comHand == 2)
		{
			cout << "보";
		}
		cout << endl;
	} while (myHand == comHand);
	// myHand와 comHand가 같다면 위의 내용을 반복한다.


	// 현재 누가 이겼는지에 대한 변수를 isPlayerWinner라고 부른다.
	// 내가 이겼으면, isPlayerWinner를 true로 설정한다.
	// 내가 졌으면, isPlayerWinner를 false로 설정한다.
	bool isPlayerWinner = false;
	if (myHand == 0 && comHand == 1)
	{
		isPlayerWinner = false;
	}
	else if (myHand == 1 && comHand == 2)
	{
		isPlayerWinner = false;
	}
	else if (myHand == 2 && comHand == 0)
	{
		isPlayerWinner = false;
	}
	else
	{
		isPlayerWinner = true;
	}

	// comHand와 myHand가 다르면 아래내용을 반복한다.
	//		내가 낼것을 정한다 (myHand)
	//		상대가 낼것을 정한다 (0~2 랜덤) (comHand)
	// 
	//		내가 낸것을 출력해준다.
	//		상대가 낸것을 출력해준다.
	// 
	//		내가 이겼으면, isPlayerWinner를 true로 설정한다.
	//		내가 졌으면, isPlayerWinner를 false로 설정한다.
	while (comHand != myHand)
	{
		//내가 낼것을 정한다 (myHand)
		cout << "내가 낼것을 골라주세요 (0:가위, 1:바위, 2:보)" << endl;
		cin >> myHand;
		//상대가 낼것을 정한다 (0~2 랜덤) (comHand)
		comHand = rand() % 3;

		//		내가 낸것을 출력해준다.
		cout << "내가 낸것 : ";
		if (myHand == 0)
		{
			cout << "가위";
		}
		else if (myHand == 1)
		{
			cout << "바위";
		}
		else if (myHand == 2)
		{
			cout << "보";
		}
		cout << endl;

		//		상대가 낸것을 출력해준다.
		cout << "상대가 낸 것 : ";
		if (comHand == 0)
		{
			cout << "가위";
		}
		else if (comHand == 1)
		{
			cout << "바위";
		}
		else if (comHand == 2)
		{
			cout << "보";
		}
		cout << endl;


		//		내가 이겼으면, isPlayerWinner를 true로 설정한다.
		//		내가 졌으면, isPlayerWinner를 false로 설정한다.
		if (myHand == 0 && comHand == 1)
		{
			isPlayerWinner = false;
		}
		else if (myHand == 1 && comHand == 2)
		{
			isPlayerWinner = false;
		}
		else if (myHand == 2 && comHand == 0)
		{
			isPlayerWinner = false;
		}
		else
		{
			isPlayerWinner = true;
		}


		if (isPlayerWinner == true)
		{
			cout << "[내공격턴!]" << endl;
		}
		else
		{
			cout << "[상대 공격턴!]" << endl;
		}
	}

	// isPlayerWinner가 true면
	//		[출력] 플레이어 승리
	// 그렇지 않으면
	//		[출력] 컴퓨터 승리
	if (isPlayerWinner == true)
	{
		cout << "플레이어 승리" << endl;
	}
	else
	{
		cout << "컴퓨터 승리" << endl;
	}

}