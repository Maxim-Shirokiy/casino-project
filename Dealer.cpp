#include "Dealer.h"
#include "Player.h"
#include "Credits.h"
#include <iostream>
using namespace std;

void Dealer::seeCards() {
	cout << "The dealers card is: ";
	cardtype.DisplayDealer();
	cout << endl;
}
void Dealer::game(Player play) {
	while (cardtype.getTotal() <= 21)
	{
		cout << "Dealers Cards are: ";
		cardtype.DisplayCard();
		cout << endl;
		if (cardtype.getTotal() > play.getscore() && cardtype.getTotal() <= 21)
		{
			cout << "The dealer wins, his score was greater than yours without exceeding 21" << endl;
			return;			
		}
		if (cardtype.getTotal() == play.getscore())
		{
			cout << "Dealer and Player  have tied! Player gets shot in the face" << endl;
			return;
		}
		setanother();	
	}
	if (cardtype.getTotal() > 21)
	{
		cout << "The dealer has gone over 21" << endl;
		return;
	}
}
