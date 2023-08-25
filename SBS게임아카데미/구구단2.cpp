#include <iostream>
using namespace std;

void main()
{
	//구구단
	// 1 x 1 = 1	2 x 1 = 2	3 x 1 = 3
	// 1 x 2 = 2	2 x 2 = 4	3 x 2 = 6
	// .
	// .
	// .
	// 7 x 9 = 63	8 x 9 = 72	9 x 9 = 81

	//이중 포문을 사용하여 3단씩 구구단 출력
	//i를 통해 몇 단인지를 표현
	for (int i = 1; i <= 3; i++)
	{
		//j를 통해 한 단의 몇 번째 수인지 표현
		for (int j = 1; j <= 9; j++)
		{
			cout << i * 3 - 2 << " * " << j << " = " << (i * 3 - 2) * j << "\t";
			cout << i * 3 - 1 << " * " << j << " = " << (i * 3 - 1) * j << "\t";
			cout << i * 3     << " * " << j << " = " << (i * 3    ) * j << "\t";
			cout << endl;
		}
		cout << endl;
	}
}