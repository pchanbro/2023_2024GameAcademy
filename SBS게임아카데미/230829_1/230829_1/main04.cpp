#include <iostream>
#include "main04_Unit.h" //같은 라이브러리에 있는 경우는 ""로 써준다.
//#include는 해당 파일안에 있는 내용을 모두 Ctrl + C, Ctrl + V 한다.
//근데 여기서 #include "Unit.h"를 한 번 더 해준다거나 그 안의 내용인
//struct Unit
//{
//	int Hp;
//	int Mp;
//};를 적어주면 재정의한다는 오류가 발생한다
//그런데 #include <iostream> 이거는 몇 번을 해도 실행이 잘 되는 이유
// 그건 바로 #ifndef #endif를 사용하기 때문이다.
// MS에서 #ifndef를 자주쓰는걸 보고 만들어준게 
// #pragma once다
using namespace std;

void main()
{
	// 4. 전방 선언
	// struct Unit

	Unit myUnit;
	// 프로그램은
	// 항상 첫번째 줄부터 읽습니다.

	// main이 프로그램 시작점인데
	// 아래있을수록
	// 코드 읽기가 힘들어진다
	// 근데 첫줄부터 읽기 때문에 main은 점점 아래로 가게됨
	// 이를 어떻게 해결할까 고민하다가 
	// 전방 선언 이라는 것을 사용

	// struct Unit; (전방선언)
	// => Unit이라는 
}