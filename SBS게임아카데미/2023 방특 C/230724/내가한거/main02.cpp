#include <iostream>
using namespace std;

//void �Լ���(�Ű�����)
//�Լ����� ���簡 ����
//�������� ��簡 ����
void printNumber(int number)
{
	cout << "number : " << number << endl;
}

//��ȯ���� �ִ� �Լ�
int getRandom(int minInclude, int maxExclude)
{
	int number = rand() % (minInclude - maxExclude);
	number += minInclude;

	return number;
}

int setNumber(int number, int toNumber)
{
	number = toNumber;//�̷��� ������� ���ο��� number�ڸ��� �־��� ������ ����ִ� ���� ������ �ʴ´�. �ֳ��ϸ� ���⼭ �������� number�� �ٲ���� �� ���ο����� ������ �ٲٷ��� return�� �������
	//Ȥ�� ������ ������ ����ϸ� ��
	//Ȥ�� �Լ��� �μ� �ڸ� ������ (int number)�� (int& number)�� ���ָ� �� ���۷���!
}

int main()
{
	printNumber(4);
	srand(time(NULL));
	// 7~20
	// rand % 14 + 7
	// min ~ max���� �̾ƿ´�. getRandom(min, max)
	for (int i = 0; i < 1000; i++)
	{
		int myNum = getRandom(7, 20);
		printNumber(myNum);
	}

	int num = 2;
	//setNumber(num, 6)
	//{
	//	���۷���
	//	int& number = num, int toNumber = 6;
	//	number = toNumber;
	//}
	setNumber(num, 6);

	printNumber(num);

	//���� ���ھ߱� ���� 4���� (�ִ��� �Լ� ���� �Ἥ)
	

	return 0;
}