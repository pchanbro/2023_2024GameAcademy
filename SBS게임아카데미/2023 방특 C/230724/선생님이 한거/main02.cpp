#include <iostream>
#include <time.h>
using namespace std;

//void �Լ���(�ŰԺ���)
void printNumber(int number)
{
	cout << "number : " << number << endl;
}

//��ȯ���� �ִ��Լ�
int getRandom(int minInclude, int maxExclude)
{
	int number = rand() % (maxExclude - minInclude);
	number += minInclude;

	return number;
}

void setNumber(int& number, int toNumber)
{
	number = toNumber;
}


int main()
{
	//�Լ�
	srand(time(NULL));
	// 7~19 --> 0~12 + 7
	// min~max �̾ƿ´�. getRandom(min, max)

	/*for (int i = 0; i < 1000; i++)
	{
		int myNum = getRandom(7, 20);
		printNumber(myNum);
	}*/

	int num = 2;
	//setNumber(num, 6);
	//{
	//  // ���۷���
	//	int& number = num, int toNumber = 6;
	//	number = toNumber;
	//}
	setNumber(num, 6);

	printNumber(num);

	// ���ھ߱� 4�� (�ִ��� �Լ����̽Ἥ) 

	return 0;
}