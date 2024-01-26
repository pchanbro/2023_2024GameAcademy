#include <iostream>
#include "main04_Unit.h"
//#include 는 해당 파일안에 있는 내용을 모두 Ctrl + C, Ctrl + V 한다.

using namespace std;

void main()
{
	//4. 전방 선언 
	//struct Unit

	Unit myUnit;
	//프로그램은
	//항상 첫번째줄부터 읽습니다.

	//main이 프로그램 시작점인데
	//아래있을수록
	//코드읽기가 힘들어집니다.

	//struct Unit; (전방선언)
	// => Unit이라는 구조체가 있으니까
	//    나와도 당황하지 않고, 실행해도 된다.

	//선언만하면 프로그램이 어떻게든 읽을수있다.
	//선언만 해주는 파일 => 헤더 파일
	//헤더파일을 따로 만듭니다.
}