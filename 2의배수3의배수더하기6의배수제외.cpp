#include <iostream>
using namespace std;

void main()
{
	// 2. 1 ~1000 까지의 숫자 중에서 2의 배수와 3의 배수를 합한 값
	// 다만 6의 배수는 더하지 않는다.

	// 총 합을 표현할 변수 선언
	int sum = 0;

	// 1000 까지의 숫자를 처리하기 위해 포문 사용
	for (int i = 1; i <= 1000; i++)
	{
		// 2의 배수와 3의 배수라면 더하기
		if (i % 2 == 0 || i % 3 == 0)
		{
			// 6의 배수라면 더하지 않음
			if (i % 6 == 0)
			{
				continue;
			}
			sum += i;
		}
	}
	cout << "총합 : " << sum << endl;
}