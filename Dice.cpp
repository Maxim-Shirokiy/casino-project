#include "Dice.h"
#include <iostream>
using namespace std;

Dice::Dice(int Dice1, int Dice2, int TotalScore) {

}


int Dice::getRoll1() {

	return Dice1;
}


int Dice::getRoll2() {

	return Dice2;
}


int Dice::getTotalScore() {

	return TotalRoll;
}


int Dice::getWinLose() {

	return Bet;
}


double Dice::getInitialBet() {

	return InitialBet;
}


void Dice::setRoll1(int Dice1) {

	int Dice1(rand() % 6 + 1);
}


void Dice::setRoll2(int Dice2) {

	int Dice2(rand() % 6 + 1);
}


void Dice::setTotalScore(int Dice1, int Dice2, int TotalRoll) {

	TotalRoll = Dice1 + Dice2;
}


void Dice::setWinLose(int TotalRoll, double Bet, double Balance, double InitialBet) {

	if (TotalRoll == 7 || TotalRoll == 11) {

		Bet = InitialBet * 2;
		Balance += Bet;
		cout << "Winner!" << endl;
		cout << "You Won: $" << Bet << endl;
		cout << "Current Balance: $" << Balance << endl;

	}

	else if (TotalRoll % 2 != 0) {

		Balance += InitialBet;
		cout << "Odds Were Rolled Initial Bet Was Won Back" << endl;
		cout << "Current Balance: $" << Balance << endl;

	}

	else {

		Balance -= Bet;

		cout << "Loser!" << endl;
		cout << "You Lost: $" << Bet << endl;
		cout << "Current Balance: $" << Balance << endl;

	}

}


void Dice::setInitialBet(double InitialBet) {

	cout << "Place Your Initial Bet" << endl;
	cin >> InitialBet;

}
