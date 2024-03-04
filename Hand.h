#pragma once
#include "Card.h"
#include "Hand.h"
#include "Deck.h"
#include "Credits.h"
#include <vector>
#include <iostream>
using namespace std;

class Hand
{
private:
	vector<Card> hand;
public:
	void give(Card, Card);
	void DisplayCard();
	void DisplayDealer();
	void AddCard(Card);

	int getCards();
	int getTotal();
};


