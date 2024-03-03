#include <iostream>
#include <iomanip>
#include "Credits.h"
#include "Deck.h"
#include "Card.h"
#include "Hand.h"
#include "Player.h"
#include "Dealer.h"
#include "Credits.h"
#include <time.h>
using namespace std;

void blackjackcontrols();
int main() {
	srand(time(NULL));
	int choice;
	int credits = 1000;
	Credits obj1(1000, 0);
	Deck deck;
	Player p1(deck);
	Dealer d1(deck);
	int x;
	bool brk = 0;
	int betamount;
	bool gameoutcome=0;
	char newchoice;

	cout << "Welcome to the online casino!, your starting credits are: " << credits << endl;

	cout << "Please select a game to play\n1)Roulette\n2)Slot Machine\n3)Dice\n4)BlackJack\n5)Exit\n";
	cin >> choice;
	if (choice == 5)
		return 0;
	do {
		cout << "How many credits would you like to bet on " << endl;
		cin >> betamount;
		obj1.setbets(betamount);
		if (betamount > credits||betamount<0) {
			cout << "Betting amount exceeds total amount or is less than 0\nEnter different value\n";
		}
		else cout << "Thank you for choosing betting amount" << endl;
	} while (betamount > credits||betamount<0);
	do {

		cout << "Entering BlackJack..." << endl;
		blackjackcontrols();
		p1.seecard();
		d1.seeCards();
		if (p1.winning())
		{
			cout << "Congratulations! You won" << endl;
			gameoutcome = true;
		}
		else if (d1.winning())
		{
			cout << "The dealer won, sucks to suck" << endl;
			gameoutcome = false;
		}
		else
		{
			while (!p1.loosing())
			{
				cout << "What is your action: " << endl;
				cin >> x;
				if (x == 1)
				{
					p1.setanother();

				}
				else if (x == 2)
				{
					p1.setcard();
					d1.game(p1);
					break;
				}
				p1.seecard();
				d1.seeCards();
			}
			obj1.winnings(betamount, gameoutcome);
			cout << "Your credits balance is " << obj1.getcredits() << endl;
			cout << "Would you like to play again?(y/n)" << endl;
			cin >> newchoice;
			if (newchoice=='n') {
				cout << "Exiting..." << endl;
				break;
			}
			else
				cout << "Restarting..."<<endl;
		}
	} while (choice != 5);
}
void blackjackcontrols() {
	cout << "**Controls for BlackJack**\nPress 1 to take a card\nPress 2 to hold\nGood Luck, you'll need it!\n";
}