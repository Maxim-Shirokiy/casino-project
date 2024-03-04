#pragma once
#include <string>
#include <iostream>
using namespace std;
class Card
{
	private:
		char card;
		int value;
		int suite;
		string name;
		bool given;

		int AssignValue();

	public:
		Card();
		Card(char, int);
		Card(const Card&);

		char getCard() const { return card; }
		int getValue() const { return value; }
		int getSuite() const { return suite; }
		string getName() const { return name; }
		bool getGiven() const { return given; }

		void setCard(char c) { card = c; }
		void setValue(int v) { value = v; }
		void setSuite(int s) { suite = s; }
		void setName(string n) { name = n; }
		void setGiven(bool x) { given = x; }

		void NameCard();

};

