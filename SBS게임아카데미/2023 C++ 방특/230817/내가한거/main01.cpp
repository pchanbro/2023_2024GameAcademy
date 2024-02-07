#include <iostream>
#include <time.h>
using namespace std;

void main()
{
	//선생님 숙제풀이
	// 1. 업다운
	// 2. 묵찌빠 
	// 3. 별찍기
	// 4. 가위바위보 하나빼기

	srand(time(NULL));

	// 1. 업다운
	// 수도코드부터 짜라 어린 아이에게 설명한다는 생각으로 짜면 된다.
	// 1 ~ 100 까지 수중에 하나가 결정된다.
	// 이 때 결정된 숫자는 정답이다.
	// 정답을 answer라고 부른다.
	
	// 플레이를 진행하는데, 정답을 맞출때 까지 반복한다.
	// [입력] 입력받은 숫자를 input라고 부른다.
	// 정답이 input 값보다 크면 
	//		[출력] "UP"
	// 정답이 Input보다 작으면
	//		[출력] "Down"
	// 정답이 input과 같으면
	//		[출력] "정답입니다"
	//		정답을 맞췄다고 변수를 설정한다.
	//		게임을 종료한다

	
	// 1 ~ 100 까지 수중에 하나가 결정된다.
	int answer = rand() % 100 + 1;
	bool isGameClear = false;
	int min = 1;
	int max = 100;
	while (isGameClear == false)
	{
		//"숫자를 입력해주세요( min ~ max) : 
		cout << "숫자를 입력해주세요(" << min << " ~ " << max << ") : " << endl;
		
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
			cout << "정답입니다. " << endl;
			isGameClear == true;
		}
	}

}