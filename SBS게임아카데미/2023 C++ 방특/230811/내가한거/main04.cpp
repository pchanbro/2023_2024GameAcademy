#include <iostream>
#include <time.h>
using namespace std;

void main()
{
	srand(time(NULL));

	// 가위 바위 보 (VS Com) 만들기
	//
	// 수도 코드
	// 1. 내가 낼 것을 정한다.
	// 1-1. [출력] 내가 낼 것을 골라주세요 (0 : 가위, 1: 바위, 2: 보)
	// 1-2. [입력] myHand
	// 
	// 2. 컴퓨터가 낼 것을 정한다.
	// 2-1. comHand의 범위 : (0~2) // 0 : 가위, 1: 바위, 2 : 보

	// 3. 각자 낸 것을 출력시킨다.
	// 3-1. [출력] 내가 고른 것 : 가위(예시)
	// 3-1-1. myHand가 0이라면
	// 3-1-1.	[출력] 내가 고른 것 : 가위
	// 3-1-2. myHand가 0이라면
	// 3-1-2.	[출력] 내가 고른 것 : 바위
	// 3-1-3. myHand가 0이라면
	// 3-1-3.	[출력] 내가 고른 것 : 보
	
	// 3-2. [출력] 상대가 고른 것 : 바위(예시)
	// 3-2-1. comHand가 0이라면
	// 3-2-1.	[출력] 내가 고른 것 : 가위
	// 3-2-2. comHand가 0이라면
	// 3-2-2.	[출력] 내가 고른 것 : 바위
	// 3-2-3. comHand가 0이라면
	// 3-2-3.	[출력] 내가 고른 것 : 보

	// 4. 승패비교를 한다.
	// 4-1. myHand가 0이고, comHand가 1이면
	// 4-1.		[출력] 패배했습니다.
	// 4-2. 그렇지 않고 myHand가 1이고, comHand가 2이면
	// 4-2.		[출력] 패배했습니다.
	// 4-3. 그렇지 않고 myHand가 2이고, comHand가 0이면
	// 4-3.		[출력] 패배했습니다.
	// 4-4. 그렇지 않고 myHand가 comHand와 같다면
	// 4-4.		[출력] 비겼습니다.
	// 4-5. 그렇지 않으면
	// 4-4.		[출력] 승리했습니다.
	int myHand;
	int comHand;

	// 1. 내가 낼 것을 정한다.
	cout << "내가 낼 것을 골라주세요( 0 : 가위, 1 : 바위, 2 : 보 ) : ";
	cin >> myHand;

	// 2. 컴퓨터가 낼 것을 정한다.
	comHand = rand() % 3;
	
	// 3. 각자 낸 것을 출력시킨다.
	// 내가 낸 것 출력
	if (myHand == 0)
	{
		cout << "내가 고른 것 : 가위" << endl;
	}
	else if (myHand == 1)
	{
		cout << "내가 고른 것 : 바위" << endl;
	}
	else if (myHand == 2)
	{
		cout << "내가 고른 것 : 보" << endl;
	}
	else
	{
		cout << "잘못 입력하셨습니다. " << endl;
	}

	// 컴퓨터가 낸 것 출력
	if (comHand == 0)
	{
		cout << "컴퓨터가 고른 것 : 가위" << endl;
	}
	else if (comHand == 1)
	{
		cout << "컴퓨터가 고른 것 : 바위" << endl;
	}
	else if (comHand == 2)
	{
		cout << "컴퓨터가 고른 것 : 보" << endl;
	}
	

	// 4. 승패비교를 한다.
	if ((myHand == 0 && comHand == 1) || (myHand == 1 && comHand == 2) || (myHand == 2 && comHand == 0))
	{
		cout << "패배했습니다." << endl;
	}
	else if (myHand == comHand)
	{
		cout << "비겼습니다." << endl;
	}
	else
	{
		cout << "승리했습니다. " << endl;
	}
	
	// 주말숙제 묵찌빠(main06 반복문 참고)
}