// Jacob Raney
// 400401795
#pragma once
#include <iostream>
#include <iomanip>
class Dice
{
private:

	int Dice1, Dice2, TotalRoll;

	double InitialBet, Bet, Balance;

public:

	Dice(int, int, int);

	int getRoll1();
	int getRoll2();
	int getTotalScore();
	int getWinLose();
	double getInitialBet();

	void setRoll1(int);
	void setRoll2(int);
	void setTotalScore(int, int, int);
	void setWinLose(int, double, double, double);
	void setInitialBet(double);
};

