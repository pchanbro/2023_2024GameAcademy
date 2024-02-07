#include <iostream>
using namespace std;

// 기본 자료형
// int, float, char, bool

// 사용자 정의 자료형
// enum(열거형) , struct(구조체), class, C/C++ typedef


struct monster
{
	int damage;
	int hp;
	float attackSpeed;
};


int main()
{
	//C++
	//monster slime;
	//C 
	struct monster slime;
	slime.damage = 10;
	slime.hp = 100;
	slime.attackSpeed = 1.0;

	cout << "[슬라임 정보 출력]" << endl;
	cout << "체력 : " << slime.hp << endl;
	cout << "데미지 : " << slime.damage << endl;
	cout << "공격속도 : " << slime.attackSpeed << endl;
	//printf("공격속도 : %f\n", slime.attackSpeed);


	//숙제 : 
	// 기본 스펙 : 
	
	// 내		캐릭터,
	// 컴퓨터	캐릭터 
	// 내가 한대때리고,
	// 컴퓨터가 한대때리고 반복
	// 누가죽을때까지

	// GetTickCount64() 함수
	// 공격속도 계산
	// 내공속이빠르면 두대때리고

	// + 
	// 기본공격 x 스킬도 쓰게끔 (조금쌘 공격)
	
	// +
	// CustomConsole 사용해서
	// 애니메이션까지 넣어보기






	return 0;
}