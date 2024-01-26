#include <iostream>
#include <time.h>
using namespace std;

struct Unit
{
	float Hp;
	float Damage;
};

void main()
{
	// 숙제1.
	// 숫자야구
	// 컴퓨터가 랜덤한 숫자를 뽑는다.
	// 이 때 숫자가 겹치지 않도록 4자리를 뽑음
	// 단 첫 숫자는 0 불가
	// 여기부터 무한 반복
	//		사용자가 겹치지 않는 4자리 숫자 입력
	//		정답이 예를 들어 2593 일 때 사용자가 2307을 입력하면 1strike 1ball
	// 4strike가 되면 성공
	// 결과적으로 4strike면 게임 종료

	// 구조체 
	// 자료형
	// 사용자 정의 자료형
	
	// 자료형의 종류
	// 1. 기본자료형
	// 2. 사용자 정의 자료형

	// 1. 기본자료형
	// c++에서 기본적으로 제공해주는 자료형
	// int, float, bool, char

	// 2. 사용자정의 자료형 (이건 사용자에 따라 다른데 수도코드에 따라 달라지니 수도코드가 매우중요)
	// 사용자가 직접 의미를 정의하고 내용을 정의하여 사용하는 자료형
	// struct, enum, class

	// 몬스터의 Hp, Damage를 만들어야한다.
	float Hp;
	float Damage;

	Unit monster;
	//float monsterHp
	//float monsterDamage

	//사용법
	monster.Hp = 100;
	monster.Damage = 23;

	//변수 초기화
	Unit slime = { 100, 10 };
	cout << "slime Hp : " << slime.Hp << endl;
	cout << "slime Damage : " << slime.Damage << endl;

	Unit hero = { 200, 7 };
	cout << "hero Hp : " << slime.Hp << endl;
	cout << "hero Damage : " << slime.Damage << endl;

	// 슬라임이 히어로를 한 대 때리고 
	// 히어로가 슬라임을 한 대 때리는 게임 만들기 
	// 둘 중 하나가 죽을 때까지 반복

	while (true)
	{
		cout << "슬라임의 공격!" << endl;
		hero.Hp -= slime.Damage;
		cout << "히어로의 Hp : " << hero.Hp << endl;
		cout << endl;

		if (hero.Hp < 0)
		{
			cout << "히어로 사망, 슬라임 승리" << endl;
			break;
		}

		cout << "히어로의 공격!" << endl;
		slime.Hp -= hero.Damage;
		cout << "슬라임의 Hp : " << slime.Hp << endl;
		cout << endl;

		if (slime.Hp < 0)
		{
			cout << "슬라임 사망, 히어로 승리" << endl;
			break;
		}
	}
}