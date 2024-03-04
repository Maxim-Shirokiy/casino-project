#include "Hand.h"
#include <vector>
#include <iostream>
using namespace std;

void Hand::give(Card c1, Card c2) {
	hand.push_back(c1);
	hand.push_back(c2);
}

void Hand::DisplayCard() {
	for (vector<Card>::iterator it = hand.begin();
		it != hand.end(); (++it)) {
		it->NameCard();
	}
}

void Hand::DisplayDealer() {
	hand[0].NameCard();
}

void Hand::AddCard(Card c) {
	cout << "Took out: ";
	c.NameCard();

	hand.push_back(c);
}

int Hand::getTotal() {
	int total = 0;
	for (vector<Card>::iterator it = hand.begin();
		it != hand.end(); (++it)) {
		total += it->getValue();
	}
	return total;
}

int Hand::getCards() {
	return hand.size();
}
