#include <iostream>
using namespace std;

void main()
{
	// ���� 3. �����
	//1��° �׸�     2��°�׸�		 3��°�׸�	  4��°�׸�
	//*				 *****			 *****				*
	//**			 ****			  ****			   **
	//***			 ***			   ***			  ***
	//****			 **					**			 ****
	//*****			 *					 *			*****

	//�߰�����
	//*	   *****
	//**   ****
	//***  ***
	//**** **
	//******
	//	  ******
	//	 ** ****
	//	***	 ***
	// ****	  **
	//*****	   *

	cout << "1��° ��� : " << endl;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i >= j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << "2��° ��� : " << endl;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i <= -j + 4)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << "3��° ��� : " << endl;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i <= j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << "4��° ��� : " << endl;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i + j >= 4)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}


	cout << "�߰�����!!" << endl;


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i >= j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}

		for (int j = 0; j < 5; j++)
		{
			if (i <= -j + 4)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i + j >= 4)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}

		for (int j = 0; j < 5; j++)
		{
			if (i <= j)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}

		cout << endl;
	}
	

}