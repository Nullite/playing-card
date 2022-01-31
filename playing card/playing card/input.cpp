#include <iostream>
#include "input.h"

char chooseCard(char getCard)
{
	std::cout << "Enter a card: from 2 to A:\n"
		<< "2, 3, 4, 5, 6, 7, 8, 9, 10\n"
		<< "J - Jack\n"
		<< "Q - Queen\n"
		<< "K - King\n"
		<< "A - Ace\n";
	std::cin >> getCard;
	std::cin.clear();
	std::cin.ignore(1);
	return getCard;
}

char chooseSuit(char getSuit)
{
	std::cout << "Enter a suit:\n"
		<< "1 - Hearts\n"
		<< "2 - Diamonds\n"
		<< "3 - Clubs\n"
		<< "4 - Spades\n";
	std::cin >> getSuit;
	return getSuit;
}
