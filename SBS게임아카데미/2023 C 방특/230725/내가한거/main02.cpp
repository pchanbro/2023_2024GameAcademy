#include <iostream>
#include <time.h>
//매크로
#define MYVALUE_SCISSOR 0 //상수는 대문자로 써주는게 보통이다
#define MYVALUE_ROCK 1
#define MYVALUE_PAPER 2

using namespace std;

//enum 

//자료형 
//기본 자료형
//int bool char float

//사용자 정의 자료형
//enum, class, struct

//enum 변수명 앞엔 e를 붙여준다.
enum eRockScissorPaper
{
	SCISSOR,
	ROCK,
	PAPER
};

int main()
{
	//변수선언 공식
	//자료형 변수명 = 값;
	eRockScissorPaper a = SCISSOR;

	int myVar2 = ROCK;
	//가위 바위 보를 enum으로 ROCK, SCISSOR, PAPER를 만들면 보기에 편해짐
	
	return 0;
}