#pragma once
#include "main.h"

enum eCardShape {
	CARDSHAPE_SPACE,
	CARDSHAPE_DIAMONDE,
	CARDSHAPE_HART,
	CARDSHAPE_CLOVER,
	CARDSHAPE_END
};
void PrintCard(int cardNum)
{
	switch (cardNum / 13)
	{
	case eCardShape::CARDSHAPE_SPACE:
		cout << "¢»";
		break;
	case eCardShape::CARDSHAPE_DIAMONDE:
		cout << "¡ß";
		break;
	case eCardShape::CARDSHAPE_HART:
		cout << "¢¾";
		break;
	case eCardShape::CARDSHAPE_CLOVER:
		cout << "¢¿";
		break;
	}

	switch (cardNum % 13 + 1)
	{
	case 1: 
		cout << "A";
		break;
	case 11:
		cout << "J";
		break;
	case 12:
		cout << "Q";
		break;
	case 13:
		cout << "K";
		break;
	default:
		cout << cardNum % 13 + 1;
		break;
	}
}