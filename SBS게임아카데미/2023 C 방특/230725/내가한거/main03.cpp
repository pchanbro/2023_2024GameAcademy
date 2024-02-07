#include <iostream>		//input, output, stream --> 입력, 출력에 관한 내용을 다루는 헤더
#include <conio.h>		//conio --> 키보드 입력 받기위한 헤더
#include <time.h>		//time -- > 시간관련된 헤더
#include <Windows.h>	//windows --> 윈도우기능 관련된 헤더

using namespace std;

void showCharacter(int frame)
{
	system("cls");
	if (frame == 0)
	{
		cout << "★" << endl;
	}
	else
	{
		cout << "☆" << endl;
	}
}

int main() 
{
	int lastFrame = GetTickCount();//windows.h를 선언해야 사용 가능
	while (true)
	{
		//cout << "무한정으로 찍는다." << endl;
		//if (_kbhit())
		//{
		//	char ch = _getch();
		//	cout << GetTickCount() << endl; //컴퓨터가 켜지고 얼마나 지났나 마이크로 세컨드 단위로
		//}
		
		if (1000 <= GetTickCount() - lastFrame)
		{
			lastFrame = GetTickCount();
			cout << "1초가 흘렀습니다." << endl;
		}
	}
	return 0;
}

//230725 숙제 
//1. 묵찌빠
//2. 로또번호 생성기 (1~45개 숫자 배열이 있고 그 중에 7개를 랜덤으로 뽑는 것)