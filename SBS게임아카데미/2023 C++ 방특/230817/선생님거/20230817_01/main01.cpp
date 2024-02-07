#include <iostream>
#include <time.h>
using namespace std;

void main()
{
	// 숙제 1. 업다운
	// 숙제 2. 묵찌빠
	// 숙제 3. 별찍기
	// 숙제 4. 가위바위보 하나빼기

	srand(time(NULL));


	// 업다운!
	//  - 수도코드
	// 1~100까지 수중에 하나가 결정된다.
	// 이때 결정된 숫자는 정답이다.
	// 정답을 answer라고 부른다.

	// 플레이를 진행하는데, 정답을 맞출때까지 반복한다.
	// [입력] 입력받은 숫자를 input이라고 부른다
	// 
	// 정답이 Input보다 크면
	//		[출력] "Up"
	// 정답이 Input보다 작으면
	//		[출력] "Down"
	// 정답이 Input과 같으면
	//		[출력] "정답입니다"
	//		정답을 맞췄다고 변수를 설정한다.

	//1~100까지 수 ==> (0~99 까지의 랜덤 + 1)
	int answer = rand() % 100 + 1;
	bool isGameClear = false;
	int min = 1;
	int max = 100;
	while (isGameClear == false)
	{
		//숫자를 입력해주세요( {min} ~ {max} ) : 
		cout << "숫자를 입력해주세요(" << min << " ~ " << max  << ") : " << endl;
		
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
			cout << "정답입니다" << endl;
			isGameClear = true;
		}
	}


}