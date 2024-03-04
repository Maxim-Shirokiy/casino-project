#pragma once
#include <iostream>
#ifndef CREDITS_H
#define CREDITS_H
class Credits
{
protected:
	int credits;
	int betnumber;
	bool gameoutcome;
public:
	Credits();
	Credits(int acredits, int abetnumber);
	virtual void winnings(int abetnumber, bool gameoutcome);
	bool status();

	void setcredits(int cred) { credits = cred; }
	void setbets(int number) { betnumber = number; }
	void setgameoutcome(bool outcome) { gameoutcome = outcome; }

	int getcredits()const { return credits; }
	int getbets()const { return credits; }
	bool getgameoutcome()const { return gameoutcome; }
	
};
#endif

