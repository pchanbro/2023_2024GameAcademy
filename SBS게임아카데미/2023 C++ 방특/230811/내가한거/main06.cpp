#include <iostream>
using namespace std;

void main()
{
	// 반복문 1
	
	// 특정 조건이 만족할 때까지 반복시킨다.

	// if문 ==> 만약 ~~ 하면 ~~ 한다.

	// while문 ==> ~~면 안의 내용을 반복한다.
	
	// while (조건)
	//{
	//		반복시킬 구문
	//}
	
	//---------------------------------
	// while문 사용 예시
	//---------------------------------
	//bool isGamePlaying = true;
	//while (isGamePlaying) // () 안의 조건이 참이면 내용을 반복한다.
	//{
	//	//[입력] input
	//	int input;
	//	cin >> input;

	//	//만약 input이 0이라면,
	//	//	isGamePlaying = False;
	//	if (input == 0)
	//	{
	//		isGamePlaying = false;
	//	}
	//}

	//--------------------------------
	// continue, break
	//--------------------------------
	while (true) 
	{
		//[입력] input
		int input;
		cin >> input;

		//만약 input이 1이면 continue;
		//만약 input이 0이면 break;
		if (input == 1)
		{
			// continue의 기능
			//		반복문의 끝점으로 이동(거의 시작점으로 돌아가기 위해 사용)
			continue;
		}
		else if (input == 0)
		{
			// break의 기능
			//		반복문 중괄호를 탈출한다.
			break;
		}

		//[출력] input : 3
		cout << "input : " << input << endl;
	}
}