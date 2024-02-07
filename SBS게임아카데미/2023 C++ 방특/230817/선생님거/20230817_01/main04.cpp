#include <iostream>
using namespace std;

void main()
{
	// 숙제 3. 별찍기
	//1번째 그림     2번째그림		 3번째그림	  4번째그림
	//*				 *****			 *****				*
	//**			 ****			  ****			   **
	//***			 ***			   ***			  ***
	//****			 **					**			 ****
	//*****			 *					 *			*****

	//추가숙제
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

	cout << "1번째 모양 : " << endl;

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

	cout << "2번째 모양 : " << endl;

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

	cout << "3번째 모양 : " << endl;

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

	cout << "4번째 모양 : " << endl;

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


	cout << "추가숙제!!" << endl;


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