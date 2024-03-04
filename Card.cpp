#include "Card.h"
#include <iostream>
using namespace std;

Card::Card() {
	card = 0;
	value = 0;
	suite = 0;
	name = "";
	given = false;
}

int Card::AssignValue() {
	if (card == 'A') return 11;
	else if (card == 'T' || card == 'J' || card == 'Q' || card == 'K') return 10;
	else return (card - '0');
}

Card::Card(char n, int s) {
	card = n;
	value = AssignValue();
	suite = s;
	given = false;
}

Card::Card(const Card& ca) {
	card = ca.getCard();
	value = ca.getValue();
	suite = ca.getSuite();
	name = ca.getName();
	given = ca.getGiven();
}

void Card::NameCard() {
	switch (suite) {
	case 0: name = "hearts"; break;
	case 1: name = "diamonds"; break;
	case 2: name = "spades"; break;
	case 3: name = "clubs";
	}
	if (card == 'A') cout << "Ace";
	else if (card == 'T') cout << "10";
	else if (card == 'J') cout << "Jack";
	else if (card == 'Q') cout << "Queen";
	else if (card == 'K') cout << "King";
	else cout << value;

	cout << " of " << name << endl;
}