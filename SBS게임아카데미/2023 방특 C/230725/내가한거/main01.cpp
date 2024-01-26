#include <iostream>
#include <time.h>

using namespace std;

//������ ���ھ߱� 4�� ¥�� Ǯ��

//����
int _answer[4] = { 0, }; //main�� �ۿ����� ���� ���� ���� ���⼭ �����Ҷ��� �����ϸ� _(�����)�ٿ��ֱ�
//����� �Է�
int _input[4] = { 0, };
int _strike = 0; 
int _ball = 0;

//�Լ��� ���� �� �����ڵ�� ������ ���� ���� �� ����
void generateRandomAnswer()
{
	cout << "generateRandomAnswer" << endl;

	//��� �ؾ����� �� �𸣰ڴٸ� �׳� ������ ���� �����ڰ� ���� �־��
	//answer[0] = 3;
	//answer[1] = 2;
	//_answer[2] = 1;
	//_answer[3] = 5;

	_answer[0] = rand() % 9 + 1;
	_answer[1] = rand() % 10;
	_answer[2] = rand() % 10;
	_answer[3] = rand() % 10;

	bool result = false;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == j) continue;
			if (_answer[i] == _answer[j])
			{
				result = true;
			}
		}
	}

	if (result == true)
	{
		generateRandomAnswer();
		return;
	}

	cout << "������� : " << _answer[0] << _answer[1] << _answer[2] << _answer[3] << endl;
}

void getPlayerAnswer()
{
	cout << "getPlayerAnswer" << endl;

	int input;
	cin >> input;

	//��� �ؾ����� �� �𸣰ڴٸ� ���⼭ �׳� �Է°� ���� �־��
	//_input[0] = 1;
	//_input[1] = 2;
	//_input[2] = 3;
	//_input[3] = 4;

	//õ���ڸ���
	_input[0] = input / 1000;
	//�����ڸ���
	_input[1] = (input / 100) % 10;
	//�����ڸ���
	_input[2] = (input / 10) % 10;
	//�����ڸ���
	_input[3] = input % 10;

	// input���� ��ġ�� 
	// �ٽ��Է¹ްԲ�
	bool result = false;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == j) continue;
			if (_input[i] == _input[j])
			{
				result = true;
			}
		}
	}

	if (result == true)
	{
		//�ٽ��Է¹ޱ�
		cout << "�߸��Է��߽��ϴ�. �ٽ��Է����ּ���." << endl;
		getPlayerAnswer(); //�ڽ��� �ٽ� �ҷ���, �Լ� �����

		return;
	}

}

void determineStrikeBallLogic()
{
	cout << "determineStrikeBallLogic" << endl;
	_strike = 0;
	_ball = 0;
	//_input, _answer ������ ���ؼ�
	//�迭��ġ��, ���� ��� ������ _strike�� �ϳ� ���ϰ�
	//_input�� ���� _answer�� ������ ������, �迭 ��ġ�� ���� �ٸ���,  _ball�� �ϳ� ���Ѵ�.
	// ���Ͽ� _strike�� _ball ���
	for (int i = 0; i < 4; i++) {
		if (_input[i] == _answer[i]) {
			_strike++;
		}
		else {
			for (int j = 0; j < 4; j++) {
				if (_input[i] == _answer[j]) {
					_ball++;
					break;
				}
			}
		}
	}

}

void showResult()
{
	cout << "Result: " << _strike << " Strike(s), " << _ball << " Ball(s)" << endl;
}

void gameLoop()
{
	while (true)
	{
		getPlayerAnswer();
		determineStrikeBallLogic();
		showResult();

		if (_strike == 4)
		{
			cout << "���� �¸�" << endl;
			return 0;
		}
	}
}
int main() 
{
	//main���� �ִ��� ����ϰ� !
	srand(time(NULL));
	//1. ������ ���� ����.
	generateRandomAnswer();
	gameLoop();

	return 0;

	//�ݺ�
		//2. �÷��̾�� ���� ���ڸ��� �Է¹ޱ�
		//3. input�� answer�� ���Ͽ�, strike, ball ���� ����
		//4. ���â �����ֱ�
		//5. 4strike�̸� ��������

	//��� �ϴ� ���� �����̵� ���� �� �ְڴ� ��� ������ ���.
	//�� ���Ŀ� �׷� � �ڵ尡 ���� �ڵ��ϱ�. ��� ������ ��µ�
	// ���� ���� �ڵ�� �ϸ� ���� ��Ҹ� ����Ѵ�.
	// - ������(����������)
	// - ����ȭ
	// �� �� ��� 
	
	// ������ �������� ���� �����ڸ�
	// ������
	// - ª���� ��, ª�� ���� �ȿ� ®��. (��Ȯ�� �̸����� �Լ��� �������.)
	// -
}