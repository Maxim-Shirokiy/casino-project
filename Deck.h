#pragma once
#include "Card.h"
#include <vector>
#include <iostream>
using namespace std;

class Deck :public Card
{
private:
	vector<Card*> deck;
public:
	Deck();
	void CreateDeck();
	void ShuffleDeck();
	Card GiveCard();
};


