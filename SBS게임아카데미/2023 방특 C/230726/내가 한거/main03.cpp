#include <iostream>>
using namespace std;

// enum
// int, float, char, bool

// 사용자 정의 자료형
// enum(열거형), struc(구조체) (c/c++한정으로) typedef

typedef int Damage; //코드상 int를 MyNumber로 사용 가능 - 코드 가독성을 위해 사용함
typedef int Hp;

struct monster
{
	Damage damage;
	Hp hp;
	float attackSpeed;
};



int main()
{
	monster slime;
	slime.damage = 10;
	slime.hp = 100;
	slime.attackSpeed = 1.0;

	cout << "[슬라임 정보 출력]" << endl;
	cout << "체력 : " << slime.hp << endl;
	cout << "데미지 : " << slime.damage << endl;
	cout << "공격속도 : " << slime.attackSpeed << endl;

	//숙제 : 
	// 기본 스펙 : 
	// 내 캐릭터
	// 컴퓨터 캐릭터
	// 내가 한 대 때리고,
	// 컴퓨터가 한 대 떄리고 반복
	// 누군가 죽을 때 까지

	// +
	// GetTickCount64() 함수
	// 공격속도 계산
	// 내 공속이 빠르면 두 대 때리고

	// +
	// 기본공격 x 스킬 사용(스킬은 더 강력함)

	// + 
	// CustomConsole 사용해서
	// 애니메이션 넣어보기
	return 0;
}