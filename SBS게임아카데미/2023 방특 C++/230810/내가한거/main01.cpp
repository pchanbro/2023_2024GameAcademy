#include <iostream> //iostream - > input과 output stream을 포함하고 있다.

using namespace std; // std(standard, MS에서 만든 표준 이름공간) 라는 namespace를 사용하겠다. 

//main이라는 함수 
//프로그램이 시작하면 가장 먼저 시작하는 함수
void main()
{
	cout << "사람들과 잘 친해지는 사람이 되고 싶다..";
	//줄 띄움을 줄 수 있는 방법1
	cout << "\n";
	cout << "근데\n그러려면 간단한 대화를 잘 이뤄 나가야 해";
	cout << "\n";
	cout << "그렇다면 난 대화를 잘 이뤄나가는 방법을 배워야겠지";
	//줄 띄움을 줄 수 있는 방법2
	cout << endl;

	// << 연속으로 사용하는 방법 
	cout << "그러면 우선 집에 있는 간단한 대화 책을 읽어보자" << endl;

	//애국가 1절
	cout << "동해물과 백두산이 마르고 닳도록" << endl;
	cout << "하느님이 보우하사 우리나라 만세" << endl;
	cout << "무궁화 삼천리 화려강산" << endl;
	cout << "대한사랑 대한으로 길이 보전하세" << endl;

	/*
	* { },
	* [ ],
	* ( ),
	* " ",
	* ' '
	* 얘네들은 항상 쌍을 이루어야 한다.
	* X : "(")
	* O : "()"
	* O : ("")
	*/

}