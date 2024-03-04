#include "Deck.h"
#include <vector> 
#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

Deck::Deck() {
	CreateDeck();
	ShuffleDeck();
}

void Deck::CreateDeck() {
	for (int i = 1; i <= 13; i++) {
		char card;
		switch (i) {
		case 1: card = 'A'; break;
		case 2: card = '2'; break;
		case 3: card = '3'; break;
		case 4: card = '4'; break;
		case 5: card = '5'; break;
		case 6: card = '6'; break;
		case 7: card = '7'; break;
		case 8: card = '8'; break;
		case 9: card = '9'; break;
		case 10: card = 'T'; break;
		case 11: card = 'J'; break;
		case 12: card = 'Q'; break;
		case 13: card = 'K';
		}
		for (int j = 0; j <= 3; ++j) {
			deck.push_back(new Card(card, j));
		}
	}
}

void Deck::ShuffleDeck() {
	random_shuffle(deck.begin(), deck.end());
}

Card Deck::GiveCard() {
	for (int i = 0; i < deck.size(); ++i) {
		if (!deck[i]->getGiven()) {
			deck[i]->setGiven(1);
			return (*deck[i]);
		}
	}
}
