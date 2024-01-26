#include <iostream>
using namespace std;

void main()
{
	// 실습 시간
	// 1. 랜덤 숫자 맞추기 ( UP DOWM 스무고개)

	// 중괄호 내용을 계속 반복한다.
	//while (true)
	//{

	//}

	// 랜덤숫자가 정해졌습니다. (1 ~ 100)
	// 숫자를 입력해주세요 : 
	// [입력] 사용자 : (3)
	// UP
	// 랜덤숫자가 정해졌습니다 .(3 ~ 100)
	// 숫자를 입력해주세요 : 
	// [입력] 사용자 : (47)
	// DOWN
	// 랜덤숫자가 정해졌습니다. (3 ~ 47)
	// 숫자를 입력해주세요 : 
	// [입력] 사용자 : (25)
	// 정답입니다.

	//수도코드 : 
	// 1. 랜덤숫자를 정한다.
	// 2. 랜덤숫자가 정해졌습니다. 출력
	// 3. 반복 실행
	// 4.	숫자를 입력받는다.
	// 5.	입력받은 숫자를 비교해서 UP DOWN 정답 판별

	srand(time(NULL));

	int randNum = rand() % 100 + 1;
	int max = 100;
	int min = 1;
	int choice;
	while (true)
	{
		// 랜덤숫자가 정해졌습니다. (1 ~ 100)
		cout << "랜덤숫자가 정해졌습니다. (" << min << " ~ " << max << ")" << endl;

		// 숫자를 입력해주세요 : 
		cout << "숫자를 입력해주세요 : ";

		// [입력] 사용자 : (3)
		cin >> choice;

		// 선택값이 정답보다 크면
		if (choice > randNum)
		{
			cout << "DOWN" << endl;
			max = choice;
		}
		// 선택값이 정답보다 작으면
		else if (choice < randNum)
		{
			cout << "UP" << endl;
			min = choice;
		}
		// 선택값이 정답과 같으면
		else if (choice == randNum)
		{
			cout << "정답입니다." << endl;
			break;
		}
	}
}