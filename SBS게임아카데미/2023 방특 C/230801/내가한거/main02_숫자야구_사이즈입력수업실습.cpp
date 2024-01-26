#include <iostream>
#include <time.h>
using namespace std;

//����� ���� ���� ����
void generateNumber(int size, int* answer) //int answer[] ��ſ� int* answer�� ����ض�
{
	answer[0] = rand() % 9 + 1;
	for (int i = 1; i < size; i++)
	{
		answer[i] = rand() % 10;
		int j = 0;
		while (true)
		{
			//�ߺ��Ǵ� ���� ���ٸ� break
			if (i == j)
			{
				break;
			}
			//�ߺ��Ǵ� ���� �ִٸ� �� �ڸ��� ���� �����
			else if (answer[i] == answer[j])
			{
				answer[i] = rand() % 10;
				j = 0;
			}
			else
			{
				j++;
			}
		}
	}


	for (int i = 0; i < size; i++)
	{
		cout << answer[i];
	}
	cout << endl;
}

//������� input�� �迭�� �ٲٴ� ����
void makeInputToArr(int input, int* inputArr, int size)
{
	int num = 1;
	int inputLengthCheck;

	//������ ���̿� ���� num���� ����
	for (int i = 1; i < size; i++)
	{
		num *= 10;
	}

	//�� ������ 1 ~ 9 �� ���̶�� ����� input�� ���̰� ���ٴ� ��
	inputLengthCheck = input / num;

	//������� input�� �迭�� �ٲٴ� ����
	for (int i = 0; i < size; i++)
	{
		inputArr[i] = input / num;
		input %= num;
		num /= 10;
	}

	//���信 �̻��� �ִ°�� ���� ���Է�
	//����� �Է��� ���̰� �ٸ� ���
	if (inputLengthCheck >= 10 || inputLengthCheck <= 0)
	{
		cout << "�߸��� �Է��Դϴ�. " << size << "�ڸ��� ������ �Է��ϼ��� : ";
		cin >> input;
		makeInputToArr(input, inputArr, size);
	}


	for (int i = 0; i < size; i++)
	{
		cout << inputArr[i];
	}
	cout << endl;
}

//	������ ���ڿ� �Է� ���� ��
//	���ڸ� ������ ball + 1
//	���ڰ� ���� �ڸ����� ������ strike + 1
//	���ڰ� ������ �ϳ��� ������ n�ƿ�
bool isCorrect(int* inputArr, int* answer, int size)
{
	int ball = 0;
	int strike = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (inputArr[i] == answer[j])
			{
				if (i == j)
				{
					strike++;
				}
				else
				{
					ball++;
				}
			}
		}
	}

	if (strike == size)
	{
		return true;
	}
	else if (strike == 0 && ball == 0)
	{
		cout << size << "OUT !!!" << endl;
	}
	else
	{
		cout << "��� : " << strike << "S " << ball << "B" << endl;
	}

	return false;

}

int main()
{
	//���ھ߱� ������ �Է����� ����
	//���ھ߱��� ����� �Է¹޴´�(1 ~ 9)
	//����� ���� ���ڸ� �����Ѵ�.
	//�ݺ�
	//	������ �Է¹޴´�
	//	������ ���ڿ� �Է� ���� ��
	//	���ڸ� ������ ball + 1
	//	���ڰ� ���� �ڸ����� ������ strike + 1
	//	���ڰ� ������ �ϳ��� ������ n�ƿ�
	//	ȸ �� ����
	//9ȸ�� �����ų� ��� ���ڸ� ������ ���� ����
	srand(time(NULL));
	int size;
	int round = 1;
	int input;
	int* inputArr = nullptr;
	int* answer = nullptr;
	

	cout << "������ �����մϴ�" << endl;

	//������ �Է�
	cout << "���ھ߱��� ���� ������ �����ϼ��� : (1 ~ 9 �� ����) ";
	cin >> size;
	while (size > 9 || size < 1)
	{
		cout << "�߸��� �����Դϴ� �ٽ� �����ϼ��� : (1 ~ 9 �� ����)";
		cin >> size;
	}

	inputArr = new int[size] {}; //���⼭ new int[size]{}; ó�� �ڿ� {}�� �ٿ��ָ� �迭�� ��� ��Ұ� 0���� �ʱ�ȭ�ȴ�. ���� {}�� ������ ������ �迭�� �����Ⱚ���� ����.
	answer = new int[size] {}; //���������� int a; ó�� a�� �����ϰ� �ʱ�ȭ���� ������ a�� �����Ⱚ�� ����.

	//���� ����
	generateNumber(size, answer);
	cout << "������ �����Ǿ����ϴ�." << endl;

	//���� ����
	while (round < 10)
	{
		cout << size << "�ڸ��� ������ �Է��ϼ��� : (ù �ڸ��� 0�� ���� ���ڷ� ���, �� �ڸ��� ���ڴ� ���� �ٸ� 0 ~ 9�� 1���� �����̴�.) ";
		cin >> input;
		//�Է¹��� ���� �迭�� ����
		makeInputToArr(input, inputArr, size);

		//����� �Է��� ���Ͽ� ��� ���
		if (isCorrect(inputArr, answer, size))
		{
			cout << "����!" << endl;
			break;
		}
		round++;
	}

	return 0;
}

//���� 
//��� �����


//#define _CRT_SECURE_NO_WARNINIGS

//char hangManAnswer[3][250];
//strcpy(hangManAnswer[0], "hangman");
//strcpy(hangManAnswer[0], "education");
//strcpy(hangManAnswer[0], "one");

//cout << "? ? ?" << endl;
//char input;
//cin >> input;
//cout << "? n ?";
//cout << "���� ��ȸ : 7"; �̷������� 