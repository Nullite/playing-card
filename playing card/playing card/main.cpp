#include "handler.h"
#include "input.h"
#include "check.h"

char getSuit;
char getCard;

char card;
char suit;

int main()
{
	getCard = chooseCard(getCard);
	card = checkCardChoice(getCard);
	if (!card) return -1;
	getSuit = chooseSuit(getSuit);
	getSuit = checkSuitChoice(getSuit);
	if (!getSuit) return -1;
	suit = getSuit;
	printCard(card, suit);
}
 

