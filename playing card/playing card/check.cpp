#include <iostream>
#include "check.h"
int checkCardChoice(char getCard)
{
	char card = 0;
	const int cardsSize = 13;
	char cards[cardsSize]{ 'A', '2', '3', '4', '5', '6', '7', '8', '9', '1', 'J', 'Q', 'K' };

	for (int i = 0; i < cardsSize; i++)
	{
		if (getCard == cards[i])
		{
			card = getCard;
			break;
		}
	}
	if (card == 0)
	{
		std::cout << "incorrect input";
		return 0;
	}
	return card;
}

int checkSuitChoice(char getSuit)
{
	switch (getSuit)
	{
	case '1': getSuit = 3;
		break;
	case '2': getSuit = 4;
		break;
	case '3': getSuit = 5;
		break;
	case '4': getSuit = 6;
		break;
	default: std::cout << "incorrect input!";
		return 0;
	}
	return getSuit;
}
