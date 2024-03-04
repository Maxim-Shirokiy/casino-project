#pragma once
#include <string>
#include <iostream>
#include "Card.h"
#include "Deck.h"
#include "Hand.h"
#include "Credits.h"
using namespace std;

class Player : public Hand, Deck
{
protected:
	Deck deck;
	Hand cardtype;
	bool getcard;
	int score;
public:
	Player(Deck deck);
	void setcard();
	virtual void setanother();
	void seecard();
	int getscore() const;
	bool loosing();
	bool winning();
};
