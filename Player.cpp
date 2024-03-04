#include "Player.h"
#include "Credits.h"
#include <iostream>
using namespace std;

Player::Player(Deck deck) {
	getcard = 1;
	deck = deck;
	cardtype.give(deck.GiveCard(), deck.GiveCard());
}
void Player::setcard() {
	getcard = 0;
	score = cardtype.getTotal();
}
void Player::setanother() {
	if (getcard) cardtype.AddCard(deck.GiveCard());
	else cout << "You cant get more cards" << endl;
}
bool Player::loosing() {
	if (cardtype.getTotal() > 21)
	{
		cout << "You went over, broke boy" << endl;
		return true;
	}
	else if (cardtype.getTotal()==21){
		cout << "Congrats! you won!" << endl;
		return true;
	}
	return false;
}
bool Player::winning() {
	return (cardtype.getTotal() == 21 && cardtype.getCards() == 2);
}
void Player::seecard() {
	cout << "Your Cards are: ";
	cardtype.DisplayCard();
}
int Player::getscore()const { return score; }
