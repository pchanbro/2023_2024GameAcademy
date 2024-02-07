#include <iostream>

using namespace std;
int _myBoard[25] = {};
int _comBoard[25] = {};

void main()
{
	// 빙고게임 만들기

	// 5x5로 이루어진 나의 판
	// 5x5로 이루어진 컴퓨터 판
	// 각 빙고판안에는 1~25까지의 숫자가 들어있음.

	// 내턴 -> 상대턴 -> 내턴 -> 상대턴 반복

	// 각자 턴일때, 숫자를 하나 부른다.
	// 부른 숫자는 숫자로 표기안되고 #으로 표기됨.

	//출력예시
	//나 : 
	// 7 6 15 20 #
	// 1 5 3  7  2
	// ...
	// ...
	// ...
	
	//상대 : 
	// 1 5 3  7  2
	// 7 6 15 20 #
	// ...
	// ...
	// ...

	// 빙고가 완성되면 해당 플레이어 승리.



	// 수도코드
	// 1.
	// 나의 판을 myBoard라고 부른다.
	// 나의 판을 1~25까지의 숫자로 초기화한다.
	// 나의 판을 섞는다.

	// 2.
	// 컴퓨터의 판을 comBaord라고 부른다.
	// 컴퓨터의 판을 1~25의 숫자로 초기화한다.
	// 컴퓨터의 판을 섞는다.

	// 3. myBoard를 출력한다.
	// 4. comBoard를 출력한다.
	
	// 5. 아래 내용을 반복한다.
	// 숫자를 하나 입력받는다.
	// 입력받은 이 숫자를 input이라고 부른다
	// myBoard의 배열을 모두 순회하면서 input과 같은 값이 있으면 값을 -1로 바꿔준다.
	// comBoard의 배열을 모두 순회하면서 input과 같은 값이 있으면 값을 -1로 바꿔준다.

	// 6.  숫자를 하나 랜덤으로 뽑아온다.
	// 입력받은 이 숫자를 input이라고 부른다
	// myBoard의 배열을 모두 순회하면서 input과 같은 값이 있으면 값을 -1로 바꿔준다.
	// comBoard의 배열을 모두 순회하면서 input과 같은 값이 있으면 값을 -1로 바꿔준다.


	// 1.
	// 나의 판을 myBoard라고 부른다.
	// 나의 판을 1~25까지의 숫자로 초기화한다.
	// 나의 판을 섞는다.
	
	//배열초기화는 항상 for문이랑 함께.
	for (int i = 0; i < 25; i++)
	{
		_myBoard[i] = i + 1;
	}

	//섞는 로직
	//Swap * 100000번 반복
	for (int i = 0; i < 100000; i++)
	{
		/*int temp = a;
		a = b;
		b = temp;*/
		int num1 = rand() % 25;
		int num2 = rand() % 25;

		int temp = _myBoard[num1];
		_myBoard[num1] = _myBoard[num2];
		_myBoard[num2] = temp;
	}


	// 2.
	// 컴퓨터의 판을 comBaord라고 부른다.
	// 컴퓨터의 판을 1~25의 숫자로 초기화한다.
	// 컴퓨터의 판을 섞는다.
	for (int i = 0; i < 25; i++)
	{
		_comBoard[i] = i + 1;
	}

	for (int i = 0; i < 100000; i++)
	{
		int num1 = rand() % 25;
		int num2 = rand() % 25;
		int temp = _comBoard[num1];
		_comBoard[num1] = _comBoard[num2];
		_comBoard[num2] = temp;
	}


	// 3. myBoard를 출력한다.
	/*cout << _myBoard[0] << "\t";
	cout << _myBoard[1] << "\t";
	cout << _myBoard[2] << "\t";
	cout << _myBoard[3] << "\t";
	cout << _myBoard[4] << endl;
	cout << _myBoard[5] << "\t";
	cout << _myBoard[6] << "\t";
	cout << _myBoard[7] << "\t";
	cout << _myBoard[8] << "\t";
	cout << _myBoard[9] << endl;*/
	cout << "내 보드 : " << endl;
	for (int i = 0; i < 25; i++)
	{
		if (i % 5 == 4)
		{
			if (_myBoard[i] == -1)
			{
				cout << "#" << endl;
			}
			else
			{
				cout << _myBoard[i] << endl;
			}
		}
		else
		{
			if (_myBoard[i] == -1)
			{
				cout << "#" << "\t";
			}
			else
			{
				cout << _myBoard[i] << "\t";
			}
		}
	}
	cout << "컴퓨터 보드 : " << endl;
	for (int i = 0; i < 25; i++)
	{
		if (i % 5 == 4)
		{
			if (_comBoard[i] == -1)
			{
				cout << "#" << endl;
			}
			else
			{
				cout << _comBoard[i] << endl;
			}
		}
		else
		{
			if (_comBoard[i] == -1)
			{
				cout << "#" << "\t";
			}
			else
			{
				cout << _comBoard[i] << "\t";
			}
		}
	}
	
	// 5. 아래 내용을 반복한다.
	// 숫자를 하나 입력받는다.
	// 입력받은 이 숫자를 input이라고 부른다
	// myBoard의 배열을 모두 순회하면서 input과 같은 값이 있으면 값을 -1로 바꿔준다.
	// comBoard의 배열을 모두 순회하면서 input과 같은 값이 있으면 값을 -1로 바꿔준다.
}

//숙제 2.
// 빙고 완성