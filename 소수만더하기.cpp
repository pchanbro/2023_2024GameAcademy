#include <iostream>
using namespace std;

void main()
{
	// 2번 [추가숙제]
	// 1 ~ 1000까지 숫자 중에서 소수만 더해서 출력

	// 총 합을 계산하기 위한 변수 선언
	int sum = 0;

	// 1000까지의 수를 확인하기 위한 for문 사용
	for (int i = 2; i <= 1000; i++)
	{
		// 소수인지를 확인하기 위해 2 ~ i-1의 수로 한 번씩 i를 나눠봄
		for (int j = 2; j <= i; j++)
		{
			// 2 ~ i-1 범위의 j로 i를 나누지 못하여 i = j가 된다면 소수로 판단하여 더하기
			if (i == j)
			{
				sum += i;
			}
			else if (i % j == 0)
			{
				break;
			}
		}
	}
	cout << "소수의 합 : " << sum << endl;
}